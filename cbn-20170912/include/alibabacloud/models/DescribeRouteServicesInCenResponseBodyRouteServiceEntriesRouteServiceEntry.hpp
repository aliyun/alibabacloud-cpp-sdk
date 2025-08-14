// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODYROUTESERVICEENTRIESROUTESERVICEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODYROUTESERVICEENTRIESROUTESERVICEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRegionId, accessRegionId_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
      DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry() = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry(const DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry &) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry(DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry &&) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry() = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& operator=(const DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry &) = default ;
    DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& operator=(DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessRegionId_ != nullptr
        && this->cenId_ != nullptr && this->cidrs_ != nullptr && this->description_ != nullptr && this->host_ != nullptr && this->hostRegionId_ != nullptr
        && this->hostVpcId_ != nullptr && this->status_ != nullptr; };
    // accessRegionId Field Functions 
    bool hasAccessRegionId() const { return this->accessRegionId_ != nullptr;};
    void deleteAccessRegionId() { this->accessRegionId_ = nullptr;};
    inline string accessRegionId() const { DARABONBA_PTR_GET_DEFAULT(accessRegionId_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setAccessRegionId(string accessRegionId) { DARABONBA_PTR_SET_VALUE(accessRegionId_, accessRegionId) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cidrs Field Functions 
    bool hasCidrs() const { return this->cidrs_ != nullptr;};
    void deleteCidrs() { this->cidrs_ = nullptr;};
    inline const Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs & cidrs() const { DARABONBA_PTR_GET_CONST(cidrs_, Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs) };
    inline Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs cidrs() { DARABONBA_PTR_GET(cidrs_, Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setCidrs(const Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs & cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setCidrs(Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs && cidrs) { DARABONBA_PTR_SET_RVALUE(cidrs_, cidrs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // hostRegionId Field Functions 
    bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
    void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
    inline string hostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


    // hostVpcId Field Functions 
    bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
    void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
    inline string hostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the region where the cloud service is accessed.
    std::shared_ptr<string> accessRegionId_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The service addresses of the cloud service.
    std::shared_ptr<Models::DescribeRouteServicesInCenResponseBodyRouteServiceEntriesRouteServiceEntryCidrs> cidrs_ = nullptr;
    // The description of the cloud service.
    std::shared_ptr<string> description_ = nullptr;
    // The service address of the cloud service.
    std::shared_ptr<string> host_ = nullptr;
    // The region ID of the cloud service.
    std::shared_ptr<string> hostRegionId_ = nullptr;
    // The ID of the VPC associated with the cloud service.
    std::shared_ptr<string> hostVpcId_ = nullptr;
    // The status of the cloud service. Valid values:
    // 
    // *   **Creating**
    // *   **Active**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
