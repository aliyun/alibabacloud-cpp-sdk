// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMCOMPONENTDEFINITIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORMCOMPONENTDEFINITIONLISTRESPONSEBODY_HPP_
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
  class GetFormComponentDefinitionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormComponentDefinitionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormComponentDefinitionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFormComponentDefinitionListResponseBody() = default ;
    GetFormComponentDefinitionListResponseBody(const GetFormComponentDefinitionListResponseBody &) = default ;
    GetFormComponentDefinitionListResponseBody(GetFormComponentDefinitionListResponseBody &&) = default ;
    GetFormComponentDefinitionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormComponentDefinitionListResponseBody() = default ;
    GetFormComponentDefinitionListResponseBody& operator=(const GetFormComponentDefinitionListResponseBody &) = default ;
    GetFormComponentDefinitionListResponseBody& operator=(GetFormComponentDefinitionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(FieldId, fieldId_);
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(FieldId, fieldId_);
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
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
      virtual bool empty() const override { return this->componentName_ == nullptr
        && this->fieldId_ == nullptr && this->label_ == nullptr && this->parentId_ == nullptr; };
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
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Result& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      shared_ptr<string> componentName_ {};
      shared_ptr<string> fieldId_ {};
      shared_ptr<string> label_ {};
      shared_ptr<string> parentId_ {};
    };

    virtual bool empty() const override { return this->result_ == nullptr
        && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetFormComponentDefinitionListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetFormComponentDefinitionListResponseBody::Result>) };
    inline vector<GetFormComponentDefinitionListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetFormComponentDefinitionListResponseBody::Result>) };
    inline GetFormComponentDefinitionListResponseBody& setResult(const vector<GetFormComponentDefinitionListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFormComponentDefinitionListResponseBody& setResult(vector<GetFormComponentDefinitionListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFormComponentDefinitionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFormComponentDefinitionListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFormComponentDefinitionListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<vector<GetFormComponentDefinitionListResponseBody::Result>> result_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
