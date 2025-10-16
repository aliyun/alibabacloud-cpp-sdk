// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCDSFILESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCDSFILESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListCdsFilesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCdsFilesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIdsShrink_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCdsFilesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIdsShrink_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCdsFilesShrinkRequest() = default ;
    ListCdsFilesShrinkRequest(const ListCdsFilesShrinkRequest &) = default ;
    ListCdsFilesShrinkRequest(ListCdsFilesShrinkRequest &&) = default ;
    ListCdsFilesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCdsFilesShrinkRequest() = default ;
    ListCdsFilesShrinkRequest& operator=(const ListCdsFilesShrinkRequest &) = default ;
    ListCdsFilesShrinkRequest& operator=(ListCdsFilesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && return this->endUserId_ == nullptr && return this->fileIdsShrink_ == nullptr && return this->groupId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->orderType_ == nullptr && return this->parentFileId_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ListCdsFilesShrinkRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ListCdsFilesShrinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileIdsShrink Field Functions 
    bool hasFileIdsShrink() const { return this->fileIdsShrink_ != nullptr;};
    void deleteFileIdsShrink() { this->fileIdsShrink_ = nullptr;};
    inline string fileIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(fileIdsShrink_, "") };
    inline ListCdsFilesShrinkRequest& setFileIdsShrink(string fileIdsShrink) { DARABONBA_PTR_SET_VALUE(fileIdsShrink_, fileIdsShrink) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListCdsFilesShrinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCdsFilesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCdsFilesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListCdsFilesShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // parentFileId Field Functions 
    bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
    void deleteParentFileId() { this->parentFileId_ = nullptr;};
    inline string parentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, "") };
    inline ListCdsFilesShrinkRequest& setParentFileId(string parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCdsFilesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCdsFilesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the cloud disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The ID of the user to whom the cloud disk is allocated.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The IDs of the files to be queried.
    std::shared_ptr<string> fileIdsShrink_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of entries to return on each page. Default value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token used for the next query. If this parameter is empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sorting method of the files.
    // 
    // Valid values:
    // 
    // *   CreateTimeDesc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in descending order based on the time when they are created.
    // 
    //     <!-- -->
    // 
    // *   ModifiedTimeAsc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in ascending order based on the time when they are modified.
    // 
    //     <!-- -->
    // 
    // *   NameDesc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in descending order based on their names.
    // 
    //     <!-- -->
    // 
    // *   SizeAsc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in ascending order based on their sizes.
    // 
    //     <!-- -->
    // 
    // *   ModifiedTimeDesc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in descending order based on the time when they are modified.
    // 
    //     <!-- -->
    // 
    // *   CreateTimeAsc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in ascending order based on the time when they are created.
    // 
    //     <!-- -->
    // 
    // *   SizeDesc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in descending order based on their sizes.
    // 
    //     <!-- -->
    // 
    // *   NameAsc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     sorts files in ascending order based on their names.
    // 
    //     <!-- -->
    std::shared_ptr<string> orderType_ = nullptr;
    // The ID of the parent file.
    std::shared_ptr<string> parentFileId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The file status.
    // 
    // Valid values:
    // 
    // *   available
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     returns only normal files.
    // 
    //     <!-- -->
    // 
    // *   uploading
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     returns only the files that are being uploaded.
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
