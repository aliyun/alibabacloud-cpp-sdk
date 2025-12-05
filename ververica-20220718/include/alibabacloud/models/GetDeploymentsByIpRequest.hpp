// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPLOYMENTSBYIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPLOYMENTSBYIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class GetDeploymentsByIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeploymentsByIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(dstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(ignoreJobSummary, ignoreJobSummary_);
      DARABONBA_PTR_TO_JSON(ignoreResourceSetting, ignoreResourceSetting_);
      DARABONBA_PTR_TO_JSON(srcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(srcPort, srcPort_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeploymentsByIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(dstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(ignoreJobSummary, ignoreJobSummary_);
      DARABONBA_PTR_FROM_JSON(ignoreResourceSetting, ignoreResourceSetting_);
      DARABONBA_PTR_FROM_JSON(srcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(srcPort, srcPort_);
    };
    GetDeploymentsByIpRequest() = default ;
    GetDeploymentsByIpRequest(const GetDeploymentsByIpRequest &) = default ;
    GetDeploymentsByIpRequest(GetDeploymentsByIpRequest &&) = default ;
    GetDeploymentsByIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeploymentsByIpRequest() = default ;
    GetDeploymentsByIpRequest& operator=(const GetDeploymentsByIpRequest &) = default ;
    GetDeploymentsByIpRequest& operator=(GetDeploymentsByIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstIp_ == nullptr
        && return this->dstPort_ == nullptr && return this->ignoreJobSummary_ == nullptr && return this->ignoreResourceSetting_ == nullptr && return this->srcIp_ == nullptr && return this->srcPort_ == nullptr; };
    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline GetDeploymentsByIpRequest& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline string dstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, "") };
    inline GetDeploymentsByIpRequest& setDstPort(string dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // ignoreJobSummary Field Functions 
    bool hasIgnoreJobSummary() const { return this->ignoreJobSummary_ != nullptr;};
    void deleteIgnoreJobSummary() { this->ignoreJobSummary_ = nullptr;};
    inline bool ignoreJobSummary() const { DARABONBA_PTR_GET_DEFAULT(ignoreJobSummary_, false) };
    inline GetDeploymentsByIpRequest& setIgnoreJobSummary(bool ignoreJobSummary) { DARABONBA_PTR_SET_VALUE(ignoreJobSummary_, ignoreJobSummary) };


    // ignoreResourceSetting Field Functions 
    bool hasIgnoreResourceSetting() const { return this->ignoreResourceSetting_ != nullptr;};
    void deleteIgnoreResourceSetting() { this->ignoreResourceSetting_ = nullptr;};
    inline bool ignoreResourceSetting() const { DARABONBA_PTR_GET_DEFAULT(ignoreResourceSetting_, false) };
    inline GetDeploymentsByIpRequest& setIgnoreResourceSetting(bool ignoreResourceSetting) { DARABONBA_PTR_SET_VALUE(ignoreResourceSetting_, ignoreResourceSetting) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline GetDeploymentsByIpRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline string srcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, "") };
    inline GetDeploymentsByIpRequest& setSrcPort(string srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


  protected:
    std::shared_ptr<string> dstIp_ = nullptr;
    std::shared_ptr<string> dstPort_ = nullptr;
    std::shared_ptr<bool> ignoreJobSummary_ = nullptr;
    std::shared_ptr<bool> ignoreResourceSetting_ = nullptr;
    std::shared_ptr<string> srcIp_ = nullptr;
    std::shared_ptr<string> srcPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
