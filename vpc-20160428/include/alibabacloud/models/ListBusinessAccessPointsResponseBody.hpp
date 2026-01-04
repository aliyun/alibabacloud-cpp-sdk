// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessAccessPoints, businessAccessPoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessAccessPoints, businessAccessPoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBusinessAccessPointsResponseBody() = default ;
    ListBusinessAccessPointsResponseBody(const ListBusinessAccessPointsResponseBody &) = default ;
    ListBusinessAccessPointsResponseBody(ListBusinessAccessPointsResponseBody &&) = default ;
    ListBusinessAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessAccessPointsResponseBody() = default ;
    ListBusinessAccessPointsResponseBody& operator=(const ListBusinessAccessPointsResponseBody &) = default ;
    ListBusinessAccessPointsResponseBody& operator=(ListBusinessAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BusinessAccessPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BusinessAccessPoints& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(AccessPointName, accessPointName_);
        DARABONBA_PTR_TO_JSON(CloudBoxInstanceIds, cloudBoxInstanceIds_);
        DARABONBA_PTR_TO_JSON(Latitude, latitude_);
        DARABONBA_PTR_TO_JSON(Longitude, longitude_);
        DARABONBA_PTR_TO_JSON(OpticalModuleModels, opticalModuleModels_);
        DARABONBA_PTR_TO_JSON(SupportLineOperator, supportLineOperator_);
        DARABONBA_PTR_TO_JSON(SupportPortTypes, supportPortTypes_);
      };
      friend void from_json(const Darabonba::Json& j, BusinessAccessPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(AccessPointName, accessPointName_);
        DARABONBA_PTR_FROM_JSON(CloudBoxInstanceIds, cloudBoxInstanceIds_);
        DARABONBA_PTR_FROM_JSON(Latitude, latitude_);
        DARABONBA_PTR_FROM_JSON(Longitude, longitude_);
        DARABONBA_PTR_FROM_JSON(OpticalModuleModels, opticalModuleModels_);
        DARABONBA_PTR_FROM_JSON(SupportLineOperator, supportLineOperator_);
        DARABONBA_PTR_FROM_JSON(SupportPortTypes, supportPortTypes_);
      };
      BusinessAccessPoints() = default ;
      BusinessAccessPoints(const BusinessAccessPoints &) = default ;
      BusinessAccessPoints(BusinessAccessPoints &&) = default ;
      BusinessAccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BusinessAccessPoints() = default ;
      BusinessAccessPoints& operator=(const BusinessAccessPoints &) = default ;
      BusinessAccessPoints& operator=(BusinessAccessPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OpticalModuleModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpticalModuleModels& obj) { 
          DARABONBA_PTR_TO_JSON(OpticalModuleModel, opticalModuleModel_);
          DARABONBA_PTR_TO_JSON(PortType, portType_);
        };
        friend void from_json(const Darabonba::Json& j, OpticalModuleModels& obj) { 
          DARABONBA_PTR_FROM_JSON(OpticalModuleModel, opticalModuleModel_);
          DARABONBA_PTR_FROM_JSON(PortType, portType_);
        };
        OpticalModuleModels() = default ;
        OpticalModuleModels(const OpticalModuleModels &) = default ;
        OpticalModuleModels(OpticalModuleModels &&) = default ;
        OpticalModuleModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpticalModuleModels() = default ;
        OpticalModuleModels& operator=(const OpticalModuleModels &) = default ;
        OpticalModuleModels& operator=(OpticalModuleModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->opticalModuleModel_ == nullptr
        && this->portType_ == nullptr; };
        // opticalModuleModel Field Functions 
        bool hasOpticalModuleModel() const { return this->opticalModuleModel_ != nullptr;};
        void deleteOpticalModuleModel() { this->opticalModuleModel_ = nullptr;};
        inline string getOpticalModuleModel() const { DARABONBA_PTR_GET_DEFAULT(opticalModuleModel_, "") };
        inline OpticalModuleModels& setOpticalModuleModel(string opticalModuleModel) { DARABONBA_PTR_SET_VALUE(opticalModuleModel_, opticalModuleModel) };


        // portType Field Functions 
        bool hasPortType() const { return this->portType_ != nullptr;};
        void deletePortType() { this->portType_ = nullptr;};
        inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
        inline OpticalModuleModels& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


      protected:
        shared_ptr<string> opticalModuleModel_ {};
        shared_ptr<string> portType_ {};
      };

      virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->accessPointName_ == nullptr && this->cloudBoxInstanceIds_ == nullptr && this->latitude_ == nullptr && this->longitude_ == nullptr && this->opticalModuleModels_ == nullptr
        && this->supportLineOperator_ == nullptr && this->supportPortTypes_ == nullptr; };
      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline BusinessAccessPoints& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // accessPointName Field Functions 
      bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
      void deleteAccessPointName() { this->accessPointName_ = nullptr;};
      inline string getAccessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
      inline BusinessAccessPoints& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


      // cloudBoxInstanceIds Field Functions 
      bool hasCloudBoxInstanceIds() const { return this->cloudBoxInstanceIds_ != nullptr;};
      void deleteCloudBoxInstanceIds() { this->cloudBoxInstanceIds_ = nullptr;};
      inline string getCloudBoxInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxInstanceIds_, "") };
      inline BusinessAccessPoints& setCloudBoxInstanceIds(string cloudBoxInstanceIds) { DARABONBA_PTR_SET_VALUE(cloudBoxInstanceIds_, cloudBoxInstanceIds) };


      // latitude Field Functions 
      bool hasLatitude() const { return this->latitude_ != nullptr;};
      void deleteLatitude() { this->latitude_ = nullptr;};
      inline double getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, 0.0) };
      inline BusinessAccessPoints& setLatitude(double latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


      // longitude Field Functions 
      bool hasLongitude() const { return this->longitude_ != nullptr;};
      void deleteLongitude() { this->longitude_ = nullptr;};
      inline double getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, 0.0) };
      inline BusinessAccessPoints& setLongitude(double longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


      // opticalModuleModels Field Functions 
      bool hasOpticalModuleModels() const { return this->opticalModuleModels_ != nullptr;};
      void deleteOpticalModuleModels() { this->opticalModuleModels_ = nullptr;};
      inline const vector<BusinessAccessPoints::OpticalModuleModels> & getOpticalModuleModels() const { DARABONBA_PTR_GET_CONST(opticalModuleModels_, vector<BusinessAccessPoints::OpticalModuleModels>) };
      inline vector<BusinessAccessPoints::OpticalModuleModels> getOpticalModuleModels() { DARABONBA_PTR_GET(opticalModuleModels_, vector<BusinessAccessPoints::OpticalModuleModels>) };
      inline BusinessAccessPoints& setOpticalModuleModels(const vector<BusinessAccessPoints::OpticalModuleModels> & opticalModuleModels) { DARABONBA_PTR_SET_VALUE(opticalModuleModels_, opticalModuleModels) };
      inline BusinessAccessPoints& setOpticalModuleModels(vector<BusinessAccessPoints::OpticalModuleModels> && opticalModuleModels) { DARABONBA_PTR_SET_RVALUE(opticalModuleModels_, opticalModuleModels) };


      // supportLineOperator Field Functions 
      bool hasSupportLineOperator() const { return this->supportLineOperator_ != nullptr;};
      void deleteSupportLineOperator() { this->supportLineOperator_ = nullptr;};
      inline string getSupportLineOperator() const { DARABONBA_PTR_GET_DEFAULT(supportLineOperator_, "") };
      inline BusinessAccessPoints& setSupportLineOperator(string supportLineOperator) { DARABONBA_PTR_SET_VALUE(supportLineOperator_, supportLineOperator) };


      // supportPortTypes Field Functions 
      bool hasSupportPortTypes() const { return this->supportPortTypes_ != nullptr;};
      void deleteSupportPortTypes() { this->supportPortTypes_ = nullptr;};
      inline string getSupportPortTypes() const { DARABONBA_PTR_GET_DEFAULT(supportPortTypes_, "") };
      inline BusinessAccessPoints& setSupportPortTypes(string supportPortTypes) { DARABONBA_PTR_SET_VALUE(supportPortTypes_, supportPortTypes) };


    protected:
      // The ID of the access point.
      shared_ptr<string> accessPointId_ {};
      // The name of the access point.
      shared_ptr<string> accessPointName_ {};
      // The ID of the cloud box.
      // 
      // >  You can query this parameter if the Express Connect circuits and access points are of the cloud box type.
      shared_ptr<string> cloudBoxInstanceIds_ {};
      // The latitude of the access point.
      shared_ptr<double> latitude_ {};
      // The longitude of the access point.
      shared_ptr<double> longitude_ {};
      shared_ptr<vector<BusinessAccessPoints::OpticalModuleModels>> opticalModuleModels_ {};
      // The connectivity provider of the Express Connect circuit. Valid values:
      // 
      // *   **CT**: China Telecom.
      // *   **CU**: China Unicom.
      // *   **CM**: China Mobile.
      // *   **CO**: other connectivity providers in the Chinese mainland.
      // *   **Equinix**: Equinix.
      // *   **Other**: other connectivity providers outside the Chinese mainland.
      shared_ptr<string> supportLineOperator_ {};
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
      shared_ptr<string> supportPortTypes_ {};
    };

    virtual bool empty() const override { return this->businessAccessPoints_ == nullptr
        && this->requestId_ == nullptr; };
    // businessAccessPoints Field Functions 
    bool hasBusinessAccessPoints() const { return this->businessAccessPoints_ != nullptr;};
    void deleteBusinessAccessPoints() { this->businessAccessPoints_ = nullptr;};
    inline const vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints> & getBusinessAccessPoints() const { DARABONBA_PTR_GET_CONST(businessAccessPoints_, vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints>) };
    inline vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints> getBusinessAccessPoints() { DARABONBA_PTR_GET(businessAccessPoints_, vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints>) };
    inline ListBusinessAccessPointsResponseBody& setBusinessAccessPoints(const vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints> & businessAccessPoints) { DARABONBA_PTR_SET_VALUE(businessAccessPoints_, businessAccessPoints) };
    inline ListBusinessAccessPointsResponseBody& setBusinessAccessPoints(vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints> && businessAccessPoints) { DARABONBA_PTR_SET_RVALUE(businessAccessPoints_, businessAccessPoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBusinessAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of access points.
    shared_ptr<vector<ListBusinessAccessPointsResponseBody::BusinessAccessPoints>> businessAccessPoints_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
