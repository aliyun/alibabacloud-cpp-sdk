// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class DeleteConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteConfigResponseBody() = default ;
    DeleteConfigResponseBody(const DeleteConfigResponseBody &) = default ;
    DeleteConfigResponseBody(DeleteConfigResponseBody &&) = default ;
    DeleteConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigResponseBody() = default ;
    DeleteConfigResponseBody& operator=(const DeleteConfigResponseBody &) = default ;
    DeleteConfigResponseBody& operator=(DeleteConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(configType, configType_);
        DARABONBA_PTR_TO_JSON(deleted, deleted_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(configType, configType_);
        DARABONBA_PTR_FROM_JSON(deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configType_ == nullptr
        && this->deleted_ == nullptr && this->id_ == nullptr && this->workspaceId_ == nullptr; };
      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Result& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
      inline Result& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The configuration type.
      // 
      // - prompt
      // 
      // - lark
      shared_ptr<string> configType_ {};
      // Indicates whether the configuration is deleted.
      shared_ptr<bool> deleted_ {};
      // The configuration ID.
      shared_ptr<string> id_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DeleteConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DeleteConfigResponseBody::Result) };
    inline DeleteConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DeleteConfigResponseBody::Result) };
    inline DeleteConfigResponseBody& setResult(const DeleteConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteConfigResponseBody& setResult(DeleteConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<DeleteConfigResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
