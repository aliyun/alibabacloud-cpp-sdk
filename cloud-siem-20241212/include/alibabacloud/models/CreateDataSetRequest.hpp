// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataSetRequestIpWhitelistRecognizers.hpp>
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
    virtual bool empty() const override { return this->dataSetDescription_ == nullptr
        && return this->dataSetFieldKeyName_ == nullptr && return this->dataSetFileName_ == nullptr && return this->dataSetName_ == nullptr && return this->dataSetStatus_ == nullptr && return this->dataSetType_ == nullptr
        && return this->ipWhitelistRecognizers_ == nullptr && return this->lang_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataSetDescription Field Functions 
    bool hasDataSetDescription() const { return this->dataSetDescription_ != nullptr;};
    void deleteDataSetDescription() { this->dataSetDescription_ = nullptr;};
    inline string dataSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSetDescription_, "") };
    inline CreateDataSetRequest& setDataSetDescription(string dataSetDescription) { DARABONBA_PTR_SET_VALUE(dataSetDescription_, dataSetDescription) };


    // dataSetFieldKeyName Field Functions 
    bool hasDataSetFieldKeyName() const { return this->dataSetFieldKeyName_ != nullptr;};
    void deleteDataSetFieldKeyName() { this->dataSetFieldKeyName_ = nullptr;};
    inline string dataSetFieldKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFieldKeyName_, "") };
    inline CreateDataSetRequest& setDataSetFieldKeyName(string dataSetFieldKeyName) { DARABONBA_PTR_SET_VALUE(dataSetFieldKeyName_, dataSetFieldKeyName) };


    // dataSetFileName Field Functions 
    bool hasDataSetFileName() const { return this->dataSetFileName_ != nullptr;};
    void deleteDataSetFileName() { this->dataSetFileName_ = nullptr;};
    inline string dataSetFileName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFileName_, "") };
    inline CreateDataSetRequest& setDataSetFileName(string dataSetFileName) { DARABONBA_PTR_SET_VALUE(dataSetFileName_, dataSetFileName) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline CreateDataSetRequest& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // dataSetStatus Field Functions 
    bool hasDataSetStatus() const { return this->dataSetStatus_ != nullptr;};
    void deleteDataSetStatus() { this->dataSetStatus_ = nullptr;};
    inline int32_t dataSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSetStatus_, 0) };
    inline CreateDataSetRequest& setDataSetStatus(int32_t dataSetStatus) { DARABONBA_PTR_SET_VALUE(dataSetStatus_, dataSetStatus) };


    // dataSetType Field Functions 
    bool hasDataSetType() const { return this->dataSetType_ != nullptr;};
    void deleteDataSetType() { this->dataSetType_ = nullptr;};
    inline string dataSetType() const { DARABONBA_PTR_GET_DEFAULT(dataSetType_, "") };
    inline CreateDataSetRequest& setDataSetType(string dataSetType) { DARABONBA_PTR_SET_VALUE(dataSetType_, dataSetType) };


    // ipWhitelistRecognizers Field Functions 
    bool hasIpWhitelistRecognizers() const { return this->ipWhitelistRecognizers_ != nullptr;};
    void deleteIpWhitelistRecognizers() { this->ipWhitelistRecognizers_ = nullptr;};
    inline const vector<CreateDataSetRequestIpWhitelistRecognizers> & ipWhitelistRecognizers() const { DARABONBA_PTR_GET_CONST(ipWhitelistRecognizers_, vector<CreateDataSetRequestIpWhitelistRecognizers>) };
    inline vector<CreateDataSetRequestIpWhitelistRecognizers> ipWhitelistRecognizers() { DARABONBA_PTR_GET(ipWhitelistRecognizers_, vector<CreateDataSetRequestIpWhitelistRecognizers>) };
    inline CreateDataSetRequest& setIpWhitelistRecognizers(const vector<CreateDataSetRequestIpWhitelistRecognizers> & ipWhitelistRecognizers) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };
    inline CreateDataSetRequest& setIpWhitelistRecognizers(vector<CreateDataSetRequestIpWhitelistRecognizers> && ipWhitelistRecognizers) { DARABONBA_PTR_SET_RVALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataSetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateDataSetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataSetDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataSetFieldKeyName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataSetFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<int32_t> dataSetStatus_ = nullptr;
    std::shared_ptr<string> dataSetType_ = nullptr;
    std::shared_ptr<vector<CreateDataSetRequestIpWhitelistRecognizers>> ipWhitelistRecognizers_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
