// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMERMODULEMETAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMERMODULEMETAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DescribeCustomerModuleMetaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomerModuleMetaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomerModuleMetaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomerModuleMetaInfoResponseBody() = default ;
    DescribeCustomerModuleMetaInfoResponseBody(const DescribeCustomerModuleMetaInfoResponseBody &) = default ;
    DescribeCustomerModuleMetaInfoResponseBody(DescribeCustomerModuleMetaInfoResponseBody &&) = default ;
    DescribeCustomerModuleMetaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomerModuleMetaInfoResponseBody() = default ;
    DescribeCustomerModuleMetaInfoResponseBody& operator=(const DescribeCustomerModuleMetaInfoResponseBody &) = default ;
    DescribeCustomerModuleMetaInfoResponseBody& operator=(DescribeCustomerModuleMetaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureList, featureList_);
        DARABONBA_PTR_TO_JSON(FeatureTemplate, featureTemplate_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureList, featureList_);
        DARABONBA_PTR_FROM_JSON(FeatureTemplate, featureTemplate_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FeatureList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FeatureList& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
          DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, FeatureList& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
          DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        FeatureList() = default ;
        FeatureList(const FeatureList &) = default ;
        FeatureList(FeatureList &&) = default ;
        FeatureList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FeatureList() = default ;
        FeatureList& operator=(const FeatureList &) = default ;
        FeatureList& operator=(FeatureList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->featureName_ == nullptr && this->featureType_ == nullptr && this->name_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline FeatureList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // featureName Field Functions 
        bool hasFeatureName() const { return this->featureName_ != nullptr;};
        void deleteFeatureName() { this->featureName_ = nullptr;};
        inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
        inline FeatureList& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


        // featureType Field Functions 
        bool hasFeatureType() const { return this->featureType_ != nullptr;};
        void deleteFeatureType() { this->featureType_ = nullptr;};
        inline string getFeatureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
        inline FeatureList& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FeatureList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> featureName_ {};
        shared_ptr<string> featureType_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->featureList_ == nullptr
        && this->featureTemplate_ == nullptr; };
      // featureList Field Functions 
      bool hasFeatureList() const { return this->featureList_ != nullptr;};
      void deleteFeatureList() { this->featureList_ = nullptr;};
      inline const vector<ResultObject::FeatureList> & getFeatureList() const { DARABONBA_PTR_GET_CONST(featureList_, vector<ResultObject::FeatureList>) };
      inline vector<ResultObject::FeatureList> getFeatureList() { DARABONBA_PTR_GET(featureList_, vector<ResultObject::FeatureList>) };
      inline ResultObject& setFeatureList(const vector<ResultObject::FeatureList> & featureList) { DARABONBA_PTR_SET_VALUE(featureList_, featureList) };
      inline ResultObject& setFeatureList(vector<ResultObject::FeatureList> && featureList) { DARABONBA_PTR_SET_RVALUE(featureList_, featureList) };


      // featureTemplate Field Functions 
      bool hasFeatureTemplate() const { return this->featureTemplate_ != nullptr;};
      void deleteFeatureTemplate() { this->featureTemplate_ = nullptr;};
      inline string getFeatureTemplate() const { DARABONBA_PTR_GET_DEFAULT(featureTemplate_, "") };
      inline ResultObject& setFeatureTemplate(string featureTemplate) { DARABONBA_PTR_SET_VALUE(featureTemplate_, featureTemplate) };


    protected:
      shared_ptr<vector<ResultObject::FeatureList>> featureList_ {};
      shared_ptr<string> featureTemplate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DescribeCustomerModuleMetaInfoResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int64_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0L) };
    inline DescribeCustomerModuleMetaInfoResponseBody& setHttpStatusCode(int64_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomerModuleMetaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeCustomerModuleMetaInfoResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeCustomerModuleMetaInfoResponseBody::ResultObject) };
    inline DescribeCustomerModuleMetaInfoResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeCustomerModuleMetaInfoResponseBody::ResultObject) };
    inline DescribeCustomerModuleMetaInfoResponseBody& setResultObject(const DescribeCustomerModuleMetaInfoResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeCustomerModuleMetaInfoResponseBody& setResultObject(DescribeCustomerModuleMetaInfoResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomerModuleMetaInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<int64_t> httpStatusCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeCustomerModuleMetaInfoResponseBody::ResultObject> resultObject_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
