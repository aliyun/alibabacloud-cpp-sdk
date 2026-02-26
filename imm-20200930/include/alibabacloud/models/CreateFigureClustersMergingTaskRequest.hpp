// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIGURECLUSTERSMERGINGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIGURECLUSTERSMERGINGTASKREQUEST_HPP_
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
  class CreateFigureClustersMergingTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFigureClustersMergingTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Froms, froms_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFigureClustersMergingTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Froms, froms_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateFigureClustersMergingTaskRequest() = default ;
    CreateFigureClustersMergingTaskRequest(const CreateFigureClustersMergingTaskRequest &) = default ;
    CreateFigureClustersMergingTaskRequest(CreateFigureClustersMergingTaskRequest &&) = default ;
    CreateFigureClustersMergingTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFigureClustersMergingTaskRequest() = default ;
    CreateFigureClustersMergingTaskRequest& operator=(const CreateFigureClustersMergingTaskRequest &) = default ;
    CreateFigureClustersMergingTaskRequest& operator=(CreateFigureClustersMergingTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->from_ == nullptr && this->froms_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->tags_ == nullptr
        && this->to_ == nullptr && this->userData_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateFigureClustersMergingTaskRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline CreateFigureClustersMergingTaskRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // froms Field Functions 
    bool hasFroms() const { return this->froms_ != nullptr;};
    void deleteFroms() { this->froms_ = nullptr;};
    inline const vector<string> & getFroms() const { DARABONBA_PTR_GET_CONST(froms_, vector<string>) };
    inline vector<string> getFroms() { DARABONBA_PTR_GET(froms_, vector<string>) };
    inline CreateFigureClustersMergingTaskRequest& setFroms(const vector<string> & froms) { DARABONBA_PTR_SET_VALUE(froms_, froms) };
    inline CreateFigureClustersMergingTaskRequest& setFroms(vector<string> && froms) { DARABONBA_PTR_SET_RVALUE(froms_, froms) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateFigureClustersMergingTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateFigureClustersMergingTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFigureClustersMergingTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateFigureClustersMergingTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateFigureClustersMergingTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline CreateFigureClustersMergingTaskRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateFigureClustersMergingTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the dataset. For more information, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The ID of the source group. You must specify either From or Froms, but not both.
    shared_ptr<string> from_ {};
    // The IDs of source clustering groups. You must specify either From or Froms, but not both. You can specify up to 100 task IDs.
    shared_ptr<vector<string>> froms_ {};
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The custom tags, which can be used to search for and filter asynchronous tasks.
    Darabonba::Json tags_ {};
    // The ID of the destination clustering group.
    // 
    // This parameter is required.
    shared_ptr<string> to_ {};
    // The custom data, which is returned in an asynchronous notification and facilitates notification management. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
