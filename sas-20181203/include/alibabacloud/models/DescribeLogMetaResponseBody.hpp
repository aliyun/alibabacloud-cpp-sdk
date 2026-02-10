// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogMetaList, logMetaList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLogMetaResponseBody() = default ;
    DescribeLogMetaResponseBody(const DescribeLogMetaResponseBody &) = default ;
    DescribeLogMetaResponseBody(DescribeLogMetaResponseBody &&) = default ;
    DescribeLogMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMetaResponseBody() = default ;
    DescribeLogMetaResponseBody& operator=(const DescribeLogMetaResponseBody &) = default ;
    DescribeLogMetaResponseBody& operator=(DescribeLogMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogMetaList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogMetaList& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(HotTtl, hotTtl_);
        DARABONBA_PTR_TO_JSON(LogDesc, logDesc_);
        DARABONBA_PTR_TO_JSON(LogStore, logStore_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(UserLogStore, userLogStore_);
        DARABONBA_PTR_TO_JSON(UserProject, userProject_);
        DARABONBA_PTR_TO_JSON(UserRegion, userRegion_);
      };
      friend void from_json(const Darabonba::Json& j, LogMetaList& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(HotTtl, hotTtl_);
        DARABONBA_PTR_FROM_JSON(LogDesc, logDesc_);
        DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(UserLogStore, userLogStore_);
        DARABONBA_PTR_FROM_JSON(UserProject, userProject_);
        DARABONBA_PTR_FROM_JSON(UserRegion, userRegion_);
      };
      LogMetaList() = default ;
      LogMetaList(const LogMetaList &) = default ;
      LogMetaList(LogMetaList &&) = default ;
      LogMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogMetaList() = default ;
      LogMetaList& operator=(const LogMetaList &) = default ;
      LogMetaList& operator=(LogMetaList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->hotTtl_ == nullptr && this->logDesc_ == nullptr && this->logStore_ == nullptr && this->project_ == nullptr && this->status_ == nullptr
        && this->topic_ == nullptr && this->ttl_ == nullptr && this->userLogStore_ == nullptr && this->userProject_ == nullptr && this->userRegion_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline LogMetaList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // hotTtl Field Functions 
      bool hasHotTtl() const { return this->hotTtl_ != nullptr;};
      void deleteHotTtl() { this->hotTtl_ = nullptr;};
      inline int32_t getHotTtl() const { DARABONBA_PTR_GET_DEFAULT(hotTtl_, 0) };
      inline LogMetaList& setHotTtl(int32_t hotTtl) { DARABONBA_PTR_SET_VALUE(hotTtl_, hotTtl) };


      // logDesc Field Functions 
      bool hasLogDesc() const { return this->logDesc_ != nullptr;};
      void deleteLogDesc() { this->logDesc_ = nullptr;};
      inline string getLogDesc() const { DARABONBA_PTR_GET_DEFAULT(logDesc_, "") };
      inline LogMetaList& setLogDesc(string logDesc) { DARABONBA_PTR_SET_VALUE(logDesc_, logDesc) };


      // logStore Field Functions 
      bool hasLogStore() const { return this->logStore_ != nullptr;};
      void deleteLogStore() { this->logStore_ = nullptr;};
      inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
      inline LogMetaList& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline LogMetaList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline LogMetaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline LogMetaList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline LogMetaList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // userLogStore Field Functions 
      bool hasUserLogStore() const { return this->userLogStore_ != nullptr;};
      void deleteUserLogStore() { this->userLogStore_ = nullptr;};
      inline string getUserLogStore() const { DARABONBA_PTR_GET_DEFAULT(userLogStore_, "") };
      inline LogMetaList& setUserLogStore(string userLogStore) { DARABONBA_PTR_SET_VALUE(userLogStore_, userLogStore) };


      // userProject Field Functions 
      bool hasUserProject() const { return this->userProject_ != nullptr;};
      void deleteUserProject() { this->userProject_ = nullptr;};
      inline string getUserProject() const { DARABONBA_PTR_GET_DEFAULT(userProject_, "") };
      inline LogMetaList& setUserProject(string userProject) { DARABONBA_PTR_SET_VALUE(userProject_, userProject) };


      // userRegion Field Functions 
      bool hasUserRegion() const { return this->userRegion_ != nullptr;};
      void deleteUserRegion() { this->userRegion_ = nullptr;};
      inline string getUserRegion() const { DARABONBA_PTR_GET_DEFAULT(userRegion_, "") };
      inline LogMetaList& setUserRegion(string userRegion) { DARABONBA_PTR_SET_VALUE(userRegion_, userRegion) };


    protected:
      // The category of logs. Valid values:
      // 
      // *   **host**
      // *   **security**
      shared_ptr<string> category_ {};
      // The time period after which logs in hot storage are moved to cold storage. Unit: days.
      // 
      // >  If the value is -1, logs that are stored in hot storage are not moved to cold storage.
      shared_ptr<int32_t> hotTtl_ {};
      // The name of the log type.
      shared_ptr<string> logDesc_ {};
      // The name of the dedicated Logstore in which logs are stored.
      shared_ptr<string> logStore_ {};
      // The name of the project.
      shared_ptr<string> project_ {};
      // The status of the log analysis feature. Valid values:
      // 
      // *   **disabled**
      // *   **enabled**
      shared_ptr<string> status_ {};
      // The topic of logs that are delivered.
      shared_ptr<string> topic_ {};
      // The number of days during which logs can be retained.
      shared_ptr<int32_t> ttl_ {};
      // The name of the dedicated Logstore in which user logs are stored.
      shared_ptr<string> userLogStore_ {};
      // The name of the dedicated project in which logs are stored.
      shared_ptr<string> userProject_ {};
      // The ID of the region.
      shared_ptr<string> userRegion_ {};
    };

    virtual bool empty() const override { return this->logMetaList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // logMetaList Field Functions 
    bool hasLogMetaList() const { return this->logMetaList_ != nullptr;};
    void deleteLogMetaList() { this->logMetaList_ = nullptr;};
    inline const vector<DescribeLogMetaResponseBody::LogMetaList> & getLogMetaList() const { DARABONBA_PTR_GET_CONST(logMetaList_, vector<DescribeLogMetaResponseBody::LogMetaList>) };
    inline vector<DescribeLogMetaResponseBody::LogMetaList> getLogMetaList() { DARABONBA_PTR_GET(logMetaList_, vector<DescribeLogMetaResponseBody::LogMetaList>) };
    inline DescribeLogMetaResponseBody& setLogMetaList(const vector<DescribeLogMetaResponseBody::LogMetaList> & logMetaList) { DARABONBA_PTR_SET_VALUE(logMetaList_, logMetaList) };
    inline DescribeLogMetaResponseBody& setLogMetaList(vector<DescribeLogMetaResponseBody::LogMetaList> && logMetaList) { DARABONBA_PTR_SET_RVALUE(logMetaList_, logMetaList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLogMetaResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of the configurations of the log analysis feature.
    shared_ptr<vector<DescribeLogMetaResponseBody::LogMetaList>> logMetaList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
