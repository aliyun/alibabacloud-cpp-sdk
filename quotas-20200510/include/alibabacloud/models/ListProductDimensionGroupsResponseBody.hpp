// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTDIMENSIONGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTDIMENSIONGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductDimensionGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductDimensionGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionGroups, dimensionGroups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductDimensionGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionGroups, dimensionGroups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductDimensionGroupsResponseBody() = default ;
    ListProductDimensionGroupsResponseBody(const ListProductDimensionGroupsResponseBody &) = default ;
    ListProductDimensionGroupsResponseBody(ListProductDimensionGroupsResponseBody &&) = default ;
    ListProductDimensionGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductDimensionGroupsResponseBody() = default ;
    ListProductDimensionGroupsResponseBody& operator=(const ListProductDimensionGroupsResponseBody &) = default ;
    ListProductDimensionGroupsResponseBody& operator=(ListProductDimensionGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DimensionGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DimensionGroups& obj) { 
        DARABONBA_PTR_TO_JSON(DimensionKeys, dimensionKeys_);
        DARABONBA_PTR_TO_JSON(GroupCode, groupCode_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      };
      friend void from_json(const Darabonba::Json& j, DimensionGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(DimensionKeys, dimensionKeys_);
        DARABONBA_PTR_FROM_JSON(GroupCode, groupCode_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      };
      DimensionGroups() = default ;
      DimensionGroups(const DimensionGroups &) = default ;
      DimensionGroups(DimensionGroups &&) = default ;
      DimensionGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DimensionGroups() = default ;
      DimensionGroups& operator=(const DimensionGroups &) = default ;
      DimensionGroups& operator=(DimensionGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dimensionKeys_ == nullptr
        && this->groupCode_ == nullptr && this->groupName_ == nullptr && this->productCode_ == nullptr; };
      // dimensionKeys Field Functions 
      bool hasDimensionKeys() const { return this->dimensionKeys_ != nullptr;};
      void deleteDimensionKeys() { this->dimensionKeys_ = nullptr;};
      inline const vector<string> & getDimensionKeys() const { DARABONBA_PTR_GET_CONST(dimensionKeys_, vector<string>) };
      inline vector<string> getDimensionKeys() { DARABONBA_PTR_GET(dimensionKeys_, vector<string>) };
      inline DimensionGroups& setDimensionKeys(const vector<string> & dimensionKeys) { DARABONBA_PTR_SET_VALUE(dimensionKeys_, dimensionKeys) };
      inline DimensionGroups& setDimensionKeys(vector<string> && dimensionKeys) { DARABONBA_PTR_SET_RVALUE(dimensionKeys_, dimensionKeys) };


      // groupCode Field Functions 
      bool hasGroupCode() const { return this->groupCode_ != nullptr;};
      void deleteGroupCode() { this->groupCode_ = nullptr;};
      inline string getGroupCode() const { DARABONBA_PTR_GET_DEFAULT(groupCode_, "") };
      inline DimensionGroups& setGroupCode(string groupCode) { DARABONBA_PTR_SET_VALUE(groupCode_, groupCode) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DimensionGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline DimensionGroups& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    protected:
      // The keys of the dimension group.
      shared_ptr<vector<string>> dimensionKeys_ {};
      // The code of the dimension group.
      shared_ptr<string> groupCode_ {};
      // The name of the dimension group.
      shared_ptr<string> groupName_ {};
      // The code of the Alibaba Cloud service.
      shared_ptr<string> productCode_ {};
    };

    virtual bool empty() const override { return this->dimensionGroups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dimensionGroups Field Functions 
    bool hasDimensionGroups() const { return this->dimensionGroups_ != nullptr;};
    void deleteDimensionGroups() { this->dimensionGroups_ = nullptr;};
    inline const vector<ListProductDimensionGroupsResponseBody::DimensionGroups> & getDimensionGroups() const { DARABONBA_PTR_GET_CONST(dimensionGroups_, vector<ListProductDimensionGroupsResponseBody::DimensionGroups>) };
    inline vector<ListProductDimensionGroupsResponseBody::DimensionGroups> getDimensionGroups() { DARABONBA_PTR_GET(dimensionGroups_, vector<ListProductDimensionGroupsResponseBody::DimensionGroups>) };
    inline ListProductDimensionGroupsResponseBody& setDimensionGroups(const vector<ListProductDimensionGroupsResponseBody::DimensionGroups> & dimensionGroups) { DARABONBA_PTR_SET_VALUE(dimensionGroups_, dimensionGroups) };
    inline ListProductDimensionGroupsResponseBody& setDimensionGroups(vector<ListProductDimensionGroupsResponseBody::DimensionGroups> && dimensionGroups) { DARABONBA_PTR_SET_RVALUE(dimensionGroups_, dimensionGroups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductDimensionGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductDimensionGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductDimensionGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductDimensionGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The dimension groups.
    shared_ptr<vector<ListProductDimensionGroupsResponseBody::DimensionGroups>> dimensionGroups_ {};
    // The maximum number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position where the returned query results end. An empty value indicates that all data is returned.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries that match the query.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
