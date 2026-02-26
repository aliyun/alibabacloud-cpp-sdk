// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFILEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFILEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchUpdateFileMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFileMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFileMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchUpdateFileMetaResponseBody() = default ;
    BatchUpdateFileMetaResponseBody(const BatchUpdateFileMetaResponseBody &) = default ;
    BatchUpdateFileMetaResponseBody(BatchUpdateFileMetaResponseBody &&) = default ;
    BatchUpdateFileMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFileMetaResponseBody() = default ;
    BatchUpdateFileMetaResponseBody& operator=(const BatchUpdateFileMetaResponseBody &) = default ;
    BatchUpdateFileMetaResponseBody& operator=(BatchUpdateFileMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->success_ == nullptr && this->URI_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Files& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Files& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Files& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The error message returned when the value of the Success parameter is false.
      shared_ptr<string> message_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // Enumerated values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> success_ {};
      // The URI of the file.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr
        && this->requestId_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<BatchUpdateFileMetaResponseBody::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<BatchUpdateFileMetaResponseBody::Files>) };
    inline vector<BatchUpdateFileMetaResponseBody::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<BatchUpdateFileMetaResponseBody::Files>) };
    inline BatchUpdateFileMetaResponseBody& setFiles(const vector<BatchUpdateFileMetaResponseBody::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline BatchUpdateFileMetaResponseBody& setFiles(vector<BatchUpdateFileMetaResponseBody::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchUpdateFileMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The files whose metadata was updated.
    shared_ptr<vector<BatchUpdateFileMetaResponseBody::Files>> files_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
