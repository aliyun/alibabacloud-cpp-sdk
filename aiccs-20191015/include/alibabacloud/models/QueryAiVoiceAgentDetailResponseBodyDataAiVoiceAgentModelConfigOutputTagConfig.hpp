// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGOUTPUTTAGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTMODELCONFIGOUTPUTTAGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OutputTagDescription, outputTagDescription_);
      DARABONBA_PTR_TO_JSON(OutputTagEnum, outputTagEnum_);
      DARABONBA_PTR_TO_JSON(OutputTagName, outputTagName_);
      DARABONBA_PTR_TO_JSON(OutputTagType, outputTagType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OutputTagDescription, outputTagDescription_);
      DARABONBA_PTR_FROM_JSON(OutputTagEnum, outputTagEnum_);
      DARABONBA_PTR_FROM_JSON(OutputTagName, outputTagName_);
      DARABONBA_PTR_FROM_JSON(OutputTagType, outputTagType_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->outputTagDescription_ == nullptr && return this->outputTagEnum_ == nullptr && return this->outputTagName_ == nullptr && return this->outputTagType_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // outputTagDescription Field Functions 
    bool hasOutputTagDescription() const { return this->outputTagDescription_ != nullptr;};
    void deleteOutputTagDescription() { this->outputTagDescription_ = nullptr;};
    inline string outputTagDescription() const { DARABONBA_PTR_GET_DEFAULT(outputTagDescription_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& setOutputTagDescription(string outputTagDescription) { DARABONBA_PTR_SET_VALUE(outputTagDescription_, outputTagDescription) };


    // outputTagEnum Field Functions 
    bool hasOutputTagEnum() const { return this->outputTagEnum_ != nullptr;};
    void deleteOutputTagEnum() { this->outputTagEnum_ = nullptr;};
    inline const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum> & outputTagEnum() const { DARABONBA_PTR_GET_CONST(outputTagEnum_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum>) };
    inline vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum> outputTagEnum() { DARABONBA_PTR_GET(outputTagEnum_, vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum>) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& setOutputTagEnum(const vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum> & outputTagEnum) { DARABONBA_PTR_SET_VALUE(outputTagEnum_, outputTagEnum) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& setOutputTagEnum(vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum> && outputTagEnum) { DARABONBA_PTR_SET_RVALUE(outputTagEnum_, outputTagEnum) };


    // outputTagName Field Functions 
    bool hasOutputTagName() const { return this->outputTagName_ != nullptr;};
    void deleteOutputTagName() { this->outputTagName_ = nullptr;};
    inline string outputTagName() const { DARABONBA_PTR_GET_DEFAULT(outputTagName_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& setOutputTagName(string outputTagName) { DARABONBA_PTR_SET_VALUE(outputTagName_, outputTagName) };


    // outputTagType Field Functions 
    bool hasOutputTagType() const { return this->outputTagType_ != nullptr;};
    void deleteOutputTagType() { this->outputTagType_ = nullptr;};
    inline string outputTagType() const { DARABONBA_PTR_GET_DEFAULT(outputTagType_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfig& setOutputTagType(string outputTagType) { DARABONBA_PTR_SET_VALUE(outputTagType_, outputTagType) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> outputTagDescription_ = nullptr;
    std::shared_ptr<vector<Models::QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentModelConfigOutputTagConfigOutputTagEnum>> outputTagEnum_ = nullptr;
    std::shared_ptr<string> outputTagName_ = nullptr;
    std::shared_ptr<string> outputTagType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
