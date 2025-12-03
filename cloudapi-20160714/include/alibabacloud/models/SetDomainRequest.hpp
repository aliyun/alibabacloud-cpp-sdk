// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindStageName, bindStageName_);
      DARABONBA_PTR_TO_JSON(CustomDomainType, customDomainType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsForce, isForce_);
      DARABONBA_PTR_TO_JSON(IsHttpRedirectToHttps, isHttpRedirectToHttps_);
    };
    friend void from_json(const Darabonba::Json& j, SetDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindStageName, bindStageName_);
      DARABONBA_PTR_FROM_JSON(CustomDomainType, customDomainType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsForce, isForce_);
      DARABONBA_PTR_FROM_JSON(IsHttpRedirectToHttps, isHttpRedirectToHttps_);
    };
    SetDomainRequest() = default ;
    SetDomainRequest(const SetDomainRequest &) = default ;
    SetDomainRequest(SetDomainRequest &&) = default ;
    SetDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDomainRequest() = default ;
    SetDomainRequest& operator=(const SetDomainRequest &) = default ;
    SetDomainRequest& operator=(SetDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindStageName_ == nullptr
        && return this->customDomainType_ == nullptr && return this->domainName_ == nullptr && return this->groupId_ == nullptr && return this->isForce_ == nullptr && return this->isHttpRedirectToHttps_ == nullptr; };
    // bindStageName Field Functions 
    bool hasBindStageName() const { return this->bindStageName_ != nullptr;};
    void deleteBindStageName() { this->bindStageName_ = nullptr;};
    inline string bindStageName() const { DARABONBA_PTR_GET_DEFAULT(bindStageName_, "") };
    inline SetDomainRequest& setBindStageName(string bindStageName) { DARABONBA_PTR_SET_VALUE(bindStageName_, bindStageName) };


    // customDomainType Field Functions 
    bool hasCustomDomainType() const { return this->customDomainType_ != nullptr;};
    void deleteCustomDomainType() { this->customDomainType_ = nullptr;};
    inline string customDomainType() const { DARABONBA_PTR_GET_DEFAULT(customDomainType_, "") };
    inline SetDomainRequest& setCustomDomainType(string customDomainType) { DARABONBA_PTR_SET_VALUE(customDomainType_, customDomainType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SetDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetDomainRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isForce Field Functions 
    bool hasIsForce() const { return this->isForce_ != nullptr;};
    void deleteIsForce() { this->isForce_ = nullptr;};
    inline bool isForce() const { DARABONBA_PTR_GET_DEFAULT(isForce_, false) };
    inline SetDomainRequest& setIsForce(bool isForce) { DARABONBA_PTR_SET_VALUE(isForce_, isForce) };


    // isHttpRedirectToHttps Field Functions 
    bool hasIsHttpRedirectToHttps() const { return this->isHttpRedirectToHttps_ != nullptr;};
    void deleteIsHttpRedirectToHttps() { this->isHttpRedirectToHttps_ = nullptr;};
    inline bool isHttpRedirectToHttps() const { DARABONBA_PTR_GET_DEFAULT(isHttpRedirectToHttps_, false) };
    inline SetDomainRequest& setIsHttpRedirectToHttps(bool isHttpRedirectToHttps) { DARABONBA_PTR_SET_VALUE(isHttpRedirectToHttps_, isHttpRedirectToHttps) };


  protected:
    // The environment which you can access by using the domain name. If you do not specify this parameter, the domain name can be used to access all environments.
    // 
    // If you specify an environment, the domain name can be used to access only the specified environment. Valid values:
    // 
    // *   TEST
    // *   PRE
    // *   RELEASE
    // 
    // If you want to use the domain name to access all environments, set this parameter to an empty string ("").
    std::shared_ptr<string> bindStageName_ = nullptr;
    // The network type of the domain name to be bound. Default value: INTERNET. Valid values:
    // 
    // *   INTERNET
    // *   INTRANET. If you set this parameter to this value, the domain name cannot be used on the Internet.
    std::shared_ptr<string> customDomainType_ = nullptr;
    // The custom domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // Specifies whether this binding relationship takes precedence over the binding relationships between the domain name and other API groups. If you set this parameter to true, this binding relationship takes precedence, and the domain name is automatically unbound from other API groups. This operation brings risks. Proceed with caution.
    std::shared_ptr<bool> isForce_ = nullptr;
    // Specifies whether to redirect HTTP requests to HTTPS requests.
    std::shared_ptr<bool> isHttpRedirectToHttps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
