// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateRecallManagementTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableDataSizeFluctuationThreshold, enableDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(EnableRowCountFluctuationThreshold, enableRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxDataSizeFluctuationThreshold, maxDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MaxRowCountFluctuationThreshold, maxRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
      DARABONBA_PTR_TO_JSON(MaxcomputeSchema, maxcomputeSchema_);
      DARABONBA_PTR_TO_JSON(MaxcomputeTableName, maxcomputeTableName_);
      DARABONBA_PTR_TO_JSON(MinDataSizeFluctuationThreshold, minDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MinRowCountFluctuationThreshold, minRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecallType, recallType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecallManagementTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableDataSizeFluctuationThreshold, enableDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(EnableRowCountFluctuationThreshold, enableRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxDataSizeFluctuationThreshold, maxDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxRowCountFluctuationThreshold, maxRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeSchema, maxcomputeSchema_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeTableName, maxcomputeTableName_);
      DARABONBA_PTR_FROM_JSON(MinDataSizeFluctuationThreshold, minDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MinRowCountFluctuationThreshold, minRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateRecallManagementTableRequest() = default ;
    CreateRecallManagementTableRequest(const CreateRecallManagementTableRequest &) = default ;
    CreateRecallManagementTableRequest(CreateRecallManagementTableRequest &&) = default ;
    CreateRecallManagementTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecallManagementTableRequest() = default ;
    CreateRecallManagementTableRequest& operator=(const CreateRecallManagementTableRequest &) = default ;
    CreateRecallManagementTableRequest& operator=(CreateRecallManagementTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VectorDimension, vectorDimension_);
        DARABONBA_PTR_TO_JSON(VectorMetricType, vectorMetricType_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VectorDimension, vectorDimension_);
        DARABONBA_PTR_FROM_JSON(VectorMetricType, vectorMetricType_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attributes_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->vectorDimension_ == nullptr && this->vectorMetricType_ == nullptr; };
      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<string> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<string>) };
      inline vector<string> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<string>) };
      inline Fields& setAttributes(const vector<string> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Fields& setAttributes(vector<string> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vectorDimension Field Functions 
      bool hasVectorDimension() const { return this->vectorDimension_ != nullptr;};
      void deleteVectorDimension() { this->vectorDimension_ = nullptr;};
      inline int32_t getVectorDimension() const { DARABONBA_PTR_GET_DEFAULT(vectorDimension_, 0) };
      inline Fields& setVectorDimension(int32_t vectorDimension) { DARABONBA_PTR_SET_VALUE(vectorDimension_, vectorDimension) };


      // vectorMetricType Field Functions 
      bool hasVectorMetricType() const { return this->vectorMetricType_ != nullptr;};
      void deleteVectorMetricType() { this->vectorMetricType_ = nullptr;};
      inline string getVectorMetricType() const { DARABONBA_PTR_GET_DEFAULT(vectorMetricType_, "") };
      inline Fields& setVectorMetricType(string vectorMetricType) { DARABONBA_PTR_SET_VALUE(vectorMetricType_, vectorMetricType) };


    protected:
      shared_ptr<vector<string>> attributes_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int32_t> vectorDimension_ {};
      shared_ptr<string> vectorMetricType_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->dataSource_ == nullptr && this->description_ == nullptr && this->enableDataSizeFluctuationThreshold_ == nullptr && this->enableRowCountFluctuationThreshold_ == nullptr && this->fields_ == nullptr
        && this->instanceId_ == nullptr && this->maxDataSizeFluctuationThreshold_ == nullptr && this->maxRowCountFluctuationThreshold_ == nullptr && this->maxcomputeProjectName_ == nullptr && this->maxcomputeSchema_ == nullptr
        && this->maxcomputeTableName_ == nullptr && this->minDataSizeFluctuationThreshold_ == nullptr && this->minRowCountFluctuationThreshold_ == nullptr && this->name_ == nullptr && this->recallType_ == nullptr
        && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateRecallManagementTableRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline CreateRecallManagementTableRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRecallManagementTableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableDataSizeFluctuationThreshold Field Functions 
    bool hasEnableDataSizeFluctuationThreshold() const { return this->enableDataSizeFluctuationThreshold_ != nullptr;};
    void deleteEnableDataSizeFluctuationThreshold() { this->enableDataSizeFluctuationThreshold_ = nullptr;};
    inline bool getEnableDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(enableDataSizeFluctuationThreshold_, false) };
    inline CreateRecallManagementTableRequest& setEnableDataSizeFluctuationThreshold(bool enableDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(enableDataSizeFluctuationThreshold_, enableDataSizeFluctuationThreshold) };


    // enableRowCountFluctuationThreshold Field Functions 
    bool hasEnableRowCountFluctuationThreshold() const { return this->enableRowCountFluctuationThreshold_ != nullptr;};
    void deleteEnableRowCountFluctuationThreshold() { this->enableRowCountFluctuationThreshold_ = nullptr;};
    inline bool getEnableRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(enableRowCountFluctuationThreshold_, false) };
    inline CreateRecallManagementTableRequest& setEnableRowCountFluctuationThreshold(bool enableRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(enableRowCountFluctuationThreshold_, enableRowCountFluctuationThreshold) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<CreateRecallManagementTableRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<CreateRecallManagementTableRequest::Fields>) };
    inline vector<CreateRecallManagementTableRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<CreateRecallManagementTableRequest::Fields>) };
    inline CreateRecallManagementTableRequest& setFields(const vector<CreateRecallManagementTableRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline CreateRecallManagementTableRequest& setFields(vector<CreateRecallManagementTableRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRecallManagementTableRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxDataSizeFluctuationThreshold Field Functions 
    bool hasMaxDataSizeFluctuationThreshold() const { return this->maxDataSizeFluctuationThreshold_ != nullptr;};
    void deleteMaxDataSizeFluctuationThreshold() { this->maxDataSizeFluctuationThreshold_ = nullptr;};
    inline int64_t getMaxDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(maxDataSizeFluctuationThreshold_, 0L) };
    inline CreateRecallManagementTableRequest& setMaxDataSizeFluctuationThreshold(int64_t maxDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(maxDataSizeFluctuationThreshold_, maxDataSizeFluctuationThreshold) };


    // maxRowCountFluctuationThreshold Field Functions 
    bool hasMaxRowCountFluctuationThreshold() const { return this->maxRowCountFluctuationThreshold_ != nullptr;};
    void deleteMaxRowCountFluctuationThreshold() { this->maxRowCountFluctuationThreshold_ = nullptr;};
    inline int64_t getMaxRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(maxRowCountFluctuationThreshold_, 0L) };
    inline CreateRecallManagementTableRequest& setMaxRowCountFluctuationThreshold(int64_t maxRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(maxRowCountFluctuationThreshold_, maxRowCountFluctuationThreshold) };


    // maxcomputeProjectName Field Functions 
    bool hasMaxcomputeProjectName() const { return this->maxcomputeProjectName_ != nullptr;};
    void deleteMaxcomputeProjectName() { this->maxcomputeProjectName_ = nullptr;};
    inline string getMaxcomputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeProjectName_, "") };
    inline CreateRecallManagementTableRequest& setMaxcomputeProjectName(string maxcomputeProjectName) { DARABONBA_PTR_SET_VALUE(maxcomputeProjectName_, maxcomputeProjectName) };


    // maxcomputeSchema Field Functions 
    bool hasMaxcomputeSchema() const { return this->maxcomputeSchema_ != nullptr;};
    void deleteMaxcomputeSchema() { this->maxcomputeSchema_ = nullptr;};
    inline string getMaxcomputeSchema() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeSchema_, "") };
    inline CreateRecallManagementTableRequest& setMaxcomputeSchema(string maxcomputeSchema) { DARABONBA_PTR_SET_VALUE(maxcomputeSchema_, maxcomputeSchema) };


    // maxcomputeTableName Field Functions 
    bool hasMaxcomputeTableName() const { return this->maxcomputeTableName_ != nullptr;};
    void deleteMaxcomputeTableName() { this->maxcomputeTableName_ = nullptr;};
    inline string getMaxcomputeTableName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeTableName_, "") };
    inline CreateRecallManagementTableRequest& setMaxcomputeTableName(string maxcomputeTableName) { DARABONBA_PTR_SET_VALUE(maxcomputeTableName_, maxcomputeTableName) };


    // minDataSizeFluctuationThreshold Field Functions 
    bool hasMinDataSizeFluctuationThreshold() const { return this->minDataSizeFluctuationThreshold_ != nullptr;};
    void deleteMinDataSizeFluctuationThreshold() { this->minDataSizeFluctuationThreshold_ = nullptr;};
    inline int64_t getMinDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(minDataSizeFluctuationThreshold_, 0L) };
    inline CreateRecallManagementTableRequest& setMinDataSizeFluctuationThreshold(int64_t minDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(minDataSizeFluctuationThreshold_, minDataSizeFluctuationThreshold) };


    // minRowCountFluctuationThreshold Field Functions 
    bool hasMinRowCountFluctuationThreshold() const { return this->minRowCountFluctuationThreshold_ != nullptr;};
    void deleteMinRowCountFluctuationThreshold() { this->minRowCountFluctuationThreshold_ = nullptr;};
    inline int64_t getMinRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(minRowCountFluctuationThreshold_, 0L) };
    inline CreateRecallManagementTableRequest& setMinRowCountFluctuationThreshold(int64_t minRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(minRowCountFluctuationThreshold_, minRowCountFluctuationThreshold) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRecallManagementTableRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline string getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
    inline CreateRecallManagementTableRequest& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRecallManagementTableRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> dataSource_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableDataSizeFluctuationThreshold_ {};
    shared_ptr<bool> enableRowCountFluctuationThreshold_ {};
    shared_ptr<vector<CreateRecallManagementTableRequest::Fields>> fields_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> maxDataSizeFluctuationThreshold_ {};
    shared_ptr<int64_t> maxRowCountFluctuationThreshold_ {};
    shared_ptr<string> maxcomputeProjectName_ {};
    shared_ptr<string> maxcomputeSchema_ {};
    shared_ptr<string> maxcomputeTableName_ {};
    shared_ptr<int64_t> minDataSizeFluctuationThreshold_ {};
    shared_ptr<int64_t> minRowCountFluctuationThreshold_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> recallType_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
