// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEINITDOMAINAUTOREDIRECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEINITDOMAINAUTOREDIRECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableInitDomainAutoRedirectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableInitDomainAutoRedirectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableInitDomainAutoRedirectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableInitDomainAutoRedirectRequest() = default ;
    DisableInitDomainAutoRedirectRequest(const DisableInitDomainAutoRedirectRequest &) = default ;
    DisableInitDomainAutoRedirectRequest(DisableInitDomainAutoRedirectRequest &&) = default ;
    DisableInitDomainAutoRedirectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableInitDomainAutoRedirectRequest() = default ;
    DisableInitDomainAutoRedirectRequest& operator=(const DisableInitDomainAutoRedirectRequest &) = default ;
    DisableInitDomainAutoRedirectRequest& operator=(DisableInitDomainAutoRedirectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableInitDomainAutoRedirectRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
