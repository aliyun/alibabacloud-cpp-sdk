// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENDERINGINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyAdditionalIngresses.hpp>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyConfigInfo.hpp>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyPortMappings.hpp>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodyRenderingStatus.hpp>
#include <alibabacloud/models/DescribeRenderingInstanceResponseBodySystemInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeRenderingInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenderingInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalIngresses, additionalIngresses_);
      DARABONBA_PTR_TO_JSON(ConfigInfo, configInfo_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EgressIp, egressIp_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_TO_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_TO_JSON(RenderingStatus, renderingStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(SystemInfo, systemInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenderingInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalIngresses, additionalIngresses_);
      DARABONBA_PTR_FROM_JSON(ConfigInfo, configInfo_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EgressIp, egressIp_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(PortMappings, portMappings_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
      DARABONBA_PTR_FROM_JSON(RenderingSpec, renderingSpec_);
      DARABONBA_PTR_FROM_JSON(RenderingStatus, renderingStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(SystemInfo, systemInfo_);
    };
    DescribeRenderingInstanceResponseBody() = default ;
    DescribeRenderingInstanceResponseBody(const DescribeRenderingInstanceResponseBody &) = default ;
    DescribeRenderingInstanceResponseBody(DescribeRenderingInstanceResponseBody &&) = default ;
    DescribeRenderingInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenderingInstanceResponseBody() = default ;
    DescribeRenderingInstanceResponseBody& operator=(const DescribeRenderingInstanceResponseBody &) = default ;
    DescribeRenderingInstanceResponseBody& operator=(DescribeRenderingInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalIngresses_ != nullptr
        && this->configInfo_ != nullptr && this->creationTime_ != nullptr && this->egressIp_ != nullptr && this->hostname_ != nullptr && this->internalIp_ != nullptr
        && this->isp_ != nullptr && this->portMappings_ != nullptr && this->renderingInstanceId_ != nullptr && this->renderingSpec_ != nullptr && this->renderingStatus_ != nullptr
        && this->requestId_ != nullptr && this->storageSize_ != nullptr && this->systemInfo_ != nullptr; };
    // additionalIngresses Field Functions 
    bool hasAdditionalIngresses() const { return this->additionalIngresses_ != nullptr;};
    void deleteAdditionalIngresses() { this->additionalIngresses_ = nullptr;};
    inline const vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses> & additionalIngresses() const { DARABONBA_PTR_GET_CONST(additionalIngresses_, vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses>) };
    inline vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses> additionalIngresses() { DARABONBA_PTR_GET(additionalIngresses_, vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses>) };
    inline DescribeRenderingInstanceResponseBody& setAdditionalIngresses(const vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses> & additionalIngresses) { DARABONBA_PTR_SET_VALUE(additionalIngresses_, additionalIngresses) };
    inline DescribeRenderingInstanceResponseBody& setAdditionalIngresses(vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses> && additionalIngresses) { DARABONBA_PTR_SET_RVALUE(additionalIngresses_, additionalIngresses) };


    // configInfo Field Functions 
    bool hasConfigInfo() const { return this->configInfo_ != nullptr;};
    void deleteConfigInfo() { this->configInfo_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBodyConfigInfo & configInfo() const { DARABONBA_PTR_GET_CONST(configInfo_, DescribeRenderingInstanceResponseBodyConfigInfo) };
    inline DescribeRenderingInstanceResponseBodyConfigInfo configInfo() { DARABONBA_PTR_GET(configInfo_, DescribeRenderingInstanceResponseBodyConfigInfo) };
    inline DescribeRenderingInstanceResponseBody& setConfigInfo(const DescribeRenderingInstanceResponseBodyConfigInfo & configInfo) { DARABONBA_PTR_SET_VALUE(configInfo_, configInfo) };
    inline DescribeRenderingInstanceResponseBody& setConfigInfo(DescribeRenderingInstanceResponseBodyConfigInfo && configInfo) { DARABONBA_PTR_SET_RVALUE(configInfo_, configInfo) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeRenderingInstanceResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // egressIp Field Functions 
    bool hasEgressIp() const { return this->egressIp_ != nullptr;};
    void deleteEgressIp() { this->egressIp_ = nullptr;};
    inline string egressIp() const { DARABONBA_PTR_GET_DEFAULT(egressIp_, "") };
    inline DescribeRenderingInstanceResponseBody& setEgressIp(string egressIp) { DARABONBA_PTR_SET_VALUE(egressIp_, egressIp) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeRenderingInstanceResponseBody& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline DescribeRenderingInstanceResponseBody& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeRenderingInstanceResponseBody& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // portMappings Field Functions 
    bool hasPortMappings() const { return this->portMappings_ != nullptr;};
    void deletePortMappings() { this->portMappings_ = nullptr;};
    inline const vector<DescribeRenderingInstanceResponseBodyPortMappings> & portMappings() const { DARABONBA_PTR_GET_CONST(portMappings_, vector<DescribeRenderingInstanceResponseBodyPortMappings>) };
    inline vector<DescribeRenderingInstanceResponseBodyPortMappings> portMappings() { DARABONBA_PTR_GET(portMappings_, vector<DescribeRenderingInstanceResponseBodyPortMappings>) };
    inline DescribeRenderingInstanceResponseBody& setPortMappings(const vector<DescribeRenderingInstanceResponseBodyPortMappings> & portMappings) { DARABONBA_PTR_SET_VALUE(portMappings_, portMappings) };
    inline DescribeRenderingInstanceResponseBody& setPortMappings(vector<DescribeRenderingInstanceResponseBodyPortMappings> && portMappings) { DARABONBA_PTR_SET_RVALUE(portMappings_, portMappings) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DescribeRenderingInstanceResponseBody& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


    // renderingSpec Field Functions 
    bool hasRenderingSpec() const { return this->renderingSpec_ != nullptr;};
    void deleteRenderingSpec() { this->renderingSpec_ = nullptr;};
    inline string renderingSpec() const { DARABONBA_PTR_GET_DEFAULT(renderingSpec_, "") };
    inline DescribeRenderingInstanceResponseBody& setRenderingSpec(string renderingSpec) { DARABONBA_PTR_SET_VALUE(renderingSpec_, renderingSpec) };


    // renderingStatus Field Functions 
    bool hasRenderingStatus() const { return this->renderingStatus_ != nullptr;};
    void deleteRenderingStatus() { this->renderingStatus_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBodyRenderingStatus & renderingStatus() const { DARABONBA_PTR_GET_CONST(renderingStatus_, DescribeRenderingInstanceResponseBodyRenderingStatus) };
    inline DescribeRenderingInstanceResponseBodyRenderingStatus renderingStatus() { DARABONBA_PTR_GET(renderingStatus_, DescribeRenderingInstanceResponseBodyRenderingStatus) };
    inline DescribeRenderingInstanceResponseBody& setRenderingStatus(const DescribeRenderingInstanceResponseBodyRenderingStatus & renderingStatus) { DARABONBA_PTR_SET_VALUE(renderingStatus_, renderingStatus) };
    inline DescribeRenderingInstanceResponseBody& setRenderingStatus(DescribeRenderingInstanceResponseBodyRenderingStatus && renderingStatus) { DARABONBA_PTR_SET_RVALUE(renderingStatus_, renderingStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRenderingInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int32_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0) };
    inline DescribeRenderingInstanceResponseBody& setStorageSize(int32_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // systemInfo Field Functions 
    bool hasSystemInfo() const { return this->systemInfo_ != nullptr;};
    void deleteSystemInfo() { this->systemInfo_ = nullptr;};
    inline const DescribeRenderingInstanceResponseBodySystemInfo & systemInfo() const { DARABONBA_PTR_GET_CONST(systemInfo_, DescribeRenderingInstanceResponseBodySystemInfo) };
    inline DescribeRenderingInstanceResponseBodySystemInfo systemInfo() { DARABONBA_PTR_GET(systemInfo_, DescribeRenderingInstanceResponseBodySystemInfo) };
    inline DescribeRenderingInstanceResponseBody& setSystemInfo(const DescribeRenderingInstanceResponseBodySystemInfo & systemInfo) { DARABONBA_PTR_SET_VALUE(systemInfo_, systemInfo) };
    inline DescribeRenderingInstanceResponseBody& setSystemInfo(DescribeRenderingInstanceResponseBodySystemInfo && systemInfo) { DARABONBA_PTR_SET_RVALUE(systemInfo_, systemInfo) };


  protected:
    std::shared_ptr<vector<DescribeRenderingInstanceResponseBodyAdditionalIngresses>> additionalIngresses_ = nullptr;
    std::shared_ptr<DescribeRenderingInstanceResponseBodyConfigInfo> configInfo_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> egressIp_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> internalIp_ = nullptr;
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<vector<DescribeRenderingInstanceResponseBodyPortMappings>> portMappings_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
    std::shared_ptr<string> renderingSpec_ = nullptr;
    std::shared_ptr<DescribeRenderingInstanceResponseBodyRenderingStatus> renderingStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> storageSize_ = nullptr;
    std::shared_ptr<DescribeRenderingInstanceResponseBodySystemInfo> systemInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
