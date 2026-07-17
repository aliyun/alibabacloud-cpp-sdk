// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESORTSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESORTSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateSortScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSortScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSortScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    CreateSortScriptResponseBody() = default ;
    CreateSortScriptResponseBody(const CreateSortScriptResponseBody &) = default ;
    CreateSortScriptResponseBody(CreateSortScriptResponseBody &&) = default ;
    CreateSortScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSortScriptResponseBody() = default ;
    CreateSortScriptResponseBody& operator=(const CreateSortScriptResponseBody &) = default ;
    CreateSortScriptResponseBody& operator=(CreateSortScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->scope_ == nullptr
        && this->scriptName_ == nullptr && this->type_ == nullptr; };
      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Result& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Result& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The applicable scope of the script.
      shared_ptr<string> scope_ {};
      // The name of the script.
      shared_ptr<string> scriptName_ {};
      // The type of the script.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSortScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CreateSortScriptResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CreateSortScriptResponseBody::Result) };
    inline CreateSortScriptResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CreateSortScriptResponseBody::Result) };
    inline CreateSortScriptResponseBody& setResult(const CreateSortScriptResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CreateSortScriptResponseBody& setResult(CreateSortScriptResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<CreateSortScriptResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
