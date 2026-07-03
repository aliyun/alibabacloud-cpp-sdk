// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetDescription, dataSetDescription_);
      DARABONBA_PTR_TO_JSON(DataSetFieldKeyName, dataSetFieldKeyName_);
      DARABONBA_PTR_TO_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(DataSetStatus, dataSetStatus_);
      DARABONBA_PTR_TO_JSON(DataSetType, dataSetType_);
      DARABONBA_PTR_TO_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetDescription, dataSetDescription_);
      DARABONBA_PTR_FROM_JSON(DataSetFieldKeyName, dataSetFieldKeyName_);
      DARABONBA_PTR_FROM_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(DataSetStatus, dataSetStatus_);
      DARABONBA_PTR_FROM_JSON(DataSetType, dataSetType_);
      DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    CreateDataSetRequest() = default ;
    CreateDataSetRequest(const CreateDataSetRequest &) = default ;
    CreateDataSetRequest(CreateDataSetRequest &&) = default ;
    CreateDataSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSetRequest() = default ;
    CreateDataSetRequest& operator=(const CreateDataSetRequest &) = default ;
    CreateDataSetRequest& operator=(CreateDataSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IpWhitelistRecognizers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpWhitelistRecognizers& obj) { 
        DARABONBA_PTR_TO_JSON(AutoRecognizeStatus, autoRecognizeStatus_);
        DARABONBA_PTR_TO_JSON(IpWhitelistRecognizerType, ipWhitelistRecognizerType_);
        DARABONBA_PTR_TO_JSON(RecognizeScope, recognizeScope_);
      };
      friend void from_json(const Darabonba::Json& j, IpWhitelistRecognizers& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoRecognizeStatus, autoRecognizeStatus_);
        DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizerType, ipWhitelistRecognizerType_);
        DARABONBA_PTR_FROM_JSON(RecognizeScope, recognizeScope_);
      };
      IpWhitelistRecognizers() = default ;
      IpWhitelistRecognizers(const IpWhitelistRecognizers &) = default ;
      IpWhitelistRecognizers(IpWhitelistRecognizers &&) = default ;
      IpWhitelistRecognizers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpWhitelistRecognizers() = default ;
      IpWhitelistRecognizers& operator=(const IpWhitelistRecognizers &) = default ;
      IpWhitelistRecognizers& operator=(IpWhitelistRecognizers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoRecognizeStatus_ == nullptr
        && this->ipWhitelistRecognizerType_ == nullptr && this->recognizeScope_ == nullptr; };
      // autoRecognizeStatus Field Functions 
      bool hasAutoRecognizeStatus() const { return this->autoRecognizeStatus_ != nullptr;};
      void deleteAutoRecognizeStatus() { this->autoRecognizeStatus_ = nullptr;};
      inline string getAutoRecognizeStatus() const { DARABONBA_PTR_GET_DEFAULT(autoRecognizeStatus_, "") };
      inline IpWhitelistRecognizers& setAutoRecognizeStatus(string autoRecognizeStatus) { DARABONBA_PTR_SET_VALUE(autoRecognizeStatus_, autoRecognizeStatus) };


      // ipWhitelistRecognizerType Field Functions 
      bool hasIpWhitelistRecognizerType() const { return this->ipWhitelistRecognizerType_ != nullptr;};
      void deleteIpWhitelistRecognizerType() { this->ipWhitelistRecognizerType_ = nullptr;};
      inline string getIpWhitelistRecognizerType() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelistRecognizerType_, "") };
      inline IpWhitelistRecognizers& setIpWhitelistRecognizerType(string ipWhitelistRecognizerType) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizerType_, ipWhitelistRecognizerType) };


      // recognizeScope Field Functions 
      bool hasRecognizeScope() const { return this->recognizeScope_ != nullptr;};
      void deleteRecognizeScope() { this->recognizeScope_ = nullptr;};
      inline string getRecognizeScope() const { DARABONBA_PTR_GET_DEFAULT(recognizeScope_, "") };
      inline IpWhitelistRecognizers& setRecognizeScope(string recognizeScope) { DARABONBA_PTR_SET_VALUE(recognizeScope_, recognizeScope) };


    protected:
      // The automatic detection status. Valid values:
      // 
      // - enabled: enabled.
      // 
      // - disabled: disabled.
      shared_ptr<string> autoRecognizeStatus_ {};
      // The type of IP address that the recognizer detects. Valid values:
      // 
      // - sas_vulnerability_scanner_ip: The IP address of the Security Center web vulnerability scanner.
      // 
      // - waf_back_source_ip: The back-to-origin IP address of Web Application Firewall (WAF).
      // 
      // - ddos_back_source_ip: The back-to-origin IP address of Anti-DDoS.
      // 
      // - esa_back_source_ip: The back-to-origin IP address of an Edge Security Acceleration (ESA) node.
      // 
      // - ecs_public_ip: The public IP address of an Elastic Compute Service (ECS) instance.
      // 
      // - slb_public_ip: The public IP address of a Server Load Balancer (SLB) instance.
      // 
      // - vpc_eip: An Elastic IP Address (EIP).
      // 
      // - cdn_back_source_ip: The back-to-origin IP address of a content delivery network (CDN).
      // 
      // - ga_back_source_ip: The back-to-origin IP address of Global Accelerator (GA).
      shared_ptr<string> ipWhitelistRecognizerType_ {};
      // The detection scope. Valid values:
      // 
      // - current_account: the current account only.
      // 
      // - rd_accounts: all accounts in your resource directory.
      shared_ptr<string> recognizeScope_ {};
    };

    virtual bool empty() const override { return this->dataSetDescription_ == nullptr
        && this->dataSetFieldKeyName_ == nullptr && this->dataSetFileName_ == nullptr && this->dataSetName_ == nullptr && this->dataSetStatus_ == nullptr && this->dataSetType_ == nullptr
        && this->ipWhitelistRecognizers_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // dataSetDescription Field Functions 
    bool hasDataSetDescription() const { return this->dataSetDescription_ != nullptr;};
    void deleteDataSetDescription() { this->dataSetDescription_ = nullptr;};
    inline string getDataSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSetDescription_, "") };
    inline CreateDataSetRequest& setDataSetDescription(string dataSetDescription) { DARABONBA_PTR_SET_VALUE(dataSetDescription_, dataSetDescription) };


    // dataSetFieldKeyName Field Functions 
    bool hasDataSetFieldKeyName() const { return this->dataSetFieldKeyName_ != nullptr;};
    void deleteDataSetFieldKeyName() { this->dataSetFieldKeyName_ = nullptr;};
    inline string getDataSetFieldKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFieldKeyName_, "") };
    inline CreateDataSetRequest& setDataSetFieldKeyName(string dataSetFieldKeyName) { DARABONBA_PTR_SET_VALUE(dataSetFieldKeyName_, dataSetFieldKeyName) };


    // dataSetFileName Field Functions 
    bool hasDataSetFileName() const { return this->dataSetFileName_ != nullptr;};
    void deleteDataSetFileName() { this->dataSetFileName_ = nullptr;};
    inline string getDataSetFileName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFileName_, "") };
    inline CreateDataSetRequest& setDataSetFileName(string dataSetFileName) { DARABONBA_PTR_SET_VALUE(dataSetFileName_, dataSetFileName) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string getDataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline CreateDataSetRequest& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // dataSetStatus Field Functions 
    bool hasDataSetStatus() const { return this->dataSetStatus_ != nullptr;};
    void deleteDataSetStatus() { this->dataSetStatus_ = nullptr;};
    inline int32_t getDataSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSetStatus_, 0) };
    inline CreateDataSetRequest& setDataSetStatus(int32_t dataSetStatus) { DARABONBA_PTR_SET_VALUE(dataSetStatus_, dataSetStatus) };


    // dataSetType Field Functions 
    bool hasDataSetType() const { return this->dataSetType_ != nullptr;};
    void deleteDataSetType() { this->dataSetType_ = nullptr;};
    inline string getDataSetType() const { DARABONBA_PTR_GET_DEFAULT(dataSetType_, "") };
    inline CreateDataSetRequest& setDataSetType(string dataSetType) { DARABONBA_PTR_SET_VALUE(dataSetType_, dataSetType) };


    // ipWhitelistRecognizers Field Functions 
    bool hasIpWhitelistRecognizers() const { return this->ipWhitelistRecognizers_ != nullptr;};
    void deleteIpWhitelistRecognizers() { this->ipWhitelistRecognizers_ = nullptr;};
    inline const vector<CreateDataSetRequest::IpWhitelistRecognizers> & getIpWhitelistRecognizers() const { DARABONBA_PTR_GET_CONST(ipWhitelistRecognizers_, vector<CreateDataSetRequest::IpWhitelistRecognizers>) };
    inline vector<CreateDataSetRequest::IpWhitelistRecognizers> getIpWhitelistRecognizers() { DARABONBA_PTR_GET(ipWhitelistRecognizers_, vector<CreateDataSetRequest::IpWhitelistRecognizers>) };
    inline CreateDataSetRequest& setIpWhitelistRecognizers(const vector<CreateDataSetRequest::IpWhitelistRecognizers> & ipWhitelistRecognizers) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };
    inline CreateDataSetRequest& setIpWhitelistRecognizers(vector<CreateDataSetRequest::IpWhitelistRecognizers> && ipWhitelistRecognizers) { DARABONBA_PTR_SET_RVALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataSetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateDataSetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The description of the dataset.
    shared_ptr<string> dataSetDescription_ {};
    // The name of the unique key for the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> dataSetFieldKeyName_ {};
    // The name of the uploaded dataset file.
    // 
    // This parameter is required.
    shared_ptr<string> dataSetFileName_ {};
    // The name of the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> dataSetName_ {};
    // The status of the dataset. Valid values:
    // 
    // - 0: deleted.
    // 
    // - 1: enabled.
    shared_ptr<int32_t> dataSetStatus_ {};
    // The type of the dataset. Valid values:
    // 
    // - custom: custom.
    // 
    // - preset: predefined.
    shared_ptr<string> dataSetType_ {};
    // The list of recognizers.
    shared_ptr<vector<CreateDataSetRequest::IpWhitelistRecognizers>> ipWhitelistRecognizers_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region of the Data Management center for threat analysis. Select a region based on where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland.
    // 
    // - ap-southeast-1: Your assets are outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of the member whose permissions are used to perform the operation. This parameter is used when an administrator acts on behalf of a member.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
