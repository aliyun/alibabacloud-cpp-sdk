// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesRequest& obj) { 
      DARABONBA_ANY_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetResourcesRequest() = default ;
    GetResourcesRequest(const GetResourcesRequest &) = default ;
    GetResourcesRequest(GetResourcesRequest &&) = default ;
    GetResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesRequest() = default ;
    GetResourcesRequest& operator=(const GetResourcesRequest &) = default ;
    GetResourcesRequest& operator=(GetResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline     const Darabonba::Json & filter() const { DARABONBA_GET(filter_) };
    Darabonba::Json & filter() { DARABONBA_GET(filter_) };
    inline GetResourcesRequest& setFilter(const Darabonba::Json & filter) { DARABONBA_SET_VALUE(filter_, filter) };
    inline GetResourcesRequest& setFilter(Darabonba::Json & filter) { DARABONBA_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The filter condition. The JSON format. You can use some resource properties as filter conditions.
    Darabonba::Json filter_ = nullptr;
    // The number of entries per page. Maximum value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region. This parameter is required if the cloud product is deployed in a region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
