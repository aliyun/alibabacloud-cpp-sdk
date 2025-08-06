// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIFECYCLERULERESPONSEBODYRULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIFECYCLERULERESPONSEBODYRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaLifecycleRuleResponseBodyRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLifecycleRuleResponseBodyRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(RuleContent, ruleContent_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLifecycleRuleResponseBodyRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(RuleContent, ruleContent_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMediaLifecycleRuleResponseBodyRuleList() = default ;
    GetMediaLifecycleRuleResponseBodyRuleList(const GetMediaLifecycleRuleResponseBodyRuleList &) = default ;
    GetMediaLifecycleRuleResponseBodyRuleList(GetMediaLifecycleRuleResponseBodyRuleList &&) = default ;
    GetMediaLifecycleRuleResponseBodyRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLifecycleRuleResponseBodyRuleList() = default ;
    GetMediaLifecycleRuleResponseBodyRuleList& operator=(const GetMediaLifecycleRuleResponseBodyRuleList &) = default ;
    GetMediaLifecycleRuleResponseBodyRuleList& operator=(GetMediaLifecycleRuleResponseBodyRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->creationTime_ != nullptr && this->modificationTime_ != nullptr && this->ruleContent_ != nullptr && this->ruleId_ != nullptr && this->ruleType_ != nullptr
        && this->status_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // ruleContent Field Functions 
    bool hasRuleContent() const { return this->ruleContent_ != nullptr;};
    void deleteRuleContent() { this->ruleContent_ = nullptr;};
    inline string ruleContent() const { DARABONBA_PTR_GET_DEFAULT(ruleContent_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setRuleContent(string ruleContent) { DARABONBA_PTR_SET_VALUE(ruleContent_, ruleContent) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaLifecycleRuleResponseBodyRuleList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> ruleContent_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
