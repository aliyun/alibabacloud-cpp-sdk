// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTERPRISEACCELERATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTERPRISEACCELERATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateEnterpriseAcceleratePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnterpriseAcceleratePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ShowInClient, showInClient_);
      DARABONBA_PTR_TO_JSON(UpstreamHost, upstreamHost_);
      DARABONBA_PTR_TO_JSON(UpstreamPort, upstreamPort_);
      DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
      DARABONBA_PTR_TO_JSON(UserAttributeGroup, userAttributeGroup_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnterpriseAcceleratePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ShowInClient, showInClient_);
      DARABONBA_PTR_FROM_JSON(UpstreamHost, upstreamHost_);
      DARABONBA_PTR_FROM_JSON(UpstreamPort, upstreamPort_);
      DARABONBA_PTR_FROM_JSON(UpstreamType, upstreamType_);
      DARABONBA_PTR_FROM_JSON(UserAttributeGroup, userAttributeGroup_);
    };
    CreateEnterpriseAcceleratePolicyRequest() = default ;
    CreateEnterpriseAcceleratePolicyRequest(const CreateEnterpriseAcceleratePolicyRequest &) = default ;
    CreateEnterpriseAcceleratePolicyRequest(CreateEnterpriseAcceleratePolicyRequest &&) = default ;
    CreateEnterpriseAcceleratePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnterpriseAcceleratePolicyRequest() = default ;
    CreateEnterpriseAcceleratePolicyRequest& operator=(const CreateEnterpriseAcceleratePolicyRequest &) = default ;
    CreateEnterpriseAcceleratePolicyRequest& operator=(CreateEnterpriseAcceleratePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerationType_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->priority_ == nullptr && return this->showInClient_ == nullptr && return this->upstreamHost_ == nullptr
        && return this->upstreamPort_ == nullptr && return this->upstreamType_ == nullptr && return this->userAttributeGroup_ == nullptr; };
    // accelerationType Field Functions 
    bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
    void deleteAccelerationType() { this->accelerationType_ = nullptr;};
    inline string accelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // showInClient Field Functions 
    bool hasShowInClient() const { return this->showInClient_ != nullptr;};
    void deleteShowInClient() { this->showInClient_ = nullptr;};
    inline int32_t showInClient() const { DARABONBA_PTR_GET_DEFAULT(showInClient_, 0) };
    inline CreateEnterpriseAcceleratePolicyRequest& setShowInClient(int32_t showInClient) { DARABONBA_PTR_SET_VALUE(showInClient_, showInClient) };


    // upstreamHost Field Functions 
    bool hasUpstreamHost() const { return this->upstreamHost_ != nullptr;};
    void deleteUpstreamHost() { this->upstreamHost_ = nullptr;};
    inline string upstreamHost() const { DARABONBA_PTR_GET_DEFAULT(upstreamHost_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setUpstreamHost(string upstreamHost) { DARABONBA_PTR_SET_VALUE(upstreamHost_, upstreamHost) };


    // upstreamPort Field Functions 
    bool hasUpstreamPort() const { return this->upstreamPort_ != nullptr;};
    void deleteUpstreamPort() { this->upstreamPort_ = nullptr;};
    inline int32_t upstreamPort() const { DARABONBA_PTR_GET_DEFAULT(upstreamPort_, 0) };
    inline CreateEnterpriseAcceleratePolicyRequest& setUpstreamPort(int32_t upstreamPort) { DARABONBA_PTR_SET_VALUE(upstreamPort_, upstreamPort) };


    // upstreamType Field Functions 
    bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
    void deleteUpstreamType() { this->upstreamType_ = nullptr;};
    inline string upstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


    // userAttributeGroup Field Functions 
    bool hasUserAttributeGroup() const { return this->userAttributeGroup_ != nullptr;};
    void deleteUserAttributeGroup() { this->userAttributeGroup_ = nullptr;};
    inline string userAttributeGroup() const { DARABONBA_PTR_GET_DEFAULT(userAttributeGroup_, "") };
    inline CreateEnterpriseAcceleratePolicyRequest& setUserAttributeGroup(string userAttributeGroup) { DARABONBA_PTR_SET_VALUE(userAttributeGroup_, userAttributeGroup) };


  protected:
    std::shared_ptr<string> accelerationType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<int32_t> showInClient_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> upstreamHost_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> upstreamPort_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> upstreamType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userAttributeGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
