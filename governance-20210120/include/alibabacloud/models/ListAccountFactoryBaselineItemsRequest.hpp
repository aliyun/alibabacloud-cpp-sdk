// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselineItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselineItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselineItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    ListAccountFactoryBaselineItemsRequest() = default ;
    ListAccountFactoryBaselineItemsRequest(const ListAccountFactoryBaselineItemsRequest &) = default ;
    ListAccountFactoryBaselineItemsRequest(ListAccountFactoryBaselineItemsRequest &&) = default ;
    ListAccountFactoryBaselineItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselineItemsRequest() = default ;
    ListAccountFactoryBaselineItemsRequest& operator=(const ListAccountFactoryBaselineItemsRequest &) = default ;
    ListAccountFactoryBaselineItemsRequest& operator=(ListAccountFactoryBaselineItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->names_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->type_ == nullptr && this->versions_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccountFactoryBaselineItemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline const vector<string> & getNames() const { DARABONBA_PTR_GET_CONST(names_, vector<string>) };
    inline vector<string> getNames() { DARABONBA_PTR_GET(names_, vector<string>) };
    inline ListAccountFactoryBaselineItemsRequest& setNames(const vector<string> & names) { DARABONBA_PTR_SET_VALUE(names_, names) };
    inline ListAccountFactoryBaselineItemsRequest& setNames(vector<string> && names) { DARABONBA_PTR_SET_RVALUE(names_, names) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccountFactoryBaselineItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAccountFactoryBaselineItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAccountFactoryBaselineItemsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline ListAccountFactoryBaselineItemsRequest& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline ListAccountFactoryBaselineItemsRequest& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The names of the baseline items.
    shared_ptr<vector<string>> names_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The type of the baseline items.
    shared_ptr<string> type_ {};
    // The versions of the baseline items.
    shared_ptr<vector<string>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
