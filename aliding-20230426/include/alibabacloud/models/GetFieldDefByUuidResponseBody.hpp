// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFIELDDEFBYUUIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFIELDDEFBYUUIDRESPONSEBODY_HPP_
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
  class GetFieldDefByUuidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFieldDefByUuidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFieldDefByUuidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFieldDefByUuidResponseBody() = default ;
    GetFieldDefByUuidResponseBody(const GetFieldDefByUuidResponseBody &) = default ;
    GetFieldDefByUuidResponseBody(GetFieldDefByUuidResponseBody &&) = default ;
    GetFieldDefByUuidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFieldDefByUuidResponseBody() = default ;
    GetFieldDefByUuidResponseBody& operator=(const GetFieldDefByUuidResponseBody &) = default ;
    GetFieldDefByUuidResponseBody& operator=(GetFieldDefByUuidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Behavior, behavior_);
        DARABONBA_PTR_TO_JSON(Children, children_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
        DARABONBA_ANY_TO_JSON(Label, label_);
        DARABONBA_ANY_TO_JSON(Props, props_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Behavior, behavior_);
        DARABONBA_PTR_FROM_JSON(Children, children_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
        DARABONBA_ANY_FROM_JSON(Label, label_);
        DARABONBA_ANY_FROM_JSON(Props, props_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->behavior_ == nullptr
        && this->children_ == nullptr && this->componentName_ == nullptr && this->fieldId_ == nullptr && this->label_ == nullptr && this->props_ == nullptr
        && this->success_ == nullptr; };
      // behavior Field Functions 
      bool hasBehavior() const { return this->behavior_ != nullptr;};
      void deleteBehavior() { this->behavior_ = nullptr;};
      inline string getBehavior() const { DARABONBA_PTR_GET_DEFAULT(behavior_, "") };
      inline Result& setBehavior(string behavior) { DARABONBA_PTR_SET_VALUE(behavior_, behavior) };


      // children Field Functions 
      bool hasChildren() const { return this->children_ != nullptr;};
      void deleteChildren() { this->children_ = nullptr;};
      inline string getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, "") };
      inline Result& setChildren(string children) { DARABONBA_PTR_SET_VALUE(children_, children) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Result& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // fieldId Field Functions 
      bool hasFieldId() const { return this->fieldId_ != nullptr;};
      void deleteFieldId() { this->fieldId_ = nullptr;};
      inline string getFieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
      inline Result& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline       const Darabonba::Json & getLabel() const { DARABONBA_GET(label_) };
      Darabonba::Json & getLabel() { DARABONBA_GET(label_) };
      inline Result& setLabel(const Darabonba::Json & label) { DARABONBA_SET_VALUE(label_, label) };
      inline Result& setLabel(Darabonba::Json && label) { DARABONBA_SET_RVALUE(label_, label) };


      // props Field Functions 
      bool hasProps() const { return this->props_ != nullptr;};
      void deleteProps() { this->props_ = nullptr;};
      inline       const Darabonba::Json & getProps() const { DARABONBA_GET(props_) };
      Darabonba::Json & getProps() { DARABONBA_GET(props_) };
      inline Result& setProps(const Darabonba::Json & props) { DARABONBA_SET_VALUE(props_, props) };
      inline Result& setProps(Darabonba::Json && props) { DARABONBA_SET_RVALUE(props_, props) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Result& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> behavior_ {};
      shared_ptr<string> children_ {};
      shared_ptr<string> componentName_ {};
      shared_ptr<string> fieldId_ {};
      Darabonba::Json label_ {};
      Darabonba::Json props_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFieldDefByUuidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetFieldDefByUuidResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetFieldDefByUuidResponseBody::Result>) };
    inline vector<GetFieldDefByUuidResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetFieldDefByUuidResponseBody::Result>) };
    inline GetFieldDefByUuidResponseBody& setResult(const vector<GetFieldDefByUuidResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFieldDefByUuidResponseBody& setResult(vector<GetFieldDefByUuidResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFieldDefByUuidResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFieldDefByUuidResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFieldDefByUuidResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetFieldDefByUuidResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
