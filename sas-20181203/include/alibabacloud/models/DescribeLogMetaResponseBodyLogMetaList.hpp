// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMETARESPONSEBODYLOGMETALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMETARESPONSEBODYLOGMETALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogMetaResponseBodyLogMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMetaResponseBodyLogMetaList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeLogMetaResponseBodyLogMetaList& obj) { 
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
    DescribeLogMetaResponseBodyLogMetaList() = default ;
    DescribeLogMetaResponseBodyLogMetaList(const DescribeLogMetaResponseBodyLogMetaList &) = default ;
    DescribeLogMetaResponseBodyLogMetaList(DescribeLogMetaResponseBodyLogMetaList &&) = default ;
    DescribeLogMetaResponseBodyLogMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMetaResponseBodyLogMetaList() = default ;
    DescribeLogMetaResponseBodyLogMetaList& operator=(const DescribeLogMetaResponseBodyLogMetaList &) = default ;
    DescribeLogMetaResponseBodyLogMetaList& operator=(DescribeLogMetaResponseBodyLogMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->hotTtl_ != nullptr && this->logDesc_ != nullptr && this->logStore_ != nullptr && this->project_ != nullptr && this->status_ != nullptr
        && this->topic_ != nullptr && this->ttl_ != nullptr && this->userLogStore_ != nullptr && this->userProject_ != nullptr && this->userRegion_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // hotTtl Field Functions 
    bool hasHotTtl() const { return this->hotTtl_ != nullptr;};
    void deleteHotTtl() { this->hotTtl_ = nullptr;};
    inline int32_t hotTtl() const { DARABONBA_PTR_GET_DEFAULT(hotTtl_, 0) };
    inline DescribeLogMetaResponseBodyLogMetaList& setHotTtl(int32_t hotTtl) { DARABONBA_PTR_SET_VALUE(hotTtl_, hotTtl) };


    // logDesc Field Functions 
    bool hasLogDesc() const { return this->logDesc_ != nullptr;};
    void deleteLogDesc() { this->logDesc_ = nullptr;};
    inline string logDesc() const { DARABONBA_PTR_GET_DEFAULT(logDesc_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setLogDesc(string logDesc) { DARABONBA_PTR_SET_VALUE(logDesc_, logDesc) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeLogMetaResponseBodyLogMetaList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // userLogStore Field Functions 
    bool hasUserLogStore() const { return this->userLogStore_ != nullptr;};
    void deleteUserLogStore() { this->userLogStore_ = nullptr;};
    inline string userLogStore() const { DARABONBA_PTR_GET_DEFAULT(userLogStore_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setUserLogStore(string userLogStore) { DARABONBA_PTR_SET_VALUE(userLogStore_, userLogStore) };


    // userProject Field Functions 
    bool hasUserProject() const { return this->userProject_ != nullptr;};
    void deleteUserProject() { this->userProject_ = nullptr;};
    inline string userProject() const { DARABONBA_PTR_GET_DEFAULT(userProject_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setUserProject(string userProject) { DARABONBA_PTR_SET_VALUE(userProject_, userProject) };


    // userRegion Field Functions 
    bool hasUserRegion() const { return this->userRegion_ != nullptr;};
    void deleteUserRegion() { this->userRegion_ = nullptr;};
    inline string userRegion() const { DARABONBA_PTR_GET_DEFAULT(userRegion_, "") };
    inline DescribeLogMetaResponseBodyLogMetaList& setUserRegion(string userRegion) { DARABONBA_PTR_SET_VALUE(userRegion_, userRegion) };


  protected:
    // The category of logs. Valid values:
    // 
    // *   **host**
    // *   **security**
    std::shared_ptr<string> category_ = nullptr;
    // The time period after which logs in hot storage are moved to cold storage. Unit: days.
    // 
    // >  If the value is -1, logs that are stored in hot storage are not moved to cold storage.
    std::shared_ptr<int32_t> hotTtl_ = nullptr;
    // The name of the log type.
    std::shared_ptr<string> logDesc_ = nullptr;
    // The name of the dedicated Logstore in which logs are stored.
    std::shared_ptr<string> logStore_ = nullptr;
    // The name of the project.
    std::shared_ptr<string> project_ = nullptr;
    // The status of the log analysis feature. Valid values:
    // 
    // *   **disabled**
    // *   **enabled**
    std::shared_ptr<string> status_ = nullptr;
    // The topic of logs that are delivered.
    std::shared_ptr<string> topic_ = nullptr;
    // The number of days during which logs can be retained.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The name of the dedicated Logstore in which user logs are stored.
    std::shared_ptr<string> userLogStore_ = nullptr;
    // The name of the dedicated project in which logs are stored.
    std::shared_ptr<string> userProject_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> userRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
