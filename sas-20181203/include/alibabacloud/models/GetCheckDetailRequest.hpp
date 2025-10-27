// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetCheckDetailRequest() = default ;
    GetCheckDetailRequest(const GetCheckDetailRequest &) = default ;
    GetCheckDetailRequest(GetCheckDetailRequest &&) = default ;
    GetCheckDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailRequest() = default ;
    GetCheckDetailRequest& operator=(const GetCheckDetailRequest &) = default ;
    GetCheckDetailRequest& operator=(GetCheckDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->lang_ == nullptr && return this->regionId_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline GetCheckDetailRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetCheckDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCheckDetailRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to query the IDs of check items.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The region ID of the instance.
    // 
    // >  You can call the [ListCloudAssetInstances](~~ListCloudAssetInstances~~) operation to query the region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
