// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENTERPRISEACCELERATEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListEnterpriseAcceleratePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnterpriseAcceleratePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnterpriseAcceleratePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListEnterpriseAcceleratePoliciesResponseBody() = default ;
    ListEnterpriseAcceleratePoliciesResponseBody(const ListEnterpriseAcceleratePoliciesResponseBody &) = default ;
    ListEnterpriseAcceleratePoliciesResponseBody(ListEnterpriseAcceleratePoliciesResponseBody &&) = default ;
    ListEnterpriseAcceleratePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnterpriseAcceleratePoliciesResponseBody() = default ;
    ListEnterpriseAcceleratePoliciesResponseBody& operator=(const ListEnterpriseAcceleratePoliciesResponseBody &) = default ;
    ListEnterpriseAcceleratePoliciesResponseBody& operator=(ListEnterpriseAcceleratePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
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
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accelerationType_ == nullptr
        && this->description_ == nullptr && this->eapId_ == nullptr && this->enabled_ == nullptr && this->name_ == nullptr && this->onTls_ == nullptr
        && this->priority_ == nullptr && this->showInClient_ == nullptr && this->upstreamHost_ == nullptr && this->upstreamPort_ == nullptr && this->upstreamType_ == nullptr
        && this->userAttributeGroup_ == nullptr; };
      // accelerationType Field Functions 
      bool hasAccelerationType() const { return this->accelerationType_ != nullptr;};
      void deleteAccelerationType() { this->accelerationType_ = nullptr;};
      inline string getAccelerationType() const { DARABONBA_PTR_GET_DEFAULT(accelerationType_, "") };
      inline Policies& setAccelerationType(string accelerationType) { DARABONBA_PTR_SET_VALUE(accelerationType_, accelerationType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Policies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eapId Field Functions 
      bool hasEapId() const { return this->eapId_ != nullptr;};
      void deleteEapId() { this->eapId_ = nullptr;};
      inline string getEapId() const { DARABONBA_PTR_GET_DEFAULT(eapId_, "") };
      inline Policies& setEapId(string eapId) { DARABONBA_PTR_SET_VALUE(eapId_, eapId) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline int32_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
      inline Policies& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // onTls Field Functions 
      bool hasOnTls() const { return this->onTls_ != nullptr;};
      void deleteOnTls() { this->onTls_ = nullptr;};
      inline int32_t getOnTls() const { DARABONBA_PTR_GET_DEFAULT(onTls_, 0) };
      inline Policies& setOnTls(int32_t onTls) { DARABONBA_PTR_SET_VALUE(onTls_, onTls) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Policies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // showInClient Field Functions 
      bool hasShowInClient() const { return this->showInClient_ != nullptr;};
      void deleteShowInClient() { this->showInClient_ = nullptr;};
      inline int32_t getShowInClient() const { DARABONBA_PTR_GET_DEFAULT(showInClient_, 0) };
      inline Policies& setShowInClient(int32_t showInClient) { DARABONBA_PTR_SET_VALUE(showInClient_, showInClient) };


      // upstreamHost Field Functions 
      bool hasUpstreamHost() const { return this->upstreamHost_ != nullptr;};
      void deleteUpstreamHost() { this->upstreamHost_ = nullptr;};
      inline string getUpstreamHost() const { DARABONBA_PTR_GET_DEFAULT(upstreamHost_, "") };
      inline Policies& setUpstreamHost(string upstreamHost) { DARABONBA_PTR_SET_VALUE(upstreamHost_, upstreamHost) };


      // upstreamPort Field Functions 
      bool hasUpstreamPort() const { return this->upstreamPort_ != nullptr;};
      void deleteUpstreamPort() { this->upstreamPort_ = nullptr;};
      inline int32_t getUpstreamPort() const { DARABONBA_PTR_GET_DEFAULT(upstreamPort_, 0) };
      inline Policies& setUpstreamPort(int32_t upstreamPort) { DARABONBA_PTR_SET_VALUE(upstreamPort_, upstreamPort) };


      // upstreamType Field Functions 
      bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
      void deleteUpstreamType() { this->upstreamType_ = nullptr;};
      inline string getUpstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
      inline Policies& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


      // userAttributeGroup Field Functions 
      bool hasUserAttributeGroup() const { return this->userAttributeGroup_ != nullptr;};
      void deleteUserAttributeGroup() { this->userAttributeGroup_ = nullptr;};
      inline string getUserAttributeGroup() const { DARABONBA_PTR_GET_DEFAULT(userAttributeGroup_, "") };
      inline Policies& setUserAttributeGroup(string userAttributeGroup) { DARABONBA_PTR_SET_VALUE(userAttributeGroup_, userAttributeGroup) };


    protected:
      shared_ptr<string> accelerationType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> eapId_ {};
      shared_ptr<int32_t> enabled_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> onTls_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<int32_t> showInClient_ {};
      shared_ptr<string> upstreamHost_ {};
      shared_ptr<int32_t> upstreamPort_ {};
      shared_ptr<string> upstreamType_ {};
      shared_ptr<string> userAttributeGroup_ {};
    };

    virtual bool empty() const override { return this->policies_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies>) };
    inline vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies>) };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setPolicies(const vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setPolicies(vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListEnterpriseAcceleratePoliciesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<ListEnterpriseAcceleratePoliciesResponseBody::Policies>> policies_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
