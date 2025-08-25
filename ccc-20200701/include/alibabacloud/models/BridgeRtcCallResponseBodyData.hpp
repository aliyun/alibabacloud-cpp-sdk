// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIDGERTCCALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BRIDGERTCCALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class BridgeRtcCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BridgeRtcCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TokenInfo, tokenInfo_);
    };
    friend void from_json(const Darabonba::Json& j, BridgeRtcCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TokenInfo, tokenInfo_);
    };
    BridgeRtcCallResponseBodyData() = default ;
    BridgeRtcCallResponseBodyData(const BridgeRtcCallResponseBodyData &) = default ;
    BridgeRtcCallResponseBodyData(BridgeRtcCallResponseBodyData &&) = default ;
    BridgeRtcCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BridgeRtcCallResponseBodyData() = default ;
    BridgeRtcCallResponseBodyData& operator=(const BridgeRtcCallResponseBodyData &) = default ;
    BridgeRtcCallResponseBodyData& operator=(BridgeRtcCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->jobId_ != nullptr && this->tokenInfo_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BridgeRtcCallResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline BridgeRtcCallResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // tokenInfo Field Functions 
    bool hasTokenInfo() const { return this->tokenInfo_ != nullptr;};
    void deleteTokenInfo() { this->tokenInfo_ = nullptr;};
    inline string tokenInfo() const { DARABONBA_PTR_GET_DEFAULT(tokenInfo_, "") };
    inline BridgeRtcCallResponseBodyData& setTokenInfo(string tokenInfo) { DARABONBA_PTR_SET_VALUE(tokenInfo_, tokenInfo) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> tokenInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
