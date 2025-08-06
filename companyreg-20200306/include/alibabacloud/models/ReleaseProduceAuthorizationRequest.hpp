// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEPRODUCEAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEPRODUCEAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class ReleaseProduceAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseProduceAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseProduceAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
    };
    ReleaseProduceAuthorizationRequest() = default ;
    ReleaseProduceAuthorizationRequest(const ReleaseProduceAuthorizationRequest &) = default ;
    ReleaseProduceAuthorizationRequest(ReleaseProduceAuthorizationRequest &&) = default ;
    ReleaseProduceAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseProduceAuthorizationRequest() = default ;
    ReleaseProduceAuthorizationRequest& operator=(const ReleaseProduceAuthorizationRequest &) = default ;
    ReleaseProduceAuthorizationRequest& operator=(ReleaseProduceAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizedUserId_ != nullptr
        && this->bizId_ != nullptr && this->bizType_ != nullptr; };
    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline string authorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
    inline ReleaseProduceAuthorizationRequest& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ReleaseProduceAuthorizationRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ReleaseProduceAuthorizationRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


  protected:
    std::shared_ptr<string> authorizedUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
