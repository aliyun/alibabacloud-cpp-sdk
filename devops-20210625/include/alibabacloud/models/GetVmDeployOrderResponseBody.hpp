// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVMDeployOrderResponseBodyDeployOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetVMDeployOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVMDeployOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deployOrder, deployOrder_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVMDeployOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deployOrder, deployOrder_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetVMDeployOrderResponseBody() = default ;
    GetVMDeployOrderResponseBody(const GetVMDeployOrderResponseBody &) = default ;
    GetVMDeployOrderResponseBody(GetVMDeployOrderResponseBody &&) = default ;
    GetVMDeployOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVMDeployOrderResponseBody() = default ;
    GetVMDeployOrderResponseBody& operator=(const GetVMDeployOrderResponseBody &) = default ;
    GetVMDeployOrderResponseBody& operator=(GetVMDeployOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployOrder_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // deployOrder Field Functions 
    bool hasDeployOrder() const { return this->deployOrder_ != nullptr;};
    void deleteDeployOrder() { this->deployOrder_ = nullptr;};
    inline const GetVMDeployOrderResponseBodyDeployOrder & deployOrder() const { DARABONBA_PTR_GET_CONST(deployOrder_, GetVMDeployOrderResponseBodyDeployOrder) };
    inline GetVMDeployOrderResponseBodyDeployOrder deployOrder() { DARABONBA_PTR_GET(deployOrder_, GetVMDeployOrderResponseBodyDeployOrder) };
    inline GetVMDeployOrderResponseBody& setDeployOrder(const GetVMDeployOrderResponseBodyDeployOrder & deployOrder) { DARABONBA_PTR_SET_VALUE(deployOrder_, deployOrder) };
    inline GetVMDeployOrderResponseBody& setDeployOrder(GetVMDeployOrderResponseBodyDeployOrder && deployOrder) { DARABONBA_PTR_SET_RVALUE(deployOrder_, deployOrder) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetVMDeployOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetVMDeployOrderResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVMDeployOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetVMDeployOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<GetVMDeployOrderResponseBodyDeployOrder> deployOrder_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
