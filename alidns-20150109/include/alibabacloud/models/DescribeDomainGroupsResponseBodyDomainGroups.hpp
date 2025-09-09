// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODYDOMAINGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODYDOMAINGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainGroupsResponseBodyDomainGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainGroupsResponseBodyDomainGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroup, domainGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainGroupsResponseBodyDomainGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroup, domainGroup_);
    };
    DescribeDomainGroupsResponseBodyDomainGroups() = default ;
    DescribeDomainGroupsResponseBodyDomainGroups(const DescribeDomainGroupsResponseBodyDomainGroups &) = default ;
    DescribeDomainGroupsResponseBodyDomainGroups(DescribeDomainGroupsResponseBodyDomainGroups &&) = default ;
    DescribeDomainGroupsResponseBodyDomainGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainGroupsResponseBodyDomainGroups() = default ;
    DescribeDomainGroupsResponseBodyDomainGroups& operator=(const DescribeDomainGroupsResponseBodyDomainGroups &) = default ;
    DescribeDomainGroupsResponseBodyDomainGroups& operator=(DescribeDomainGroupsResponseBodyDomainGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainGroup_ != nullptr; };
    // domainGroup Field Functions 
    bool hasDomainGroup() const { return this->domainGroup_ != nullptr;};
    void deleteDomainGroup() { this->domainGroup_ = nullptr;};
    inline const vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup> & domainGroup() const { DARABONBA_PTR_GET_CONST(domainGroup_, vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup>) };
    inline vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup> domainGroup() { DARABONBA_PTR_GET(domainGroup_, vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup>) };
    inline DescribeDomainGroupsResponseBodyDomainGroups& setDomainGroup(const vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup> & domainGroup) { DARABONBA_PTR_SET_VALUE(domainGroup_, domainGroup) };
    inline DescribeDomainGroupsResponseBodyDomainGroups& setDomainGroup(vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup> && domainGroup) { DARABONBA_PTR_SET_RVALUE(domainGroup_, domainGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup>> domainGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
