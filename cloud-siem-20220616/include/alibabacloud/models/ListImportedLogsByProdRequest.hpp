// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMPORTEDLOGSBYPRODREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMPORTEDLOGSBYPRODREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListImportedLogsByProdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImportedLogsByProdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListImportedLogsByProdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    ListImportedLogsByProdRequest() = default ;
    ListImportedLogsByProdRequest(const ListImportedLogsByProdRequest &) = default ;
    ListImportedLogsByProdRequest(ListImportedLogsByProdRequest &&) = default ;
    ListImportedLogsByProdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImportedLogsByProdRequest() = default ;
    ListImportedLogsByProdRequest& operator=(const ListImportedLogsByProdRequest &) = default ;
    ListImportedLogsByProdRequest& operator=(ListImportedLogsByProdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudCode_ != nullptr
        && this->prodCode_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr; };
    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListImportedLogsByProdRequest& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string prodCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline ListImportedLogsByProdRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListImportedLogsByProdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListImportedLogsByProdRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListImportedLogsByProdRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud.
    // *   aliyun: Alibaba Cloud.
    // *   hcloud: Huawei Cloud.
    // 
    // This parameter is required.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // The code of the cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> prodCode_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
