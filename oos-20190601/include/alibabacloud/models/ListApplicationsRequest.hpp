// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    ListApplicationsRequest() = default ;
    ListApplicationsRequest(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest(ListApplicationsRequest &&) = default ;
    ListApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsRequest() = default ;
    ListApplicationsRequest& operator=(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest& operator=(ListApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->names_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->tags_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline ListApplicationsRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string getNames() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline ListApplicationsRequest& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListApplicationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline ListApplicationsRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListApplicationsRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The type of the application.
    // 
    // Valid values:
    // 
    // *   ComputeNest
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Custom
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DingTalk
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> applicationType_ {};
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The name of the application.
    shared_ptr<string> name_ {};
    // The names of the applications.
    shared_ptr<string> names_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID. Set the value to cn-hangzhou.
    shared_ptr<string> regionId_ {};
    // The tags.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
