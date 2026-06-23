// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMYAPPLICATIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMYAPPLICATIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListMyApplicationsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMyApplicationsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resource, resourceShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceTypeShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListMyApplicationsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resource, resourceShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceTypeShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
    };
    ListMyApplicationsShrinkRequest() = default ;
    ListMyApplicationsShrinkRequest(const ListMyApplicationsShrinkRequest &) = default ;
    ListMyApplicationsShrinkRequest(ListMyApplicationsShrinkRequest &&) = default ;
    ListMyApplicationsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMyApplicationsShrinkRequest() = default ;
    ListMyApplicationsShrinkRequest& operator=(const ListMyApplicationsShrinkRequest &) = default ;
    ListMyApplicationsShrinkRequest& operator=(ListMyApplicationsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defSchema_ == nullptr
        && this->endTime_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->resourceShrink_ == nullptr && this->resourceTypeShrink_ == nullptr
        && this->startTime_ == nullptr && this->statusesShrink_ == nullptr; };
    // defSchema Field Functions 
    bool hasDefSchema() const { return this->defSchema_ != nullptr;};
    void deleteDefSchema() { this->defSchema_ = nullptr;};
    inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
    inline ListMyApplicationsShrinkRequest& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListMyApplicationsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMyApplicationsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMyApplicationsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceShrink Field Functions 
    bool hasResourceShrink() const { return this->resourceShrink_ != nullptr;};
    void deleteResourceShrink() { this->resourceShrink_ = nullptr;};
    inline string getResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceShrink_, "") };
    inline ListMyApplicationsShrinkRequest& setResourceShrink(string resourceShrink) { DARABONBA_PTR_SET_VALUE(resourceShrink_, resourceShrink) };


    // resourceTypeShrink Field Functions 
    bool hasResourceTypeShrink() const { return this->resourceTypeShrink_ != nullptr;};
    void deleteResourceTypeShrink() { this->resourceTypeShrink_ = nullptr;};
    inline string getResourceTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeShrink_, "") };
    inline ListMyApplicationsShrinkRequest& setResourceTypeShrink(string resourceTypeShrink) { DARABONBA_PTR_SET_VALUE(resourceTypeShrink_, resourceTypeShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListMyApplicationsShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListMyApplicationsShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


  protected:
    // The resource type.
    // 
    // This parameter is required.
    shared_ptr<string> defSchema_ {};
    // The end time of the application, specified as a Unix timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // A token that you can use in a subsequent request to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The number of entries to return on each page. Default value: 10. Maximum value: 200.
    shared_ptr<int32_t> pageSize_ {};
    // The search criteria for the resource.
    shared_ptr<string> resourceShrink_ {};
    // The name of the leaf node that specifies the resource type. You can specify multiple resource types. Note that different leaf node names can map to the same business logic.
    // 
    // This parameter is required.
    shared_ptr<string> resourceTypeShrink_ {};
    // The start time of the application, specified as a Unix timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The approval statuses for filtering. Valid values:
    // 
    // - `WaitApproval`: Pending approval
    // 
    // - `Confirmed`: Pending authorization
    // 
    // - `RejectApproval`: Approval rejected
    // 
    // - `AuthorizeSucceed`: Authorization succeeded
    // 
    // - `AuthorizeFailed`: Authorization failed
    // 
    // - `Deleted`: The application was deleted.
    // 
    // - `Canceled`: The application was canceled.
    shared_ptr<string> statusesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
