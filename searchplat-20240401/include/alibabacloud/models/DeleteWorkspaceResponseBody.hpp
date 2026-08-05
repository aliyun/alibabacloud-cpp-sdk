// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class DeleteWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteWorkspaceResponseBody() = default ;
    DeleteWorkspaceResponseBody(const DeleteWorkspaceResponseBody &) = default ;
    DeleteWorkspaceResponseBody(DeleteWorkspaceResponseBody &&) = default ;
    DeleteWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkspaceResponseBody() = default ;
    DeleteWorkspaceResponseBody& operator=(const DeleteWorkspaceResponseBody &) = default ;
    DeleteWorkspaceResponseBody& operator=(DeleteWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
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
      virtual bool empty() const override { return this->instanceId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The instance ID.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DeleteWorkspaceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DeleteWorkspaceResponseBody::Result) };
    inline DeleteWorkspaceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DeleteWorkspaceResponseBody::Result) };
    inline DeleteWorkspaceResponseBody& setResult(const DeleteWorkspaceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteWorkspaceResponseBody& setResult(DeleteWorkspaceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<DeleteWorkspaceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
