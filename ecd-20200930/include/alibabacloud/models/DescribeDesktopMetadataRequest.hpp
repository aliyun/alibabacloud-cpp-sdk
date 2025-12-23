// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPMETADATAREQUEST_HPP_
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
  class DescribeDesktopMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTimeStart, creationTimeStart_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(IncludeDesktopGroup, includeDesktopGroup_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OperationTimeStart, operationTimeStart_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTimeStart, creationTimeStart_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(IncludeDesktopGroup, includeDesktopGroup_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OperationTimeStart, operationTimeStart_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
    };
    DescribeDesktopMetadataRequest() = default ;
    DescribeDesktopMetadataRequest(const DescribeDesktopMetadataRequest &) = default ;
    DescribeDesktopMetadataRequest(DescribeDesktopMetadataRequest &&) = default ;
    DescribeDesktopMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopMetadataRequest() = default ;
    DescribeDesktopMetadataRequest& operator=(const DescribeDesktopMetadataRequest &) = default ;
    DescribeDesktopMetadataRequest& operator=(DescribeDesktopMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTimeStart_ == nullptr
        && return this->desktopIds_ == nullptr && return this->groupId_ == nullptr && return this->hostName_ == nullptr && return this->imageId_ == nullptr && return this->includeDesktopGroup_ == nullptr
        && return this->keyword_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->officeSiteId_ == nullptr && return this->operationTimeStart_ == nullptr
        && return this->regionId_ == nullptr && return this->searchRegionId_ == nullptr; };
    // creationTimeStart Field Functions 
    bool hasCreationTimeStart() const { return this->creationTimeStart_ != nullptr;};
    void deleteCreationTimeStart() { this->creationTimeStart_ = nullptr;};
    inline string creationTimeStart() const { DARABONBA_PTR_GET_DEFAULT(creationTimeStart_, "") };
    inline DescribeDesktopMetadataRequest& setCreationTimeStart(string creationTimeStart) { DARABONBA_PTR_SET_VALUE(creationTimeStart_, creationTimeStart) };


    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & desktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> desktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline DescribeDesktopMetadataRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline DescribeDesktopMetadataRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDesktopMetadataRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeDesktopMetadataRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeDesktopMetadataRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // includeDesktopGroup Field Functions 
    bool hasIncludeDesktopGroup() const { return this->includeDesktopGroup_ != nullptr;};
    void deleteIncludeDesktopGroup() { this->includeDesktopGroup_ = nullptr;};
    inline bool includeDesktopGroup() const { DARABONBA_PTR_GET_DEFAULT(includeDesktopGroup_, false) };
    inline DescribeDesktopMetadataRequest& setIncludeDesktopGroup(bool includeDesktopGroup) { DARABONBA_PTR_SET_VALUE(includeDesktopGroup_, includeDesktopGroup) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeDesktopMetadataRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDesktopMetadataRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopMetadataRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeDesktopMetadataRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // operationTimeStart Field Functions 
    bool hasOperationTimeStart() const { return this->operationTimeStart_ != nullptr;};
    void deleteOperationTimeStart() { this->operationTimeStart_ = nullptr;};
    inline string operationTimeStart() const { DARABONBA_PTR_GET_DEFAULT(operationTimeStart_, "") };
    inline DescribeDesktopMetadataRequest& setOperationTimeStart(string operationTimeStart) { DARABONBA_PTR_SET_VALUE(operationTimeStart_, operationTimeStart) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDesktopMetadataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string searchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeDesktopMetadataRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


  protected:
    std::shared_ptr<string> creationTimeStart_ = nullptr;
    std::shared_ptr<vector<string>> desktopIds_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<bool> includeDesktopGroup_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> operationTimeStart_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> searchRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
