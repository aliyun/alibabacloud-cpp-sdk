// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYSTEMPROPERTYTEMPLATEREQUESTSYSTEMPROPERTYINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATESYSTEMPROPERTYTEMPLATEREQUESTSYSTEMPROPERTYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateSystemPropertyTemplateRequestSystemPropertyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSystemPropertyTemplateRequestSystemPropertyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPropertyInfos, customPropertyInfos_);
      DARABONBA_PTR_TO_JSON(RoBootloader, roBootloader_);
      DARABONBA_PTR_TO_JSON(RoBuildDisplayId, roBuildDisplayId_);
      DARABONBA_PTR_TO_JSON(RoBuildFingerprint, roBuildFingerprint_);
      DARABONBA_PTR_TO_JSON(RoBuildHost, roBuildHost_);
      DARABONBA_PTR_TO_JSON(RoBuildId, roBuildId_);
      DARABONBA_PTR_TO_JSON(RoBuildProduct, roBuildProduct_);
      DARABONBA_PTR_TO_JSON(RoBuildTags, roBuildTags_);
      DARABONBA_PTR_TO_JSON(RoBuildType, roBuildType_);
      DARABONBA_PTR_TO_JSON(RoBuildUser, roBuildUser_);
      DARABONBA_PTR_TO_JSON(RoProductBoard, roProductBoard_);
      DARABONBA_PTR_TO_JSON(RoProductBrand, roProductBrand_);
      DARABONBA_PTR_TO_JSON(RoProductDevice, roProductDevice_);
      DARABONBA_PTR_TO_JSON(RoProductManufacturer, roProductManufacturer_);
      DARABONBA_PTR_TO_JSON(RoProductModel, roProductModel_);
      DARABONBA_PTR_TO_JSON(RwRoSerialNo, rwRoSerialNo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSystemPropertyTemplateRequestSystemPropertyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPropertyInfos, customPropertyInfos_);
      DARABONBA_PTR_FROM_JSON(RoBootloader, roBootloader_);
      DARABONBA_PTR_FROM_JSON(RoBuildDisplayId, roBuildDisplayId_);
      DARABONBA_PTR_FROM_JSON(RoBuildFingerprint, roBuildFingerprint_);
      DARABONBA_PTR_FROM_JSON(RoBuildHost, roBuildHost_);
      DARABONBA_PTR_FROM_JSON(RoBuildId, roBuildId_);
      DARABONBA_PTR_FROM_JSON(RoBuildProduct, roBuildProduct_);
      DARABONBA_PTR_FROM_JSON(RoBuildTags, roBuildTags_);
      DARABONBA_PTR_FROM_JSON(RoBuildType, roBuildType_);
      DARABONBA_PTR_FROM_JSON(RoBuildUser, roBuildUser_);
      DARABONBA_PTR_FROM_JSON(RoProductBoard, roProductBoard_);
      DARABONBA_PTR_FROM_JSON(RoProductBrand, roProductBrand_);
      DARABONBA_PTR_FROM_JSON(RoProductDevice, roProductDevice_);
      DARABONBA_PTR_FROM_JSON(RoProductManufacturer, roProductManufacturer_);
      DARABONBA_PTR_FROM_JSON(RoProductModel, roProductModel_);
      DARABONBA_PTR_FROM_JSON(RwRoSerialNo, rwRoSerialNo_);
    };
    CreateSystemPropertyTemplateRequestSystemPropertyInfo() = default ;
    CreateSystemPropertyTemplateRequestSystemPropertyInfo(const CreateSystemPropertyTemplateRequestSystemPropertyInfo &) = default ;
    CreateSystemPropertyTemplateRequestSystemPropertyInfo(CreateSystemPropertyTemplateRequestSystemPropertyInfo &&) = default ;
    CreateSystemPropertyTemplateRequestSystemPropertyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSystemPropertyTemplateRequestSystemPropertyInfo() = default ;
    CreateSystemPropertyTemplateRequestSystemPropertyInfo& operator=(const CreateSystemPropertyTemplateRequestSystemPropertyInfo &) = default ;
    CreateSystemPropertyTemplateRequestSystemPropertyInfo& operator=(CreateSystemPropertyTemplateRequestSystemPropertyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPropertyInfos_ == nullptr
        && return this->roBootloader_ == nullptr && return this->roBuildDisplayId_ == nullptr && return this->roBuildFingerprint_ == nullptr && return this->roBuildHost_ == nullptr && return this->roBuildId_ == nullptr
        && return this->roBuildProduct_ == nullptr && return this->roBuildTags_ == nullptr && return this->roBuildType_ == nullptr && return this->roBuildUser_ == nullptr && return this->roProductBoard_ == nullptr
        && return this->roProductBrand_ == nullptr && return this->roProductDevice_ == nullptr && return this->roProductManufacturer_ == nullptr && return this->roProductModel_ == nullptr && return this->rwRoSerialNo_ == nullptr; };
    // customPropertyInfos Field Functions 
    bool hasCustomPropertyInfos() const { return this->customPropertyInfos_ != nullptr;};
    void deleteCustomPropertyInfos() { this->customPropertyInfos_ = nullptr;};
    inline const vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos> & customPropertyInfos() const { DARABONBA_PTR_GET_CONST(customPropertyInfos_, vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>) };
    inline vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos> customPropertyInfos() { DARABONBA_PTR_GET(customPropertyInfos_, vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>) };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setCustomPropertyInfos(const vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos> & customPropertyInfos) { DARABONBA_PTR_SET_VALUE(customPropertyInfos_, customPropertyInfos) };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setCustomPropertyInfos(vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos> && customPropertyInfos) { DARABONBA_PTR_SET_RVALUE(customPropertyInfos_, customPropertyInfos) };


    // roBootloader Field Functions 
    bool hasRoBootloader() const { return this->roBootloader_ != nullptr;};
    void deleteRoBootloader() { this->roBootloader_ = nullptr;};
    inline string roBootloader() const { DARABONBA_PTR_GET_DEFAULT(roBootloader_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBootloader(string roBootloader) { DARABONBA_PTR_SET_VALUE(roBootloader_, roBootloader) };


    // roBuildDisplayId Field Functions 
    bool hasRoBuildDisplayId() const { return this->roBuildDisplayId_ != nullptr;};
    void deleteRoBuildDisplayId() { this->roBuildDisplayId_ = nullptr;};
    inline string roBuildDisplayId() const { DARABONBA_PTR_GET_DEFAULT(roBuildDisplayId_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildDisplayId(string roBuildDisplayId) { DARABONBA_PTR_SET_VALUE(roBuildDisplayId_, roBuildDisplayId) };


    // roBuildFingerprint Field Functions 
    bool hasRoBuildFingerprint() const { return this->roBuildFingerprint_ != nullptr;};
    void deleteRoBuildFingerprint() { this->roBuildFingerprint_ = nullptr;};
    inline string roBuildFingerprint() const { DARABONBA_PTR_GET_DEFAULT(roBuildFingerprint_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildFingerprint(string roBuildFingerprint) { DARABONBA_PTR_SET_VALUE(roBuildFingerprint_, roBuildFingerprint) };


    // roBuildHost Field Functions 
    bool hasRoBuildHost() const { return this->roBuildHost_ != nullptr;};
    void deleteRoBuildHost() { this->roBuildHost_ = nullptr;};
    inline string roBuildHost() const { DARABONBA_PTR_GET_DEFAULT(roBuildHost_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildHost(string roBuildHost) { DARABONBA_PTR_SET_VALUE(roBuildHost_, roBuildHost) };


    // roBuildId Field Functions 
    bool hasRoBuildId() const { return this->roBuildId_ != nullptr;};
    void deleteRoBuildId() { this->roBuildId_ = nullptr;};
    inline string roBuildId() const { DARABONBA_PTR_GET_DEFAULT(roBuildId_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildId(string roBuildId) { DARABONBA_PTR_SET_VALUE(roBuildId_, roBuildId) };


    // roBuildProduct Field Functions 
    bool hasRoBuildProduct() const { return this->roBuildProduct_ != nullptr;};
    void deleteRoBuildProduct() { this->roBuildProduct_ = nullptr;};
    inline string roBuildProduct() const { DARABONBA_PTR_GET_DEFAULT(roBuildProduct_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildProduct(string roBuildProduct) { DARABONBA_PTR_SET_VALUE(roBuildProduct_, roBuildProduct) };


    // roBuildTags Field Functions 
    bool hasRoBuildTags() const { return this->roBuildTags_ != nullptr;};
    void deleteRoBuildTags() { this->roBuildTags_ = nullptr;};
    inline string roBuildTags() const { DARABONBA_PTR_GET_DEFAULT(roBuildTags_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildTags(string roBuildTags) { DARABONBA_PTR_SET_VALUE(roBuildTags_, roBuildTags) };


    // roBuildType Field Functions 
    bool hasRoBuildType() const { return this->roBuildType_ != nullptr;};
    void deleteRoBuildType() { this->roBuildType_ = nullptr;};
    inline string roBuildType() const { DARABONBA_PTR_GET_DEFAULT(roBuildType_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildType(string roBuildType) { DARABONBA_PTR_SET_VALUE(roBuildType_, roBuildType) };


    // roBuildUser Field Functions 
    bool hasRoBuildUser() const { return this->roBuildUser_ != nullptr;};
    void deleteRoBuildUser() { this->roBuildUser_ = nullptr;};
    inline string roBuildUser() const { DARABONBA_PTR_GET_DEFAULT(roBuildUser_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoBuildUser(string roBuildUser) { DARABONBA_PTR_SET_VALUE(roBuildUser_, roBuildUser) };


    // roProductBoard Field Functions 
    bool hasRoProductBoard() const { return this->roProductBoard_ != nullptr;};
    void deleteRoProductBoard() { this->roProductBoard_ = nullptr;};
    inline string roProductBoard() const { DARABONBA_PTR_GET_DEFAULT(roProductBoard_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoProductBoard(string roProductBoard) { DARABONBA_PTR_SET_VALUE(roProductBoard_, roProductBoard) };


    // roProductBrand Field Functions 
    bool hasRoProductBrand() const { return this->roProductBrand_ != nullptr;};
    void deleteRoProductBrand() { this->roProductBrand_ = nullptr;};
    inline string roProductBrand() const { DARABONBA_PTR_GET_DEFAULT(roProductBrand_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoProductBrand(string roProductBrand) { DARABONBA_PTR_SET_VALUE(roProductBrand_, roProductBrand) };


    // roProductDevice Field Functions 
    bool hasRoProductDevice() const { return this->roProductDevice_ != nullptr;};
    void deleteRoProductDevice() { this->roProductDevice_ = nullptr;};
    inline string roProductDevice() const { DARABONBA_PTR_GET_DEFAULT(roProductDevice_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoProductDevice(string roProductDevice) { DARABONBA_PTR_SET_VALUE(roProductDevice_, roProductDevice) };


    // roProductManufacturer Field Functions 
    bool hasRoProductManufacturer() const { return this->roProductManufacturer_ != nullptr;};
    void deleteRoProductManufacturer() { this->roProductManufacturer_ = nullptr;};
    inline string roProductManufacturer() const { DARABONBA_PTR_GET_DEFAULT(roProductManufacturer_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoProductManufacturer(string roProductManufacturer) { DARABONBA_PTR_SET_VALUE(roProductManufacturer_, roProductManufacturer) };


    // roProductModel Field Functions 
    bool hasRoProductModel() const { return this->roProductModel_ != nullptr;};
    void deleteRoProductModel() { this->roProductModel_ = nullptr;};
    inline string roProductModel() const { DARABONBA_PTR_GET_DEFAULT(roProductModel_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRoProductModel(string roProductModel) { DARABONBA_PTR_SET_VALUE(roProductModel_, roProductModel) };


    // rwRoSerialNo Field Functions 
    bool hasRwRoSerialNo() const { return this->rwRoSerialNo_ != nullptr;};
    void deleteRwRoSerialNo() { this->rwRoSerialNo_ = nullptr;};
    inline string rwRoSerialNo() const { DARABONBA_PTR_GET_DEFAULT(rwRoSerialNo_, "") };
    inline CreateSystemPropertyTemplateRequestSystemPropertyInfo& setRwRoSerialNo(string rwRoSerialNo) { DARABONBA_PTR_SET_VALUE(rwRoSerialNo_, rwRoSerialNo) };


  protected:
    std::shared_ptr<vector<Models::CreateSystemPropertyTemplateRequestSystemPropertyInfoCustomPropertyInfos>> customPropertyInfos_ = nullptr;
    std::shared_ptr<string> roBootloader_ = nullptr;
    std::shared_ptr<string> roBuildDisplayId_ = nullptr;
    std::shared_ptr<string> roBuildFingerprint_ = nullptr;
    std::shared_ptr<string> roBuildHost_ = nullptr;
    std::shared_ptr<string> roBuildId_ = nullptr;
    std::shared_ptr<string> roBuildProduct_ = nullptr;
    std::shared_ptr<string> roBuildTags_ = nullptr;
    std::shared_ptr<string> roBuildType_ = nullptr;
    std::shared_ptr<string> roBuildUser_ = nullptr;
    std::shared_ptr<string> roProductBoard_ = nullptr;
    std::shared_ptr<string> roProductBrand_ = nullptr;
    std::shared_ptr<string> roProductDevice_ = nullptr;
    std::shared_ptr<string> roProductManufacturer_ = nullptr;
    std::shared_ptr<string> roProductModel_ = nullptr;
    std::shared_ptr<string> rwRoSerialNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
