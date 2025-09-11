// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETACCOUNTPASSWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETACCOUNTPASSWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ResetAccountPasswordResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ResetAccountPasswordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAccountPasswordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAccountPasswordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResetAccountPasswordResponseBody() = default ;
    ResetAccountPasswordResponseBody(const ResetAccountPasswordResponseBody &) = default ;
    ResetAccountPasswordResponseBody(ResetAccountPasswordResponseBody &&) = default ;
    ResetAccountPasswordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAccountPasswordResponseBody() = default ;
    ResetAccountPasswordResponseBody& operator=(const ResetAccountPasswordResponseBody &) = default ;
    ResetAccountPasswordResponseBody& operator=(ResetAccountPasswordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResetAccountPasswordResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ResetAccountPasswordResponseBodyData) };
    inline ResetAccountPasswordResponseBodyData data() { DARABONBA_PTR_GET(data_, ResetAccountPasswordResponseBodyData) };
    inline ResetAccountPasswordResponseBody& setData(const ResetAccountPasswordResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResetAccountPasswordResponseBody& setData(ResetAccountPasswordResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetAccountPasswordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result returned.
    std::shared_ptr<ResetAccountPasswordResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
