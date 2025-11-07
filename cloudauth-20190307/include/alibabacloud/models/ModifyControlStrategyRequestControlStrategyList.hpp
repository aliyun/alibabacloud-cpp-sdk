// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYREQUESTCONTROLSTRATEGYLIST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTROLSTRATEGYREQUESTCONTROLSTRATEGYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyControlStrategyRequestControlStrategyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyControlStrategyRequestControlStrategyList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyControlStrategyRequestControlStrategyList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    ModifyControlStrategyRequestControlStrategyList() = default ;
    ModifyControlStrategyRequestControlStrategyList(const ModifyControlStrategyRequestControlStrategyList &) = default ;
    ModifyControlStrategyRequestControlStrategyList(ModifyControlStrategyRequestControlStrategyList &&) = default ;
    ModifyControlStrategyRequestControlStrategyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyControlStrategyRequestControlStrategyList() = default ;
    ModifyControlStrategyRequestControlStrategyList& operator=(const ModifyControlStrategyRequestControlStrategyList &) = default ;
    ModifyControlStrategyRequestControlStrategyList& operator=(ModifyControlStrategyRequestControlStrategyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->bizType_ == nullptr && return this->id_ == nullptr && return this->status_ == nullptr && return this->threshold_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ModifyControlStrategyRequestControlStrategyList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ModifyControlStrategyRequestControlStrategyList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyControlStrategyRequestControlStrategyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyControlStrategyRequestControlStrategyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ModifyControlStrategyRequestControlStrategyList& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // API name, same as **ProductCode**.
    std::shared_ptr<string> apiName_ = nullptr;
    // Rule configuration type:
    // - **QPS**: QPS greater than
    // - **SUCCESS_RATE_5_MIN**: Success rate in the last 5 minutes less than
    // - **RESP_TIME_5_MIN**: Average response time in the last 5 minutes greater than
    // - **AMOUNT_RISE**: Call volume growth ratio greater than
    // - **AMOUNT_FALL**: Call volume decline ratio less than
    // - **PASSED_RATE_1_HOUR**: Verification consistency rate in the last hour less than
    // - **PARAM_ERROR_RATE_1_HOUR**: Parameter error rate in the last hour greater than
    std::shared_ptr<string> bizType_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Status:
    // - **disabled**: Disabled
    // - **normal**: Enabled
    std::shared_ptr<string> status_ = nullptr;
    // Alarm threshold for the rule.
    std::shared_ptr<double> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
