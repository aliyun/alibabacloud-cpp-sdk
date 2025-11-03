// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACLEGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACLEGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(EgressAclEntry, egressAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressAclEntry, egressAclEntry_);
    };
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries& operator=(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries& operator=(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->egressAclEntry_ == nullptr; };
    // egressAclEntry Field Functions 
    bool hasEgressAclEntry() const { return this->egressAclEntry_ != nullptr;};
    void deleteEgressAclEntry() { this->egressAclEntry_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry> & egressAclEntry() const { DARABONBA_PTR_GET_CONST(egressAclEntry_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry> egressAclEntry() { DARABONBA_PTR_GET(egressAclEntry_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry>) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries& setEgressAclEntry(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry> & egressAclEntry) { DARABONBA_PTR_SET_VALUE(egressAclEntry_, egressAclEntry) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntries& setEgressAclEntry(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry> && egressAclEntry) { DARABONBA_PTR_SET_RVALUE(egressAclEntry_, egressAclEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclEgressAclEntriesEgressAclEntry>> egressAclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
