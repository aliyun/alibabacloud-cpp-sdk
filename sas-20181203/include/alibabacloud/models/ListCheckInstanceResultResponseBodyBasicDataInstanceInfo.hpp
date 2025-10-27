// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYBASICDATAINSTANCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKINSTANCERESULTRESPONSEBODYBASICDATAINSTANCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckInstanceResultResponseBodyBasicDataInstanceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FirstUpdateTime, firstUpdateTime_);
      DARABONBA_PTR_TO_JSON(LastUpdateTime, lastUpdateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FirstUpdateTime, firstUpdateTime_);
      DARABONBA_PTR_FROM_JSON(LastUpdateTime, lastUpdateTime_);
    };
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfo() = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfo(const ListCheckInstanceResultResponseBodyBasicDataInstanceInfo &) = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfo(ListCheckInstanceResultResponseBodyBasicDataInstanceInfo &&) = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckInstanceResultResponseBodyBasicDataInstanceInfo() = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& operator=(const ListCheckInstanceResultResponseBodyBasicDataInstanceInfo &) = default ;
    ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& operator=(ListCheckInstanceResultResponseBodyBasicDataInstanceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->firstUpdateTime_ == nullptr && return this->lastUpdateTime_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig> & config() const { DARABONBA_PTR_GET_CONST(config_, vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig>) };
    inline vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig> config() { DARABONBA_PTR_GET(config_, vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig>) };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& setConfig(const vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& setConfig(vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // firstUpdateTime Field Functions 
    bool hasFirstUpdateTime() const { return this->firstUpdateTime_ != nullptr;};
    void deleteFirstUpdateTime() { this->firstUpdateTime_ = nullptr;};
    inline int64_t firstUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(firstUpdateTime_, 0L) };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& setFirstUpdateTime(int64_t firstUpdateTime) { DARABONBA_PTR_SET_VALUE(firstUpdateTime_, firstUpdateTime) };


    // lastUpdateTime Field Functions 
    bool hasLastUpdateTime() const { return this->lastUpdateTime_ != nullptr;};
    void deleteLastUpdateTime() { this->lastUpdateTime_ = nullptr;};
    inline int64_t lastUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTime_, 0L) };
    inline ListCheckInstanceResultResponseBodyBasicDataInstanceInfo& setLastUpdateTime(int64_t lastUpdateTime) { DARABONBA_PTR_SET_VALUE(lastUpdateTime_, lastUpdateTime) };


  protected:
    // The information about the configuration item whose risks are fixed for the instance.
    std::shared_ptr<vector<Models::ListCheckInstanceResultResponseBodyBasicDataInstanceInfoConfig>> config_ = nullptr;
    // The time of the first check.
    std::shared_ptr<int64_t> firstUpdateTime_ = nullptr;
    // The time of the last check.
    std::shared_ptr<int64_t> lastUpdateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
