// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTWARNINGCONFIGRESPONSEBODYDATAWARNINGCONFIGINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWarningConfigResponseBodyDataWarningConfigInfoChannels.hpp>
#include <alibabacloud/models/ListWarningConfigResponseBodyDataWarningConfigInfoRidList.hpp>
#include <alibabacloud/models/ListWarningConfigResponseBodyDataWarningConfigInfoRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListWarningConfigResponseBodyDataWarningConfigInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWarningConfigResponseBodyDataWarningConfigInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RidList, ridList_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListWarningConfigResponseBodyDataWarningConfigInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RidList, ridList_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListWarningConfigResponseBodyDataWarningConfigInfo() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfo(const ListWarningConfigResponseBodyDataWarningConfigInfo &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfo(ListWarningConfigResponseBodyDataWarningConfigInfo &&) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWarningConfigResponseBodyDataWarningConfigInfo() = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfo& operator=(const ListWarningConfigResponseBodyDataWarningConfigInfo &) = default ;
    ListWarningConfigResponseBodyDataWarningConfigInfo& operator=(ListWarningConfigResponseBodyDataWarningConfigInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && return this->configId_ == nullptr && return this->configName_ == nullptr && return this->createTime_ == nullptr && return this->ridList_ == nullptr && return this->ruleList_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels & channels() const { DARABONBA_PTR_GET_CONST(channels_, Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels) };
    inline Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels channels() { DARABONBA_PTR_GET(channels_, Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setChannels(const Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setChannels(Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ridList Field Functions 
    bool hasRidList() const { return this->ridList_ != nullptr;};
    void deleteRidList() { this->ridList_ = nullptr;};
    inline const Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList & ridList() const { DARABONBA_PTR_GET_CONST(ridList_, Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList) };
    inline Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList ridList() { DARABONBA_PTR_GET(ridList_, Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setRidList(const Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList & ridList) { DARABONBA_PTR_SET_VALUE(ridList_, ridList) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setRidList(Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList && ridList) { DARABONBA_PTR_SET_RVALUE(ridList_, ridList) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList) };
    inline Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList ruleList() { DARABONBA_PTR_GET(ruleList_, Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setRuleList(const Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setRuleList(Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListWarningConfigResponseBodyDataWarningConfigInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<Models::ListWarningConfigResponseBodyDataWarningConfigInfoChannels> channels_ = nullptr;
    std::shared_ptr<int64_t> configId_ = nullptr;
    std::shared_ptr<string> configName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRidList> ridList_ = nullptr;
    std::shared_ptr<Models::ListWarningConfigResponseBodyDataWarningConfigInfoRuleList> ruleList_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
