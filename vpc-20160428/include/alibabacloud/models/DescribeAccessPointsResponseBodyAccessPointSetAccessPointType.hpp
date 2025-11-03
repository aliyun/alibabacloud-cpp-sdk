// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSETACCESSPOINTTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTSETACCESSPOINTTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPointSetAccessPointType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointFeatureModels, accessPointFeatureModels_);
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AttachedRegionNo, attachedRegionNo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HostOperator, hostOperator_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointFeatureModels, accessPointFeatureModels_);
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AttachedRegionNo, attachedRegionNo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HostOperator, hostOperator_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointType() = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointType(const DescribeAccessPointsResponseBodyAccessPointSetAccessPointType &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointType(DescribeAccessPointsResponseBodyAccessPointSetAccessPointType &&) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPointSetAccessPointType() = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& operator=(const DescribeAccessPointsResponseBodyAccessPointSetAccessPointType &) = default ;
    DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& operator=(DescribeAccessPointsResponseBodyAccessPointSetAccessPointType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointFeatureModels_ == nullptr
        && return this->accessPointId_ == nullptr && return this->attachedRegionNo_ == nullptr && return this->description_ == nullptr && return this->hostOperator_ == nullptr && return this->location_ == nullptr
        && return this->name_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // accessPointFeatureModels Field Functions 
    bool hasAccessPointFeatureModels() const { return this->accessPointFeatureModels_ != nullptr;};
    void deleteAccessPointFeatureModels() { this->accessPointFeatureModels_ = nullptr;};
    inline const Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels & accessPointFeatureModels() const { DARABONBA_PTR_GET_CONST(accessPointFeatureModels_, Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels) };
    inline Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels accessPointFeatureModels() { DARABONBA_PTR_GET(accessPointFeatureModels_, Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels) };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setAccessPointFeatureModels(const Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels & accessPointFeatureModels) { DARABONBA_PTR_SET_VALUE(accessPointFeatureModels_, accessPointFeatureModels) };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setAccessPointFeatureModels(Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels && accessPointFeatureModels) { DARABONBA_PTR_SET_RVALUE(accessPointFeatureModels_, accessPointFeatureModels) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // attachedRegionNo Field Functions 
    bool hasAttachedRegionNo() const { return this->attachedRegionNo_ != nullptr;};
    void deleteAttachedRegionNo() { this->attachedRegionNo_ = nullptr;};
    inline string attachedRegionNo() const { DARABONBA_PTR_GET_DEFAULT(attachedRegionNo_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setAttachedRegionNo(string attachedRegionNo) { DARABONBA_PTR_SET_VALUE(attachedRegionNo_, attachedRegionNo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hostOperator Field Functions 
    bool hasHostOperator() const { return this->hostOperator_ != nullptr;};
    void deleteHostOperator() { this->hostOperator_ = nullptr;};
    inline string hostOperator() const { DARABONBA_PTR_GET_DEFAULT(hostOperator_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setHostOperator(string hostOperator) { DARABONBA_PTR_SET_VALUE(hostOperator_, hostOperator) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAccessPointsResponseBodyAccessPointSetAccessPointType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The feature model of the access point.
    std::shared_ptr<Models::DescribeAccessPointsResponseBodyAccessPointSetAccessPointTypeAccessPointFeatureModels> accessPointFeatureModels_ = nullptr;
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The region ID of the access point.
    std::shared_ptr<string> attachedRegionNo_ = nullptr;
    // The description of the access point.
    std::shared_ptr<string> description_ = nullptr;
    // The Internet service provider (ISP) of the access point. Valid values:
    std::shared_ptr<string> hostOperator_ = nullptr;
    // The location of the access point.
    std::shared_ptr<string> location_ = nullptr;
    // The name of the access point.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the access point. Valid values:
    // 
    // *   **recommended**: The access point is ready for use.
    // *   **hot**: A large number of Express Connect circuits are connected to the access point.
    // *   **full**: The number of Express Connect circuits connected to the access point has reached the upper limit.
    // *   **disabled**: The access point is unavailable.
    std::shared_ptr<string> status_ = nullptr;
    // The network type of the Express Connect circuit. Default value: **VPC**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
