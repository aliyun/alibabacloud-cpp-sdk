// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECALLMANAGEMENTSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListRecallManagementServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecallManagementServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RecallManagementServices, recallManagementServices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecallManagementServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RecallManagementServices, recallManagementServices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecallManagementServicesResponseBody() = default ;
    ListRecallManagementServicesResponseBody(const ListRecallManagementServicesResponseBody &) = default ;
    ListRecallManagementServicesResponseBody(ListRecallManagementServicesResponseBody &&) = default ;
    ListRecallManagementServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecallManagementServicesResponseBody() = default ;
    ListRecallManagementServicesResponseBody& operator=(const ListRecallManagementServicesResponseBody &) = default ;
    ListRecallManagementServicesResponseBody& operator=(ListRecallManagementServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecallManagementServices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecallManagementServices& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentRecallManagementServiceVersionId, currentRecallManagementServiceVersionId_);
        DARABONBA_PTR_TO_JSON(CurrentRecallManagementServiceVersionName, currentRecallManagementServiceVersionName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RecallManagementServiceId, recallManagementServiceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RecallManagementServices& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentRecallManagementServiceVersionId, currentRecallManagementServiceVersionId_);
        DARABONBA_PTR_FROM_JSON(CurrentRecallManagementServiceVersionName, currentRecallManagementServiceVersionName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RecallManagementServiceId, recallManagementServiceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RecallManagementServices() = default ;
      RecallManagementServices(const RecallManagementServices &) = default ;
      RecallManagementServices(RecallManagementServices &&) = default ;
      RecallManagementServices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecallManagementServices() = default ;
      RecallManagementServices& operator=(const RecallManagementServices &) = default ;
      RecallManagementServices& operator=(RecallManagementServices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentRecallManagementServiceVersionId_ == nullptr
        && this->currentRecallManagementServiceVersionName_ == nullptr && this->description_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr
        && this->recallManagementServiceId_ == nullptr && this->status_ == nullptr; };
      // currentRecallManagementServiceVersionId Field Functions 
      bool hasCurrentRecallManagementServiceVersionId() const { return this->currentRecallManagementServiceVersionId_ != nullptr;};
      void deleteCurrentRecallManagementServiceVersionId() { this->currentRecallManagementServiceVersionId_ = nullptr;};
      inline string getCurrentRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(currentRecallManagementServiceVersionId_, "") };
      inline RecallManagementServices& setCurrentRecallManagementServiceVersionId(string currentRecallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(currentRecallManagementServiceVersionId_, currentRecallManagementServiceVersionId) };


      // currentRecallManagementServiceVersionName Field Functions 
      bool hasCurrentRecallManagementServiceVersionName() const { return this->currentRecallManagementServiceVersionName_ != nullptr;};
      void deleteCurrentRecallManagementServiceVersionName() { this->currentRecallManagementServiceVersionName_ = nullptr;};
      inline string getCurrentRecallManagementServiceVersionName() const { DARABONBA_PTR_GET_DEFAULT(currentRecallManagementServiceVersionName_, "") };
      inline RecallManagementServices& setCurrentRecallManagementServiceVersionName(string currentRecallManagementServiceVersionName) { DARABONBA_PTR_SET_VALUE(currentRecallManagementServiceVersionName_, currentRecallManagementServiceVersionName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RecallManagementServices& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline RecallManagementServices& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline RecallManagementServices& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RecallManagementServices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // recallManagementServiceId Field Functions 
      bool hasRecallManagementServiceId() const { return this->recallManagementServiceId_ != nullptr;};
      void deleteRecallManagementServiceId() { this->recallManagementServiceId_ = nullptr;};
      inline string getRecallManagementServiceId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceId_, "") };
      inline RecallManagementServices& setRecallManagementServiceId(string recallManagementServiceId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceId_, recallManagementServiceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RecallManagementServices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> currentRecallManagementServiceVersionId_ {};
      shared_ptr<string> currentRecallManagementServiceVersionName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> recallManagementServiceId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->recallManagementServices_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRecallManagementServicesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecallManagementServicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recallManagementServices Field Functions 
    bool hasRecallManagementServices() const { return this->recallManagementServices_ != nullptr;};
    void deleteRecallManagementServices() { this->recallManagementServices_ = nullptr;};
    inline const vector<ListRecallManagementServicesResponseBody::RecallManagementServices> & getRecallManagementServices() const { DARABONBA_PTR_GET_CONST(recallManagementServices_, vector<ListRecallManagementServicesResponseBody::RecallManagementServices>) };
    inline vector<ListRecallManagementServicesResponseBody::RecallManagementServices> getRecallManagementServices() { DARABONBA_PTR_GET(recallManagementServices_, vector<ListRecallManagementServicesResponseBody::RecallManagementServices>) };
    inline ListRecallManagementServicesResponseBody& setRecallManagementServices(const vector<ListRecallManagementServicesResponseBody::RecallManagementServices> & recallManagementServices) { DARABONBA_PTR_SET_VALUE(recallManagementServices_, recallManagementServices) };
    inline ListRecallManagementServicesResponseBody& setRecallManagementServices(vector<ListRecallManagementServicesResponseBody::RecallManagementServices> && recallManagementServices) { DARABONBA_PTR_SET_RVALUE(recallManagementServices_, recallManagementServices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecallManagementServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListRecallManagementServicesResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListRecallManagementServicesResponseBody::RecallManagementServices>> recallManagementServices_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
