// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAASSETSRESPONSEBODY_HPP_
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
  class DescribeDataAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataAssetsResponseBody() = default ;
    DescribeDataAssetsResponseBody(const DescribeDataAssetsResponseBody &) = default ;
    DescribeDataAssetsResponseBody(DescribeDataAssetsResponseBody &&) = default ;
    DescribeDataAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAssetsResponseBody() = default ;
    DescribeDataAssetsResponseBody& operator=(const DescribeDataAssetsResponseBody &) = default ;
    DescribeDataAssetsResponseBody& operator=(DescribeDataAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Acl, acl_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Labelsec, labelsec_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ObjectKey, objectKey_);
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
        DARABONBA_PTR_TO_JSON(SensitiveRatio, sensitiveRatio_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Acl, acl_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Labelsec, labelsec_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ObjectKey, objectKey_);
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
        DARABONBA_PTR_FROM_JSON(SensitiveRatio, sensitiveRatio_);
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
      virtual bool empty() const override { return this->acl_ == nullptr
        && this->creationTime_ == nullptr && this->dataType_ == nullptr && this->id_ == nullptr && this->labelsec_ == nullptr && this->name_ == nullptr
        && this->objectKey_ == nullptr && this->odpsRiskLevelName_ == nullptr && this->owner_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr
        && this->protection_ == nullptr && this->riskLevelId_ == nullptr && this->riskLevelName_ == nullptr && this->ruleName_ == nullptr && this->sensitive_ == nullptr
        && this->sensitiveCount_ == nullptr && this->sensitiveRatio_ == nullptr && this->totalCount_ == nullptr; };
      // acl Field Functions 
      bool hasAcl() const { return this->acl_ != nullptr;};
      void deleteAcl() { this->acl_ = nullptr;};
      inline string getAcl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
      inline Items& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline int64_t getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
      inline Items& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Items& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // labelsec Field Functions 
      bool hasLabelsec() const { return this->labelsec_ != nullptr;};
      void deleteLabelsec() { this->labelsec_ = nullptr;};
      inline bool getLabelsec() const { DARABONBA_PTR_GET_DEFAULT(labelsec_, false) };
      inline Items& setLabelsec(bool labelsec) { DARABONBA_PTR_SET_VALUE(labelsec_, labelsec) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectKey Field Functions 
      bool hasObjectKey() const { return this->objectKey_ != nullptr;};
      void deleteObjectKey() { this->objectKey_ = nullptr;};
      inline string getObjectKey() const { DARABONBA_PTR_GET_DEFAULT(objectKey_, "") };
      inline Items& setObjectKey(string objectKey) { DARABONBA_PTR_SET_VALUE(objectKey_, objectKey) };


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


      // sensitiveRatio Field Functions 
      bool hasSensitiveRatio() const { return this->sensitiveRatio_ != nullptr;};
      void deleteSensitiveRatio() { this->sensitiveRatio_ = nullptr;};
      inline string getSensitiveRatio() const { DARABONBA_PTR_GET_DEFAULT(sensitiveRatio_, "") };
      inline Items& setSensitiveRatio(string sensitiveRatio) { DARABONBA_PTR_SET_VALUE(sensitiveRatio_, sensitiveRatio) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Items& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The access control list (ACL) that controls the access permissions on the OSS bucket.
      // 
      // > This parameter is returned only when you set the parameter **RangeId** to **21**.
      shared_ptr<string> acl_ {};
      // The time when the data asset was created. Unit: milliseconds.
      shared_ptr<int64_t> creationTime_ {};
      // The data type of the data asset.
      shared_ptr<string> dataType_ {};
      // The ID of the data asset.
      shared_ptr<string> id_ {};
      // The sensitivity tag of the data. The value is fixed as **0**. **0**, **1**, **2**, or **3** is returned for this parameter only when you set the parameter **RangeId** to **1**.
      // 
      // *   **0**: unclassified
      // *   **1**: confidential
      // *   **2**: sensitive
      // *   **3**: highly sensitive
      shared_ptr<bool> labelsec_ {};
      // The name of the data asset.
      shared_ptr<string> name_ {};
      // The key value of the OSS object.
      // 
      // > This parameter is returned only when you set the parameter **RangeId** to **22**.
      shared_ptr<string> objectKey_ {};
      // The sensitivity level of the MaxCompute data asset. Valid values:
      // 
      // *   **S1**: low sensitivity level
      // *   **S2**: medium sensitivity level
      // *   **S3**: high sensitivity level
      // *   **S4**: highest sensitivity level
      // 
      // > This parameter is returned only when you set the parameter **RangeId** to **1**.
      shared_ptr<string> odpsRiskLevelName_ {};
      // The account that owns the data asset.
      shared_ptr<string> owner_ {};
      // The name of the service to which the data asset belongs.
      shared_ptr<string> productCode_ {};
      // The ID of the service to which the data asset belongs. Valid values:
      // 
      // *   **1**: MaxCompute
      // *   **2**: OSS
      // *   **3**: AnalyticDB for MySQL
      // *   **4**: Tablestore
      // *   **5**: ApsaraDB RDS
      shared_ptr<string> productId_ {};
      // Indicates whether the data protection mechanism is enabled for the data asset. The value is fixed as **false**. **true** or **false** is returned for this parameter only when you set the parameter **RangeId** to **1**.
      // 
      // *   **false**: The data protection mechanism is disabled.
      // *   **true**: The data protection mechanism is enabled. Only data inbound is supported. Data outbound is not supported.
      shared_ptr<bool> protection_ {};
      // The sensitivity level of the data asset. A higher sensitivity level indicates that the identified data is more sensitive. Valid values:
      // 
      // *   **1**: No sensitive data is identified.
      // *   **2**: sensitive data at level 1.
      // *   **3**: sensitive data at level 2.
      // *   **3**: sensitive data at level 3.
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
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> sensitive_ {};
      // The total number of sensitive data assets. For example, the value can be the total number of sensitive MaxCompute projects, packages, or tables, the total number of sensitive ApsaraDB RDS databases or tables, or the total number of sensitive OSS buckets or objects.
      shared_ptr<int32_t> sensitiveCount_ {};
      // The percentage of sensitive data in all data assets.
      shared_ptr<string> sensitiveRatio_ {};
      // The total number of data assets. For example, the value can be the total number of MaxCompute projects, packages, or tables, the total number of ApsaraDB RDS databases or tables, or the total number of OSS buckets or objects.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataAssetsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataAssetsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataAssetsResponseBody::Items>) };
    inline vector<DescribeDataAssetsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataAssetsResponseBody::Items>) };
    inline DescribeDataAssetsResponseBody& setItems(const vector<DescribeDataAssetsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataAssetsResponseBody& setItems(vector<DescribeDataAssetsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataAssetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataAssetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // An array that consists of data assets.
    shared_ptr<vector<DescribeDataAssetsResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of queried data assets that contain sensitive data.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
