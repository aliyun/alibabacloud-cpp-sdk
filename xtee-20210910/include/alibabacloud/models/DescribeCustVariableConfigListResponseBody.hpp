// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeCustVariableConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariableConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustVariableConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeCustVariableConfigListResponseBody() = default ;
    DescribeCustVariableConfigListResponseBody(const DescribeCustVariableConfigListResponseBody &) = default ;
    DescribeCustVariableConfigListResponseBody(DescribeCustVariableConfigListResponseBody &&) = default ;
    DescribeCustVariableConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariableConfigListResponseBody() = default ;
    DescribeCustVariableConfigListResponseBody& operator=(const DescribeCustVariableConfigListResponseBody &) = default ;
    DescribeCustVariableConfigListResponseBody& operator=(DescribeCustVariableConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(configKey, configKey_);
        DARABONBA_PTR_TO_JSON(configValue, configValue_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(configKey, configKey_);
        DARABONBA_PTR_FROM_JSON(configValue, configValue_);
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
      virtual bool empty() const override { return this->configKey_ == nullptr
        && this->configValue_ == nullptr; };
      // configKey Field Functions 
      bool hasConfigKey() const { return this->configKey_ != nullptr;};
      void deleteConfigKey() { this->configKey_ = nullptr;};
      inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
      inline ResultObject& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


      // configValue Field Functions 
      bool hasConfigValue() const { return this->configValue_ != nullptr;};
      void deleteConfigValue() { this->configValue_ = nullptr;};
      inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
      inline ResultObject& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    protected:
      // Configuration key
      shared_ptr<string> configKey_ {};
      // Configuration value
      shared_ptr<string> configValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustVariableConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeCustVariableConfigListResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeCustVariableConfigListResponseBody::ResultObject>) };
    inline vector<DescribeCustVariableConfigListResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeCustVariableConfigListResponseBody::ResultObject>) };
    inline DescribeCustVariableConfigListResponseBody& setResultObject(const vector<DescribeCustVariableConfigListResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeCustVariableConfigListResponseBody& setResultObject(vector<DescribeCustVariableConfigListResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<vector<DescribeCustVariableConfigListResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
