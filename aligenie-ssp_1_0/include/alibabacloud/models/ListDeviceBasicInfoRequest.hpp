// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
    };
    ListDeviceBasicInfoRequest() = default ;
    ListDeviceBasicInfoRequest(const ListDeviceBasicInfoRequest &) = default ;
    ListDeviceBasicInfoRequest(ListDeviceBasicInfoRequest &&) = default ;
    ListDeviceBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceBasicInfoRequest() = default ;
    ListDeviceBasicInfoRequest& operator=(const ListDeviceBasicInfoRequest &) = default ;
    ListDeviceBasicInfoRequest& operator=(ListDeviceBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(Ids, ids_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(Ids, ids_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      DeviceInfos() = default ;
      DeviceInfos(const DeviceInfos &) = default ;
      DeviceInfos(DeviceInfos &&) = default ;
      DeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfos() = default ;
      DeviceInfos& operator=(const DeviceInfos &) = default ;
      DeviceInfos& operator=(DeviceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->idType_ == nullptr && this->ids_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline DeviceInfos& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline DeviceInfos& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline DeviceInfos& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // ids Field Functions 
      bool hasIds() const { return this->ids_ != nullptr;};
      void deleteIds() { this->ids_ = nullptr;};
      inline const vector<string> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
      inline vector<string> getIds() { DARABONBA_PTR_GET(ids_, vector<string>) };
      inline DeviceInfos& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
      inline DeviceInfos& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceInfos& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // Value corresponding to the encoding type. Enter the Project ID of the project where the product resides. You can view this in the Tmall Genie AI Platform console.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. Enter **PROJECT_ID** here.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Type of device ID:
      // - OPEN_ID: Default device ID identity.
      // - UNION_ID: Organization-dimension device ID identity. You must request an organization in advance on the Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // List of device identity information.
      shared_ptr<vector<string>> ids_ {};
      // Organization ID of the device. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfos_ == nullptr; };
    // deviceInfos Field Functions 
    bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
    void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
    inline const ListDeviceBasicInfoRequest::DeviceInfos & getDeviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, ListDeviceBasicInfoRequest::DeviceInfos) };
    inline ListDeviceBasicInfoRequest::DeviceInfos getDeviceInfos() { DARABONBA_PTR_GET(deviceInfos_, ListDeviceBasicInfoRequest::DeviceInfos) };
    inline ListDeviceBasicInfoRequest& setDeviceInfos(const ListDeviceBasicInfoRequest::DeviceInfos & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
    inline ListDeviceBasicInfoRequest& setDeviceInfos(ListDeviceBasicInfoRequest::DeviceInfos && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


  protected:
    // List of device identity information.
    shared_ptr<ListDeviceBasicInfoRequest::DeviceInfos> deviceInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
