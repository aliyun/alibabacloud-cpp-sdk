// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVENTORYSCHEMAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINVENTORYSCHEMAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetInventorySchemaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInventorySchemaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInventorySchemaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    GetInventorySchemaRequest() = default ;
    GetInventorySchemaRequest(const GetInventorySchemaRequest &) = default ;
    GetInventorySchemaRequest(GetInventorySchemaRequest &&) = default ;
    GetInventorySchemaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInventorySchemaRequest() = default ;
    GetInventorySchemaRequest& operator=(const GetInventorySchemaRequest &) = default ;
    GetInventorySchemaRequest& operator=(GetInventorySchemaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregator_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->typeName_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline bool aggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, false) };
    inline GetInventorySchemaRequest& setAggregator(bool aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetInventorySchemaRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetInventorySchemaRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInventorySchemaRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetInventorySchemaRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    // Specifies whether to return only properties that support the aggregate feature in the configuration list. Valid values:
    // 
    // *   true: only returns properties that support the aggregate feature in the configuration list.
    // *   false: returns all properties in the configuration list.
    std::shared_ptr<bool> aggregator_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The configuration list type name. Valid values:
    // 
    // *   ACS:InstanceInformation
    // *   ACS:Application
    // *   ACS:File
    // *   ACS:Network
    // *   ACS:WindowsRole
    // *   ACS:Service
    // *   ACS:WindowsUpdate
    // *   ACS:WindowsRegistry
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
