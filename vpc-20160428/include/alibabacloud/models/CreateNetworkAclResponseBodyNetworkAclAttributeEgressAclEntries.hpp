// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODYNETWORKACLATTRIBUTEEGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKACLRESPONSEBODYNETWORKACLATTRIBUTEEGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(EgressAclEntry, egressAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressAclEntry, egressAclEntry_);
    };
    CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries() = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries(const CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries &) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries(CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries &&) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries() = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries& operator=(const CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries &) = default ;
    CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries& operator=(CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressAclEntry_ == nullptr; };
    // egressAclEntry Field Functions 
    bool hasEgressAclEntry() const { return this->egressAclEntry_ != nullptr;};
    void deleteEgressAclEntry() { this->egressAclEntry_ = nullptr;};
    inline const vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry> & egressAclEntry() const { DARABONBA_PTR_GET_CONST(egressAclEntry_, vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry>) };
    inline vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry> egressAclEntry() { DARABONBA_PTR_GET(egressAclEntry_, vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry>) };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries& setEgressAclEntry(const vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry> & egressAclEntry) { DARABONBA_PTR_SET_VALUE(egressAclEntry_, egressAclEntry) };
    inline CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntries& setEgressAclEntry(vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry> && egressAclEntry) { DARABONBA_PTR_SET_RVALUE(egressAclEntry_, egressAclEntry) };


  protected:
    std::shared_ptr<vector<Models::CreateNetworkAclResponseBodyNetworkAclAttributeEgressAclEntriesEgressAclEntry>> egressAclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
