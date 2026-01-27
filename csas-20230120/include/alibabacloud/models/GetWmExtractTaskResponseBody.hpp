// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWMEXTRACTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWMEXTRACTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetWmExtractTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWmExtractTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWmExtractTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWmExtractTaskResponseBody() = default ;
    GetWmExtractTaskResponseBody(const GetWmExtractTaskResponseBody &) = default ;
    GetWmExtractTaskResponseBody(GetWmExtractTaskResponseBody &&) = default ;
    GetWmExtractTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWmExtractTaskResponseBody() = default ;
    GetWmExtractTaskResponseBody& operator=(const GetWmExtractTaskResponseBody &) = default ;
    GetWmExtractTaskResponseBody& operator=(GetWmExtractTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Filename, filename_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(WmInfoBytesB64, wmInfoBytesB64_);
        DARABONBA_PTR_TO_JSON(WmInfoSize, wmInfoSize_);
        DARABONBA_PTR_TO_JSON(WmInfoUint, wmInfoUint_);
        DARABONBA_PTR_TO_JSON(WmType, wmType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Filename, filename_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(WmInfoBytesB64, wmInfoBytesB64_);
        DARABONBA_PTR_FROM_JSON(WmInfoSize, wmInfoSize_);
        DARABONBA_PTR_FROM_JSON(WmInfoUint, wmInfoUint_);
        DARABONBA_PTR_FROM_JSON(WmType, wmType_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->filename_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->wmInfoBytesB64_ == nullptr && this->wmInfoSize_ == nullptr
        && this->wmInfoUint_ == nullptr && this->wmType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // filename Field Functions 
      bool hasFilename() const { return this->filename_ != nullptr;};
      void deleteFilename() { this->filename_ = nullptr;};
      inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
      inline Data& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // wmInfoBytesB64 Field Functions 
      bool hasWmInfoBytesB64() const { return this->wmInfoBytesB64_ != nullptr;};
      void deleteWmInfoBytesB64() { this->wmInfoBytesB64_ = nullptr;};
      inline string getWmInfoBytesB64() const { DARABONBA_PTR_GET_DEFAULT(wmInfoBytesB64_, "") };
      inline Data& setWmInfoBytesB64(string wmInfoBytesB64) { DARABONBA_PTR_SET_VALUE(wmInfoBytesB64_, wmInfoBytesB64) };


      // wmInfoSize Field Functions 
      bool hasWmInfoSize() const { return this->wmInfoSize_ != nullptr;};
      void deleteWmInfoSize() { this->wmInfoSize_ = nullptr;};
      inline int64_t getWmInfoSize() const { DARABONBA_PTR_GET_DEFAULT(wmInfoSize_, 0L) };
      inline Data& setWmInfoSize(int64_t wmInfoSize) { DARABONBA_PTR_SET_VALUE(wmInfoSize_, wmInfoSize) };


      // wmInfoUint Field Functions 
      bool hasWmInfoUint() const { return this->wmInfoUint_ != nullptr;};
      void deleteWmInfoUint() { this->wmInfoUint_ = nullptr;};
      inline int64_t getWmInfoUint() const { DARABONBA_PTR_GET_DEFAULT(wmInfoUint_, 0L) };
      inline Data& setWmInfoUint(int64_t wmInfoUint) { DARABONBA_PTR_SET_VALUE(wmInfoUint_, wmInfoUint) };


      // wmType Field Functions 
      bool hasWmType() const { return this->wmType_ != nullptr;};
      void deleteWmType() { this->wmType_ = nullptr;};
      inline string getWmType() const { DARABONBA_PTR_GET_DEFAULT(wmType_, "") };
      inline Data& setWmType(string wmType) { DARABONBA_PTR_SET_VALUE(wmType_, wmType) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> filename_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> wmInfoBytesB64_ {};
      shared_ptr<int64_t> wmInfoSize_ {};
      shared_ptr<int64_t> wmInfoUint_ {};
      shared_ptr<string> wmType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWmExtractTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWmExtractTaskResponseBody::Data) };
    inline GetWmExtractTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWmExtractTaskResponseBody::Data) };
    inline GetWmExtractTaskResponseBody& setData(const GetWmExtractTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWmExtractTaskResponseBody& setData(GetWmExtractTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWmExtractTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetWmExtractTaskResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
