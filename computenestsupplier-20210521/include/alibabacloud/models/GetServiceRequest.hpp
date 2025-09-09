// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterAliUid, filterAliUid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(SharedAccountType, sharedAccountType_);
      DARABONBA_PTR_TO_JSON(ShowDetail, showDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterAliUid, filterAliUid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(SharedAccountType, sharedAccountType_);
      DARABONBA_PTR_FROM_JSON(ShowDetail, showDetail_);
    };
    GetServiceRequest() = default ;
    GetServiceRequest(const GetServiceRequest &) = default ;
    GetServiceRequest(GetServiceRequest &&) = default ;
    GetServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRequest() = default ;
    GetServiceRequest& operator=(const GetServiceRequest &) = default ;
    GetServiceRequest& operator=(GetServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterAliUid_ != nullptr
        && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceName_ != nullptr && this->serviceVersion_ != nullptr
        && this->sharedAccountType_ != nullptr && this->showDetail_ != nullptr; };
    // filterAliUid Field Functions 
    bool hasFilterAliUid() const { return this->filterAliUid_ != nullptr;};
    void deleteFilterAliUid() { this->filterAliUid_ = nullptr;};
    inline bool filterAliUid() const { DARABONBA_PTR_GET_DEFAULT(filterAliUid_, false) };
    inline GetServiceRequest& setFilterAliUid(bool filterAliUid) { DARABONBA_PTR_SET_VALUE(filterAliUid_, filterAliUid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline GetServiceRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string serviceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceRequest& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // sharedAccountType Field Functions 
    bool hasSharedAccountType() const { return this->sharedAccountType_ != nullptr;};
    void deleteSharedAccountType() { this->sharedAccountType_ = nullptr;};
    inline string sharedAccountType() const { DARABONBA_PTR_GET_DEFAULT(sharedAccountType_, "") };
    inline GetServiceRequest& setSharedAccountType(string sharedAccountType) { DARABONBA_PTR_SET_VALUE(sharedAccountType_, sharedAccountType) };


    // showDetail Field Functions 
    bool hasShowDetail() const { return this->showDetail_ != nullptr;};
    void deleteShowDetail() { this->showDetail_ = nullptr;};
    inline const vector<string> & showDetail() const { DARABONBA_PTR_GET_CONST(showDetail_, vector<string>) };
    inline vector<string> showDetail() { DARABONBA_PTR_GET(showDetail_, vector<string>) };
    inline GetServiceRequest& setShowDetail(const vector<string> & showDetail) { DARABONBA_PTR_SET_VALUE(showDetail_, showDetail) };
    inline GetServiceRequest& setShowDetail(vector<string> && showDetail) { DARABONBA_PTR_SET_RVALUE(showDetail_, showDetail) };


  protected:
    // Specifies whether to filter information based on Alibaba Cloud account IDs.
    std::shared_ptr<bool> filterAliUid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The Service Instance Id.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The Service Name.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The service version.
    std::shared_ptr<string> serviceVersion_ = nullptr;
    // The share type of the service. Default value: SharedAccount. Valid values:
    // 
    // *   SharedAccount: The service is shared by multiple accounts.
    // *   Resell: The service is distributed.
    std::shared_ptr<string> sharedAccountType_ = nullptr;
    // The information that you want to query.
    std::shared_ptr<vector<string>> showDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
