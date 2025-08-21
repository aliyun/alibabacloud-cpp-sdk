// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNMOUNTINSTANCESDGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNMOUNTINSTANCESDGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnmountInstanceSDGResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnmountInstanceSDGResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnmountInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnmountInstanceSDGResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnmountInstanceSDGResponseBody() = default ;
    UnmountInstanceSDGResponseBody(const UnmountInstanceSDGResponseBody &) = default ;
    UnmountInstanceSDGResponseBody(UnmountInstanceSDGResponseBody &&) = default ;
    UnmountInstanceSDGResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnmountInstanceSDGResponseBody() = default ;
    UnmountInstanceSDGResponseBody& operator=(const UnmountInstanceSDGResponseBody &) = default ;
    UnmountInstanceSDGResponseBody& operator=(UnmountInstanceSDGResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UnmountInstanceSDGResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UnmountInstanceSDGResponseBodyData) };
    inline UnmountInstanceSDGResponseBodyData data() { DARABONBA_PTR_GET(data_, UnmountInstanceSDGResponseBodyData) };
    inline UnmountInstanceSDGResponseBody& setData(const UnmountInstanceSDGResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UnmountInstanceSDGResponseBody& setData(UnmountInstanceSDGResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnmountInstanceSDGResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data object.
    std::shared_ptr<UnmountInstanceSDGResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
