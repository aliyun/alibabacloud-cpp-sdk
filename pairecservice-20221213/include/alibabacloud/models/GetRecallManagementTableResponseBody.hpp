// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECALLMANAGEMENTTABLERESPONSEBODY_HPP_
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
  class GetRecallManagementTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableDataSizeFluctuationThreshold, enableDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(EnableRowCountFluctuationThreshold, enableRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IndexEffectiveTime, indexEffectiveTime_);
      DARABONBA_PTR_TO_JSON(IndexVersionId, indexVersionId_);
      DARABONBA_PTR_TO_JSON(MaxDataSizeFluctuationThreshold, maxDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MaxRowCountFluctuationThreshold, maxRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
      DARABONBA_PTR_TO_JSON(MaxcomputeSchema, maxcomputeSchema_);
      DARABONBA_PTR_TO_JSON(MaxcomputeTableName, maxcomputeTableName_);
      DARABONBA_PTR_TO_JSON(MinDataSizeFluctuationThreshold, minDataSizeFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(MinRowCountFluctuationThreshold, minRowCountFluctuationThreshold_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartitionFields, partitionFields_);
      DARABONBA_PTR_TO_JSON(RecallManagementTableId, recallManagementTableId_);
      DARABONBA_PTR_TO_JSON(RecallType, recallType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableDataSizeFluctuationThreshold, enableDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(EnableRowCountFluctuationThreshold, enableRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IndexEffectiveTime, indexEffectiveTime_);
      DARABONBA_PTR_FROM_JSON(IndexVersionId, indexVersionId_);
      DARABONBA_PTR_FROM_JSON(MaxDataSizeFluctuationThreshold, maxDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxRowCountFluctuationThreshold, maxRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeProjectName, maxcomputeProjectName_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeSchema, maxcomputeSchema_);
      DARABONBA_PTR_FROM_JSON(MaxcomputeTableName, maxcomputeTableName_);
      DARABONBA_PTR_FROM_JSON(MinDataSizeFluctuationThreshold, minDataSizeFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(MinRowCountFluctuationThreshold, minRowCountFluctuationThreshold_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartitionFields, partitionFields_);
      DARABONBA_PTR_FROM_JSON(RecallManagementTableId, recallManagementTableId_);
      DARABONBA_PTR_FROM_JSON(RecallType, recallType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetRecallManagementTableResponseBody() = default ;
    GetRecallManagementTableResponseBody(const GetRecallManagementTableResponseBody &) = default ;
    GetRecallManagementTableResponseBody(GetRecallManagementTableResponseBody &&) = default ;
    GetRecallManagementTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecallManagementTableResponseBody() = default ;
    GetRecallManagementTableResponseBody& operator=(const GetRecallManagementTableResponseBody &) = default ;
    GetRecallManagementTableResponseBody& operator=(GetRecallManagementTableResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->canDelete_ == nullptr
        && this->config_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr && this->enableDataSizeFluctuationThreshold_ == nullptr && this->enableRowCountFluctuationThreshold_ == nullptr
        && this->fields_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr && this->indexEffectiveTime_ == nullptr && this->indexVersionId_ == nullptr
        && this->maxDataSizeFluctuationThreshold_ == nullptr && this->maxRowCountFluctuationThreshold_ == nullptr && this->maxcomputeProjectName_ == nullptr && this->maxcomputeSchema_ == nullptr && this->maxcomputeTableName_ == nullptr
        && this->minDataSizeFluctuationThreshold_ == nullptr && this->minRowCountFluctuationThreshold_ == nullptr && this->name_ == nullptr && this->partitionFields_ == nullptr && this->recallManagementTableId_ == nullptr
        && this->recallType_ == nullptr && this->requestId_ == nullptr && this->type_ == nullptr; };
    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool getCanDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline GetRecallManagementTableResponseBody& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetRecallManagementTableResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string getDataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline GetRecallManagementTableResponseBody& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetRecallManagementTableResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableDataSizeFluctuationThreshold Field Functions 
    bool hasEnableDataSizeFluctuationThreshold() const { return this->enableDataSizeFluctuationThreshold_ != nullptr;};
    void deleteEnableDataSizeFluctuationThreshold() { this->enableDataSizeFluctuationThreshold_ = nullptr;};
    inline bool getEnableDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(enableDataSizeFluctuationThreshold_, false) };
    inline GetRecallManagementTableResponseBody& setEnableDataSizeFluctuationThreshold(bool enableDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(enableDataSizeFluctuationThreshold_, enableDataSizeFluctuationThreshold) };


    // enableRowCountFluctuationThreshold Field Functions 
    bool hasEnableRowCountFluctuationThreshold() const { return this->enableRowCountFluctuationThreshold_ != nullptr;};
    void deleteEnableRowCountFluctuationThreshold() { this->enableRowCountFluctuationThreshold_ = nullptr;};
    inline bool getEnableRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(enableRowCountFluctuationThreshold_, false) };
    inline GetRecallManagementTableResponseBody& setEnableRowCountFluctuationThreshold(bool enableRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(enableRowCountFluctuationThreshold_, enableRowCountFluctuationThreshold) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const GetRecallManagementTableResponseBody::Fields & getFields() const { DARABONBA_PTR_GET_CONST(fields_, GetRecallManagementTableResponseBody::Fields) };
    inline GetRecallManagementTableResponseBody::Fields getFields() { DARABONBA_PTR_GET(fields_, GetRecallManagementTableResponseBody::Fields) };
    inline GetRecallManagementTableResponseBody& setFields(const GetRecallManagementTableResponseBody::Fields & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetRecallManagementTableResponseBody& setFields(GetRecallManagementTableResponseBody::Fields && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetRecallManagementTableResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetRecallManagementTableResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // indexEffectiveTime Field Functions 
    bool hasIndexEffectiveTime() const { return this->indexEffectiveTime_ != nullptr;};
    void deleteIndexEffectiveTime() { this->indexEffectiveTime_ = nullptr;};
    inline string getIndexEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(indexEffectiveTime_, "") };
    inline GetRecallManagementTableResponseBody& setIndexEffectiveTime(string indexEffectiveTime) { DARABONBA_PTR_SET_VALUE(indexEffectiveTime_, indexEffectiveTime) };


    // indexVersionId Field Functions 
    bool hasIndexVersionId() const { return this->indexVersionId_ != nullptr;};
    void deleteIndexVersionId() { this->indexVersionId_ = nullptr;};
    inline string getIndexVersionId() const { DARABONBA_PTR_GET_DEFAULT(indexVersionId_, "") };
    inline GetRecallManagementTableResponseBody& setIndexVersionId(string indexVersionId) { DARABONBA_PTR_SET_VALUE(indexVersionId_, indexVersionId) };


    // maxDataSizeFluctuationThreshold Field Functions 
    bool hasMaxDataSizeFluctuationThreshold() const { return this->maxDataSizeFluctuationThreshold_ != nullptr;};
    void deleteMaxDataSizeFluctuationThreshold() { this->maxDataSizeFluctuationThreshold_ = nullptr;};
    inline int32_t getMaxDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(maxDataSizeFluctuationThreshold_, 0) };
    inline GetRecallManagementTableResponseBody& setMaxDataSizeFluctuationThreshold(int32_t maxDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(maxDataSizeFluctuationThreshold_, maxDataSizeFluctuationThreshold) };


    // maxRowCountFluctuationThreshold Field Functions 
    bool hasMaxRowCountFluctuationThreshold() const { return this->maxRowCountFluctuationThreshold_ != nullptr;};
    void deleteMaxRowCountFluctuationThreshold() { this->maxRowCountFluctuationThreshold_ = nullptr;};
    inline int32_t getMaxRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(maxRowCountFluctuationThreshold_, 0) };
    inline GetRecallManagementTableResponseBody& setMaxRowCountFluctuationThreshold(int32_t maxRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(maxRowCountFluctuationThreshold_, maxRowCountFluctuationThreshold) };


    // maxcomputeProjectName Field Functions 
    bool hasMaxcomputeProjectName() const { return this->maxcomputeProjectName_ != nullptr;};
    void deleteMaxcomputeProjectName() { this->maxcomputeProjectName_ = nullptr;};
    inline string getMaxcomputeProjectName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeProjectName_, "") };
    inline GetRecallManagementTableResponseBody& setMaxcomputeProjectName(string maxcomputeProjectName) { DARABONBA_PTR_SET_VALUE(maxcomputeProjectName_, maxcomputeProjectName) };


    // maxcomputeSchema Field Functions 
    bool hasMaxcomputeSchema() const { return this->maxcomputeSchema_ != nullptr;};
    void deleteMaxcomputeSchema() { this->maxcomputeSchema_ = nullptr;};
    inline string getMaxcomputeSchema() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeSchema_, "") };
    inline GetRecallManagementTableResponseBody& setMaxcomputeSchema(string maxcomputeSchema) { DARABONBA_PTR_SET_VALUE(maxcomputeSchema_, maxcomputeSchema) };


    // maxcomputeTableName Field Functions 
    bool hasMaxcomputeTableName() const { return this->maxcomputeTableName_ != nullptr;};
    void deleteMaxcomputeTableName() { this->maxcomputeTableName_ = nullptr;};
    inline string getMaxcomputeTableName() const { DARABONBA_PTR_GET_DEFAULT(maxcomputeTableName_, "") };
    inline GetRecallManagementTableResponseBody& setMaxcomputeTableName(string maxcomputeTableName) { DARABONBA_PTR_SET_VALUE(maxcomputeTableName_, maxcomputeTableName) };


    // minDataSizeFluctuationThreshold Field Functions 
    bool hasMinDataSizeFluctuationThreshold() const { return this->minDataSizeFluctuationThreshold_ != nullptr;};
    void deleteMinDataSizeFluctuationThreshold() { this->minDataSizeFluctuationThreshold_ = nullptr;};
    inline int32_t getMinDataSizeFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(minDataSizeFluctuationThreshold_, 0) };
    inline GetRecallManagementTableResponseBody& setMinDataSizeFluctuationThreshold(int32_t minDataSizeFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(minDataSizeFluctuationThreshold_, minDataSizeFluctuationThreshold) };


    // minRowCountFluctuationThreshold Field Functions 
    bool hasMinRowCountFluctuationThreshold() const { return this->minRowCountFluctuationThreshold_ != nullptr;};
    void deleteMinRowCountFluctuationThreshold() { this->minRowCountFluctuationThreshold_ = nullptr;};
    inline int32_t getMinRowCountFluctuationThreshold() const { DARABONBA_PTR_GET_DEFAULT(minRowCountFluctuationThreshold_, 0) };
    inline GetRecallManagementTableResponseBody& setMinRowCountFluctuationThreshold(int32_t minRowCountFluctuationThreshold) { DARABONBA_PTR_SET_VALUE(minRowCountFluctuationThreshold_, minRowCountFluctuationThreshold) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetRecallManagementTableResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionFields Field Functions 
    bool hasPartitionFields() const { return this->partitionFields_ != nullptr;};
    void deletePartitionFields() { this->partitionFields_ = nullptr;};
    inline string getPartitionFields() const { DARABONBA_PTR_GET_DEFAULT(partitionFields_, "") };
    inline GetRecallManagementTableResponseBody& setPartitionFields(string partitionFields) { DARABONBA_PTR_SET_VALUE(partitionFields_, partitionFields) };


    // recallManagementTableId Field Functions 
    bool hasRecallManagementTableId() const { return this->recallManagementTableId_ != nullptr;};
    void deleteRecallManagementTableId() { this->recallManagementTableId_ = nullptr;};
    inline string getRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableId_, "") };
    inline GetRecallManagementTableResponseBody& setRecallManagementTableId(string recallManagementTableId) { DARABONBA_PTR_SET_VALUE(recallManagementTableId_, recallManagementTableId) };


    // recallType Field Functions 
    bool hasRecallType() const { return this->recallType_ != nullptr;};
    void deleteRecallType() { this->recallType_ = nullptr;};
    inline string getRecallType() const { DARABONBA_PTR_GET_DEFAULT(recallType_, "") };
    inline GetRecallManagementTableResponseBody& setRecallType(string recallType) { DARABONBA_PTR_SET_VALUE(recallType_, recallType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecallManagementTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetRecallManagementTableResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> canDelete_ {};
    shared_ptr<string> config_ {};
    shared_ptr<string> dataSource_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enableDataSizeFluctuationThreshold_ {};
    shared_ptr<bool> enableRowCountFluctuationThreshold_ {};
    shared_ptr<GetRecallManagementTableResponseBody::Fields> fields_ {};
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> gmtModifiedTime_ {};
    shared_ptr<string> indexEffectiveTime_ {};
    shared_ptr<string> indexVersionId_ {};
    shared_ptr<int32_t> maxDataSizeFluctuationThreshold_ {};
    shared_ptr<int32_t> maxRowCountFluctuationThreshold_ {};
    shared_ptr<string> maxcomputeProjectName_ {};
    // maxcompute schema。
    shared_ptr<string> maxcomputeSchema_ {};
    shared_ptr<string> maxcomputeTableName_ {};
    shared_ptr<int32_t> minDataSizeFluctuationThreshold_ {};
    shared_ptr<int32_t> minRowCountFluctuationThreshold_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> partitionFields_ {};
    shared_ptr<string> recallManagementTableId_ {};
    shared_ptr<string> recallType_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
