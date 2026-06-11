// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLFILECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLFILECHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class CreateSkillFileCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillFileCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillFileCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSkillFileCheckResponseBody() = default ;
    CreateSkillFileCheckResponseBody(const CreateSkillFileCheckResponseBody &) = default ;
    CreateSkillFileCheckResponseBody(CreateSkillFileCheckResponseBody &&) = default ;
    CreateSkillFileCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillFileCheckResponseBody() = default ;
    CreateSkillFileCheckResponseBody& operator=(const CreateSkillFileCheckResponseBody &) = default ;
    CreateSkillFileCheckResponseBody& operator=(CreateSkillFileCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailCount, failCount_);
        DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(UploadResults, uploadResults_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
        DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(UploadResults, uploadResults_);
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
      class UploadResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UploadResults& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(IdentifyId, identifyId_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, UploadResults& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(IdentifyId, identifyId_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        UploadResults() = default ;
        UploadResults(const UploadResults &) = default ;
        UploadResults(UploadResults &&) = default ;
        UploadResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UploadResults() = default ;
        UploadResults& operator=(const UploadResults &) = default ;
        UploadResults& operator=(UploadResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->fileHash_ == nullptr && this->fileName_ == nullptr && this->identifyId_ == nullptr && this->success_ == nullptr; };
        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline UploadResults& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // fileHash Field Functions 
        bool hasFileHash() const { return this->fileHash_ != nullptr;};
        void deleteFileHash() { this->fileHash_ = nullptr;};
        inline string getFileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
        inline UploadResults& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline UploadResults& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // identifyId Field Functions 
        bool hasIdentifyId() const { return this->identifyId_ != nullptr;};
        void deleteIdentifyId() { this->identifyId_ = nullptr;};
        inline string getIdentifyId() const { DARABONBA_PTR_GET_DEFAULT(identifyId_, "") };
        inline UploadResults& setIdentifyId(string identifyId) { DARABONBA_PTR_SET_VALUE(identifyId_, identifyId) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline UploadResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<string> errorMsg_ {};
        shared_ptr<string> fileHash_ {};
        shared_ptr<string> fileName_ {};
        shared_ptr<string> identifyId_ {};
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->failCount_ == nullptr
        && this->rootTaskId_ == nullptr && this->successCount_ == nullptr && this->uploadResults_ == nullptr; };
      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline Data& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // rootTaskId Field Functions 
      bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
      void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
      inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
      inline Data& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline Data& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // uploadResults Field Functions 
      bool hasUploadResults() const { return this->uploadResults_ != nullptr;};
      void deleteUploadResults() { this->uploadResults_ = nullptr;};
      inline const vector<Data::UploadResults> & getUploadResults() const { DARABONBA_PTR_GET_CONST(uploadResults_, vector<Data::UploadResults>) };
      inline vector<Data::UploadResults> getUploadResults() { DARABONBA_PTR_GET(uploadResults_, vector<Data::UploadResults>) };
      inline Data& setUploadResults(const vector<Data::UploadResults> & uploadResults) { DARABONBA_PTR_SET_VALUE(uploadResults_, uploadResults) };
      inline Data& setUploadResults(vector<Data::UploadResults> && uploadResults) { DARABONBA_PTR_SET_RVALUE(uploadResults_, uploadResults) };


    protected:
      shared_ptr<int32_t> failCount_ {};
      shared_ptr<string> rootTaskId_ {};
      shared_ptr<int32_t> successCount_ {};
      shared_ptr<vector<Data::UploadResults>> uploadResults_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateSkillFileCheckResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateSkillFileCheckResponseBody::Data) };
    inline CreateSkillFileCheckResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateSkillFileCheckResponseBody::Data) };
    inline CreateSkillFileCheckResponseBody& setData(const CreateSkillFileCheckResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateSkillFileCheckResponseBody& setData(CreateSkillFileCheckResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSkillFileCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateSkillFileCheckResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
