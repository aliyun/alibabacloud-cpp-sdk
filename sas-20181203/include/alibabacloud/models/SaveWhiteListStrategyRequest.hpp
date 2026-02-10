// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEWHITELISTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEWHITELISTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SaveWhiteListStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveWhiteListStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StudyTime, studyTime_);
    };
    friend void from_json(const Darabonba::Json& j, SaveWhiteListStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StudyTime, studyTime_);
    };
    SaveWhiteListStrategyRequest() = default ;
    SaveWhiteListStrategyRequest(const SaveWhiteListStrategyRequest &) = default ;
    SaveWhiteListStrategyRequest(SaveWhiteListStrategyRequest &&) = default ;
    SaveWhiteListStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveWhiteListStrategyRequest() = default ;
    SaveWhiteListStrategyRequest& operator=(const SaveWhiteListStrategyRequest &) = default ;
    SaveWhiteListStrategyRequest& operator=(SaveWhiteListStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->sourceIp_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr && this->studyTime_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveWhiteListStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline SaveWhiteListStrategyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline SaveWhiteListStrategyRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline SaveWhiteListStrategyRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // studyTime Field Functions 
    bool hasStudyTime() const { return this->studyTime_ != nullptr;};
    void deleteStudyTime() { this->studyTime_ = nullptr;};
    inline int32_t getStudyTime() const { DARABONBA_PTR_GET_DEFAULT(studyTime_, 0) };
    inline SaveWhiteListStrategyRequest& setStudyTime(int32_t studyTime) { DARABONBA_PTR_SET_VALUE(studyTime_, studyTime) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
    // The ID of the application whitelist policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to query the ID.
    shared_ptr<int64_t> strategyId_ {};
    // The name of the application whitelist policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyName_ {};
    // The duration of intelligent learning. Unit: hours.
    // 
    // This parameter is required.
    shared_ptr<int32_t> studyTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
