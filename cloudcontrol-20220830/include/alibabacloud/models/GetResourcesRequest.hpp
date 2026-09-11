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
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline     const Darabonba::Json & getFilter() const { DARABONBA_GET(filter_) };
    Darabonba::Json & getFilter() { DARABONBA_GET(filter_) };
    inline GetResourcesRequest& setFilter(const Darabonba::Json & filter) { DARABONBA_SET_VALUE(filter_, filter) };
    inline GetResourcesRequest& setFilter(Darabonba::Json && filter) { DARABONBA_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The filter conditions for resources.
    // 
    // Specify multiple key-value pairs in JSON format to filter resources. If a List or Get operation for a cloud product supports filtering by specific properties, you can use those properties as filter conditions for this parameter.
    // 
    // > The supported filter fields may vary for different resource types. For more information about the supported fields, see the OpenAPI documentation for the specific resource.
    // 
    // For example, DBInstance resources support filtering by the `EditionType` and `PaymentType` fields.
    Darabonba::Json filter_ {};
    // The maximum number of records to return on each page for a paged query. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    // 
    // - You do not need to specify this parameter for the first query. The system returns data from the first page.
    // 
    // - For subsequent queries, set this parameter to the nextToken value returned from the previous call.
    // 
    // > If this parameter contains only digits, Cloud Control API treats it as the `PageNumber` for paging.
    shared_ptr<string> nextToken_ {};
    // The region ID. This parameter is required if the cloud product is region-specific.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
