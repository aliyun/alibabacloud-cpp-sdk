// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADAGENTSESSIONFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADAGENTSESSIONFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UploadAgentSessionFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadAgentSessionFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, UploadAgentSessionFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    UploadAgentSessionFileRequest() = default ;
    UploadAgentSessionFileRequest(const UploadAgentSessionFileRequest &) = default ;
    UploadAgentSessionFileRequest(UploadAgentSessionFileRequest &&) = default ;
    UploadAgentSessionFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadAgentSessionFileRequest() = default ;
    UploadAgentSessionFileRequest& operator=(const UploadAgentSessionFileRequest &) = default ;
    UploadAgentSessionFileRequest& operator=(UploadAgentSessionFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(ContentMd5, contentMd5_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
        DARABONBA_PTR_TO_JSON(UploadMode, uploadMode_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentMd5, contentMd5_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
        DARABONBA_PTR_FROM_JSON(UploadMode, uploadMode_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contentMd5_ == nullptr
        && this->name_ == nullptr && this->sessionId_ == nullptr && this->size_ == nullptr && this->uploadId_ == nullptr && this->uploadMode_ == nullptr; };
      // contentMd5 Field Functions 
      bool hasContentMd5() const { return this->contentMd5_ != nullptr;};
      void deleteContentMd5() { this->contentMd5_ = nullptr;};
      inline string getContentMd5() const { DARABONBA_PTR_GET_DEFAULT(contentMd5_, "") };
      inline Params& setContentMd5(string contentMd5) { DARABONBA_PTR_SET_VALUE(contentMd5_, contentMd5) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Params& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Params& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // uploadId Field Functions 
      bool hasUploadId() const { return this->uploadId_ != nullptr;};
      void deleteUploadId() { this->uploadId_ = nullptr;};
      inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
      inline Params& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


      // uploadMode Field Functions 
      bool hasUploadMode() const { return this->uploadMode_ != nullptr;};
      void deleteUploadMode() { this->uploadMode_ = nullptr;};
      inline string getUploadMode() const { DARABONBA_PTR_GET_DEFAULT(uploadMode_, "") };
      inline Params& setUploadMode(string uploadMode) { DARABONBA_PTR_SET_VALUE(uploadMode_, uploadMode) };


    protected:
      // This parameter is required.
      shared_ptr<string> contentMd5_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> sessionId_ {};
      // This parameter is required.
      shared_ptr<int64_t> size_ {};
      shared_ptr<string> uploadId_ {};
      // This parameter is required.
      shared_ptr<string> uploadMode_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UploadAgentSessionFileRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline UploadAgentSessionFileRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const UploadAgentSessionFileRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, UploadAgentSessionFileRequest::Params) };
    inline UploadAgentSessionFileRequest::Params getParams() { DARABONBA_PTR_GET(params_, UploadAgentSessionFileRequest::Params) };
    inline UploadAgentSessionFileRequest& setParams(const UploadAgentSessionFileRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline UploadAgentSessionFileRequest& setParams(UploadAgentSessionFileRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    // This parameter is required.
    shared_ptr<UploadAgentSessionFileRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
