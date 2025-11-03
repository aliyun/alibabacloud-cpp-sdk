// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODYBUSINESSACCESSPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODYBUSINESSACCESSPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessAccessPointsResponseBodyBusinessAccessPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessAccessPointsResponseBodyBusinessAccessPoints& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_TO_JSON(CloudBoxInstanceIds, cloudBoxInstanceIds_);
      DARABONBA_PTR_TO_JSON(Latitude, latitude_);
      DARABONBA_PTR_TO_JSON(Longitude, longitude_);
      DARABONBA_PTR_TO_JSON(SupportLineOperator, supportLineOperator_);
      DARABONBA_PTR_TO_JSON(SupportPortTypes, supportPortTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessAccessPointsResponseBodyBusinessAccessPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_FROM_JSON(CloudBoxInstanceIds, cloudBoxInstanceIds_);
      DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
      DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
      DARABONBA_PTR_FROM_JSON(SupportLineOperator, supportLineOperator_);
      DARABONBA_PTR_FROM_JSON(SupportPortTypes, supportPortTypes_);
    };
    ListBusinessAccessPointsResponseBodyBusinessAccessPoints() = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPoints(const ListBusinessAccessPointsResponseBodyBusinessAccessPoints &) = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPoints(ListBusinessAccessPointsResponseBodyBusinessAccessPoints &&) = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessAccessPointsResponseBodyBusinessAccessPoints() = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPoints& operator=(const ListBusinessAccessPointsResponseBodyBusinessAccessPoints &) = default ;
    ListBusinessAccessPointsResponseBodyBusinessAccessPoints& operator=(ListBusinessAccessPointsResponseBodyBusinessAccessPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->accessPointName_ == nullptr && return this->cloudBoxInstanceIds_ == nullptr && return this->latitude_ == nullptr && return this->longitude_ == nullptr && return this->supportLineOperator_ == nullptr
        && return this->supportPortTypes_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string accessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // cloudBoxInstanceIds Field Functions 
    bool hasCloudBoxInstanceIds() const { return this->cloudBoxInstanceIds_ != nullptr;};
    void deleteCloudBoxInstanceIds() { this->cloudBoxInstanceIds_ = nullptr;};
    inline string cloudBoxInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxInstanceIds_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setCloudBoxInstanceIds(string cloudBoxInstanceIds) { DARABONBA_PTR_SET_VALUE(cloudBoxInstanceIds_, cloudBoxInstanceIds) };


    // latitude Field Functions 
    bool hasLatitude() const { return this->latitude_ != nullptr;};
    void deleteLatitude() { this->latitude_ = nullptr;};
    inline double latitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, 0.0) };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setLatitude(double latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


    // longitude Field Functions 
    bool hasLongitude() const { return this->longitude_ != nullptr;};
    void deleteLongitude() { this->longitude_ = nullptr;};
    inline double longitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, 0.0) };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setLongitude(double longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


    // supportLineOperator Field Functions 
    bool hasSupportLineOperator() const { return this->supportLineOperator_ != nullptr;};
    void deleteSupportLineOperator() { this->supportLineOperator_ = nullptr;};
    inline string supportLineOperator() const { DARABONBA_PTR_GET_DEFAULT(supportLineOperator_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setSupportLineOperator(string supportLineOperator) { DARABONBA_PTR_SET_VALUE(supportLineOperator_, supportLineOperator) };


    // supportPortTypes Field Functions 
    bool hasSupportPortTypes() const { return this->supportPortTypes_ != nullptr;};
    void deleteSupportPortTypes() { this->supportPortTypes_ = nullptr;};
    inline string supportPortTypes() const { DARABONBA_PTR_GET_DEFAULT(supportPortTypes_, "") };
    inline ListBusinessAccessPointsResponseBodyBusinessAccessPoints& setSupportPortTypes(string supportPortTypes) { DARABONBA_PTR_SET_VALUE(supportPortTypes_, supportPortTypes) };


  protected:
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The name of the access point.
    std::shared_ptr<string> accessPointName_ = nullptr;
    // The ID of the cloud box.
    // 
    // >  You can query this parameter if the Express Connect circuits and access points are of the cloud box type.
    std::shared_ptr<string> cloudBoxInstanceIds_ = nullptr;
    // The latitude of the access point.
    std::shared_ptr<double> latitude_ = nullptr;
    // The longitude of the access point.
    std::shared_ptr<double> longitude_ = nullptr;
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CT**: China Telecom.
    // *   **CU**: China Unicom.
    // *   **CM**: China Mobile.
    // *   **CO**: other connectivity providers in the Chinese mainland.
    // *   **Equinix**: Equinix.
    // *   **Other**: other connectivity providers outside the Chinese mainland.
    std::shared_ptr<string> supportLineOperator_ = nullptr;
    // The port type supported by the access point. Valid values:
    // 
    // *   **100Base-T**: 100 Mbit/s copper Ethernet port
    // *   **1000Base-T**: 1,000 Mbit/s copper Ethernet port
    // *   **1000Base-LX**: 1,000 Mbit/s single-mode optical port (10 km)
    // *   **10GBase-T**: 10,000 Mbit/s copper Ethernet port
    // *   **10GBase-LR**: 10,000 Mbit/s single-mode optical port (10 km)
    // *   **40GBase-LR**: 40,000 Mbit/s single-mode optical port
    // *   **100GBase-LR**: 100,000 Mbit/s single-mode optical port
    // 
    // >  To use ports 40GBase-LR and 100GBase-LR, you must first contact your account manager.
    std::shared_ptr<string> supportPortTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
