// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOMAINSPECIALBIZCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOMAINSPECIALBIZCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SubmitDomainSpecialBizCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDomainSpecialBizCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDomainSpecialBizCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SubmitDomainSpecialBizCredentialsRequest() = default ;
    SubmitDomainSpecialBizCredentialsRequest(const SubmitDomainSpecialBizCredentialsRequest &) = default ;
    SubmitDomainSpecialBizCredentialsRequest(SubmitDomainSpecialBizCredentialsRequest &&) = default ;
    SubmitDomainSpecialBizCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDomainSpecialBizCredentialsRequest() = default ;
    SubmitDomainSpecialBizCredentialsRequest& operator=(const SubmitDomainSpecialBizCredentialsRequest &) = default ;
    SubmitDomainSpecialBizCredentialsRequest& operator=(SubmitDomainSpecialBizCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->credentials_ == nullptr && return this->extend_ == nullptr && return this->userClientIp_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline int64_t bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
    inline SubmitDomainSpecialBizCredentialsRequest& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline string credentials() const { DARABONBA_PTR_GET_DEFAULT(credentials_, "") };
    inline SubmitDomainSpecialBizCredentialsRequest& setCredentials(string credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline SubmitDomainSpecialBizCredentialsRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SubmitDomainSpecialBizCredentialsRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The business ID.
    std::shared_ptr<int64_t> bizId_ = nullptr;
    // The certificate information.
    std::shared_ptr<string> credentials_ = nullptr;
    // The extended information.
    std::shared_ptr<string> extend_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
