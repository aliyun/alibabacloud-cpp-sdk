// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESREQUEST_HPP_
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
  class DescribeVirtualMFADevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualMFADevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualMFADevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeVirtualMFADevicesRequest() = default ;
    DescribeVirtualMFADevicesRequest(const DescribeVirtualMFADevicesRequest &) = default ;
    DescribeVirtualMFADevicesRequest(DescribeVirtualMFADevicesRequest &&) = default ;
    DescribeVirtualMFADevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualMFADevicesRequest() = default ;
    DescribeVirtualMFADevicesRequest& operator=(const DescribeVirtualMFADevicesRequest &) = default ;
    DescribeVirtualMFADevicesRequest& operator=(DescribeVirtualMFADevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline DescribeVirtualMFADevicesRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline DescribeVirtualMFADevicesRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DescribeVirtualMFADevicesRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeVirtualMFADevicesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVirtualMFADevicesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeVirtualMFADevicesRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVirtualMFADevicesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The names of the AD users.
    shared_ptr<vector<string>> endUserId_ {};
    shared_ptr<string> filter_ {};
    // The number of entries per page. Valid values: 1 to 500. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The ID of the workspace.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
