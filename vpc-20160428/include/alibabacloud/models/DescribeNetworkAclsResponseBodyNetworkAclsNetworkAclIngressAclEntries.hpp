// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACLINGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLSRESPONSEBODYNETWORKACLSNETWORKACLINGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(IngressAclEntry, ingressAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressAclEntry, ingressAclEntry_);
    };
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries &&) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries() = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries& operator=(const DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries &) = default ;
    DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries& operator=(DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ingressAclEntry_ != nullptr; };
    // ingressAclEntry Field Functions 
    bool hasIngressAclEntry() const { return this->ingressAclEntry_ != nullptr;};
    void deleteIngressAclEntry() { this->ingressAclEntry_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry> & ingressAclEntry() const { DARABONBA_PTR_GET_CONST(ingressAclEntry_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry>) };
    inline vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry> ingressAclEntry() { DARABONBA_PTR_GET(ingressAclEntry_, vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry>) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries& setIngressAclEntry(const vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry> & ingressAclEntry) { DARABONBA_PTR_SET_VALUE(ingressAclEntry_, ingressAclEntry) };
    inline DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntries& setIngressAclEntry(vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry> && ingressAclEntry) { DARABONBA_PTR_SET_RVALUE(ingressAclEntry_, ingressAclEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclsResponseBodyNetworkAclsNetworkAclIngressAclEntriesIngressAclEntry>> ingressAclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
