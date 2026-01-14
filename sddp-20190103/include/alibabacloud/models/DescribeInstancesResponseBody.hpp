// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody(DescribeInstancesResponseBody &&) = default ;
    DescribeInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBody() = default ;
    DescribeInstancesResponseBody& operator=(const DescribeInstancesResponseBody &) = default ;
    DescribeInstancesResponseBody& operator=(DescribeInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DepartName, departName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(Labelsec, labelsec_);
        DARABONBA_PTR_TO_JSON(LastFinishTime, lastFinishTime_);
        DARABONBA_PTR_TO_JSON(MemberAliUid, memberAliUid_);
        DARABONBA_PTR_TO_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(Protection, protection_);
        DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_TO_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Sensitive, sensitive_);
        DARABONBA_PTR_TO_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DepartName, departName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(Labelsec, labelsec_);
        DARABONBA_PTR_FROM_JSON(LastFinishTime, lastFinishTime_);
        DARABONBA_PTR_FROM_JSON(MemberAliUid, memberAliUid_);
        DARABONBA_PTR_FROM_JSON(ModelTags, modelTags_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OdpsRiskLevelName, odpsRiskLevelName_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(Protection, protection_);
        DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
        DARABONBA_PTR_FROM_JSON(RiskLevelName, riskLevelName_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Sensitive, sensitive_);
        DARABONBA_PTR_FROM_JSON(SensitiveCount, sensitiveCount_);
        DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModelTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelTags& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, ModelTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        ModelTags() = default ;
        ModelTags(const ModelTags &) = default ;
        ModelTags(ModelTags &&) = default ;
        ModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelTags() = default ;
        ModelTags& operator=(const ModelTags &) = default ;
        ModelTags& operator=(ModelTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the tag. Valid values:
        // 
        // *   **101**: personal sensitive information
        // *   **102**: personal information
        // *   **107**: general information
        shared_ptr<int64_t> id_ {};
        // The name of the tag. Valid values:
        // 
        // *   Personal sensitive information
        // *   Personal information
        // *   General information
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->departName_ == nullptr && this->id_ == nullptr && this->instanceDescription_ == nullptr && this->labelsec_ == nullptr && this->lastFinishTime_ == nullptr
        && this->memberAliUid_ == nullptr && this->modelTags_ == nullptr && this->name_ == nullptr && this->odpsRiskLevelName_ == nullptr && this->owner_ == nullptr
        && this->productCode_ == nullptr && this->productId_ == nullptr && this->protection_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr
        && this->ruleName_ == nullptr && this->sensitive_ == nullptr && this->sensitiveCount_ == nullptr && this->tenantName_ == nullptr && this->totalCount_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Items& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // departName Field Functions 
      bool hasDepartName() const { return this->departName_ != nullptr;};
      void deleteDepartName() { this->departName_ = nullptr;};
      inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
      inline Items& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // labelsec Field Functions 
      bool hasLabelsec() const { return this->labelsec_ != nullptr;};
      void deleteLabelsec() { this->labelsec_ = nullptr;};
      inline bool getLabelsec() const { DARABONBA_PTR_GET_DEFAULT(labelsec_, false) };
      inline Items& setLabelsec(bool labelsec) { DARABONBA_PTR_SET_VALUE(labelsec_, labelsec) };


      // lastFinishTime Field Functions 
      bool hasLastFinishTime() const { return this->lastFinishTime_ != nullptr;};
      void deleteLastFinishTime() { this->lastFinishTime_ = nullptr;};
      inline int64_t getLastFinishTime() const { DARABONBA_PTR_GET_DEFAULT(lastFinishTime_, 0L) };
      inline Items& setLastFinishTime(int64_t lastFinishTime) { DARABONBA_PTR_SET_VALUE(lastFinishTime_, lastFinishTime) };


      // memberAliUid Field Functions 
      bool hasMemberAliUid() const { return this->memberAliUid_ != nullptr;};
      void deleteMemberAliUid() { this->memberAliUid_ = nullptr;};
      inline string getMemberAliUid() const { DARABONBA_PTR_GET_DEFAULT(memberAliUid_, "") };
      inline Items& setMemberAliUid(string memberAliUid) { DARABONBA_PTR_SET_VALUE(memberAliUid_, memberAliUid) };


      // modelTags Field Functions 
      bool hasModelTags() const { return this->modelTags_ != nullptr;};
      void deleteModelTags() { this->modelTags_ = nullptr;};
      inline const vector<Items::ModelTags> & getModelTags() const { DARABONBA_PTR_GET_CONST(modelTags_, vector<Items::ModelTags>) };
      inline vector<Items::ModelTags> getModelTags() { DARABONBA_PTR_GET(modelTags_, vector<Items::ModelTags>) };
      inline Items& setModelTags(const vector<Items::ModelTags> & modelTags) { DARABONBA_PTR_SET_VALUE(modelTags_, modelTags) };
      inline Items& setModelTags(vector<Items::ModelTags> && modelTags) { DARABONBA_PTR_SET_RVALUE(modelTags_, modelTags) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // odpsRiskLevelName Field Functions 
      bool hasOdpsRiskLevelName() const { return this->odpsRiskLevelName_ != nullptr;};
      void deleteOdpsRiskLevelName() { this->odpsRiskLevelName_ = nullptr;};
      inline string getOdpsRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(odpsRiskLevelName_, "") };
      inline Items& setOdpsRiskLevelName(string odpsRiskLevelName) { DARABONBA_PTR_SET_VALUE(odpsRiskLevelName_, odpsRiskLevelName) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Items& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Items& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // protection Field Functions 
      bool hasProtection() const { return this->protection_ != nullptr;};
      void deleteProtection() { this->protection_ = nullptr;};
      inline bool getProtection() const { DARABONBA_PTR_GET_DEFAULT(protection_, false) };
      inline Items& setProtection(bool protection) { DARABONBA_PTR_SET_VALUE(protection_, protection) };


      // riskLevelId Field Functions 
      bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
      void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
      inline int64_t getRiskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
      inline Items& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


      // riskLevelName Field Functions 
      bool hasRiskLevelName() const { return this->riskLevelName_ != nullptr;};
      void deleteRiskLevelName() { this->riskLevelName_ = nullptr;};
      inline string getRiskLevelName() const { DARABONBA_PTR_GET_DEFAULT(riskLevelName_, "") };
      inline Items& setRiskLevelName(string riskLevelName) { DARABONBA_PTR_SET_VALUE(riskLevelName_, riskLevelName) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Items& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sensitive Field Functions 
      bool hasSensitive() const { return this->sensitive_ != nullptr;};
      void deleteSensitive() { this->sensitive_ = nullptr;};
      inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
      inline Items& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


      // sensitiveCount Field Functions 
      bool hasSensitiveCount() const { return this->sensitiveCount_ != nullptr;};
      void deleteSensitiveCount() { this->sensitiveCount_ = nullptr;};
      inline int32_t getSensitiveCount() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCount_, 0) };
      inline Items& setSensitiveCount(int32_t sensitiveCount) { DARABONBA_PTR_SET_VALUE(sensitiveCount_, sensitiveCount) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Items& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Items& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The time when the data asset was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> creationTime_ {};
      // The name of the department to which the data asset belongs.
      shared_ptr<string> departName_ {};
      // The unique ID of the data asset in DSC.
      shared_ptr<int64_t> id_ {};
      // The description of the data asset.
      shared_ptr<string> instanceDescription_ {};
      // The security status of the data asset. Valid values:
      // 
      // *   **true**: The data asset is secure.
      // *   **false**: The data asset is insecure.
      shared_ptr<bool> labelsec_ {};
      // The time when the data asset was last scanned. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> lastFinishTime_ {};
      // If the management account has opened multiple accounts and the asset belongs to other member accounts, this field displays the UID of the member accounts.
      shared_ptr<string> memberAliUid_ {};
      // A list of tags.
      shared_ptr<vector<Items::ModelTags>> modelTags_ {};
      // The name of the data asset.
      shared_ptr<string> name_ {};
      // This parameter is deprecated.
      shared_ptr<string> odpsRiskLevelName_ {};
      // The Alibaba Cloud account to which the data asset belongs.
      shared_ptr<string> owner_ {};
      // The name of the service to which the data asset belongs, such as MaxCompute, OSS, and ApsaraDB RDS. For more information about the types of data assets that DSC can scan to detect sensitive data, see [Supported data assets](https://help.aliyun.com/document_detail/212906.html).
      shared_ptr<string> productCode_ {};
      // The ID of the service to which the data asset belongs.
      shared_ptr<string> productId_ {};
      // The protection status of the data asset. Valid values:
      // 
      // *   **true**: The data asset is being protected.
      // *   **false**: The data asset is not protected.
      shared_ptr<bool> protection_ {};
      // The ID of the sensitivity level for the data asset. A higher sensitivity level ID indicates that the identified data is more sensitive.
      // 
      // *   **1**: No sensitive data is detected.
      // *   **2**: sensitive data at level 1.
      // *   **3**: sensitive data at level 2.
      // *   **4**: sensitive data at level 3.
      // *   **5**: sensitive data at level 4.
      // *   **6**: sensitive data at level 5.
      // *   **7**: sensitive data at level 6.
      // *   **8**: sensitive data at level 7.
      // *   **9**: sensitive data at level 8.
      // *   **10**: sensitive data at level 9.
      // *   **11**: sensitive data at level 10.
      shared_ptr<int64_t> riskLevelId_ {};
      // The name of the sensitivity level for the data asset.
      shared_ptr<string> riskLevelName_ {};
      // The name of the sensitive data detection rule that the data asset hits.
      shared_ptr<string> ruleName_ {};
      // Indicates whether the data asset contains sensitive data. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> sensitive_ {};
      // The number of sensitive data objects in the data asset. For example, if the data asset is an ApsaraDB RDS instance, the value indicates the number of sensitive tables in all databases of the instance.
      shared_ptr<int32_t> sensitiveCount_ {};
      // The name of the tenant.
      shared_ptr<string> tenantName_ {};
      // The total number of data objects in the data asset. For example, if the data asset is an ApsaraDB RDS instance, the value indicates the total number of tables in all databases of the instance.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeInstancesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeInstancesResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeInstancesResponseBody::Items>) };
    inline vector<DescribeInstancesResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeInstancesResponseBody::Items>) };
    inline DescribeInstancesResponseBody& setItems(const vector<DescribeInstancesResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeInstancesResponseBody& setItems(vector<DescribeInstancesResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The data assets.
    shared_ptr<vector<DescribeInstancesResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of data assets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
