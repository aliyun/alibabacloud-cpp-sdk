// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class GetTableColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetTableColumnsResponseBody() = default ;
    GetTableColumnsResponseBody(const GetTableColumnsResponseBody &) = default ;
    GetTableColumnsResponseBody(GetTableColumnsResponseBody &&) = default ;
    GetTableColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnsResponseBody() = default ;
    GetTableColumnsResponseBody& operator=(const GetTableColumnsResponseBody &) = default ;
    GetTableColumnsResponseBody& operator=(GetTableColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(comment, comment_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(primary, primary_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(comment, comment_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(primary, primary_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->name_ == nullptr && this->primary_ == nullptr && this->type_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Result& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // primary Field Functions 
      bool hasPrimary() const { return this->primary_ != nullptr;};
      void deletePrimary() { this->primary_ = nullptr;};
      inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
      inline Result& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The field description.
      shared_ptr<string> comment_ {};
      // The field name.
      shared_ptr<string> name_ {};
      // Indicates whether the field is a primary key.
      shared_ptr<bool> primary_ {};
      // The field type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetTableColumnsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetTableColumnsResponseBody::Result>) };
    inline vector<GetTableColumnsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetTableColumnsResponseBody::Result>) };
    inline GetTableColumnsResponseBody& setResult(const vector<GetTableColumnsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetTableColumnsResponseBody& setResult(vector<GetTableColumnsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<GetTableColumnsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
