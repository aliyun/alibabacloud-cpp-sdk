// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSTORYFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSTORYFILESRESPONSEBODY_HPP_
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
  class AddStoryFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddStoryFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddStoryFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddStoryFilesResponseBody() = default ;
    AddStoryFilesResponseBody(const AddStoryFilesResponseBody &) = default ;
    AddStoryFilesResponseBody(AddStoryFilesResponseBody &&) = default ;
    AddStoryFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddStoryFilesResponseBody() = default ;
    AddStoryFilesResponseBody& operator=(const AddStoryFilesResponseBody &) = default ;
    AddStoryFilesResponseBody& operator=(AddStoryFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
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
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->URI_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Files& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Files& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Files& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message that is returned.
      shared_ptr<string> errorMessage_ {};
      // The URI of the object.
      // 
      // The OSS URI follows the `oss://{bucketname}/{objectname}` format, where `bucketname` is the name of the bucket in the same region as the current project and `objectname` is the path of the object with the extension included.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr
        && this->requestId_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<AddStoryFilesResponseBody::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<AddStoryFilesResponseBody::Files>) };
    inline vector<AddStoryFilesResponseBody::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<AddStoryFilesResponseBody::Files>) };
    inline AddStoryFilesResponseBody& setFiles(const vector<AddStoryFilesResponseBody::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline AddStoryFilesResponseBody& setFiles(vector<AddStoryFilesResponseBody::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddStoryFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The objects that were added.
    shared_ptr<vector<AddStoryFilesResponseBody::Files>> files_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
