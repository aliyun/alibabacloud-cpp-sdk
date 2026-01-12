// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENASFILESYSTEMSREQUEST_HPP_
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
  class DescribeNASFileSystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNASFileSystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MatchCompatibleProfile, matchCompatibleProfile_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNASFileSystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MatchCompatibleProfile, matchCompatibleProfile_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeNASFileSystemsRequest() = default ;
    DescribeNASFileSystemsRequest(const DescribeNASFileSystemsRequest &) = default ;
    DescribeNASFileSystemsRequest(DescribeNASFileSystemsRequest &&) = default ;
    DescribeNASFileSystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNASFileSystemsRequest() = default ;
    DescribeNASFileSystemsRequest& operator=(const DescribeNASFileSystemsRequest &) = default ;
    DescribeNASFileSystemsRequest& operator=(DescribeNASFileSystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->matchCompatibleProfile_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline const vector<string> & getFileSystemId() const { DARABONBA_PTR_GET_CONST(fileSystemId_, vector<string>) };
    inline vector<string> getFileSystemId() { DARABONBA_PTR_GET(fileSystemId_, vector<string>) };
    inline DescribeNASFileSystemsRequest& setFileSystemId(const vector<string> & fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };
    inline DescribeNASFileSystemsRequest& setFileSystemId(vector<string> && fileSystemId) { DARABONBA_PTR_SET_RVALUE(fileSystemId_, fileSystemId) };


    // matchCompatibleProfile Field Functions 
    bool hasMatchCompatibleProfile() const { return this->matchCompatibleProfile_ != nullptr;};
    void deleteMatchCompatibleProfile() { this->matchCompatibleProfile_ = nullptr;};
    inline bool getMatchCompatibleProfile() const { DARABONBA_PTR_GET_DEFAULT(matchCompatibleProfile_, false) };
    inline DescribeNASFileSystemsRequest& setMatchCompatibleProfile(bool matchCompatibleProfile) { DARABONBA_PTR_SET_VALUE(matchCompatibleProfile_, matchCompatibleProfile) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNASFileSystemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNASFileSystemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeNASFileSystemsRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNASFileSystemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the NAS file systems.
    shared_ptr<vector<string>> fileSystemId_ {};
    // Specifies whether to include only NAS file systems that support the User Profile Management (UPM) feature in the query results.
    shared_ptr<bool> matchCompatibleProfile_ {};
    // The number of entries to return on each page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query.
    shared_ptr<string> nextToken_ {};
    // The ID of the office network.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
