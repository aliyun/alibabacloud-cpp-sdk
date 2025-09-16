// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceResponseBodyOrderInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class CreateInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderInfo, orderInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody(CreateInstanceResponseBody &&) = default ;
    CreateInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceResponseBody() = default ;
    CreateInstanceResponseBody& operator=(const CreateInstanceResponseBody &) = default ;
    CreateInstanceResponseBody& operator=(CreateInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderInfo_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // orderInfo Field Functions 
    bool hasOrderInfo() const { return this->orderInfo_ != nullptr;};
    void deleteOrderInfo() { this->orderInfo_ = nullptr;};
    inline const CreateInstanceResponseBodyOrderInfo & orderInfo() const { DARABONBA_PTR_GET_CONST(orderInfo_, CreateInstanceResponseBodyOrderInfo) };
    inline CreateInstanceResponseBodyOrderInfo orderInfo() { DARABONBA_PTR_GET(orderInfo_, CreateInstanceResponseBodyOrderInfo) };
    inline CreateInstanceResponseBody& setOrderInfo(const CreateInstanceResponseBodyOrderInfo & orderInfo) { DARABONBA_PTR_SET_VALUE(orderInfo_, orderInfo) };
    inline CreateInstanceResponseBody& setOrderInfo(CreateInstanceResponseBodyOrderInfo && orderInfo) { DARABONBA_PTR_SET_RVALUE(orderInfo_, orderInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<CreateInstanceResponseBodyOrderInfo> orderInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
