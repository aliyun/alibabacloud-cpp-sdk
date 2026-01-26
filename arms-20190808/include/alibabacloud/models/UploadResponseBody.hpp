// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UploadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UploadResult, uploadResult_);
    };
    friend void from_json(const Darabonba::Json& j, UploadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UploadResult, uploadResult_);
    };
    UploadResponseBody() = default ;
    UploadResponseBody(const UploadResponseBody &) = default ;
    UploadResponseBody(UploadResponseBody &&) = default ;
    UploadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadResponseBody() = default ;
    UploadResponseBody& operator=(const UploadResponseBody &) = default ;
    UploadResponseBody& operator=(UploadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UploadResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UploadResult& obj) { 
        DARABONBA_PTR_TO_JSON(Fid, fid_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
      };
      friend void from_json(const Darabonba::Json& j, UploadResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Fid, fid_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
      };
      UploadResult() = default ;
      UploadResult(const UploadResult &) = default ;
      UploadResult(UploadResult &&) = default ;
      UploadResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UploadResult() = default ;
      UploadResult& operator=(const UploadResult &) = default ;
      UploadResult& operator=(UploadResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fid_ == nullptr
        && this->fileName_ == nullptr && this->uploadTime_ == nullptr; };
      // fid Field Functions 
      bool hasFid() const { return this->fid_ != nullptr;};
      void deleteFid() { this->fid_ = nullptr;};
      inline string getFid() const { DARABONBA_PTR_GET_DEFAULT(fid_, "") };
      inline UploadResult& setFid(string fid) { DARABONBA_PTR_SET_VALUE(fid_, fid) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline UploadResult& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline string getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, "") };
      inline UploadResult& setUploadTime(string uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    protected:
      // The ID of the SourceMap file.
      shared_ptr<string> fid_ {};
      // The name of the SourceMap file.
      shared_ptr<string> fileName_ {};
      // The time when the file was uploaded.
      shared_ptr<string> uploadTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->uploadResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // uploadResult Field Functions 
    bool hasUploadResult() const { return this->uploadResult_ != nullptr;};
    void deleteUploadResult() { this->uploadResult_ = nullptr;};
    inline const UploadResponseBody::UploadResult & getUploadResult() const { DARABONBA_PTR_GET_CONST(uploadResult_, UploadResponseBody::UploadResult) };
    inline UploadResponseBody::UploadResult getUploadResult() { DARABONBA_PTR_GET(uploadResult_, UploadResponseBody::UploadResult) };
    inline UploadResponseBody& setUploadResult(const UploadResponseBody::UploadResult & uploadResult) { DARABONBA_PTR_SET_VALUE(uploadResult_, uploadResult) };
    inline UploadResponseBody& setUploadResult(UploadResponseBody::UploadResult && uploadResult) { DARABONBA_PTR_SET_RVALUE(uploadResult_, uploadResult) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned data.
    shared_ptr<UploadResponseBody::UploadResult> uploadResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
