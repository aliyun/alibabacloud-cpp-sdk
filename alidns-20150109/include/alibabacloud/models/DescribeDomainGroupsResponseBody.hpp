// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroups, domainGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroups, domainGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainGroupsResponseBody() = default ;
    DescribeDomainGroupsResponseBody(const DescribeDomainGroupsResponseBody &) = default ;
    DescribeDomainGroupsResponseBody(DescribeDomainGroupsResponseBody &&) = default ;
    DescribeDomainGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainGroupsResponseBody() = default ;
    DescribeDomainGroupsResponseBody& operator=(const DescribeDomainGroupsResponseBody &) = default ;
    DescribeDomainGroupsResponseBody& operator=(DescribeDomainGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainGroups& obj) { 
        DARABONBA_PTR_TO_JSON(DomainGroup, domainGroup_);
      };
      friend void from_json(const Darabonba::Json& j, DomainGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainGroup, domainGroup_);
      };
      DomainGroups() = default ;
      DomainGroups(const DomainGroups &) = default ;
      DomainGroups(DomainGroups &&) = default ;
      DomainGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainGroups() = default ;
      DomainGroups& operator=(const DomainGroups &) = default ;
      DomainGroups& operator=(DomainGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainGroup& obj) { 
          DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, DomainGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        DomainGroup() = default ;
        DomainGroup(const DomainGroup &) = default ;
        DomainGroup(DomainGroup &&) = default ;
        DomainGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainGroup() = default ;
        DomainGroup& operator=(const DomainGroup &) = default ;
        DomainGroup& operator=(DomainGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainCount_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr; };
        // domainCount Field Functions 
        bool hasDomainCount() const { return this->domainCount_ != nullptr;};
        void deleteDomainCount() { this->domainCount_ = nullptr;};
        inline int64_t getDomainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0L) };
        inline DomainGroup& setDomainCount(int64_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline DomainGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline DomainGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        // The number of domain name groups.
        shared_ptr<int64_t> domainCount_ {};
        // The ID of the domain name group. Valid values:
        // 
        // *   defaultGroup: the default group
        // *   If an empty string is returned, it indicates the group that contains all domain names.
        shared_ptr<string> groupId_ {};
        // The name of the domain name group.
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->domainGroup_ == nullptr; };
      // domainGroup Field Functions 
      bool hasDomainGroup() const { return this->domainGroup_ != nullptr;};
      void deleteDomainGroup() { this->domainGroup_ = nullptr;};
      inline const vector<DomainGroups::DomainGroup> & getDomainGroup() const { DARABONBA_PTR_GET_CONST(domainGroup_, vector<DomainGroups::DomainGroup>) };
      inline vector<DomainGroups::DomainGroup> getDomainGroup() { DARABONBA_PTR_GET(domainGroup_, vector<DomainGroups::DomainGroup>) };
      inline DomainGroups& setDomainGroup(const vector<DomainGroups::DomainGroup> & domainGroup) { DARABONBA_PTR_SET_VALUE(domainGroup_, domainGroup) };
      inline DomainGroups& setDomainGroup(vector<DomainGroups::DomainGroup> && domainGroup) { DARABONBA_PTR_SET_RVALUE(domainGroup_, domainGroup) };


    protected:
      shared_ptr<vector<DomainGroups::DomainGroup>> domainGroup_ {};
    };

    virtual bool empty() const override { return this->domainGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainGroups Field Functions 
    bool hasDomainGroups() const { return this->domainGroups_ != nullptr;};
    void deleteDomainGroups() { this->domainGroups_ = nullptr;};
    inline const DescribeDomainGroupsResponseBody::DomainGroups & getDomainGroups() const { DARABONBA_PTR_GET_CONST(domainGroups_, DescribeDomainGroupsResponseBody::DomainGroups) };
    inline DescribeDomainGroupsResponseBody::DomainGroups getDomainGroups() { DARABONBA_PTR_GET(domainGroups_, DescribeDomainGroupsResponseBody::DomainGroups) };
    inline DescribeDomainGroupsResponseBody& setDomainGroups(const DescribeDomainGroupsResponseBody::DomainGroups & domainGroups) { DARABONBA_PTR_SET_VALUE(domainGroups_, domainGroups) };
    inline DescribeDomainGroupsResponseBody& setDomainGroups(DescribeDomainGroupsResponseBody::DomainGroups && domainGroups) { DARABONBA_PTR_SET_RVALUE(domainGroups_, domainGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainGroupsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainGroupsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain name groups.
    shared_ptr<DescribeDomainGroupsResponseBody::DomainGroups> domainGroups_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
