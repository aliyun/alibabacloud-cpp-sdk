// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSORTSCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSORTSCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetSortScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSortScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetSortScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetSortScriptResponseBody() = default ;
    GetSortScriptResponseBody(const GetSortScriptResponseBody &) = default ;
    GetSortScriptResponseBody(GetSortScriptResponseBody &&) = default ;
    GetSortScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSortScriptResponseBody() = default ;
    GetSortScriptResponseBody& operator=(const GetSortScriptResponseBody &) = default ;
    GetSortScriptResponseBody& operator=(GetSortScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->modifyTime_ == nullptr && this->scope_ == nullptr && this->scriptName_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Result& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the script was created.
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      // The time when the script was last modified.
      shared_ptr<string> modifyTime_ {};
      // The applicable scope of the script.
      shared_ptr<string> scope_ {};
      // The name of the script.
      shared_ptr<string> scriptName_ {};
      // The status of the script. For more information, see the list of script statuses.
      shared_ptr<string> status_ {};
      // The type of the script.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSortScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetSortScriptResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetSortScriptResponseBody::Result) };
    inline GetSortScriptResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetSortScriptResponseBody::Result) };
    inline GetSortScriptResponseBody& setResult(const GetSortScriptResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSortScriptResponseBody& setResult(GetSortScriptResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the script.
    shared_ptr<GetSortScriptResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
