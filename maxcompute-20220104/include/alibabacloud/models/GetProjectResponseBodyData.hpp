// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataIpWhiteList.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataProperties.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataSaleTag.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataSecurityProperties.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(costStorage, costStorage_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(defaultQuota, defaultQuota_);
      DARABONBA_PTR_TO_JSON(ipWhiteList, ipWhiteList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
      DARABONBA_PTR_TO_JSON(securityProperties, securityProperties_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(superAdmins, superAdmins_);
      DARABONBA_PTR_TO_JSON(threeTierModel, threeTierModel_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(costStorage, costStorage_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(defaultQuota, defaultQuota_);
      DARABONBA_PTR_FROM_JSON(ipWhiteList, ipWhiteList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
      DARABONBA_PTR_FROM_JSON(securityProperties, securityProperties_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(superAdmins, superAdmins_);
      DARABONBA_PTR_FROM_JSON(threeTierModel, threeTierModel_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetProjectResponseBodyData() = default ;
    GetProjectResponseBodyData(const GetProjectResponseBodyData &) = default ;
    GetProjectResponseBodyData(GetProjectResponseBodyData &&) = default ;
    GetProjectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyData() = default ;
    GetProjectResponseBodyData& operator=(const GetProjectResponseBodyData &) = default ;
    GetProjectResponseBodyData& operator=(GetProjectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->costStorage_ != nullptr && this->createdTime_ != nullptr && this->defaultQuota_ != nullptr && this->ipWhiteList_ != nullptr && this->name_ != nullptr
        && this->owner_ != nullptr && this->productType_ != nullptr && this->properties_ != nullptr && this->regionId_ != nullptr && this->saleTag_ != nullptr
        && this->securityProperties_ != nullptr && this->status_ != nullptr && this->superAdmins_ != nullptr && this->threeTierModel_ != nullptr && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetProjectResponseBodyData& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // costStorage Field Functions 
    bool hasCostStorage() const { return this->costStorage_ != nullptr;};
    void deleteCostStorage() { this->costStorage_ = nullptr;};
    inline string costStorage() const { DARABONBA_PTR_GET_DEFAULT(costStorage_, "") };
    inline GetProjectResponseBodyData& setCostStorage(string costStorage) { DARABONBA_PTR_SET_VALUE(costStorage_, costStorage) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetProjectResponseBodyData& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // defaultQuota Field Functions 
    bool hasDefaultQuota() const { return this->defaultQuota_ != nullptr;};
    void deleteDefaultQuota() { this->defaultQuota_ = nullptr;};
    inline string defaultQuota() const { DARABONBA_PTR_GET_DEFAULT(defaultQuota_, "") };
    inline GetProjectResponseBodyData& setDefaultQuota(string defaultQuota) { DARABONBA_PTR_SET_VALUE(defaultQuota_, defaultQuota) };


    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataIpWhiteList & ipWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, Models::GetProjectResponseBodyDataIpWhiteList) };
    inline Models::GetProjectResponseBodyDataIpWhiteList ipWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, Models::GetProjectResponseBodyDataIpWhiteList) };
    inline GetProjectResponseBodyData& setIpWhiteList(const Models::GetProjectResponseBodyDataIpWhiteList & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
    inline GetProjectResponseBodyData& setIpWhiteList(Models::GetProjectResponseBodyDataIpWhiteList && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetProjectResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetProjectResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetProjectResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::GetProjectResponseBodyDataProperties) };
    inline Models::GetProjectResponseBodyDataProperties properties() { DARABONBA_PTR_GET(properties_, Models::GetProjectResponseBodyDataProperties) };
    inline GetProjectResponseBodyData& setProperties(const Models::GetProjectResponseBodyDataProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline GetProjectResponseBodyData& setProperties(Models::GetProjectResponseBodyDataProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetProjectResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // saleTag Field Functions 
    bool hasSaleTag() const { return this->saleTag_ != nullptr;};
    void deleteSaleTag() { this->saleTag_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataSaleTag & saleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, Models::GetProjectResponseBodyDataSaleTag) };
    inline Models::GetProjectResponseBodyDataSaleTag saleTag() { DARABONBA_PTR_GET(saleTag_, Models::GetProjectResponseBodyDataSaleTag) };
    inline GetProjectResponseBodyData& setSaleTag(const Models::GetProjectResponseBodyDataSaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
    inline GetProjectResponseBodyData& setSaleTag(Models::GetProjectResponseBodyDataSaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


    // securityProperties Field Functions 
    bool hasSecurityProperties() const { return this->securityProperties_ != nullptr;};
    void deleteSecurityProperties() { this->securityProperties_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataSecurityProperties & securityProperties() const { DARABONBA_PTR_GET_CONST(securityProperties_, Models::GetProjectResponseBodyDataSecurityProperties) };
    inline Models::GetProjectResponseBodyDataSecurityProperties securityProperties() { DARABONBA_PTR_GET(securityProperties_, Models::GetProjectResponseBodyDataSecurityProperties) };
    inline GetProjectResponseBodyData& setSecurityProperties(const Models::GetProjectResponseBodyDataSecurityProperties & securityProperties) { DARABONBA_PTR_SET_VALUE(securityProperties_, securityProperties) };
    inline GetProjectResponseBodyData& setSecurityProperties(Models::GetProjectResponseBodyDataSecurityProperties && securityProperties) { DARABONBA_PTR_SET_RVALUE(securityProperties_, securityProperties) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProjectResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // superAdmins Field Functions 
    bool hasSuperAdmins() const { return this->superAdmins_ != nullptr;};
    void deleteSuperAdmins() { this->superAdmins_ = nullptr;};
    inline const vector<string> & superAdmins() const { DARABONBA_PTR_GET_CONST(superAdmins_, vector<string>) };
    inline vector<string> superAdmins() { DARABONBA_PTR_GET(superAdmins_, vector<string>) };
    inline GetProjectResponseBodyData& setSuperAdmins(const vector<string> & superAdmins) { DARABONBA_PTR_SET_VALUE(superAdmins_, superAdmins) };
    inline GetProjectResponseBodyData& setSuperAdmins(vector<string> && superAdmins) { DARABONBA_PTR_SET_RVALUE(superAdmins_, superAdmins) };


    // threeTierModel Field Functions 
    bool hasThreeTierModel() const { return this->threeTierModel_ != nullptr;};
    void deleteThreeTierModel() { this->threeTierModel_ = nullptr;};
    inline bool threeTierModel() const { DARABONBA_PTR_GET_DEFAULT(threeTierModel_, false) };
    inline GetProjectResponseBodyData& setThreeTierModel(bool threeTierModel) { DARABONBA_PTR_SET_VALUE(threeTierModel_, threeTierModel) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetProjectResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The project description.
    std::shared_ptr<string> comment_ = nullptr;
    // The total storage usage. The storage space that is occupied by your project, which is the logical storage space after your project data is collected and compressed.
    std::shared_ptr<string> costStorage_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The default computing quota that is used to allocate computing resources. If you do not specify a computing quota for your project, the jobs that are initiated by your project consume the computing resources in the default quota. For more information about how to use computing resources, see [Use quota groups for computing resources](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/use-of-computing-resources).
    std::shared_ptr<string> defaultQuota_ = nullptr;
    // The information about the IP address whitelist.
    std::shared_ptr<Models::GetProjectResponseBodyDataIpWhiteList> ipWhiteList_ = nullptr;
    // The project name.
    std::shared_ptr<string> name_ = nullptr;
    // The account information of the project owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The billing method of the default computing quota.
    std::shared_ptr<string> productType_ = nullptr;
    // The basic properties of the project.
    std::shared_ptr<Models::GetProjectResponseBodyDataProperties> properties_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance ID and billing method of the default computing quota.
    std::shared_ptr<Models::GetProjectResponseBodyDataSaleTag> saleTag_ = nullptr;
    // The permission properties.
    std::shared_ptr<Models::GetProjectResponseBodyDataSecurityProperties> securityProperties_ = nullptr;
    // The project status. Valid values:
    // 
    // *   **AVAILABLE**
    // *   **READONLY**
    // *   **FROZEN**
    // *   **DELETING**
    std::shared_ptr<string> status_ = nullptr;
    // The list of `Super_Administrator` role members of the project.
    std::shared_ptr<vector<string>> superAdmins_ = nullptr;
    // Indicates whether data storage by schema is supported. MaxCompute supports the schema feature. This feature allows you to classify objects such as tables, resources, and user-defined functions (UDFs) in a project by schema. You can create multiple schemas in a project. For more information, see [Schema-related operations](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/schema-related-operations).
    std::shared_ptr<bool> threeTierModel_ = nullptr;
    // The project type. Valid values:
    // 
    // *   **managed**: internal project
    // *   **external**: external project
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
