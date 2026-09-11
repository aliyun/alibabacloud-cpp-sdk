// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetResourcesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GetResourcesShrinkRequest() = default ;
    GetResourcesShrinkRequest(const GetResourcesShrinkRequest &) = default ;
    GetResourcesShrinkRequest(GetResourcesShrinkRequest &&) = default ;
    GetResourcesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcesShrinkRequest() = default ;
    GetResourcesShrinkRequest& operator=(const GetResourcesShrinkRequest &) = default ;
    GetResourcesShrinkRequest& operator=(GetResourcesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterShrink_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetResourcesShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetResourcesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetResourcesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResourcesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The filter conditions for resources.
    // 
    // Specify multiple key-value pairs in JSON format to filter resources. If a List or Get operation for a cloud product supports filtering by specific properties, you can use those properties as filter conditions for this parameter.
    // 
    // > The supported filter fields may vary for different resource types. For more information about the supported fields, see the OpenAPI documentation for the specific resource.
    // 
    // For example, DBInstance resources support filtering by the `EditionType` and `PaymentType` fields.
    shared_ptr<string> filterShrink_ {};
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
