// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGNODESNODECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODYCHAINCONFIGNODESNODECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBodyChainConfigNodesNodeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBodyChainConfigNodesNodeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DenyPolicy, denyPolicy_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(ScanEngine, scanEngine_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBodyChainConfigNodesNodeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DenyPolicy, denyPolicy_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(ScanEngine, scanEngine_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    GetChainResponseBodyChainConfigNodesNodeConfig() = default ;
    GetChainResponseBodyChainConfigNodesNodeConfig(const GetChainResponseBodyChainConfigNodesNodeConfig &) = default ;
    GetChainResponseBodyChainConfigNodesNodeConfig(GetChainResponseBodyChainConfigNodesNodeConfig &&) = default ;
    GetChainResponseBodyChainConfigNodesNodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBodyChainConfigNodesNodeConfig() = default ;
    GetChainResponseBodyChainConfigNodesNodeConfig& operator=(const GetChainResponseBodyChainConfigNodesNodeConfig &) = default ;
    GetChainResponseBodyChainConfigNodesNodeConfig& operator=(GetChainResponseBodyChainConfigNodesNodeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->denyPolicy_ == nullptr
        && return this->retry_ == nullptr && return this->scanEngine_ == nullptr && return this->timeout_ == nullptr; };
    // denyPolicy Field Functions 
    bool hasDenyPolicy() const { return this->denyPolicy_ != nullptr;};
    void deleteDenyPolicy() { this->denyPolicy_ = nullptr;};
    inline const Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy & denyPolicy() const { DARABONBA_PTR_GET_CONST(denyPolicy_, Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy) };
    inline Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy denyPolicy() { DARABONBA_PTR_GET(denyPolicy_, Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy) };
    inline GetChainResponseBodyChainConfigNodesNodeConfig& setDenyPolicy(const Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy & denyPolicy) { DARABONBA_PTR_SET_VALUE(denyPolicy_, denyPolicy) };
    inline GetChainResponseBodyChainConfigNodesNodeConfig& setDenyPolicy(Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy && denyPolicy) { DARABONBA_PTR_SET_RVALUE(denyPolicy_, denyPolicy) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline int32_t retry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0) };
    inline GetChainResponseBodyChainConfigNodesNodeConfig& setRetry(int32_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // scanEngine Field Functions 
    bool hasScanEngine() const { return this->scanEngine_ != nullptr;};
    void deleteScanEngine() { this->scanEngine_ = nullptr;};
    inline string scanEngine() const { DARABONBA_PTR_GET_DEFAULT(scanEngine_, "") };
    inline GetChainResponseBodyChainConfigNodesNodeConfig& setScanEngine(string scanEngine) { DARABONBA_PTR_SET_VALUE(scanEngine_, scanEngine) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline GetChainResponseBodyChainConfigNodesNodeConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    std::shared_ptr<Models::GetChainResponseBodyChainConfigNodesNodeConfigDenyPolicy> denyPolicy_ = nullptr;
    std::shared_ptr<int32_t> retry_ = nullptr;
    std::shared_ptr<string> scanEngine_ = nullptr;
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
