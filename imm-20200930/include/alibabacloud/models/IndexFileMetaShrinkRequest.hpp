// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXFILEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INDEXFILEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class IndexFileMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(File, fileShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, IndexFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(File, fileShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    IndexFileMetaShrinkRequest() = default ;
    IndexFileMetaShrinkRequest(const IndexFileMetaShrinkRequest &) = default ;
    IndexFileMetaShrinkRequest(IndexFileMetaShrinkRequest &&) = default ;
    IndexFileMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexFileMetaShrinkRequest() = default ;
    IndexFileMetaShrinkRequest& operator=(const IndexFileMetaShrinkRequest &) = default ;
    IndexFileMetaShrinkRequest& operator=(IndexFileMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->fileShrink_ == nullptr && this->notificationShrink_ == nullptr && this->projectName_ == nullptr && this->userData_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline IndexFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // fileShrink Field Functions 
    bool hasFileShrink() const { return this->fileShrink_ != nullptr;};
    void deleteFileShrink() { this->fileShrink_ = nullptr;};
    inline string getFileShrink() const { DARABONBA_PTR_GET_DEFAULT(fileShrink_, "") };
    inline IndexFileMetaShrinkRequest& setFileShrink(string fileShrink) { DARABONBA_PTR_SET_VALUE(fileShrink_, fileShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline IndexFileMetaShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline IndexFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline IndexFileMetaShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the dataset. To get the dataset name, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The file to be indexed, in JSON format. For more information, see the struct definition.
    // 
    // This parameter is required.
    shared_ptr<string> fileShrink_ {};
    // The message notification configuration. For more information, see Notification. For the format of the asynchronous notification message, see the Metadata Indexing section in [Asynchronous notification message formats](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // The name of the project. To get the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // Custom information that is returned in the asynchronous notification message. This helps you associate the notification with your services. The maximum length is 2048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
