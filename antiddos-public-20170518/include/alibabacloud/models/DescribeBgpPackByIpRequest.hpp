// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeBgpPackByIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPackByIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPackByIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeBgpPackByIpRequest() = default ;
    DescribeBgpPackByIpRequest(const DescribeBgpPackByIpRequest &) = default ;
    DescribeBgpPackByIpRequest(DescribeBgpPackByIpRequest &&) = default ;
    DescribeBgpPackByIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPackByIpRequest() = default ;
    DescribeBgpPackByIpRequest& operator=(const DescribeBgpPackByIpRequest &) = default ;
    DescribeBgpPackByIpRequest& operator=(DescribeBgpPackByIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosRegionId_ != nullptr
        && this->ip_ != nullptr; };
    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeBgpPackByIpRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeBgpPackByIpRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The region ID of the asset to query.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The IP address of the asset to query.
    // 
    // >  You can call the [DescribeInstanceIpAddress](https://help.aliyun.com/document_detail/472620.html) operation to query the IDs of Elastic Compute Service (ECS) instances, Server Load Balancer (SLB) instances, and elastic IP addresses (EIPs) within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
