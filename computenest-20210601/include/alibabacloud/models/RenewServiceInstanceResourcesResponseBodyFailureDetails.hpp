// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODYFAILUREDETAILS_HPP_
#define ALIBABACLOUD_MODELS_RENEWSERVICEINSTANCERESOURCESRESPONSEBODYFAILUREDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class RenewServiceInstanceResourcesResponseBodyFailureDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewServiceInstanceResourcesResponseBodyFailureDetails& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
    };
    friend void from_json(const Darabonba::Json& j, RenewServiceInstanceResourcesResponseBodyFailureDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
    };
    RenewServiceInstanceResourcesResponseBodyFailureDetails() = default ;
    RenewServiceInstanceResourcesResponseBodyFailureDetails(const RenewServiceInstanceResourcesResponseBodyFailureDetails &) = default ;
    RenewServiceInstanceResourcesResponseBodyFailureDetails(RenewServiceInstanceResourcesResponseBodyFailureDetails &&) = default ;
    RenewServiceInstanceResourcesResponseBodyFailureDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewServiceInstanceResourcesResponseBodyFailureDetails() = default ;
    RenewServiceInstanceResourcesResponseBodyFailureDetails& operator=(const RenewServiceInstanceResourcesResponseBodyFailureDetails &) = default ;
    RenewServiceInstanceResourcesResponseBodyFailureDetails& operator=(RenewServiceInstanceResourcesResponseBodyFailureDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->resourceArn_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline RenewServiceInstanceResourcesResponseBodyFailureDetails& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline RenewServiceInstanceResourcesResponseBodyFailureDetails& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline RenewServiceInstanceResourcesResponseBodyFailureDetails& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


  protected:
    // Error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Resource ARN (Aliyun Resource Name).
    std::shared_ptr<string> resourceArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
