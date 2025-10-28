// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERRESPONSEBODYECRLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSCONNECTROUTERRESPONSEBODYECRLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExpressConnectRouterResponseBodyEcrListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeExpressConnectRouterResponseBodyEcrList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressConnectRouterResponseBodyEcrList& obj) { 
      DARABONBA_PTR_TO_JSON(AlibabaSideAsn, alibabaSideAsn_);
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressConnectRouterResponseBodyEcrList& obj) { 
      DARABONBA_PTR_FROM_JSON(AlibabaSideAsn, alibabaSideAsn_);
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeExpressConnectRouterResponseBodyEcrList() = default ;
    DescribeExpressConnectRouterResponseBodyEcrList(const DescribeExpressConnectRouterResponseBodyEcrList &) = default ;
    DescribeExpressConnectRouterResponseBodyEcrList(DescribeExpressConnectRouterResponseBodyEcrList &&) = default ;
    DescribeExpressConnectRouterResponseBodyEcrList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressConnectRouterResponseBodyEcrList() = default ;
    DescribeExpressConnectRouterResponseBodyEcrList& operator=(const DescribeExpressConnectRouterResponseBodyEcrList &) = default ;
    DescribeExpressConnectRouterResponseBodyEcrList& operator=(DescribeExpressConnectRouterResponseBodyEcrList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alibabaSideAsn_ == nullptr
        && return this->bizStatus_ == nullptr && return this->description_ == nullptr && return this->ecrId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->name_ == nullptr && return this->ownerId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr; };
    // alibabaSideAsn Field Functions 
    bool hasAlibabaSideAsn() const { return this->alibabaSideAsn_ != nullptr;};
    void deleteAlibabaSideAsn() { this->alibabaSideAsn_ = nullptr;};
    inline int64_t alibabaSideAsn() const { DARABONBA_PTR_GET_DEFAULT(alibabaSideAsn_, 0L) };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setAlibabaSideAsn(int64_t alibabaSideAsn) { DARABONBA_PTR_SET_VALUE(alibabaSideAsn_, alibabaSideAsn) };


    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags>) };
    inline vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags>) };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setTags(const vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeExpressConnectRouterResponseBodyEcrList& setTags(vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The autonomous system number (ASN) of the ECR.
    std::shared_ptr<int64_t> alibabaSideAsn_ = nullptr;
    // The business state of the ECR. Valid values:
    // 
    // *   **Normal:** The ECR is running as expected.
    // *   **FinancialLocked**: The ECR is locked due to overdue payments.
    std::shared_ptr<string> bizStatus_ = nullptr;
    // The description of the ECR.
    std::shared_ptr<string> description_ = nullptr;
    // The ECR ID.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The time when the ECR was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the ECR was modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The name of the ECR.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the ECR.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the resource group to which the ECR belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The deployment state of the ECR. Valid values:
    // 
    // *   **ACTIVE**: The ECR is created.
    // *   **UPDATING**: The ECR is being modified.
    // *   **ASSOCIATING**: The ECR is being associated with resources.
    // *   **DISSOCIATING**: The resource is being disassociated from resources.
    // *   **LOCKED_ATTACHING**: The ECR is locked because it is being associated with an external system.
    // *   **LOCKED_DETACHING**: The ECR is locked because it is being disassociated from an external system.
    // *   **RECLAIMING**: The ECR is waiting to release resources.
    // *   **DELETING**: The ECR is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeExpressConnectRouterResponseBodyEcrListTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
