// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATBIPREDICTSSESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATBIPREDICTSSESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PolardbAI20251013
{
namespace Models
{
  class ChatBIPredictSseShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatBIPredictSseShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(GenerateChart, generateChart_);
      DARABONBA_PTR_TO_JSON(GenerateSummary, generateSummary_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(PatternIndexTableName, patternIndexTableName_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(SchemaIndexTableName, schemaIndexTableName_);
      DARABONBA_PTR_TO_JSON(SelectData, selectData_);
    };
    friend void from_json(const Darabonba::Json& j, ChatBIPredictSseShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(GenerateChart, generateChart_);
      DARABONBA_PTR_FROM_JSON(GenerateSummary, generateSummary_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(PatternIndexTableName, patternIndexTableName_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(SchemaIndexTableName, schemaIndexTableName_);
      DARABONBA_PTR_FROM_JSON(SelectData, selectData_);
    };
    ChatBIPredictSseShrinkRequest() = default ;
    ChatBIPredictSseShrinkRequest(const ChatBIPredictSseShrinkRequest &) = default ;
    ChatBIPredictSseShrinkRequest(ChatBIPredictSseShrinkRequest &&) = default ;
    ChatBIPredictSseShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatBIPredictSseShrinkRequest() = default ;
    ChatBIPredictSseShrinkRequest& operator=(const ChatBIPredictSseShrinkRequest &) = default ;
    ChatBIPredictSseShrinkRequest& operator=(ChatBIPredictSseShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && this->generateChart_ == nullptr && this->generateSummary_ == nullptr && this->instanceName_ == nullptr && this->parametersShrink_ == nullptr && this->patternIndexTableName_ == nullptr
        && this->question_ == nullptr && this->schemaIndexTableName_ == nullptr && this->selectData_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ChatBIPredictSseShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // generateChart Field Functions 
    bool hasGenerateChart() const { return this->generateChart_ != nullptr;};
    void deleteGenerateChart() { this->generateChart_ = nullptr;};
    inline bool getGenerateChart() const { DARABONBA_PTR_GET_DEFAULT(generateChart_, false) };
    inline ChatBIPredictSseShrinkRequest& setGenerateChart(bool generateChart) { DARABONBA_PTR_SET_VALUE(generateChart_, generateChart) };


    // generateSummary Field Functions 
    bool hasGenerateSummary() const { return this->generateSummary_ != nullptr;};
    void deleteGenerateSummary() { this->generateSummary_ = nullptr;};
    inline bool getGenerateSummary() const { DARABONBA_PTR_GET_DEFAULT(generateSummary_, false) };
    inline ChatBIPredictSseShrinkRequest& setGenerateSummary(bool generateSummary) { DARABONBA_PTR_SET_VALUE(generateSummary_, generateSummary) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ChatBIPredictSseShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline ChatBIPredictSseShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // patternIndexTableName Field Functions 
    bool hasPatternIndexTableName() const { return this->patternIndexTableName_ != nullptr;};
    void deletePatternIndexTableName() { this->patternIndexTableName_ = nullptr;};
    inline string getPatternIndexTableName() const { DARABONBA_PTR_GET_DEFAULT(patternIndexTableName_, "") };
    inline ChatBIPredictSseShrinkRequest& setPatternIndexTableName(string patternIndexTableName) { DARABONBA_PTR_SET_VALUE(patternIndexTableName_, patternIndexTableName) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline ChatBIPredictSseShrinkRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // schemaIndexTableName Field Functions 
    bool hasSchemaIndexTableName() const { return this->schemaIndexTableName_ != nullptr;};
    void deleteSchemaIndexTableName() { this->schemaIndexTableName_ = nullptr;};
    inline string getSchemaIndexTableName() const { DARABONBA_PTR_GET_DEFAULT(schemaIndexTableName_, "") };
    inline ChatBIPredictSseShrinkRequest& setSchemaIndexTableName(string schemaIndexTableName) { DARABONBA_PTR_SET_VALUE(schemaIndexTableName_, schemaIndexTableName) };


    // selectData Field Functions 
    bool hasSelectData() const { return this->selectData_ != nullptr;};
    void deleteSelectData() { this->selectData_ = nullptr;};
    inline bool getSelectData() const { DARABONBA_PTR_GET_DEFAULT(selectData_, false) };
    inline ChatBIPredictSseShrinkRequest& setSelectData(bool selectData) { DARABONBA_PTR_SET_VALUE(selectData_, selectData) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    shared_ptr<bool> generateChart_ {};
    shared_ptr<bool> generateSummary_ {};
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> parametersShrink_ {};
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
