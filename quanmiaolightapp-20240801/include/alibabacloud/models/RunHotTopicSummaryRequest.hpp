// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(stepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_TO_JSON(topicIds, topicIds_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(stepForCustomSummaryStyleConfig, stepForCustomSummaryStyleConfig_);
      DARABONBA_PTR_FROM_JSON(topicIds, topicIds_);
    };
    RunHotTopicSummaryRequest() = default ;
    RunHotTopicSummaryRequest(const RunHotTopicSummaryRequest &) = default ;
    RunHotTopicSummaryRequest(RunHotTopicSummaryRequest &&) = default ;
    RunHotTopicSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicSummaryRequest() = default ;
    RunHotTopicSummaryRequest& operator=(const RunHotTopicSummaryRequest &) = default ;
    RunHotTopicSummaryRequest& operator=(RunHotTopicSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotTopicVersion_ == nullptr
        && return this->stepForCustomSummaryStyleConfig_ == nullptr && return this->topicIds_ == nullptr; };
    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicSummaryRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // stepForCustomSummaryStyleConfig Field Functions 
    bool hasStepForCustomSummaryStyleConfig() const { return this->stepForCustomSummaryStyleConfig_ != nullptr;};
    void deleteStepForCustomSummaryStyleConfig() { this->stepForCustomSummaryStyleConfig_ = nullptr;};
    inline const RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig() const { DARABONBA_PTR_GET_CONST(stepForCustomSummaryStyleConfig_, RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig) };
    inline RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig stepForCustomSummaryStyleConfig() { DARABONBA_PTR_GET(stepForCustomSummaryStyleConfig_, RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig) };
    inline RunHotTopicSummaryRequest& setStepForCustomSummaryStyleConfig(const RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig & stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_VALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };
    inline RunHotTopicSummaryRequest& setStepForCustomSummaryStyleConfig(RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig && stepForCustomSummaryStyleConfig) { DARABONBA_PTR_SET_RVALUE(stepForCustomSummaryStyleConfig_, stepForCustomSummaryStyleConfig) };


    // topicIds Field Functions 
    bool hasTopicIds() const { return this->topicIds_ != nullptr;};
    void deleteTopicIds() { this->topicIds_ = nullptr;};
    inline const vector<string> & topicIds() const { DARABONBA_PTR_GET_CONST(topicIds_, vector<string>) };
    inline vector<string> topicIds() { DARABONBA_PTR_GET(topicIds_, vector<string>) };
    inline RunHotTopicSummaryRequest& setTopicIds(const vector<string> & topicIds) { DARABONBA_PTR_SET_VALUE(topicIds_, topicIds) };
    inline RunHotTopicSummaryRequest& setTopicIds(vector<string> && topicIds) { DARABONBA_PTR_SET_RVALUE(topicIds_, topicIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig> stepForCustomSummaryStyleConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> topicIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
