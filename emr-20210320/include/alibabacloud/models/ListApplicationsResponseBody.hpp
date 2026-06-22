// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody(ListApplicationsResponseBody &&) = default ;
    ListApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody& operator=(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody& operator=(ListApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(ApplicationState, applicationState_);
        DARABONBA_PTR_TO_JSON(ApplicationVersion, applicationVersion_);
        DARABONBA_PTR_TO_JSON(CommunityVersion, communityVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(ApplicationState, applicationState_);
        DARABONBA_PTR_FROM_JSON(ApplicationVersion, applicationVersion_);
        DARABONBA_PTR_FROM_JSON(CommunityVersion, communityVersion_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->applicationState_ == nullptr && this->applicationVersion_ == nullptr && this->communityVersion_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // applicationState Field Functions 
      bool hasApplicationState() const { return this->applicationState_ != nullptr;};
      void deleteApplicationState() { this->applicationState_ = nullptr;};
      inline string getApplicationState() const { DARABONBA_PTR_GET_DEFAULT(applicationState_, "") };
      inline Applications& setApplicationState(string applicationState) { DARABONBA_PTR_SET_VALUE(applicationState_, applicationState) };


      // applicationVersion Field Functions 
      bool hasApplicationVersion() const { return this->applicationVersion_ != nullptr;};
      void deleteApplicationVersion() { this->applicationVersion_ = nullptr;};
      inline string getApplicationVersion() const { DARABONBA_PTR_GET_DEFAULT(applicationVersion_, "") };
      inline Applications& setApplicationVersion(string applicationVersion) { DARABONBA_PTR_SET_VALUE(applicationVersion_, applicationVersion) };


      // communityVersion Field Functions 
      bool hasCommunityVersion() const { return this->communityVersion_ != nullptr;};
      void deleteCommunityVersion() { this->communityVersion_ = nullptr;};
      inline string getCommunityVersion() const { DARABONBA_PTR_GET_DEFAULT(communityVersion_, "") };
      inline Applications& setCommunityVersion(string communityVersion) { DARABONBA_PTR_SET_VALUE(communityVersion_, communityVersion) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The status of the applications. Valid values:
      // 
      // *   STOPPED: At least one application is in the Stopped state.
      // *   RUNNING: All applications are in the Running state.
      // 
      // This parameter is returned only for DataLake, OLAP, Dataflow, DataServing, and custom clusters. For other types of clusters, no value is returned for this parameter.
      shared_ptr<string> applicationState_ {};
      // The version of the application.
      shared_ptr<string> applicationVersion_ {};
      // The community edition.
      shared_ptr<string> communityVersion_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListApplicationsResponseBody::Applications>) };
    inline vector<ListApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListApplicationsResponseBody::Applications>) };
    inline ListApplicationsResponseBody& setApplications(const vector<ListApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsResponseBody& setApplications(vector<ListApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApplicationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApplicationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The applications.
    shared_ptr<vector<ListApplicationsResponseBody::Applications>> applications_ {};
    // The number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The page number of the next page returned.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
