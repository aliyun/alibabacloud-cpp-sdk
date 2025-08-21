// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATEREQUESTDEVICEINFO_HPP_
#define ALIBABACLOUD_MODELS_INVALIDATETHIRDPARTYAPPLOGINSTATEREQUESTDEVICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class InvalidateThirdPartyAppLoginStateRequestDeviceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvalidateThirdPartyAppLoginStateRequestDeviceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, InvalidateThirdPartyAppLoginStateRequestDeviceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
    };
    InvalidateThirdPartyAppLoginStateRequestDeviceInfo() = default ;
    InvalidateThirdPartyAppLoginStateRequestDeviceInfo(const InvalidateThirdPartyAppLoginStateRequestDeviceInfo &) = default ;
    InvalidateThirdPartyAppLoginStateRequestDeviceInfo(InvalidateThirdPartyAppLoginStateRequestDeviceInfo &&) = default ;
    InvalidateThirdPartyAppLoginStateRequestDeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvalidateThirdPartyAppLoginStateRequestDeviceInfo() = default ;
    InvalidateThirdPartyAppLoginStateRequestDeviceInfo& operator=(const InvalidateThirdPartyAppLoginStateRequestDeviceInfo &) = default ;
    InvalidateThirdPartyAppLoginStateRequestDeviceInfo& operator=(InvalidateThirdPartyAppLoginStateRequestDeviceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encodeKey_ != nullptr
        && this->encodeType_ != nullptr && this->id_ != nullptr && this->idType_ != nullptr && this->organizationId_ != nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string encodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline InvalidateThirdPartyAppLoginStateRequestDeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string encodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline InvalidateThirdPartyAppLoginStateRequestDeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline InvalidateThirdPartyAppLoginStateRequestDeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string idType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline InvalidateThirdPartyAppLoginStateRequestDeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline InvalidateThirdPartyAppLoginStateRequestDeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> encodeKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encodeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> idType_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
