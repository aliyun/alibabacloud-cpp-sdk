// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListCustomGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomGroups, customGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomGroups, customGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomGroupsResponseBody() = default ;
    ListCustomGroupsResponseBody(const ListCustomGroupsResponseBody &) = default ;
    ListCustomGroupsResponseBody(ListCustomGroupsResponseBody &&) = default ;
    ListCustomGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomGroupsResponseBody() = default ;
    ListCustomGroupsResponseBody& operator=(const ListCustomGroupsResponseBody &) = default ;
    ListCustomGroupsResponseBody& operator=(ListCustomGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CustomGroup, customGroup_);
      };
      friend void from_json(const Darabonba::Json& j, CustomGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomGroup, customGroup_);
      };
      CustomGroups() = default ;
      CustomGroups(const CustomGroups &) = default ;
      CustomGroups(CustomGroups &&) = default ;
      CustomGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomGroups() = default ;
      CustomGroups& operator=(const CustomGroups &) = default ;
      CustomGroups& operator=(CustomGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomGroup& obj) { 
          DARABONBA_PTR_TO_JSON(CustomGroupDescription, customGroupDescription_);
          DARABONBA_PTR_TO_JSON(CustomGroupId, customGroupId_);
          DARABONBA_PTR_TO_JSON(CustomGroupName, customGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomGroupDescription, customGroupDescription_);
          DARABONBA_PTR_FROM_JSON(CustomGroupId, customGroupId_);
          DARABONBA_PTR_FROM_JSON(CustomGroupName, customGroupName_);
        };
        CustomGroup() = default ;
        CustomGroup(const CustomGroup &) = default ;
        CustomGroup(CustomGroup &&) = default ;
        CustomGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomGroup() = default ;
        CustomGroup& operator=(const CustomGroup &) = default ;
        CustomGroup& operator=(CustomGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->customGroupDescription_ == nullptr
        && this->customGroupId_ == nullptr && this->customGroupName_ == nullptr; };
        // customGroupDescription Field Functions 
        bool hasCustomGroupDescription() const { return this->customGroupDescription_ != nullptr;};
        void deleteCustomGroupDescription() { this->customGroupDescription_ = nullptr;};
        inline string getCustomGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(customGroupDescription_, "") };
        inline CustomGroup& setCustomGroupDescription(string customGroupDescription) { DARABONBA_PTR_SET_VALUE(customGroupDescription_, customGroupDescription) };


        // customGroupId Field Functions 
        bool hasCustomGroupId() const { return this->customGroupId_ != nullptr;};
        void deleteCustomGroupId() { this->customGroupId_ = nullptr;};
        inline string getCustomGroupId() const { DARABONBA_PTR_GET_DEFAULT(customGroupId_, "") };
        inline CustomGroup& setCustomGroupId(string customGroupId) { DARABONBA_PTR_SET_VALUE(customGroupId_, customGroupId) };


        // customGroupName Field Functions 
        bool hasCustomGroupName() const { return this->customGroupName_ != nullptr;};
        void deleteCustomGroupName() { this->customGroupName_ = nullptr;};
        inline string getCustomGroupName() const { DARABONBA_PTR_GET_DEFAULT(customGroupName_, "") };
        inline CustomGroup& setCustomGroupName(string customGroupName) { DARABONBA_PTR_SET_VALUE(customGroupName_, customGroupName) };


      protected:
        shared_ptr<string> customGroupDescription_ {};
        shared_ptr<string> customGroupId_ {};
        shared_ptr<string> customGroupName_ {};
      };

      virtual bool empty() const override { return this->customGroup_ == nullptr; };
      // customGroup Field Functions 
      bool hasCustomGroup() const { return this->customGroup_ != nullptr;};
      void deleteCustomGroup() { this->customGroup_ = nullptr;};
      inline const vector<CustomGroups::CustomGroup> & getCustomGroup() const { DARABONBA_PTR_GET_CONST(customGroup_, vector<CustomGroups::CustomGroup>) };
      inline vector<CustomGroups::CustomGroup> getCustomGroup() { DARABONBA_PTR_GET(customGroup_, vector<CustomGroups::CustomGroup>) };
      inline CustomGroups& setCustomGroup(const vector<CustomGroups::CustomGroup> & customGroup) { DARABONBA_PTR_SET_VALUE(customGroup_, customGroup) };
      inline CustomGroups& setCustomGroup(vector<CustomGroups::CustomGroup> && customGroup) { DARABONBA_PTR_SET_RVALUE(customGroup_, customGroup) };


    protected:
      shared_ptr<vector<CustomGroups::CustomGroup>> customGroup_ {};
    };

    virtual bool empty() const override { return this->customGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // customGroups Field Functions 
    bool hasCustomGroups() const { return this->customGroups_ != nullptr;};
    void deleteCustomGroups() { this->customGroups_ = nullptr;};
    inline const ListCustomGroupsResponseBody::CustomGroups & getCustomGroups() const { DARABONBA_PTR_GET_CONST(customGroups_, ListCustomGroupsResponseBody::CustomGroups) };
    inline ListCustomGroupsResponseBody::CustomGroups getCustomGroups() { DARABONBA_PTR_GET(customGroups_, ListCustomGroupsResponseBody::CustomGroups) };
    inline ListCustomGroupsResponseBody& setCustomGroups(const ListCustomGroupsResponseBody::CustomGroups & customGroups) { DARABONBA_PTR_SET_VALUE(customGroups_, customGroups) };
    inline ListCustomGroupsResponseBody& setCustomGroups(ListCustomGroupsResponseBody::CustomGroups && customGroups) { DARABONBA_PTR_SET_RVALUE(customGroups_, customGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListCustomGroupsResponseBody::CustomGroups> customGroups_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
