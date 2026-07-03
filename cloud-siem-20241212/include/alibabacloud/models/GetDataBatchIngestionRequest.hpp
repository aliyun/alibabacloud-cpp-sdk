// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATABATCHINGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataBatchIngestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataBatchIngestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataBatchIngestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    GetDataBatchIngestionRequest() = default ;
    GetDataBatchIngestionRequest(const GetDataBatchIngestionRequest &) = default ;
    GetDataBatchIngestionRequest(GetDataBatchIngestionRequest &&) = default ;
    GetDataBatchIngestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataBatchIngestionRequest() = default ;
    GetDataBatchIngestionRequest& operator=(const GetDataBatchIngestionRequest &) = default ;
    GetDataBatchIngestionRequest& operator=(GetDataBatchIngestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetDataBatchIngestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDataBatchIngestionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline GetDataBatchIngestionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // 
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region where the Data Management Center for threat analysis is located. Select the region of the Management Center based on the region where your assets are located. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland.
    // 
    // - ap-southeast-1: Your assets are in a region outside China.
    shared_ptr<string> regionId_ {};
    // The user ID of a member. An administrator can use this parameter to switch to the member\\"s perspective.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
