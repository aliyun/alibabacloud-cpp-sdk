// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPENDENCIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPENDENCIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataSourceDependenciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDependenciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DependencyList, dependencyList_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDependenciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DependencyList, dependencyList_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataSourceDependenciesResponseBody() = default ;
    GetDataSourceDependenciesResponseBody(const GetDataSourceDependenciesResponseBody &) = default ;
    GetDataSourceDependenciesResponseBody(GetDataSourceDependenciesResponseBody &&) = default ;
    GetDataSourceDependenciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDependenciesResponseBody() = default ;
    GetDataSourceDependenciesResponseBody& operator=(const GetDataSourceDependenciesResponseBody &) = default ;
    GetDataSourceDependenciesResponseBody& operator=(GetDataSourceDependenciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DependencyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DependencyList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
      };
      friend void from_json(const Darabonba::Json& j, DependencyList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
      };
      DependencyList() = default ;
      DependencyList(const DependencyList &) = default ;
      DependencyList(DependencyList &&) = default ;
      DependencyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DependencyList() = default ;
      DependencyList& operator=(const DependencyList &) = default ;
      DependencyList& operator=(DependencyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->typeCode_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DependencyList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DependencyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline DependencyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeCode Field Functions 
      bool hasTypeCode() const { return this->typeCode_ != nullptr;};
      void deleteTypeCode() { this->typeCode_ = nullptr;};
      inline string getTypeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
      inline DependencyList& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> typeCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->dependencyList_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataSourceDependenciesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dependencyList Field Functions 
    bool hasDependencyList() const { return this->dependencyList_ != nullptr;};
    void deleteDependencyList() { this->dependencyList_ = nullptr;};
    inline const vector<GetDataSourceDependenciesResponseBody::DependencyList> & getDependencyList() const { DARABONBA_PTR_GET_CONST(dependencyList_, vector<GetDataSourceDependenciesResponseBody::DependencyList>) };
    inline vector<GetDataSourceDependenciesResponseBody::DependencyList> getDependencyList() { DARABONBA_PTR_GET(dependencyList_, vector<GetDataSourceDependenciesResponseBody::DependencyList>) };
    inline GetDataSourceDependenciesResponseBody& setDependencyList(const vector<GetDataSourceDependenciesResponseBody::DependencyList> & dependencyList) { DARABONBA_PTR_SET_VALUE(dependencyList_, dependencyList) };
    inline GetDataSourceDependenciesResponseBody& setDependencyList(vector<GetDataSourceDependenciesResponseBody::DependencyList> && dependencyList) { DARABONBA_PTR_SET_RVALUE(dependencyList_, dependencyList) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataSourceDependenciesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataSourceDependenciesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataSourceDependenciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataSourceDependenciesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetDataSourceDependenciesResponseBody::DependencyList>> dependencyList_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
