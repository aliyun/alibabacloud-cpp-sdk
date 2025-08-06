// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSRESPONSEBODYANYCASTEIPBINDINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANYCASTEIPADDRESSRESPONSEBODYANYCASTEIPBINDINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationMode, associationMode_);
      DARABONBA_PTR_TO_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_TO_JSON(BindInstanceRegionId, bindInstanceRegionId_);
      DARABONBA_PTR_TO_JSON(BindInstanceType, bindInstanceType_);
      DARABONBA_PTR_TO_JSON(BindTime, bindTime_);
      DARABONBA_PTR_TO_JSON(PopLocations, popLocations_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationMode, associationMode_);
      DARABONBA_PTR_FROM_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceRegionId, bindInstanceRegionId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceType, bindInstanceType_);
      DARABONBA_PTR_FROM_JSON(BindTime, bindTime_);
      DARABONBA_PTR_FROM_JSON(PopLocations, popLocations_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList() = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList(const DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList &) = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList(DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList &&) = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList() = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& operator=(const DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList &) = default ;
    DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& operator=(DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associationMode_ != nullptr
        && this->bindInstanceId_ != nullptr && this->bindInstanceRegionId_ != nullptr && this->bindInstanceType_ != nullptr && this->bindTime_ != nullptr && this->popLocations_ != nullptr
        && this->privateIpAddress_ != nullptr && this->status_ != nullptr; };
    // associationMode Field Functions 
    bool hasAssociationMode() const { return this->associationMode_ != nullptr;};
    void deleteAssociationMode() { this->associationMode_ = nullptr;};
    inline string associationMode() const { DARABONBA_PTR_GET_DEFAULT(associationMode_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setAssociationMode(string associationMode) { DARABONBA_PTR_SET_VALUE(associationMode_, associationMode) };


    // bindInstanceId Field Functions 
    bool hasBindInstanceId() const { return this->bindInstanceId_ != nullptr;};
    void deleteBindInstanceId() { this->bindInstanceId_ = nullptr;};
    inline string bindInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceId_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setBindInstanceId(string bindInstanceId) { DARABONBA_PTR_SET_VALUE(bindInstanceId_, bindInstanceId) };


    // bindInstanceRegionId Field Functions 
    bool hasBindInstanceRegionId() const { return this->bindInstanceRegionId_ != nullptr;};
    void deleteBindInstanceRegionId() { this->bindInstanceRegionId_ = nullptr;};
    inline string bindInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceRegionId_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setBindInstanceRegionId(string bindInstanceRegionId) { DARABONBA_PTR_SET_VALUE(bindInstanceRegionId_, bindInstanceRegionId) };


    // bindInstanceType Field Functions 
    bool hasBindInstanceType() const { return this->bindInstanceType_ != nullptr;};
    void deleteBindInstanceType() { this->bindInstanceType_ = nullptr;};
    inline string bindInstanceType() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceType_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setBindInstanceType(string bindInstanceType) { DARABONBA_PTR_SET_VALUE(bindInstanceType_, bindInstanceType) };


    // bindTime Field Functions 
    bool hasBindTime() const { return this->bindTime_ != nullptr;};
    void deleteBindTime() { this->bindTime_ = nullptr;};
    inline string bindTime() const { DARABONBA_PTR_GET_DEFAULT(bindTime_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setBindTime(string bindTime) { DARABONBA_PTR_SET_VALUE(bindTime_, bindTime) };


    // popLocations Field Functions 
    bool hasPopLocations() const { return this->popLocations_ != nullptr;};
    void deletePopLocations() { this->popLocations_ = nullptr;};
    inline const vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations> & popLocations() const { DARABONBA_PTR_GET_CONST(popLocations_, vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations>) };
    inline vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations> popLocations() { DARABONBA_PTR_GET(popLocations_, vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations>) };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setPopLocations(const vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations> & popLocations) { DARABONBA_PTR_SET_VALUE(popLocations_, popLocations) };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setPopLocations(vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations> && popLocations) { DARABONBA_PTR_SET_RVALUE(popLocations_, popLocations) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The association mode. Valid values:
    // 
    // *   **Default**: the default mode. In this mode, the associated endpoint serves as the default origin server.
    // *   **Normal**: the standard mode. In this mode, the associated endpoint serves as a standard origin server.
    std::shared_ptr<string> associationMode_ = nullptr;
    // The ID of the endpoint with which the Anycast EIP is associated.
    std::shared_ptr<string> bindInstanceId_ = nullptr;
    // The ID of the region in which the endpoint is deployed.
    std::shared_ptr<string> bindInstanceRegionId_ = nullptr;
    // The type of endpoint with which the Anycast EIP is associated. Valid values:
    // 
    // *   **SlbInstance**: a CLB instance in a VPC.
    // *   **NetworkInterface**: an elastic network interface (ENI).
    std::shared_ptr<string> bindInstanceType_ = nullptr;
    // The time when the Anycast EIP was associated.
    // 
    // The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> bindTime_ = nullptr;
    // The information about the access points in associated access areas when you associate an Anycast EIP with a cloud resource.
    // 
    // If this is your first time associating an Anycast EIP with an endpoint, the system returns information about access points in all access areas.
    std::shared_ptr<vector<Models::DescribeAnycastEipAddressResponseBodyAnycastEipBindInfoListPopLocations>> popLocations_ = nullptr;
    // The secondary private IP address of the associated ENI.
    // 
    // This parameter is valid only when **BindInstanceType** is set to **NetworkInterface**.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The status of the endpoint. Valid values:
    // 
    // *   **BINDING**
    // *   **BINDED**
    // *   **UNBINDING**
    // *   **DELETED**
    // *   **MODIFYING**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
