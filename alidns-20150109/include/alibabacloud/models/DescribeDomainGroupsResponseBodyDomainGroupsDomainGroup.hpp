// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODYDOMAINGROUPSDOMAINGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODYDOMAINGROUPSDOMAINGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& obj) { 
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup() = default ;
    DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup(const DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup &) = default ;
    DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup(DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup &&) = default ;
    DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup() = default ;
    DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& operator=(const DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup &) = default ;
    DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& operator=(DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainCount_ == nullptr
        && return this->groupId_ == nullptr && return this->groupName_ == nullptr; };
    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int64_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
    inline DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDomainGroupsResponseBodyDomainGroupsDomainGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The number of domain name groups.
    std::shared_ptr<int64_t> domainCount_ = nullptr;
    // The ID of the domain name group. Valid values:
    // 
    // *   defaultGroup: the default group
    // *   If an empty string is returned, it indicates the group that contains all domain names.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the domain name group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
