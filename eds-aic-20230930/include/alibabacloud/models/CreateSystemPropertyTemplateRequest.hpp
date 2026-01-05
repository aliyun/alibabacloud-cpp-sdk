// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESYSTEMPROPERTYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESYSTEMPROPERTYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateSystemPropertyTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSystemPropertyTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(SystemPropertyInfo, systemPropertyInfo_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSystemPropertyTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAuto, enableAuto_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(SystemPropertyInfo, systemPropertyInfo_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    CreateSystemPropertyTemplateRequest() = default ;
    CreateSystemPropertyTemplateRequest(const CreateSystemPropertyTemplateRequest &) = default ;
    CreateSystemPropertyTemplateRequest(CreateSystemPropertyTemplateRequest &&) = default ;
    CreateSystemPropertyTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSystemPropertyTemplateRequest() = default ;
    CreateSystemPropertyTemplateRequest& operator=(const CreateSystemPropertyTemplateRequest &) = default ;
    CreateSystemPropertyTemplateRequest& operator=(CreateSystemPropertyTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemPropertyInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemPropertyInfo& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SystemPropertyInfo& obj) { 
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
      SystemPropertyInfo() = default ;
      SystemPropertyInfo(const SystemPropertyInfo &) = default ;
      SystemPropertyInfo(SystemPropertyInfo &&) = default ;
      SystemPropertyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemPropertyInfo() = default ;
      SystemPropertyInfo& operator=(const SystemPropertyInfo &) = default ;
      SystemPropertyInfo& operator=(SystemPropertyInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomPropertyInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPropertyInfos& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPropertyInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
          DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
        };
        CustomPropertyInfos() = default ;
        CustomPropertyInfos(const CustomPropertyInfos &) = default ;
        CustomPropertyInfos(CustomPropertyInfos &&) = default ;
        CustomPropertyInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPropertyInfos() = default ;
        CustomPropertyInfos& operator=(const CustomPropertyInfos &) = default ;
        CustomPropertyInfos& operator=(CustomPropertyInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->propertyName_ == nullptr
        && this->propertyValue_ == nullptr; };
        // propertyName Field Functions 
        bool hasPropertyName() const { return this->propertyName_ != nullptr;};
        void deletePropertyName() { this->propertyName_ = nullptr;};
        inline string getPropertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
        inline CustomPropertyInfos& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


        // propertyValue Field Functions 
        bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
        void deletePropertyValue() { this->propertyValue_ = nullptr;};
        inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
        inline CustomPropertyInfos& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


      protected:
        shared_ptr<string> propertyName_ {};
        shared_ptr<string> propertyValue_ {};
      };

      virtual bool empty() const override { return this->customPropertyInfos_ == nullptr
        && this->roBootloader_ == nullptr && this->roBuildDisplayId_ == nullptr && this->roBuildFingerprint_ == nullptr && this->roBuildHost_ == nullptr && this->roBuildId_ == nullptr
        && this->roBuildProduct_ == nullptr && this->roBuildTags_ == nullptr && this->roBuildType_ == nullptr && this->roBuildUser_ == nullptr && this->roProductBoard_ == nullptr
        && this->roProductBrand_ == nullptr && this->roProductDevice_ == nullptr && this->roProductManufacturer_ == nullptr && this->roProductModel_ == nullptr && this->rwRoSerialNo_ == nullptr; };
      // customPropertyInfos Field Functions 
      bool hasCustomPropertyInfos() const { return this->customPropertyInfos_ != nullptr;};
      void deleteCustomPropertyInfos() { this->customPropertyInfos_ = nullptr;};
      inline const vector<SystemPropertyInfo::CustomPropertyInfos> & getCustomPropertyInfos() const { DARABONBA_PTR_GET_CONST(customPropertyInfos_, vector<SystemPropertyInfo::CustomPropertyInfos>) };
      inline vector<SystemPropertyInfo::CustomPropertyInfos> getCustomPropertyInfos() { DARABONBA_PTR_GET(customPropertyInfos_, vector<SystemPropertyInfo::CustomPropertyInfos>) };
      inline SystemPropertyInfo& setCustomPropertyInfos(const vector<SystemPropertyInfo::CustomPropertyInfos> & customPropertyInfos) { DARABONBA_PTR_SET_VALUE(customPropertyInfos_, customPropertyInfos) };
      inline SystemPropertyInfo& setCustomPropertyInfos(vector<SystemPropertyInfo::CustomPropertyInfos> && customPropertyInfos) { DARABONBA_PTR_SET_RVALUE(customPropertyInfos_, customPropertyInfos) };


      // roBootloader Field Functions 
      bool hasRoBootloader() const { return this->roBootloader_ != nullptr;};
      void deleteRoBootloader() { this->roBootloader_ = nullptr;};
      inline string getRoBootloader() const { DARABONBA_PTR_GET_DEFAULT(roBootloader_, "") };
      inline SystemPropertyInfo& setRoBootloader(string roBootloader) { DARABONBA_PTR_SET_VALUE(roBootloader_, roBootloader) };


      // roBuildDisplayId Field Functions 
      bool hasRoBuildDisplayId() const { return this->roBuildDisplayId_ != nullptr;};
      void deleteRoBuildDisplayId() { this->roBuildDisplayId_ = nullptr;};
      inline string getRoBuildDisplayId() const { DARABONBA_PTR_GET_DEFAULT(roBuildDisplayId_, "") };
      inline SystemPropertyInfo& setRoBuildDisplayId(string roBuildDisplayId) { DARABONBA_PTR_SET_VALUE(roBuildDisplayId_, roBuildDisplayId) };


      // roBuildFingerprint Field Functions 
      bool hasRoBuildFingerprint() const { return this->roBuildFingerprint_ != nullptr;};
      void deleteRoBuildFingerprint() { this->roBuildFingerprint_ = nullptr;};
      inline string getRoBuildFingerprint() const { DARABONBA_PTR_GET_DEFAULT(roBuildFingerprint_, "") };
      inline SystemPropertyInfo& setRoBuildFingerprint(string roBuildFingerprint) { DARABONBA_PTR_SET_VALUE(roBuildFingerprint_, roBuildFingerprint) };


      // roBuildHost Field Functions 
      bool hasRoBuildHost() const { return this->roBuildHost_ != nullptr;};
      void deleteRoBuildHost() { this->roBuildHost_ = nullptr;};
      inline string getRoBuildHost() const { DARABONBA_PTR_GET_DEFAULT(roBuildHost_, "") };
      inline SystemPropertyInfo& setRoBuildHost(string roBuildHost) { DARABONBA_PTR_SET_VALUE(roBuildHost_, roBuildHost) };


      // roBuildId Field Functions 
      bool hasRoBuildId() const { return this->roBuildId_ != nullptr;};
      void deleteRoBuildId() { this->roBuildId_ = nullptr;};
      inline string getRoBuildId() const { DARABONBA_PTR_GET_DEFAULT(roBuildId_, "") };
      inline SystemPropertyInfo& setRoBuildId(string roBuildId) { DARABONBA_PTR_SET_VALUE(roBuildId_, roBuildId) };


      // roBuildProduct Field Functions 
      bool hasRoBuildProduct() const { return this->roBuildProduct_ != nullptr;};
      void deleteRoBuildProduct() { this->roBuildProduct_ = nullptr;};
      inline string getRoBuildProduct() const { DARABONBA_PTR_GET_DEFAULT(roBuildProduct_, "") };
      inline SystemPropertyInfo& setRoBuildProduct(string roBuildProduct) { DARABONBA_PTR_SET_VALUE(roBuildProduct_, roBuildProduct) };


      // roBuildTags Field Functions 
      bool hasRoBuildTags() const { return this->roBuildTags_ != nullptr;};
      void deleteRoBuildTags() { this->roBuildTags_ = nullptr;};
      inline string getRoBuildTags() const { DARABONBA_PTR_GET_DEFAULT(roBuildTags_, "") };
      inline SystemPropertyInfo& setRoBuildTags(string roBuildTags) { DARABONBA_PTR_SET_VALUE(roBuildTags_, roBuildTags) };


      // roBuildType Field Functions 
      bool hasRoBuildType() const { return this->roBuildType_ != nullptr;};
      void deleteRoBuildType() { this->roBuildType_ = nullptr;};
      inline string getRoBuildType() const { DARABONBA_PTR_GET_DEFAULT(roBuildType_, "") };
      inline SystemPropertyInfo& setRoBuildType(string roBuildType) { DARABONBA_PTR_SET_VALUE(roBuildType_, roBuildType) };


      // roBuildUser Field Functions 
      bool hasRoBuildUser() const { return this->roBuildUser_ != nullptr;};
      void deleteRoBuildUser() { this->roBuildUser_ = nullptr;};
      inline string getRoBuildUser() const { DARABONBA_PTR_GET_DEFAULT(roBuildUser_, "") };
      inline SystemPropertyInfo& setRoBuildUser(string roBuildUser) { DARABONBA_PTR_SET_VALUE(roBuildUser_, roBuildUser) };


      // roProductBoard Field Functions 
      bool hasRoProductBoard() const { return this->roProductBoard_ != nullptr;};
      void deleteRoProductBoard() { this->roProductBoard_ = nullptr;};
      inline string getRoProductBoard() const { DARABONBA_PTR_GET_DEFAULT(roProductBoard_, "") };
      inline SystemPropertyInfo& setRoProductBoard(string roProductBoard) { DARABONBA_PTR_SET_VALUE(roProductBoard_, roProductBoard) };


      // roProductBrand Field Functions 
      bool hasRoProductBrand() const { return this->roProductBrand_ != nullptr;};
      void deleteRoProductBrand() { this->roProductBrand_ = nullptr;};
      inline string getRoProductBrand() const { DARABONBA_PTR_GET_DEFAULT(roProductBrand_, "") };
      inline SystemPropertyInfo& setRoProductBrand(string roProductBrand) { DARABONBA_PTR_SET_VALUE(roProductBrand_, roProductBrand) };


      // roProductDevice Field Functions 
      bool hasRoProductDevice() const { return this->roProductDevice_ != nullptr;};
      void deleteRoProductDevice() { this->roProductDevice_ = nullptr;};
      inline string getRoProductDevice() const { DARABONBA_PTR_GET_DEFAULT(roProductDevice_, "") };
      inline SystemPropertyInfo& setRoProductDevice(string roProductDevice) { DARABONBA_PTR_SET_VALUE(roProductDevice_, roProductDevice) };


      // roProductManufacturer Field Functions 
      bool hasRoProductManufacturer() const { return this->roProductManufacturer_ != nullptr;};
      void deleteRoProductManufacturer() { this->roProductManufacturer_ = nullptr;};
      inline string getRoProductManufacturer() const { DARABONBA_PTR_GET_DEFAULT(roProductManufacturer_, "") };
      inline SystemPropertyInfo& setRoProductManufacturer(string roProductManufacturer) { DARABONBA_PTR_SET_VALUE(roProductManufacturer_, roProductManufacturer) };


      // roProductModel Field Functions 
      bool hasRoProductModel() const { return this->roProductModel_ != nullptr;};
      void deleteRoProductModel() { this->roProductModel_ = nullptr;};
      inline string getRoProductModel() const { DARABONBA_PTR_GET_DEFAULT(roProductModel_, "") };
      inline SystemPropertyInfo& setRoProductModel(string roProductModel) { DARABONBA_PTR_SET_VALUE(roProductModel_, roProductModel) };


      // rwRoSerialNo Field Functions 
      bool hasRwRoSerialNo() const { return this->rwRoSerialNo_ != nullptr;};
      void deleteRwRoSerialNo() { this->rwRoSerialNo_ = nullptr;};
      inline string getRwRoSerialNo() const { DARABONBA_PTR_GET_DEFAULT(rwRoSerialNo_, "") };
      inline SystemPropertyInfo& setRwRoSerialNo(string rwRoSerialNo) { DARABONBA_PTR_SET_VALUE(rwRoSerialNo_, rwRoSerialNo) };


    protected:
      shared_ptr<vector<SystemPropertyInfo::CustomPropertyInfos>> customPropertyInfos_ {};
      shared_ptr<string> roBootloader_ {};
      shared_ptr<string> roBuildDisplayId_ {};
      shared_ptr<string> roBuildFingerprint_ {};
      shared_ptr<string> roBuildHost_ {};
      shared_ptr<string> roBuildId_ {};
      shared_ptr<string> roBuildProduct_ {};
      shared_ptr<string> roBuildTags_ {};
      shared_ptr<string> roBuildType_ {};
      shared_ptr<string> roBuildUser_ {};
      shared_ptr<string> roProductBoard_ {};
      shared_ptr<string> roProductBrand_ {};
      shared_ptr<string> roProductDevice_ {};
      shared_ptr<string> roProductManufacturer_ {};
      shared_ptr<string> roProductModel_ {};
      shared_ptr<string> rwRoSerialNo_ {};
    };

    virtual bool empty() const override { return this->enableAuto_ == nullptr
        && this->filePath_ == nullptr && this->systemPropertyInfo_ == nullptr && this->templateName_ == nullptr; };
    // enableAuto Field Functions 
    bool hasEnableAuto() const { return this->enableAuto_ != nullptr;};
    void deleteEnableAuto() { this->enableAuto_ = nullptr;};
    inline bool getEnableAuto() const { DARABONBA_PTR_GET_DEFAULT(enableAuto_, false) };
    inline CreateSystemPropertyTemplateRequest& setEnableAuto(bool enableAuto) { DARABONBA_PTR_SET_VALUE(enableAuto_, enableAuto) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline CreateSystemPropertyTemplateRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // systemPropertyInfo Field Functions 
    bool hasSystemPropertyInfo() const { return this->systemPropertyInfo_ != nullptr;};
    void deleteSystemPropertyInfo() { this->systemPropertyInfo_ = nullptr;};
    inline const CreateSystemPropertyTemplateRequest::SystemPropertyInfo & getSystemPropertyInfo() const { DARABONBA_PTR_GET_CONST(systemPropertyInfo_, CreateSystemPropertyTemplateRequest::SystemPropertyInfo) };
    inline CreateSystemPropertyTemplateRequest::SystemPropertyInfo getSystemPropertyInfo() { DARABONBA_PTR_GET(systemPropertyInfo_, CreateSystemPropertyTemplateRequest::SystemPropertyInfo) };
    inline CreateSystemPropertyTemplateRequest& setSystemPropertyInfo(const CreateSystemPropertyTemplateRequest::SystemPropertyInfo & systemPropertyInfo) { DARABONBA_PTR_SET_VALUE(systemPropertyInfo_, systemPropertyInfo) };
    inline CreateSystemPropertyTemplateRequest& setSystemPropertyInfo(CreateSystemPropertyTemplateRequest::SystemPropertyInfo && systemPropertyInfo) { DARABONBA_PTR_SET_RVALUE(systemPropertyInfo_, systemPropertyInfo) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateSystemPropertyTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    shared_ptr<bool> enableAuto_ {};
    shared_ptr<string> filePath_ {};
    shared_ptr<CreateSystemPropertyTemplateRequest::SystemPropertyInfo> systemPropertyInfo_ {};
    shared_ptr<string> templateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
