// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODYLOGSDOWNLOADATTRIBUTESLOGSDOWNLOADATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSLOGSDOWNLOADATTRIBUTERESPONSEBODYLOGSDOWNLOADATTRIBUTESLOGSDOWNLOADATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(LogProject, logProject_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute() = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute(const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute(DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute &&) = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute() = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& operator=(const DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute &) = default ;
    DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& operator=(DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->logProject_ == nullptr && return this->logStore_ == nullptr && return this->logType_ == nullptr && return this->region_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeAccessLogsDownloadAttributeResponseBodyLogsDownloadAttributesLogsDownloadAttribute& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The name of the Log Service project.
    std::shared_ptr<string> logProject_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The type of access log. Only **layer7** is returned, which indicates Layer 7 access logs.
    std::shared_ptr<string> logType_ = nullptr;
    // The region ID of the CLB instance.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
