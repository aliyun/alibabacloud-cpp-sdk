// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAcceleratePoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAcceleratePoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EapId, eapId_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OnTls, onTls_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ShowInClient, showInClient_);
      DARABONBA_PTR_TO_JSON(UpstreamHost, upstreamHost_);
      DARABONBA_PTR_TO_JSON(UpstreamPort, upstreamPort_);
      DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
      DARABONBA_PTR_TO_JSON(UserAttributeGroup, userAttributeGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAcceleratePoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(AccelerationType, accelerationType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EapId, eapId_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OnTls, onTls_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ShowInClient, showInClient_);
      DARABONBA_PTR_FROM_JSON(UpstreamHost, upstreamHost_);
      DARABONBA_PTR_FROM_JSON(UpstreamPort, upstreamPort_);
      DARABONBA_PTR_FROM_JSON(UpstreamType, upstreamType_);
      DARABONBA_PTR_FROM_JSON(UserAttributeGroup, userAttributeGroup_);
    };
    ListEnterpriseAcceleratePoliciesResponseBodyPolicies() = default ;
    ListEnterpriseAcceleratePoliciesResponseBodyPolicies(const ListEnterpriseAcceleratePoliciesResponseBodyPolicies &) = default ;
    ListEnterpriseAcceleratePoliciesResponseBodyPolicies(ListEnterpriseAcceleratePoliciesResponseBodyPolicies &&) = default ;
    ListEnterpriseAcceleratePoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAcceleratePoliciesResponseBodyPolicies() = default ;
    ListEnterpriseAcceleratePoliciesResponseBodyPolicies& operator=(const ListEnterpriseAcceleratePoliciesResponseBodyPolicies &) = default ;
    ListEnterpriseAcceleratePoliciesResponseBodyPolicies& operator=(ListEnterpriseAcceleratePoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accelerationType_ != nullptr
        && this->description_ != nullptr && this->eapId_ != nullptr && this->enabled_ != nullptr && this->name_ != nullptr && this->onTls_ != nullptr
        && this->priority_ != nullptr && this->showInClient_ != nullptr && this->upstreamHost_ != nullptr && this->upstreamPort_ != nullptr && this->upstreamType_ != nullptr
        && this->userAttributeGroup_ != nullptr; };
    // accelerationType Field Functions 
    bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
    void deleteAccelerationType() { this->accelerationType_ = nullptr;};
    inline string accelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eapId Field Functions 
    bool hasEapId() const { return this->eapId_ != nullptr;};
    void deleteEapId() { this->eapId_ = nullptr;};
    inline string eapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int32_t enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // onTls Field Functions 
    bool hasOnTls() const { return this->onTls_ != nullptr;};
    void deleteOnTls() { this->onTls_ = nullptr;};
    inline int32_t onTls() const { DARABONBA_PTR_GET_DEFAULT(onTls_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setOnTls(int32_t onTls) { DARABONBA_PTR_SET_VALUE(onTls_, onTls) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // showInClient Field Functions 
    bool hasShowInClient() const { return this->showInClient_ != nullptr;};
    void deleteShowInClient() { this->showInClient_ = nullptr;};
    inline int32_t showInClient() const { DARABONBA_PTR_GET_DEFAULT(showInClient_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setShowInClient(int32_t showInClient) { DARABONBA_PTR_SET_VALUE(showInClient_, showInClient) };


    // upstreamHost Field Functions 
    bool hasUpstreamHost() const { return this->upstreamHost_ != nullptr;};
    void deleteUpstreamHost() { this->upstreamHost_ = nullptr;};
    inline string upstreamHost() const { DARABONBA_PTR_GET_DEFAULT(upstreamHost_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setUpstreamHost(string upstreamHost) { DARABONBA_PTR_SET_VALUE(upstreamHost_, upstreamHost) };


    // upstreamPort Field Functions 
    bool hasUpstreamPort() const { return this->upstreamPort_ != nullptr;};
    void deleteUpstreamPort() { this->upstreamPort_ = nullptr;};
    inline int32_t upstreamPort() const { DARABONBA_PTR_GET_DEFAULT(upstreamPort_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setUpstreamPort(int32_t upstreamPort) { DARABONBA_PTR_SET_VALUE(upstreamPort_, upstreamPort) };


    // upstreamType Field Functions 
    bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
    void deleteUpstreamType() { this->upstreamType_ = nullptr;};
    inline string upstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


    // userAttributeGroup Field Functions 
    bool hasUserAttributeGroup() const { return this->userAttributeGroup_ != nullptr;};
    void deleteUserAttributeGroup() { this->userAttributeGroup_ = nullptr;};
    inline string userAttributeGroup() const { DARABONBA_PTR_GET_DEFAULT(userAttributeGroup_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBodyPolicies& setUserAttributeGroup(string userAttributeGroup) { DARABONBA_PTR_SET_VALUE(userAttributeGroup_, userAttributeGroup) };


  protected:
    std::shared_ptr<string> accelerationType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> eapId_ = nullptr;
    std::shared_ptr<int32_t> enabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> onTls_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int32_t> showInClient_ = nullptr;
    std::shared_ptr<string> upstreamHost_ = nullptr;
    std::shared_ptr<int32_t> upstreamPort_ = nullptr;
    std::shared_ptr<string> upstreamType_ = nullptr;
    std::shared_ptr<string> userAttributeGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
