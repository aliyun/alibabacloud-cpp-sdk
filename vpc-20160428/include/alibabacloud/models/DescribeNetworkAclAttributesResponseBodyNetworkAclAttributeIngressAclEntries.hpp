// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTEINGRESSACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKACLATTRIBUTESRESPONSEBODYNETWORKACLATTRIBUTEINGRESSACLENTRIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(IngressAclEntry, ingressAclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressAclEntry, ingressAclEntry_);
    };
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries &&) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries() = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries& operator=(const DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries &) = default ;
    DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries& operator=(DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ingressAclEntry_ != nullptr; };
    // ingressAclEntry Field Functions 
    bool hasIngressAclEntry() const { return this->ingressAclEntry_ != nullptr;};
    void deleteIngressAclEntry() { this->ingressAclEntry_ = nullptr;};
    inline const vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> & ingressAclEntry() const { DARABONBA_PTR_GET_CONST(ingressAclEntry_, vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry>) };
    inline vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> ingressAclEntry() { DARABONBA_PTR_GET(ingressAclEntry_, vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry>) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries& setIngressAclEntry(const vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> & ingressAclEntry) { DARABONBA_PTR_SET_VALUE(ingressAclEntry_, ingressAclEntry) };
    inline DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntries& setIngressAclEntry(vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry> && ingressAclEntry) { DARABONBA_PTR_SET_RVALUE(ingressAclEntry_, ingressAclEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeNetworkAclAttributesResponseBodyNetworkAclAttributeIngressAclEntriesIngressAclEntry>> ingressAclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
