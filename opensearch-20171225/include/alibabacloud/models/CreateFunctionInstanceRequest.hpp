// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFUNCTIONINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFUNCTIONINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateFunctionInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(createParameters, createParameters_);
      DARABONBA_PTR_TO_JSON(cron, cron_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(functionType, functionType_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(usageParameters, usageParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFunctionInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(createParameters, createParameters_);
      DARABONBA_PTR_FROM_JSON(cron, cron_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(functionType, functionType_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(usageParameters, usageParameters_);
    };
    CreateFunctionInstanceRequest() = default ;
    CreateFunctionInstanceRequest(const CreateFunctionInstanceRequest &) = default ;
    CreateFunctionInstanceRequest(CreateFunctionInstanceRequest &&) = default ;
    CreateFunctionInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFunctionInstanceRequest() = default ;
    CreateFunctionInstanceRequest& operator=(const CreateFunctionInstanceRequest &) = default ;
    CreateFunctionInstanceRequest& operator=(CreateFunctionInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageParameters& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, UsageParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      UsageParameters() = default ;
      UsageParameters(const UsageParameters &) = default ;
      UsageParameters(UsageParameters &&) = default ;
      UsageParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageParameters() = default ;
      UsageParameters& operator=(const UsageParameters &) = default ;
      UsageParameters& operator=(UsageParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UsageParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline UsageParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The parameter name.
      shared_ptr<string> name_ {};
      // The parameter value.
      shared_ptr<string> value_ {};
    };

    class CreateParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateParameters& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CreateParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      CreateParameters() = default ;
      CreateParameters(const CreateParameters &) = default ;
      CreateParameters(CreateParameters &&) = default ;
      CreateParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateParameters() = default ;
      CreateParameters& operator=(const CreateParameters &) = default ;
      CreateParameters& operator=(CreateParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CreateParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The parameter name.
      shared_ptr<string> name_ {};
      // The parameter value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->createParameters_ == nullptr
        && this->cron_ == nullptr && this->description_ == nullptr && this->functionType_ == nullptr && this->instanceName_ == nullptr && this->modelType_ == nullptr
        && this->usageParameters_ == nullptr; };
    // createParameters Field Functions 
    bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
    void deleteCreateParameters() { this->createParameters_ = nullptr;};
    inline const vector<CreateFunctionInstanceRequest::CreateParameters> & getCreateParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<CreateFunctionInstanceRequest::CreateParameters>) };
    inline vector<CreateFunctionInstanceRequest::CreateParameters> getCreateParameters() { DARABONBA_PTR_GET(createParameters_, vector<CreateFunctionInstanceRequest::CreateParameters>) };
    inline CreateFunctionInstanceRequest& setCreateParameters(const vector<CreateFunctionInstanceRequest::CreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
    inline CreateFunctionInstanceRequest& setCreateParameters(vector<CreateFunctionInstanceRequest::CreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline CreateFunctionInstanceRequest& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFunctionInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // functionType Field Functions 
    bool hasFunctionType() const { return this->functionType_ != nullptr;};
    void deleteFunctionType() { this->functionType_ = nullptr;};
    inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
    inline CreateFunctionInstanceRequest& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateFunctionInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline CreateFunctionInstanceRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // usageParameters Field Functions 
    bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
    void deleteUsageParameters() { this->usageParameters_ = nullptr;};
    inline const vector<CreateFunctionInstanceRequest::UsageParameters> & getUsageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<CreateFunctionInstanceRequest::UsageParameters>) };
    inline vector<CreateFunctionInstanceRequest::UsageParameters> getUsageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<CreateFunctionInstanceRequest::UsageParameters>) };
    inline CreateFunctionInstanceRequest& setUsageParameters(const vector<CreateFunctionInstanceRequest::UsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
    inline CreateFunctionInstanceRequest& setUsageParameters(vector<CreateFunctionInstanceRequest::UsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


  protected:
    // The parameters used to create the instance.
    shared_ptr<vector<CreateFunctionInstanceRequest::CreateParameters>> createParameters_ {};
    // The CRON expression used to schedule periodic training, in the format of Minutes Hours DayofMonth Month DayofWeek. The default value is empty, which specifies that no periodic training is performed. A value of 0 for DayofWeek specifies Sunday.
    shared_ptr<string> cron_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The feature type.
    // 
    // - Default value: PAAS. Training is required before you can use the feature.
    shared_ptr<string> functionType_ {};
    // The instance name. The name must be 1 to 30 characters in length and can contain letters, digits, and underscores (_). The name is case-sensitive and must start with a letter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The model type. The value varies based on the model.
    // 
    // - Click-through rate (CTR) model: tf_checkpoint
    // 
    // - Popularity model: pop
    // 
    // - Category model: offline_inference
    // 
    // - Hotword model: offline_inference
    // 
    // - Hint model: offline_inference
    // 
    // - Hotword model for real-time top searches: near_realtime
    // 
    // - Personalized hint model: near_realtime
    // 
    // - Drop-down suggestion model: offline_inference
    // 
    // - Tokenization model: text
    // 
    // - Term weight model: tf_checkpoint
    // 
    // - Synonym model: offline_inference
    // 
    // This parameter is required.
    shared_ptr<string> modelType_ {};
    // The parameters used to use the instance.
    shared_ptr<vector<CreateFunctionInstanceRequest::UsageParameters>> usageParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
