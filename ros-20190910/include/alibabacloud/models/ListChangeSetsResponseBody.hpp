// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGESETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListChangeSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSets, changeSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSets, changeSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChangeSetsResponseBody() = default ;
    ListChangeSetsResponseBody(const ListChangeSetsResponseBody &) = default ;
    ListChangeSetsResponseBody(ListChangeSetsResponseBody &&) = default ;
    ListChangeSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeSetsResponseBody() = default ;
    ListChangeSetsResponseBody& operator=(const ListChangeSetsResponseBody &) = default ;
    ListChangeSetsResponseBody& operator=(ListChangeSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeSets& obj) { 
        DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
        DARABONBA_PTR_TO_JSON(ChangeSetName, changeSetName_);
        DARABONBA_PTR_TO_JSON(ChangeSetType, changeSetType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(StackName, stackName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeSets& obj) { 
        DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
        DARABONBA_PTR_FROM_JSON(ChangeSetName, changeSetName_);
        DARABONBA_PTR_FROM_JSON(ChangeSetType, changeSetType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(StackName, stackName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      ChangeSets() = default ;
      ChangeSets(const ChangeSets &) = default ;
      ChangeSets(ChangeSets &&) = default ;
      ChangeSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeSets() = default ;
      ChangeSets& operator=(const ChangeSets &) = default ;
      ChangeSets& operator=(ChangeSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->changeSetId_ == nullptr
        && this->changeSetName_ == nullptr && this->changeSetType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->executionStatus_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->stackId_ == nullptr && this->stackName_ == nullptr && this->status_ == nullptr
        && this->statusReason_ == nullptr && this->tags_ == nullptr; };
      // changeSetId Field Functions 
      bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
      void deleteChangeSetId() { this->changeSetId_ = nullptr;};
      inline string getChangeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
      inline ChangeSets& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


      // changeSetName Field Functions 
      bool hasChangeSetName() const { return this->changeSetName_ != nullptr;};
      void deleteChangeSetName() { this->changeSetName_ = nullptr;};
      inline string getChangeSetName() const { DARABONBA_PTR_GET_DEFAULT(changeSetName_, "") };
      inline ChangeSets& setChangeSetName(string changeSetName) { DARABONBA_PTR_SET_VALUE(changeSetName_, changeSetName) };


      // changeSetType Field Functions 
      bool hasChangeSetType() const { return this->changeSetType_ != nullptr;};
      void deleteChangeSetType() { this->changeSetType_ = nullptr;};
      inline string getChangeSetType() const { DARABONBA_PTR_GET_DEFAULT(changeSetType_, "") };
      inline ChangeSets& setChangeSetType(string changeSetType) { DARABONBA_PTR_SET_VALUE(changeSetType_, changeSetType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ChangeSets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ChangeSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // executionStatus Field Functions 
      bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
      void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
      inline string getExecutionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
      inline ChangeSets& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ChangeSets& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ChangeSets& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline ChangeSets& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackName Field Functions 
      bool hasStackName() const { return this->stackName_ != nullptr;};
      void deleteStackName() { this->stackName_ = nullptr;};
      inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
      inline ChangeSets& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ChangeSets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline ChangeSets& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ChangeSets::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ChangeSets::Tags>) };
      inline vector<ChangeSets::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ChangeSets::Tags>) };
      inline ChangeSets& setTags(const vector<ChangeSets::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ChangeSets& setTags(vector<ChangeSets::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the change set.
      shared_ptr<string> changeSetId_ {};
      // The name of the change set.
      shared_ptr<string> changeSetName_ {};
      // The type of the change set.
      shared_ptr<string> changeSetType_ {};
      // The time when the change set was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the change set.
      shared_ptr<string> description_ {};
      // The execution status of the change set.
      shared_ptr<string> executionStatus_ {};
      // The region ID of the change set.
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the stack with which the change set is associated.
      shared_ptr<string> stackId_ {};
      // The name of the stack with which the change set is associated.
      shared_ptr<string> stackName_ {};
      // The status of the change set.
      shared_ptr<string> status_ {};
      // The reason why the change set is in its current state.
      shared_ptr<string> statusReason_ {};
      shared_ptr<vector<ChangeSets::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->changeSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // changeSets Field Functions 
    bool hasChangeSets() const { return this->changeSets_ != nullptr;};
    void deleteChangeSets() { this->changeSets_ = nullptr;};
    inline const vector<ListChangeSetsResponseBody::ChangeSets> & getChangeSets() const { DARABONBA_PTR_GET_CONST(changeSets_, vector<ListChangeSetsResponseBody::ChangeSets>) };
    inline vector<ListChangeSetsResponseBody::ChangeSets> getChangeSets() { DARABONBA_PTR_GET(changeSets_, vector<ListChangeSetsResponseBody::ChangeSets>) };
    inline ListChangeSetsResponseBody& setChangeSets(const vector<ListChangeSetsResponseBody::ChangeSets> & changeSets) { DARABONBA_PTR_SET_VALUE(changeSets_, changeSets) };
    inline ListChangeSetsResponseBody& setChangeSets(vector<ListChangeSetsResponseBody::ChangeSets> && changeSets) { DARABONBA_PTR_SET_RVALUE(changeSets_, changeSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListChangeSetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChangeSetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChangeSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChangeSetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The change sets.
    shared_ptr<vector<ListChangeSetsResponseBody::ChangeSets>> changeSets_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of change sets returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
