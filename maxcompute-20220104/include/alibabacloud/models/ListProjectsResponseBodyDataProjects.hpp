// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListProjectsResponseBodyDataProjectsIpWhiteList.hpp>
#include <alibabacloud/models/ListProjectsResponseBodyDataProjectsProperties.hpp>
#include <alibabacloud/models/ListProjectsResponseBodyDataProjectsSaleTag.hpp>
#include <alibabacloud/models/ListProjectsResponseBodyDataProjectsSecurityProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectsResponseBodyDataProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyDataProjects& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(costStorage, costStorage_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(defaultQuota, defaultQuota_);
      DARABONBA_PTR_TO_JSON(ipWhiteList, ipWhiteList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(saleTag, saleTag_);
      DARABONBA_PTR_TO_JSON(securityProperties, securityProperties_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(threeTierModel, threeTierModel_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyDataProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(costStorage, costStorage_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(defaultQuota, defaultQuota_);
      DARABONBA_PTR_FROM_JSON(ipWhiteList, ipWhiteList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(saleTag, saleTag_);
      DARABONBA_PTR_FROM_JSON(securityProperties, securityProperties_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(threeTierModel, threeTierModel_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListProjectsResponseBodyDataProjects() = default ;
    ListProjectsResponseBodyDataProjects(const ListProjectsResponseBodyDataProjects &) = default ;
    ListProjectsResponseBodyDataProjects(ListProjectsResponseBodyDataProjects &&) = default ;
    ListProjectsResponseBodyDataProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyDataProjects() = default ;
    ListProjectsResponseBodyDataProjects& operator=(const ListProjectsResponseBodyDataProjects &) = default ;
    ListProjectsResponseBodyDataProjects& operator=(ListProjectsResponseBodyDataProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->costStorage_ != nullptr && this->createdTime_ != nullptr && this->defaultQuota_ != nullptr && this->ipWhiteList_ != nullptr && this->name_ != nullptr
        && this->owner_ != nullptr && this->properties_ != nullptr && this->regionId_ != nullptr && this->saleTag_ != nullptr && this->securityProperties_ != nullptr
        && this->status_ != nullptr && this->threeTierModel_ != nullptr && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListProjectsResponseBodyDataProjects& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // costStorage Field Functions 
    bool hasCostStorage() const { return this->costStorage_ != nullptr;};
    void deleteCostStorage() { this->costStorage_ = nullptr;};
    inline string costStorage() const { DARABONBA_PTR_GET_DEFAULT(costStorage_, "") };
    inline ListProjectsResponseBodyDataProjects& setCostStorage(string costStorage) { DARABONBA_PTR_SET_VALUE(costStorage_, costStorage) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline ListProjectsResponseBodyDataProjects& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // defaultQuota Field Functions 
    bool hasDefaultQuota() const { return this->defaultQuota_ != nullptr;};
    void deleteDefaultQuota() { this->defaultQuota_ = nullptr;};
    inline string defaultQuota() const { DARABONBA_PTR_GET_DEFAULT(defaultQuota_, "") };
    inline ListProjectsResponseBodyDataProjects& setDefaultQuota(string defaultQuota) { DARABONBA_PTR_SET_VALUE(defaultQuota_, defaultQuota) };


    // ipWhiteList Field Functions 
    bool hasIpWhiteList() const { return this->ipWhiteList_ != nullptr;};
    void deleteIpWhiteList() { this->ipWhiteList_ = nullptr;};
    inline const Models::ListProjectsResponseBodyDataProjectsIpWhiteList & ipWhiteList() const { DARABONBA_PTR_GET_CONST(ipWhiteList_, Models::ListProjectsResponseBodyDataProjectsIpWhiteList) };
    inline Models::ListProjectsResponseBodyDataProjectsIpWhiteList ipWhiteList() { DARABONBA_PTR_GET(ipWhiteList_, Models::ListProjectsResponseBodyDataProjectsIpWhiteList) };
    inline ListProjectsResponseBodyDataProjects& setIpWhiteList(const Models::ListProjectsResponseBodyDataProjectsIpWhiteList & ipWhiteList) { DARABONBA_PTR_SET_VALUE(ipWhiteList_, ipWhiteList) };
    inline ListProjectsResponseBodyDataProjects& setIpWhiteList(Models::ListProjectsResponseBodyDataProjectsIpWhiteList && ipWhiteList) { DARABONBA_PTR_SET_RVALUE(ipWhiteList_, ipWhiteList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectsResponseBodyDataProjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListProjectsResponseBodyDataProjects& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const Models::ListProjectsResponseBodyDataProjectsProperties & properties() const { DARABONBA_PTR_GET_CONST(properties_, Models::ListProjectsResponseBodyDataProjectsProperties) };
    inline Models::ListProjectsResponseBodyDataProjectsProperties properties() { DARABONBA_PTR_GET(properties_, Models::ListProjectsResponseBodyDataProjectsProperties) };
    inline ListProjectsResponseBodyDataProjects& setProperties(const Models::ListProjectsResponseBodyDataProjectsProperties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline ListProjectsResponseBodyDataProjects& setProperties(Models::ListProjectsResponseBodyDataProjectsProperties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProjectsResponseBodyDataProjects& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // saleTag Field Functions 
    bool hasSaleTag() const { return this->saleTag_ != nullptr;};
    void deleteSaleTag() { this->saleTag_ = nullptr;};
    inline const Models::ListProjectsResponseBodyDataProjectsSaleTag & saleTag() const { DARABONBA_PTR_GET_CONST(saleTag_, Models::ListProjectsResponseBodyDataProjectsSaleTag) };
    inline Models::ListProjectsResponseBodyDataProjectsSaleTag saleTag() { DARABONBA_PTR_GET(saleTag_, Models::ListProjectsResponseBodyDataProjectsSaleTag) };
    inline ListProjectsResponseBodyDataProjects& setSaleTag(const Models::ListProjectsResponseBodyDataProjectsSaleTag & saleTag) { DARABONBA_PTR_SET_VALUE(saleTag_, saleTag) };
    inline ListProjectsResponseBodyDataProjects& setSaleTag(Models::ListProjectsResponseBodyDataProjectsSaleTag && saleTag) { DARABONBA_PTR_SET_RVALUE(saleTag_, saleTag) };


    // securityProperties Field Functions 
    bool hasSecurityProperties() const { return this->securityProperties_ != nullptr;};
    void deleteSecurityProperties() { this->securityProperties_ = nullptr;};
    inline const Models::ListProjectsResponseBodyDataProjectsSecurityProperties & securityProperties() const { DARABONBA_PTR_GET_CONST(securityProperties_, Models::ListProjectsResponseBodyDataProjectsSecurityProperties) };
    inline Models::ListProjectsResponseBodyDataProjectsSecurityProperties securityProperties() { DARABONBA_PTR_GET(securityProperties_, Models::ListProjectsResponseBodyDataProjectsSecurityProperties) };
    inline ListProjectsResponseBodyDataProjects& setSecurityProperties(const Models::ListProjectsResponseBodyDataProjectsSecurityProperties & securityProperties) { DARABONBA_PTR_SET_VALUE(securityProperties_, securityProperties) };
    inline ListProjectsResponseBodyDataProjects& setSecurityProperties(Models::ListProjectsResponseBodyDataProjectsSecurityProperties && securityProperties) { DARABONBA_PTR_SET_RVALUE(securityProperties_, securityProperties) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProjectsResponseBodyDataProjects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // threeTierModel Field Functions 
    bool hasThreeTierModel() const { return this->threeTierModel_ != nullptr;};
    void deleteThreeTierModel() { this->threeTierModel_ = nullptr;};
    inline bool threeTierModel() const { DARABONBA_PTR_GET_DEFAULT(threeTierModel_, false) };
    inline ListProjectsResponseBodyDataProjects& setThreeTierModel(bool threeTierModel) { DARABONBA_PTR_SET_VALUE(threeTierModel_, threeTierModel) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectsResponseBodyDataProjects& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The project description.
    std::shared_ptr<string> comment_ = nullptr;
    // The total storage usage. The storage space that is occupied by your project, which is the logical storage space after your project data is collected and compressed.
    std::shared_ptr<string> costStorage_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The default computing quota that is used to allocate computing resources. If you do not specify a computing quota for your project, the jobs that are initiated by your project consume the computing resources in the default quota. For more information about how to use computing resources, see [Use quota groups for computing resources](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/use-of-computing-resources)
    std::shared_ptr<string> defaultQuota_ = nullptr;
    // The information about the IP address whitelist.
    std::shared_ptr<Models::ListProjectsResponseBodyDataProjectsIpWhiteList> ipWhiteList_ = nullptr;
    // The name of the project.
    std::shared_ptr<string> name_ = nullptr;
    // The account information of the project owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The basic properties of the project.
    std::shared_ptr<Models::ListProjectsResponseBodyDataProjectsProperties> properties_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instance ID and billing method of the default computing quota.
    std::shared_ptr<Models::ListProjectsResponseBodyDataProjectsSaleTag> saleTag_ = nullptr;
    // The permission properties.
    std::shared_ptr<Models::ListProjectsResponseBodyDataProjectsSecurityProperties> securityProperties_ = nullptr;
    // The project status. Valid values:
    // 
    // *   **AVAILABLE**
    // *   **READONLY**
    // *   **FROZEN**
    // *   **DELETING**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether data storage by schema is supported. MaxCompute supports the schema feature. This feature allows you to classify objects such as tables, resources, and user-defined functions (UDFs) in a project by schema. You can create multiple schemas in a project. For more information, see [Schema-related operations](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/schema-related-operations).
    // 
    // Valid values:
    // 
    // *   true: supported
    // *   false: not supported
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
