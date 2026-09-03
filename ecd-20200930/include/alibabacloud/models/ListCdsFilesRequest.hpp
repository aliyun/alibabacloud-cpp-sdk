// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCDSFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCDSFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListCdsFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCdsFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCdsFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(ParentFileId, parentFileId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCdsFilesRequest() = default ;
    ListCdsFilesRequest(const ListCdsFilesRequest &) = default ;
    ListCdsFilesRequest(ListCdsFilesRequest &&) = default ;
    ListCdsFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCdsFilesRequest() = default ;
    ListCdsFilesRequest& operator=(const ListCdsFilesRequest &) = default ;
    ListCdsFilesRequest& operator=(ListCdsFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->endUserId_ == nullptr && this->fileIds_ == nullptr && this->groupId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->orderType_ == nullptr && this->parentFileId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ListCdsFilesRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ListCdsFilesRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline const vector<string> & getFileIds() const { DARABONBA_PTR_GET_CONST(fileIds_, vector<string>) };
    inline vector<string> getFileIds() { DARABONBA_PTR_GET(fileIds_, vector<string>) };
    inline ListCdsFilesRequest& setFileIds(const vector<string> & fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };
    inline ListCdsFilesRequest& setFileIds(vector<string> && fileIds) { DARABONBA_PTR_SET_RVALUE(fileIds_, fileIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListCdsFilesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCdsFilesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCdsFilesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListCdsFilesRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // parentFileId Field Functions 
    bool hasParentFileId() const { return this->parentFileId_ != nullptr;};
    void deleteParentFileId() { this->parentFileId_ = nullptr;};
    inline string getParentFileId() const { DARABONBA_PTR_GET_DEFAULT(parentFileId_, "") };
    inline ListCdsFilesRequest& setParentFileId(string parentFileId) { DARABONBA_PTR_SET_VALUE(parentFileId_, parentFileId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCdsFilesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCdsFilesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The enterprise cloud drive ID.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The ID of the user to whom the cloud drive is assigned.
    shared_ptr<string> endUserId_ {};
    // The list of file IDs to query.
    shared_ptr<vector<string>> fileIds_ {};
    // The team space ID.
    shared_ptr<string> groupId_ {};
    // The maximum number of entries per page in a paging query. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous call. You do not need to set this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The sort order of the file list.
    shared_ptr<string> orderType_ {};
    // The parent file ID. You can obtain this value from the FileId response parameter of this operation.
    shared_ptr<string> parentFileId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    shared_ptr<string> regionId_ {};
    // The file status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
