// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEPUSHSTATUSESRESPONSEBODYPUSHSTATUSES_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEPUSHSTATUSESRESPONSEBODYPUSHSTATUSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListFilePushStatusesResponseBodyPushStatuses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFilePushStatusesResponseBodyPushStatuses& obj) { 
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(PushTime, pushTime_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListFilePushStatusesResponseBodyPushStatuses& obj) { 
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(PushTime, pushTime_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDescription, statusDescription_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListFilePushStatusesResponseBodyPushStatuses() = default ;
    ListFilePushStatusesResponseBodyPushStatuses(const ListFilePushStatusesResponseBodyPushStatuses &) = default ;
    ListFilePushStatusesResponseBodyPushStatuses(ListFilePushStatusesResponseBodyPushStatuses &&) = default ;
    ListFilePushStatusesResponseBodyPushStatuses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFilePushStatusesResponseBodyPushStatuses() = default ;
    ListFilePushStatusesResponseBodyPushStatuses& operator=(const ListFilePushStatusesResponseBodyPushStatuses &) = default ;
    ListFilePushStatusesResponseBodyPushStatuses& operator=(ListFilePushStatusesResponseBodyPushStatuses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileId_ != nullptr
        && this->fileName_ != nullptr && this->pushTime_ != nullptr && this->renderingInstanceId_ != nullptr && this->status_ != nullptr && this->statusDescription_ != nullptr
        && this->updateTime_ != nullptr; };
    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // pushTime Field Functions 
    bool hasPushTime() const { return this->pushTime_ != nullptr;};
    void deletePushTime() { this->pushTime_ = nullptr;};
    inline string pushTime() const { DARABONBA_PTR_GET_DEFAULT(pushTime_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setPushTime(string pushTime) { DARABONBA_PTR_SET_VALUE(pushTime_, pushTime) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDescription Field Functions 
    bool hasStatusDescription() const { return this->statusDescription_ != nullptr;};
    void deleteStatusDescription() { this->statusDescription_ = nullptr;};
    inline string statusDescription() const { DARABONBA_PTR_GET_DEFAULT(statusDescription_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setStatusDescription(string statusDescription) { DARABONBA_PTR_SET_VALUE(statusDescription_, statusDescription) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListFilePushStatusesResponseBodyPushStatuses& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> pushTime_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusDescription_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
