// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTDBINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartDBInstanceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class StartDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartDBInstanceResponseBody() = default ;
    StartDBInstanceResponseBody(const StartDBInstanceResponseBody &) = default ;
    StartDBInstanceResponseBody(StartDBInstanceResponseBody &&) = default ;
    StartDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartDBInstanceResponseBody() = default ;
    StartDBInstanceResponseBody& operator=(const StartDBInstanceResponseBody &) = default ;
    StartDBInstanceResponseBody& operator=(StartDBInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartDBInstanceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, StartDBInstanceResponseBodyData) };
    inline StartDBInstanceResponseBodyData data() { DARABONBA_PTR_GET(data_, StartDBInstanceResponseBodyData) };
    inline StartDBInstanceResponseBody& setData(const StartDBInstanceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartDBInstanceResponseBody& setData(StartDBInstanceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<StartDBInstanceResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
