// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLSHEETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLEALLSHEETSRESPONSEBODY_HPP_
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
  class GetMultiDimTableAllSheetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableAllSheetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableAllSheetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetMultiDimTableAllSheetsResponseBody() = default ;
    GetMultiDimTableAllSheetsResponseBody(const GetMultiDimTableAllSheetsResponseBody &) = default ;
    GetMultiDimTableAllSheetsResponseBody(GetMultiDimTableAllSheetsResponseBody &&) = default ;
    GetMultiDimTableAllSheetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableAllSheetsResponseBody() = default ;
    GetMultiDimTableAllSheetsResponseBody& operator=(const GetMultiDimTableAllSheetsResponseBody &) = default ;
    GetMultiDimTableAllSheetsResponseBody& operator=(GetMultiDimTableAllSheetsResponseBody &&) = default ;
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
        && this->value_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiDimTableAllSheetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<GetMultiDimTableAllSheetsResponseBody::Value> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<GetMultiDimTableAllSheetsResponseBody::Value>) };
    inline vector<GetMultiDimTableAllSheetsResponseBody::Value> getValue() { DARABONBA_PTR_GET(value_, vector<GetMultiDimTableAllSheetsResponseBody::Value>) };
    inline GetMultiDimTableAllSheetsResponseBody& setValue(const vector<GetMultiDimTableAllSheetsResponseBody::Value> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetMultiDimTableAllSheetsResponseBody& setValue(vector<GetMultiDimTableAllSheetsResponseBody::Value> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetMultiDimTableAllSheetsResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetMultiDimTableAllSheetsResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetMultiDimTableAllSheetsResponseBody::Value>> value_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
