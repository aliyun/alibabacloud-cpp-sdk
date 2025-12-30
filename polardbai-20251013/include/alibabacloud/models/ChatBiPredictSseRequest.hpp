// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIPREDICTSSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIPREDICTSSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIPredictSseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIPredictSseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(GenerateChart, generateChart_);
      DARABONBA_PTR_TO_JSON(GenerateSummary, generateSummary_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PatternIndexTableName, patternIndexTableName_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(SchemaIndexTableName, schemaIndexTableName_);
      DARABONBA_PTR_TO_JSON(SelectData, selectData_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIPredictSseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(GenerateChart, generateChart_);
      DARABONBA_PTR_FROM_JSON(GenerateSummary, generateSummary_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PatternIndexTableName, patternIndexTableName_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(SchemaIndexTableName, schemaIndexTableName_);
      DARABONBA_PTR_FROM_JSON(SelectData, selectData_);
    };
    ChatBIPredictSseRequest() = default ;
    ChatBIPredictSseRequest(const ChatBIPredictSseRequest &) = default ;
    ChatBIPredictSseRequest(ChatBIPredictSseRequest &&) = default ;
    ChatBIPredictSseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIPredictSseRequest() = default ;
    ChatBIPredictSseRequest& operator=(const ChatBIPredictSseRequest &) = default ;
    ChatBIPredictSseRequest& operator=(ChatBIPredictSseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(PatternIndexThreshold, patternIndexThreshold_);
        DARABONBA_PTR_TO_JSON(PatternIndexTop, patternIndexTop_);
        DARABONBA_PTR_TO_JSON(ResultType, resultType_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(PatternIndexThreshold, patternIndexThreshold_);
        DARABONBA_PTR_FROM_JSON(PatternIndexTop, patternIndexTop_);
        DARABONBA_PTR_FROM_JSON(ResultType, resultType_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->patternIndexThreshold_ == nullptr
        && this->patternIndexTop_ == nullptr && this->resultType_ == nullptr; };
      // patternIndexThreshold Field Functions 
      bool hasPatternIndexThreshold() const { return this->patternIndexThreshold_ != nullptr;};
      void deletePatternIndexThreshold() { this->patternIndexThreshold_ = nullptr;};
      inline double getPatternIndexThreshold() const { DARABONBA_PTR_GET_DEFAULT(patternIndexThreshold_, 0.0) };
      inline Parameters& setPatternIndexThreshold(double patternIndexThreshold) { DARABONBA_PTR_SET_VALUE(patternIndexThreshold_, patternIndexThreshold) };


      // patternIndexTop Field Functions 
      bool hasPatternIndexTop() const { return this->patternIndexTop_ != nullptr;};
      void deletePatternIndexTop() { this->patternIndexTop_ = nullptr;};
      inline int32_t getPatternIndexTop() const { DARABONBA_PTR_GET_DEFAULT(patternIndexTop_, 0) };
      inline Parameters& setPatternIndexTop(int32_t patternIndexTop) { DARABONBA_PTR_SET_VALUE(patternIndexTop_, patternIndexTop) };


      // resultType Field Functions 
      bool hasResultType() const { return this->resultType_ != nullptr;};
      void deleteResultType() { this->resultType_ = nullptr;};
      inline string getResultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
      inline Parameters& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    protected:
      shared_ptr<double> patternIndexThreshold_ {};
      shared_ptr<int32_t> patternIndexTop_ {};
      shared_ptr<string> resultType_ {};
    };

    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->generateChart_ == nullptr && this->generateSummary_ == nullptr && this->instanceName_ == nullptr && this->parameters_ == nullptr && this->patternIndexTableName_ == nullptr
        && this->question_ == nullptr && this->schemaIndexTableName_ == nullptr && this->selectData_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIPredictSseRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // generateChart Field Functions 
    bool hasGenerateChart() const { return this->generateChart_ != nullptr;};
    void deleteGenerateChart() { this->generateChart_ = nullptr;};
    inline bool getGenerateChart() const { DARABONBA_PTR_GET_DEFAULT(generateChart_, false) };
    inline ChatBIPredictSseRequest& setGenerateChart(bool generateChart) { DARABONBA_PTR_SET_VALUE(generateChart_, generateChart) };


    // generateSummary Field Functions 
    bool hasGenerateSummary() const { return this->generateSummary_ != nullptr;};
    void deleteGenerateSummary() { this->generateSummary_ = nullptr;};
    inline bool getGenerateSummary() const { DARABONBA_PTR_GET_DEFAULT(generateSummary_, false) };
    inline ChatBIPredictSseRequest& setGenerateSummary(bool generateSummary) { DARABONBA_PTR_SET_VALUE(generateSummary_, generateSummary) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIPredictSseRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const ChatBIPredictSseRequest::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, ChatBIPredictSseRequest::Parameters) };
    inline ChatBIPredictSseRequest::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, ChatBIPredictSseRequest::Parameters) };
    inline ChatBIPredictSseRequest& setParameters(const ChatBIPredictSseRequest::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ChatBIPredictSseRequest& setParameters(ChatBIPredictSseRequest::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // patternIndexTableName Field Functions 
    bool hasPatternIndexTableName() const { return this->patternIndexTableName_ != nullptr;};
    void deletePatternIndexTableName() { this->patternIndexTableName_ = nullptr;};
    inline string getPatternIndexTableName() const { DARABONBA_PTR_GET_DEFAULT(patternIndexTableName_, "") };
    inline ChatBIPredictSseRequest& setPatternIndexTableName(string patternIndexTableName) { DARABONBA_PTR_SET_VALUE(patternIndexTableName_, patternIndexTableName) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline ChatBIPredictSseRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // schemaIndexTableName Field Functions 
    bool hasSchemaIndexTableName() const { return this->schemaIndexTableName_ != nullptr;};
    void deleteSchemaIndexTableName() { this->schemaIndexTableName_ = nullptr;};
    inline string getSchemaIndexTableName() const { DARABONBA_PTR_GET_DEFAULT(schemaIndexTableName_, "") };
    inline ChatBIPredictSseRequest& setSchemaIndexTableName(string schemaIndexTableName) { DARABONBA_PTR_SET_VALUE(schemaIndexTableName_, schemaIndexTableName) };


    // selectData Field Functions 
    bool hasSelectData() const { return this->selectData_ != nullptr;};
    void deleteSelectData() { this->selectData_ = nullptr;};
    inline bool getSelectData() const { DARABONBA_PTR_GET_DEFAULT(selectData_, false) };
    inline ChatBIPredictSseRequest& setSelectData(bool selectData) { DARABONBA_PTR_SET_VALUE(selectData_, selectData) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    shared_ptr<bool> generateChart_ {};
    shared_ptr<bool> generateSummary_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<ChatBIPredictSseRequest::Parameters> parameters_ {};
    shared_ptr<string> patternIndexTableName_ {};
    // This parameter is required.
    shared_ptr<string> question_ {};
    shared_ptr<string> schemaIndexTableName_ {};
    shared_ptr<bool> selectData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PolardbAI20251013
#endif
