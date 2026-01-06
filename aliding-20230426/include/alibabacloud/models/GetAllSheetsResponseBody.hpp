// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLSHEETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALLSHEETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAllSheetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllSheetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllSheetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetAllSheetsResponseBody() = default ;
    GetAllSheetsResponseBody(const GetAllSheetsResponseBody &) = default ;
    GetAllSheetsResponseBody(GetAllSheetsResponseBody &&) = default ;
    GetAllSheetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllSheetsResponseBody() = default ;
    GetAllSheetsResponseBody& operator=(const GetAllSheetsResponseBody &) = default ;
    GetAllSheetsResponseBody& operator=(GetAllSheetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Value : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Value& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Value& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Value() = default ;
      Value(const Value &) = default ;
      Value(Value &&) = default ;
      Value(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Value() = default ;
      Value& operator=(const Value &) = default ;
      Value& operator=(Value &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Value& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Value& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->value_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAllSheetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<GetAllSheetsResponseBody::Value> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<GetAllSheetsResponseBody::Value>) };
    inline vector<GetAllSheetsResponseBody::Value> getValue() { DARABONBA_PTR_GET(value_, vector<GetAllSheetsResponseBody::Value>) };
    inline GetAllSheetsResponseBody& setValue(const vector<GetAllSheetsResponseBody::Value> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetAllSheetsResponseBody& setValue(vector<GetAllSheetsResponseBody::Value> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetAllSheetsResponseBody::Value>> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
