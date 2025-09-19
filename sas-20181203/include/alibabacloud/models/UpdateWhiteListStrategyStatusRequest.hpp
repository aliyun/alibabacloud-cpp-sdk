// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTSTRATEGYSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTSTRATEGYSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateWhiteListStrategyStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteListStrategyStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteListStrategyStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
    };
    UpdateWhiteListStrategyStatusRequest() = default ;
    UpdateWhiteListStrategyStatusRequest(const UpdateWhiteListStrategyStatusRequest &) = default ;
    UpdateWhiteListStrategyStatusRequest(UpdateWhiteListStrategyStatusRequest &&) = default ;
    UpdateWhiteListStrategyStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteListStrategyStatusRequest() = default ;
    UpdateWhiteListStrategyStatusRequest& operator=(const UpdateWhiteListStrategyStatusRequest &) = default ;
    UpdateWhiteListStrategyStatusRequest& operator=(UpdateWhiteListStrategyStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->sourceIp_ != nullptr && this->status_ != nullptr && this->strategyIds_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateWhiteListStrategyStatusRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline UpdateWhiteListStrategyStatusRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateWhiteListStrategyStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline string strategyIds() const { DARABONBA_PTR_GET_DEFAULT(strategyIds_, "") };
    inline UpdateWhiteListStrategyStatusRequest& setStrategyIds(string strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **0**: deleted
    // *   **1**: learning
    // *   **2**: paused
    // *   **3**: learning completed
    // *   **4**: enabled
    // 
    // > 
    // 
    // *   You can change the status to **paused** only if the policy status is **learning**.
    // 
    // *   You can change the status to **learning** only if the policy status is **paused**.
    // 
    // *   You can change the status to **enabled** only if the policy status is **learning completed**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> strategyIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
