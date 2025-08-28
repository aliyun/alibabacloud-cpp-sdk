// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODYNETWORKACLATTRIBUTEINGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODYNETWORKACLATTRIBUTEINGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(IngressAclEntry, ingressAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressAclEntry, ingressAclEntry_);
    };
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries() = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries(const CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries &) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries(CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries &&) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries() = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries& operator=(const CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries &) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries& operator=(CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ingressAclEntry_ != nullptr; };
    // ingressAclEntry Field Functions 
    bool hasIngressAclEntry() const { return this->ingressAclEntry_ != nullptr;};
    void deleteIngressAclEntry() { this->ingressAclEntry_ = nullptr;};
    inline const vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> & ingressAclEntry() const { DARABONBA_PTR_GET_CONST(ingressAclEntry_, vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry>) };
    inline vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> ingressAclEntry() { DARABONBA_PTR_GET(ingressAclEntry_, vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry>) };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries& setIngressAclEntry(const vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> & ingressAclEntry) { DARABONBA_PTR_SET_VALUE(ingressAclEntry_, ingressAclEntry) };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntries& setIngressAclEntry(vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> && ingressAclEntry) { DARABONBA_PTR_SET_RVALUE(ingressAclEntry_, ingressAclEntry) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry>> ingressAclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
