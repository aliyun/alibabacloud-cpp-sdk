// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJENKINSIMAGESCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJENKINSIMAGESCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateJenkinsImageScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJenkinsImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJenkinsImageScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateJenkinsImageScanTaskResponseBody() = default ;
    CreateJenkinsImageScanTaskResponseBody(const CreateJenkinsImageScanTaskResponseBody &) = default ;
    CreateJenkinsImageScanTaskResponseBody(CreateJenkinsImageScanTaskResponseBody &&) = default ;
    CreateJenkinsImageScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJenkinsImageScanTaskResponseBody() = default ;
    CreateJenkinsImageScanTaskResponseBody& operator=(const CreateJenkinsImageScanTaskResponseBody &) = default ;
    CreateJenkinsImageScanTaskResponseBody& operator=(CreateJenkinsImageScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
        DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
        DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageScanCapacity_ == nullptr
        && this->repoId_ == nullptr && this->repoInstanceId_ == nullptr && this->repoRegionId_ == nullptr && this->taskId_ == nullptr && this->uuid_ == nullptr; };
      // imageScanCapacity Field Functions 
      bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
      void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
      inline int64_t getImageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
      inline Data& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline Data& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoInstanceId Field Functions 
      bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
      void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
      inline string getRepoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
      inline Data& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


      // repoRegionId Field Functions 
      bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
      void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
      inline string getRepoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
      inline Data& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The quota for image scan.
      shared_ptr<int64_t> imageScanCapacity_ {};
      // The ID of the image repository.
      shared_ptr<string> repoId_ {};
      // The instance ID of the image repository.
      shared_ptr<string> repoInstanceId_ {};
      // The ID of the region.
      shared_ptr<string> repoRegionId_ {};
      // The ID of the scan task.
      shared_ptr<string> taskId_ {};
      // The UUID of the image asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateJenkinsImageScanTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateJenkinsImageScanTaskResponseBody::Data) };
    inline CreateJenkinsImageScanTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateJenkinsImageScanTaskResponseBody::Data) };
    inline CreateJenkinsImageScanTaskResponseBody& setData(const CreateJenkinsImageScanTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateJenkinsImageScanTaskResponseBody& setData(CreateJenkinsImageScanTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateJenkinsImageScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<CreateJenkinsImageScanTaskResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
