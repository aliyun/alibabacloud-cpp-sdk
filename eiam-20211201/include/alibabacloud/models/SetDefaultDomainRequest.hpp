// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetDefaultDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
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
    virtual bool empty() const override { this->domainId_ != nullptr
        && this->instanceId_ != nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline SetDefaultDomainRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetDefaultDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
