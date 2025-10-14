// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataSetRequestIpWhitelistRecognizers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSetDescription, dataSetDescription_);
      DARABONBA_PTR_TO_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(DataSetStatus, dataSetStatus_);
      DARABONBA_PTR_TO_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSetDescription, dataSetDescription_);
      DARABONBA_PTR_FROM_JSON(DataSetFileName, dataSetFileName_);
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(DataSetStatus, dataSetStatus_);
      DARABONBA_PTR_FROM_JSON(IpWhitelistRecognizers, ipWhitelistRecognizers_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataSetRequest() = default ;
    UpdateDataSetRequest(const UpdateDataSetRequest &) = default ;
    UpdateDataSetRequest(UpdateDataSetRequest &&) = default ;
    UpdateDataSetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSetRequest() = default ;
    UpdateDataSetRequest& operator=(const UpdateDataSetRequest &) = default ;
    UpdateDataSetRequest& operator=(UpdateDataSetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSetDescription_ == nullptr
        && return this->dataSetFileName_ == nullptr && return this->dataSetId_ == nullptr && return this->dataSetName_ == nullptr && return this->dataSetStatus_ == nullptr && return this->ipWhitelistRecognizers_ == nullptr
        && return this->lang_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // dataSetDescription Field Functions 
    bool hasDataSetDescription() const { return this->dataSetDescription_ != nullptr;};
    void deleteDataSetDescription() { this->dataSetDescription_ = nullptr;};
    inline string dataSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dataSetDescription_, "") };
    inline UpdateDataSetRequest& setDataSetDescription(string dataSetDescription) { DARABONBA_PTR_SET_VALUE(dataSetDescription_, dataSetDescription) };


    // dataSetFileName Field Functions 
    bool hasDataSetFileName() const { return this->dataSetFileName_ != nullptr;};
    void deleteDataSetFileName() { this->dataSetFileName_ = nullptr;};
    inline string dataSetFileName() const { DARABONBA_PTR_GET_DEFAULT(dataSetFileName_, "") };
    inline UpdateDataSetRequest& setDataSetFileName(string dataSetFileName) { DARABONBA_PTR_SET_VALUE(dataSetFileName_, dataSetFileName) };


    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline string dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, "") };
    inline UpdateDataSetRequest& setDataSetId(string dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline UpdateDataSetRequest& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // dataSetStatus Field Functions 
    bool hasDataSetStatus() const { return this->dataSetStatus_ != nullptr;};
    void deleteDataSetStatus() { this->dataSetStatus_ = nullptr;};
    inline int32_t dataSetStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSetStatus_, 0) };
    inline UpdateDataSetRequest& setDataSetStatus(int32_t dataSetStatus) { DARABONBA_PTR_SET_VALUE(dataSetStatus_, dataSetStatus) };


    // ipWhitelistRecognizers Field Functions 
    bool hasIpWhitelistRecognizers() const { return this->ipWhitelistRecognizers_ != nullptr;};
    void deleteIpWhitelistRecognizers() { this->ipWhitelistRecognizers_ = nullptr;};
    inline const vector<UpdateDataSetRequestIpWhitelistRecognizers> & ipWhitelistRecognizers() const { DARABONBA_PTR_GET_CONST(ipWhitelistRecognizers_, vector<UpdateDataSetRequestIpWhitelistRecognizers>) };
    inline vector<UpdateDataSetRequestIpWhitelistRecognizers> ipWhitelistRecognizers() { DARABONBA_PTR_GET(ipWhitelistRecognizers_, vector<UpdateDataSetRequestIpWhitelistRecognizers>) };
    inline UpdateDataSetRequest& setIpWhitelistRecognizers(const vector<UpdateDataSetRequestIpWhitelistRecognizers> & ipWhitelistRecognizers) { DARABONBA_PTR_SET_VALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };
    inline UpdateDataSetRequest& setIpWhitelistRecognizers(vector<UpdateDataSetRequestIpWhitelistRecognizers> && ipWhitelistRecognizers) { DARABONBA_PTR_SET_RVALUE(ipWhitelistRecognizers_, ipWhitelistRecognizers) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataSetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataSetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataSetRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> dataSetDescription_ = nullptr;
    std::shared_ptr<string> dataSetFileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<int32_t> dataSetStatus_ = nullptr;
    std::shared_ptr<vector<UpdateDataSetRequestIpWhitelistRecognizers>> ipWhitelistRecognizers_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
