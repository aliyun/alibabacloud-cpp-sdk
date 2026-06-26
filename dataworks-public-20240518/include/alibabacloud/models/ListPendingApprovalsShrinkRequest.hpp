// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPENDINGAPPROVALSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPENDINGAPPROVALSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListPendingApprovalsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPendingApprovalsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTypes, accessTypesShrink_);
      DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Grantee, granteeShrink_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Resource, resourceShrink_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceTypeShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListPendingApprovalsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTypes, accessTypesShrink_);
      DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Grantee, granteeShrink_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Resource, resourceShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceTypeShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListPendingApprovalsShrinkRequest() = default ;
    ListPendingApprovalsShrinkRequest(const ListPendingApprovalsShrinkRequest &) = default ;
    ListPendingApprovalsShrinkRequest(ListPendingApprovalsShrinkRequest &&) = default ;
    ListPendingApprovalsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPendingApprovalsShrinkRequest() = default ;
    ListPendingApprovalsShrinkRequest& operator=(const ListPendingApprovalsShrinkRequest &) = default ;
    ListPendingApprovalsShrinkRequest& operator=(ListPendingApprovalsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessTypesShrink_ == nullptr
        && this->defSchema_ == nullptr && this->endTime_ == nullptr && this->granteeShrink_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr
        && this->resourceShrink_ == nullptr && this->resourceTypeShrink_ == nullptr && this->startTime_ == nullptr; };
    // accessTypesShrink Field Functions 
    bool hasAccessTypesShrink() const { return this->accessTypesShrink_ != nullptr;};
    void deleteAccessTypesShrink() { this->accessTypesShrink_ = nullptr;};
    inline string getAccessTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(accessTypesShrink_, "") };
    inline ListPendingApprovalsShrinkRequest& setAccessTypesShrink(string accessTypesShrink) { DARABONBA_PTR_SET_VALUE(accessTypesShrink_, accessTypesShrink) };


    // defSchema Field Functions 
    bool hasDefSchema() const { return this->defSchema_ != nullptr;};
    void deleteDefSchema() { this->defSchema_ = nullptr;};
    inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
    inline ListPendingApprovalsShrinkRequest& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListPendingApprovalsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granteeShrink Field Functions 
    bool hasGranteeShrink() const { return this->granteeShrink_ != nullptr;};
    void deleteGranteeShrink() { this->granteeShrink_ = nullptr;};
    inline string getGranteeShrink() const { DARABONBA_PTR_GET_DEFAULT(granteeShrink_, "") };
    inline ListPendingApprovalsShrinkRequest& setGranteeShrink(string granteeShrink) { DARABONBA_PTR_SET_VALUE(granteeShrink_, granteeShrink) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPendingApprovalsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPendingApprovalsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceShrink Field Functions 
    bool hasResourceShrink() const { return this->resourceShrink_ != nullptr;};
    void deleteResourceShrink() { this->resourceShrink_ = nullptr;};
    inline string getResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceShrink_, "") };
    inline ListPendingApprovalsShrinkRequest& setResourceShrink(string resourceShrink) { DARABONBA_PTR_SET_VALUE(resourceShrink_, resourceShrink) };


    // resourceTypeShrink Field Functions 
    bool hasResourceTypeShrink() const { return this->resourceTypeShrink_ != nullptr;};
    void deleteResourceTypeShrink() { this->resourceTypeShrink_ = nullptr;};
    inline string getResourceTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeShrink_, "") };
    inline ListPendingApprovalsShrinkRequest& setResourceTypeShrink(string resourceTypeShrink) { DARABONBA_PTR_SET_VALUE(resourceTypeShrink_, resourceTypeShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListPendingApprovalsShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Filters by requested permissions.
    // 
    // Note: Different resource levels support different permission types. All are uniformly constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).isValidLeaf, accessTypeRestrictions, and authMethodAccessTypes.
    // 
    // Reference: [ResourceSchema International Documentation](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    shared_ptr<string> accessTypesShrink_ {};
    // Filters by resource type.
    // 
    // Note: The supported resource types for requests are constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).name.
    // 
    // Reference: [ResourceSchema International Documentation](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    // 
    // This parameter is required.
    shared_ptr<string> defSchema_ {};
    // End time of the application period (millisecond timestamp).
    shared_ptr<int64_t> endTime_ {};
    // Filters by authorization principal.
    // 
    // Note: The supported authorization principal types are constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).authPrincipal.
    // 
    // Reference: [ResourceSchema International Documentation](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    shared_ptr<string> granteeShrink_ {};
    // Cursor.
    shared_ptr<string> nextToken_ {};
    // Page size (default: 10, maximum: 200).
    shared_ptr<int32_t> pageSize_ {};
    // Filters by resource with exact or fuzzy matching. Resource descriptions are constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).
    // 
    // Reference: [ResourceSchema International Documentation](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    shared_ptr<string> resourceShrink_ {};
    // Filters by minimum permission resource type.
    // 
    // Note: The minimum permission resource type is constrained by [ResourceSchema](https://help.aliyun.com/zh/dataworks/developer-reference/resourceschema-template-instructions).resources[*].isValidLeaf being true.
    // 
    // Reference: [ResourceSchema International Documentation](https://www.alibabacloud.com/help/zh/dataworks/developer-reference/resourceschema-template-instructions)
    // 
    // This parameter is required.
    shared_ptr<string> resourceTypeShrink_ {};
    // Start time of the application period (millisecond timestamp).
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
