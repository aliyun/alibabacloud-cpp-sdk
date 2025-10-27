// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYEXECDETAILRESPONSEBODYFAILEDECSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYEXECDETAILRESPONSEBODYFAILEDECSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyExecDetailResponseBodyFailedEcsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyExecDetailResponseBodyFailedEcsList& obj) { 
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyExecDetailResponseBodyFailedEcsList& obj) { 
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    DescribeStrategyExecDetailResponseBodyFailedEcsList() = default ;
    DescribeStrategyExecDetailResponseBodyFailedEcsList(const DescribeStrategyExecDetailResponseBodyFailedEcsList &) = default ;
    DescribeStrategyExecDetailResponseBodyFailedEcsList(DescribeStrategyExecDetailResponseBodyFailedEcsList &&) = default ;
    DescribeStrategyExecDetailResponseBodyFailedEcsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyExecDetailResponseBodyFailedEcsList() = default ;
    DescribeStrategyExecDetailResponseBodyFailedEcsList& operator=(const DescribeStrategyExecDetailResponseBodyFailedEcsList &) = default ;
    DescribeStrategyExecDetailResponseBodyFailedEcsList& operator=(DescribeStrategyExecDetailResponseBodyFailedEcsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IP_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->reason_ == nullptr; };
    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeStrategyExecDetailResponseBodyFailedEcsList& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeStrategyExecDetailResponseBodyFailedEcsList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeStrategyExecDetailResponseBodyFailedEcsList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeStrategyExecDetailResponseBodyFailedEcsList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeStrategyExecDetailResponseBodyFailedEcsList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The IP address of the server on which the baseline check was performed.
    std::shared_ptr<string> IP_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The failure cause for the check item.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
