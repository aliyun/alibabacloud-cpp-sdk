// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTDATASETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTDATASETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class GetProjectDatasetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectDatasetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectDatasetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetProjectDatasetResponseBody() = default ;
    GetProjectDatasetResponseBody(const GetProjectDatasetResponseBody &) = default ;
    GetProjectDatasetResponseBody(GetProjectDatasetResponseBody &&) = default ;
    GetProjectDatasetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectDatasetResponseBody() = default ;
    GetProjectDatasetResponseBody& operator=(const GetProjectDatasetResponseBody &) = default ;
    GetProjectDatasetResponseBody& operator=(GetProjectDatasetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Dataset, dataset_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Intro, intro_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(bizUsage, bizUsage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Dataset, dataset_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Intro, intro_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(bizUsage, bizUsage_);
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
      class Dataset : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
          DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModelUrl, modelUrl_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(OriginResultUrl, originResultUrl_);
          DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
          DARABONBA_PTR_TO_JSON(PoseUrl, poseUrl_);
          DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
          DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModelUrl, modelUrl_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(OriginResultUrl, originResultUrl_);
          DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
          DARABONBA_PTR_FROM_JSON(PoseUrl, poseUrl_);
          DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
        };
        Dataset() = default ;
        Dataset(const Dataset &) = default ;
        Dataset(Dataset &&) = default ;
        Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dataset() = default ;
        Dataset& operator=(const Dataset &) = default ;
        Dataset& operator=(Dataset &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->coverUrl_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->modelUrl_ == nullptr && this->modifiedTime_ == nullptr && this->originResultUrl_ == nullptr
        && this->ossKey_ == nullptr && this->poseUrl_ == nullptr && this->previewUrl_ == nullptr; };
        // coverUrl Field Functions 
        bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
        void deleteCoverUrl() { this->coverUrl_ = nullptr;};
        inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
        inline Dataset& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Dataset& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Dataset& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modelUrl Field Functions 
        bool hasModelUrl() const { return this->modelUrl_ != nullptr;};
        void deleteModelUrl() { this->modelUrl_ = nullptr;};
        inline string getModelUrl() const { DARABONBA_PTR_GET_DEFAULT(modelUrl_, "") };
        inline Dataset& setModelUrl(string modelUrl) { DARABONBA_PTR_SET_VALUE(modelUrl_, modelUrl) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline Dataset& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // originResultUrl Field Functions 
        bool hasOriginResultUrl() const { return this->originResultUrl_ != nullptr;};
        void deleteOriginResultUrl() { this->originResultUrl_ = nullptr;};
        inline string getOriginResultUrl() const { DARABONBA_PTR_GET_DEFAULT(originResultUrl_, "") };
        inline Dataset& setOriginResultUrl(string originResultUrl) { DARABONBA_PTR_SET_VALUE(originResultUrl_, originResultUrl) };


        // ossKey Field Functions 
        bool hasOssKey() const { return this->ossKey_ != nullptr;};
        void deleteOssKey() { this->ossKey_ = nullptr;};
        inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
        inline Dataset& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


        // poseUrl Field Functions 
        bool hasPoseUrl() const { return this->poseUrl_ != nullptr;};
        void deletePoseUrl() { this->poseUrl_ = nullptr;};
        inline string getPoseUrl() const { DARABONBA_PTR_GET_DEFAULT(poseUrl_, "") };
        inline Dataset& setPoseUrl(string poseUrl) { DARABONBA_PTR_SET_VALUE(poseUrl_, poseUrl) };


        // previewUrl Field Functions 
        bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
        void deletePreviewUrl() { this->previewUrl_ = nullptr;};
        inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
        inline Dataset& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


      protected:
        shared_ptr<string> coverUrl_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> modelUrl_ {};
        shared_ptr<string> modifiedTime_ {};
        shared_ptr<string> originResultUrl_ {};
        shared_ptr<string> ossKey_ {};
        shared_ptr<string> poseUrl_ {};
        shared_ptr<string> previewUrl_ {};
      };

      virtual bool empty() const override { return this->createMode_ == nullptr
        && this->createTime_ == nullptr && this->dataset_ == nullptr && this->id_ == nullptr && this->intro_ == nullptr && this->modifiedTime_ == nullptr
        && this->status_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->bizUsage_ == nullptr; };
      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Data& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataset Field Functions 
      bool hasDataset() const { return this->dataset_ != nullptr;};
      void deleteDataset() { this->dataset_ = nullptr;};
      inline const Data::Dataset & getDataset() const { DARABONBA_PTR_GET_CONST(dataset_, Data::Dataset) };
      inline Data::Dataset getDataset() { DARABONBA_PTR_GET(dataset_, Data::Dataset) };
      inline Data& setDataset(const Data::Dataset & dataset) { DARABONBA_PTR_SET_VALUE(dataset_, dataset) };
      inline Data& setDataset(Data::Dataset && dataset) { DARABONBA_PTR_SET_RVALUE(dataset_, dataset) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intro Field Functions 
      bool hasIntro() const { return this->intro_ != nullptr;};
      void deleteIntro() { this->intro_ = nullptr;};
      inline string getIntro() const { DARABONBA_PTR_GET_DEFAULT(intro_, "") };
      inline Data& setIntro(string intro) { DARABONBA_PTR_SET_VALUE(intro_, intro) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Data& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // bizUsage Field Functions 
      bool hasBizUsage() const { return this->bizUsage_ != nullptr;};
      void deleteBizUsage() { this->bizUsage_ = nullptr;};
      inline string getBizUsage() const { DARABONBA_PTR_GET_DEFAULT(bizUsage_, "") };
      inline Data& setBizUsage(string bizUsage) { DARABONBA_PTR_SET_VALUE(bizUsage_, bizUsage) };


    protected:
      shared_ptr<string> createMode_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<Data::Dataset> dataset_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> intro_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> bizUsage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetProjectDatasetResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetProjectDatasetResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetProjectDatasetResponseBody::Data) };
    inline GetProjectDatasetResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetProjectDatasetResponseBody::Data) };
    inline GetProjectDatasetResponseBody& setData(const GetProjectDatasetResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetProjectDatasetResponseBody& setData(GetProjectDatasetResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetProjectDatasetResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProjectDatasetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetProjectDatasetResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetProjectDatasetResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
