// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFACESSEARCHINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFACESSEARCHINGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateFacesSearchingTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFacesSearchingTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFacesSearchingTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateFacesSearchingTaskRequest() = default ;
    CreateFacesSearchingTaskRequest(const CreateFacesSearchingTaskRequest &) = default ;
    CreateFacesSearchingTaskRequest(CreateFacesSearchingTaskRequest &&) = default ;
    CreateFacesSearchingTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFacesSearchingTaskRequest() = default ;
    CreateFacesSearchingTaskRequest& operator=(const CreateFacesSearchingTaskRequest &) = default ;
    CreateFacesSearchingTaskRequest& operator=(CreateFacesSearchingTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Sources() = default ;
      Sources(const Sources &) = default ;
      Sources(Sources &&) = default ;
      Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sources() = default ;
      Sources& operator=(const Sources &) = default ;
      Sources& operator=(Sources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->URI_ == nullptr; };
      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The OSS URI of the image.
      // 
      // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->maxResult_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->sources_ == nullptr && this->userData_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateFacesSearchingTaskRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline int64_t getMaxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, 0L) };
    inline CreateFacesSearchingTaskRequest& setMaxResult(int64_t maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateFacesSearchingTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateFacesSearchingTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFacesSearchingTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateFacesSearchingTaskRequest::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateFacesSearchingTaskRequest::Sources>) };
    inline vector<CreateFacesSearchingTaskRequest::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<CreateFacesSearchingTaskRequest::Sources>) };
    inline CreateFacesSearchingTaskRequest& setSources(const vector<CreateFacesSearchingTaskRequest::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateFacesSearchingTaskRequest& setSources(vector<CreateFacesSearchingTaskRequest::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateFacesSearchingTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The number of the most similar faces that you want to return. Valid values: 1 to 100. Default value: 5.
    shared_ptr<int64_t> maxResult_ {};
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The images.
    shared_ptr<vector<CreateFacesSearchingTaskRequest::Sources>> sources_ {};
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum length of the value is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
