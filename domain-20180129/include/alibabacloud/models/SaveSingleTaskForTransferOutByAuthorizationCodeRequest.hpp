// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESINGLETASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESINGLETASKFORTRANSFEROUTBYAUTHORIZATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveSingleTaskForTransferOutByAuthorizationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSingleTaskForTransferOutByAuthorizationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSingleTaskForTransferOutByAuthorizationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    SaveSingleTaskForTransferOutByAuthorizationCodeRequest() = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeRequest(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest &) = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeRequest(SaveSingleTaskForTransferOutByAuthorizationCodeRequest &&) = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSingleTaskForTransferOutByAuthorizationCodeRequest() = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeRequest& operator=(const SaveSingleTaskForTransferOutByAuthorizationCodeRequest &) = default ;
    SaveSingleTaskForTransferOutByAuthorizationCodeRequest& operator=(SaveSingleTaskForTransferOutByAuthorizationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && return this->domainName_ == nullptr; };
    // authorizationCode Field Functions 
    bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
    void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
    inline string authorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
    inline SaveSingleTaskForTransferOutByAuthorizationCodeRequest& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveSingleTaskForTransferOutByAuthorizationCodeRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // Schema of Response
    // 
    // This parameter is required.
    std::shared_ptr<string> authorizationCode_ = nullptr;
    // The transfer key.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
