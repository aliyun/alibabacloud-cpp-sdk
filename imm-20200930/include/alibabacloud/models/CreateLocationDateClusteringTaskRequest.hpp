// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Notification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateLocationDateClusteringTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocationDateClusteringTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DateOptions, dateOptions_);
      DARABONBA_PTR_TO_JSON(LocationOptions, locationOptions_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocationDateClusteringTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DateOptions, dateOptions_);
      DARABONBA_PTR_FROM_JSON(LocationOptions, locationOptions_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateLocationDateClusteringTaskRequest() = default ;
    CreateLocationDateClusteringTaskRequest(const CreateLocationDateClusteringTaskRequest &) = default ;
    CreateLocationDateClusteringTaskRequest(CreateLocationDateClusteringTaskRequest &&) = default ;
    CreateLocationDateClusteringTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocationDateClusteringTaskRequest() = default ;
    CreateLocationDateClusteringTaskRequest& operator=(const CreateLocationDateClusteringTaskRequest &) = default ;
    CreateLocationDateClusteringTaskRequest& operator=(CreateLocationDateClusteringTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LocationOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LocationOptions& obj) { 
        DARABONBA_PTR_TO_JSON(LocationDateClusterLevels, locationDateClusterLevels_);
      };
      friend void from_json(const Darabonba::Json& j, LocationOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(LocationDateClusterLevels, locationDateClusterLevels_);
      };
      LocationOptions() = default ;
      LocationOptions(const LocationOptions &) = default ;
      LocationOptions(LocationOptions &&) = default ;
      LocationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LocationOptions() = default ;
      LocationOptions& operator=(const LocationOptions &) = default ;
      LocationOptions& operator=(LocationOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->locationDateClusterLevels_ == nullptr; };
      // locationDateClusterLevels Field Functions 
      bool hasLocationDateClusterLevels() const { return this->locationDateClusterLevels_ != nullptr;};
      void deleteLocationDateClusterLevels() { this->locationDateClusterLevels_ = nullptr;};
      inline const vector<string> & getLocationDateClusterLevels() const { DARABONBA_PTR_GET_CONST(locationDateClusterLevels_, vector<string>) };
      inline vector<string> getLocationDateClusterLevels() { DARABONBA_PTR_GET(locationDateClusterLevels_, vector<string>) };
      inline LocationOptions& setLocationDateClusterLevels(const vector<string> & locationDateClusterLevels) { DARABONBA_PTR_SET_VALUE(locationDateClusterLevels_, locationDateClusterLevels) };
      inline LocationOptions& setLocationDateClusterLevels(vector<string> && locationDateClusterLevels) { DARABONBA_PTR_SET_RVALUE(locationDateClusterLevels_, locationDateClusterLevels) };


    protected:
      // The administrative division levels. You can specify multiple administrative division levels.
      // 
      // For example, you uploaded photos that were taken from March 3, 2024 to March 5, 2024 in Hangzhou and photos that were taken from March 6, 2024 to March 8, 2024 in Jiaxing. When you call the operation and set the parameter to `["city", "province"]`, the following spatiotemporal clusters are created from these photos:
      // 
      // *   March 3, 2024 to March 5, 2024, Hangzhou
      // *   March 6, 2024 to March 8, 2024, Jiaxing
      // *   March 3, 2024 to March 8, 2024, Zhejiang
      // 
      // This parameter is required.
      shared_ptr<vector<string>> locationDateClusterLevels_ {};
    };

    class DateOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DateOptions& obj) { 
        DARABONBA_PTR_TO_JSON(GapDays, gapDays_);
        DARABONBA_PTR_TO_JSON(MaxDays, maxDays_);
        DARABONBA_PTR_TO_JSON(MinDays, minDays_);
      };
      friend void from_json(const Darabonba::Json& j, DateOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(GapDays, gapDays_);
        DARABONBA_PTR_FROM_JSON(MaxDays, maxDays_);
        DARABONBA_PTR_FROM_JSON(MinDays, minDays_);
      };
      DateOptions() = default ;
      DateOptions(const DateOptions &) = default ;
      DateOptions(DateOptions &&) = default ;
      DateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DateOptions() = default ;
      DateOptions& operator=(const DateOptions &) = default ;
      DateOptions& operator=(DateOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gapDays_ == nullptr
        && this->maxDays_ == nullptr && this->minDays_ == nullptr; };
      // gapDays Field Functions 
      bool hasGapDays() const { return this->gapDays_ != nullptr;};
      void deleteGapDays() { this->gapDays_ = nullptr;};
      inline int64_t getGapDays() const { DARABONBA_PTR_GET_DEFAULT(gapDays_, 0L) };
      inline DateOptions& setGapDays(int64_t gapDays) { DARABONBA_PTR_SET_VALUE(gapDays_, gapDays) };


      // maxDays Field Functions 
      bool hasMaxDays() const { return this->maxDays_ != nullptr;};
      void deleteMaxDays() { this->maxDays_ = nullptr;};
      inline int64_t getMaxDays() const { DARABONBA_PTR_GET_DEFAULT(maxDays_, 0L) };
      inline DateOptions& setMaxDays(int64_t maxDays) { DARABONBA_PTR_SET_VALUE(maxDays_, maxDays) };


      // minDays Field Functions 
      bool hasMinDays() const { return this->minDays_ != nullptr;};
      void deleteMinDays() { this->minDays_ = nullptr;};
      inline int64_t getMinDays() const { DARABONBA_PTR_GET_DEFAULT(minDays_, 0L) };
      inline DateOptions& setMinDays(int64_t minDays) { DARABONBA_PTR_SET_VALUE(minDays_, minDays) };


    protected:
      // The maximum number of days allowed in a gap for a single spatiotemporal cluster. Valid values: 0 to 99999.
      // 
      // For example, if travel photos were produced on March 4, 5, and 7, 2024, but not on Marh 6, 2024, and you set the parameter to 1, IMM considers the travel spanning the date range from March 4, 2024 to March 7, 2024 and includes photos within the data range in the same cluster.````
      // 
      // We recommend that you set the parameter to a value within the range from 0 to 3.
      // 
      // This parameter is required.
      shared_ptr<int64_t> gapDays_ {};
      // The maximum number of days that a single spatiotemporal cluster can span. Valid values: 1 to 99999. IMM does not create a cluster that spans more than the maximum number of days.
      // 
      // For example, if you want to create travel photo clusters, you may want to exclude photos that were taken within 15 consecutive days in the same city, because it is likely that these photos were not taken during a travel. In this case, you can set the parameter to 15 to exclude this time range and location from the clustering task.
      // 
      // This parameter is required.
      shared_ptr<int64_t> maxDays_ {};
      // The minimum number of days that a single spatiotemporal cluster can span. Valid values: 1 to 99999. IMM does not create a cluster that spans less than the minimum number of days.
      // 
      // For example, if you do not want a one-day tour cluster, you can set the parameter to 2.
      // 
      // This parameter is required.
      shared_ptr<int64_t> minDays_ {};
    };

    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->dateOptions_ == nullptr && this->locationOptions_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->tags_ == nullptr
        && this->userData_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateLocationDateClusteringTaskRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // dateOptions Field Functions 
    bool hasDateOptions() const { return this->dateOptions_ != nullptr;};
    void deleteDateOptions() { this->dateOptions_ = nullptr;};
    inline const CreateLocationDateClusteringTaskRequest::DateOptions & getDateOptions() const { DARABONBA_PTR_GET_CONST(dateOptions_, CreateLocationDateClusteringTaskRequest::DateOptions) };
    inline CreateLocationDateClusteringTaskRequest::DateOptions getDateOptions() { DARABONBA_PTR_GET(dateOptions_, CreateLocationDateClusteringTaskRequest::DateOptions) };
    inline CreateLocationDateClusteringTaskRequest& setDateOptions(const CreateLocationDateClusteringTaskRequest::DateOptions & dateOptions) { DARABONBA_PTR_SET_VALUE(dateOptions_, dateOptions) };
    inline CreateLocationDateClusteringTaskRequest& setDateOptions(CreateLocationDateClusteringTaskRequest::DateOptions && dateOptions) { DARABONBA_PTR_SET_RVALUE(dateOptions_, dateOptions) };


    // locationOptions Field Functions 
    bool hasLocationOptions() const { return this->locationOptions_ != nullptr;};
    void deleteLocationOptions() { this->locationOptions_ = nullptr;};
    inline const CreateLocationDateClusteringTaskRequest::LocationOptions & getLocationOptions() const { DARABONBA_PTR_GET_CONST(locationOptions_, CreateLocationDateClusteringTaskRequest::LocationOptions) };
    inline CreateLocationDateClusteringTaskRequest::LocationOptions getLocationOptions() { DARABONBA_PTR_GET(locationOptions_, CreateLocationDateClusteringTaskRequest::LocationOptions) };
    inline CreateLocationDateClusteringTaskRequest& setLocationOptions(const CreateLocationDateClusteringTaskRequest::LocationOptions & locationOptions) { DARABONBA_PTR_SET_VALUE(locationOptions_, locationOptions) };
    inline CreateLocationDateClusteringTaskRequest& setLocationOptions(CreateLocationDateClusteringTaskRequest::LocationOptions && locationOptions) { DARABONBA_PTR_SET_RVALUE(locationOptions_, locationOptions) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateLocationDateClusteringTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateLocationDateClusteringTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateLocationDateClusteringTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateLocationDateClusteringTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateLocationDateClusteringTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateLocationDateClusteringTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The date configurations for clustering.
    // 
    // >  Adjusting these configurations affects existing spatiotemporal clusters for the dataset.
    // 
    // This parameter is required.
    shared_ptr<CreateLocationDateClusteringTaskRequest::DateOptions> dateOptions_ {};
    // The geolocation configurations for clustering.
    // 
    // >  Adjusting these configurations affects existing spatiotemporal clusters for the dataset.
    // 
    // This parameter is required.
    shared_ptr<CreateLocationDateClusteringTaskRequest::LocationOptions> locationOptions_ {};
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    Darabonba::Json tags_ {};
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum length of the value is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
