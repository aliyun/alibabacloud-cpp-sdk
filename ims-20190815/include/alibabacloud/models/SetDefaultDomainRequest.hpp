// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class SetDefaultDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultDomainName, defaultDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultDomainName, defaultDomainName_);
    };
    SetDefaultDomainRequest() = default ;
    SetDefaultDomainRequest(const SetDefaultDomainRequest &) = default ;
    SetDefaultDomainRequest(SetDefaultDomainRequest &&) = default ;
    SetDefaultDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultDomainRequest() = default ;
    SetDefaultDomainRequest& operator=(const SetDefaultDomainRequest &) = default ;
    SetDefaultDomainRequest& operator=(SetDefaultDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultDomainName_ == nullptr; };
    // defaultDomainName Field Functions 
    bool hasDefaultDomainName() const { return this->defaultDomainName_ != nullptr;};
    void deleteDefaultDomainName() { this->defaultDomainName_ = nullptr;};
    inline string getDefaultDomainName() const { DARABONBA_PTR_GET_DEFAULT(defaultDomainName_, "") };
    inline SetDefaultDomainRequest& setDefaultDomainName(string defaultDomainName) { DARABONBA_PTR_SET_VALUE(defaultDomainName_, defaultDomainName) };


  protected:
    // The default domain name.
    // 
    // The default domain name is in the format of `<AccountAlias>.onaliyun.com`. `<AccountAlias>` indicates the account alias. By default, the value of AccountAlias is the ID of the Alibaba Cloud account. The default domain name must end with `.onaliyun.com`.
    // 
    // The default domain name can contain up to 64 characters in length. The default domain name can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // >  The default domain name cannot start or end with a hyphen (-) and cannot contain two consecutive hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> defaultDomainName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
