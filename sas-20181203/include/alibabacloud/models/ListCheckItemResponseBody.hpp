// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItems, checkItems_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCheckItemResponseBody() = default ;
    ListCheckItemResponseBody(const ListCheckItemResponseBody &) = default ;
    ListCheckItemResponseBody(ListCheckItemResponseBody &&) = default ;
    ListCheckItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckItemResponseBody() = default ;
    ListCheckItemResponseBody& operator=(const ListCheckItemResponseBody &) = default ;
    ListCheckItemResponseBody& operator=(ListCheckItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class CheckItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckItems& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EstimatedCount, estimatedCount_);
        DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SectionIds, sectionIds_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, CheckItems& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EstimatedCount, estimatedCount_);
        DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SectionIds, sectionIds_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      CheckItems() = default ;
      CheckItems(const CheckItems &) = default ;
      CheckItems(CheckItems &&) = default ;
      CheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckItems() = default ;
      CheckItems& operator=(const CheckItems &) = default ;
      CheckItems& operator=(CheckItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Description : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Description& obj) { 
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Description& obj) { 
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Description() = default ;
        Description(const Description &) = default ;
        Description(Description &&) = default ;
        Description(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Description() = default ;
        Description& operator=(const Description &) = default ;
        Description& operator=(Description &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Description& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Description& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The type of the description of the check item. Valid value:
        // 
        // *   **text**
        shared_ptr<string> type_ {};
        // The content of the description for the check item when the Type parameter is text.
        shared_ptr<string> value_ {};
      };

      class CustomConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(TypeDefine, typeDefine_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CustomConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(TypeDefine, typeDefine_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        CustomConfigs() = default ;
        CustomConfigs(const CustomConfigs &) = default ;
        CustomConfigs(CustomConfigs &&) = default ;
        CustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomConfigs() = default ;
        CustomConfigs& operator=(const CustomConfigs &) = default ;
        CustomConfigs& operator=(CustomConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->name_ == nullptr && this->showName_ == nullptr && this->typeDefine_ == nullptr && this->value_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline CustomConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline CustomConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // typeDefine Field Functions 
        bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
        void deleteTypeDefine() { this->typeDefine_ = nullptr;};
        inline string getTypeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
        inline CustomConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline CustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The default value of the check item. The value is a string.
        shared_ptr<string> defaultValue_ {};
        // The name of the check item.
        shared_ptr<string> name_ {};
        // The display name of the check item.
        shared_ptr<string> showName_ {};
        // The type of the check item. The value is a JSON string.
        shared_ptr<string> typeDefine_ {};
        // The specified value of the check item. The value is a string.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkShowName_ == nullptr && this->checkType_ == nullptr && this->customConfigs_ == nullptr && this->description_ == nullptr && this->estimatedCount_ == nullptr
        && this->instanceSubType_ == nullptr && this->instanceType_ == nullptr && this->riskLevel_ == nullptr && this->sectionIds_ == nullptr && this->vendor_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline CheckItems& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkShowName Field Functions 
      bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
      void deleteCheckShowName() { this->checkShowName_ = nullptr;};
      inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
      inline CheckItems& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline CheckItems& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // customConfigs Field Functions 
      bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
      void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
      inline const vector<CheckItems::CustomConfigs> & getCustomConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<CheckItems::CustomConfigs>) };
      inline vector<CheckItems::CustomConfigs> getCustomConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<CheckItems::CustomConfigs>) };
      inline CheckItems& setCustomConfigs(const vector<CheckItems::CustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
      inline CheckItems& setCustomConfigs(vector<CheckItems::CustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline const CheckItems::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, CheckItems::Description) };
      inline CheckItems::Description getDescription() { DARABONBA_PTR_GET(description_, CheckItems::Description) };
      inline CheckItems& setDescription(const CheckItems::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
      inline CheckItems& setDescription(CheckItems::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


      // estimatedCount Field Functions 
      bool hasEstimatedCount() const { return this->estimatedCount_ != nullptr;};
      void deleteEstimatedCount() { this->estimatedCount_ = nullptr;};
      inline int32_t getEstimatedCount() const { DARABONBA_PTR_GET_DEFAULT(estimatedCount_, 0) };
      inline CheckItems& setEstimatedCount(int32_t estimatedCount) { DARABONBA_PTR_SET_VALUE(estimatedCount_, estimatedCount) };


      // instanceSubType Field Functions 
      bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
      void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
      inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
      inline CheckItems& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline CheckItems& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline CheckItems& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sectionIds Field Functions 
      bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
      void deleteSectionIds() { this->sectionIds_ = nullptr;};
      inline const vector<int64_t> & getSectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
      inline vector<int64_t> getSectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
      inline CheckItems& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
      inline CheckItems& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline CheckItems& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The name of the check item.
      shared_ptr<string> checkShowName_ {};
      // The source type of the Situation Awareness check item: 
      // - **CUSTOM**: User-defined 
      // - **SYSTEM**: Predefined by the Situation Awareness platform
      shared_ptr<string> checkType_ {};
      // The check items.
      shared_ptr<vector<CheckItems::CustomConfigs>> customConfigs_ {};
      // The description of the check item.
      shared_ptr<CheckItems::Description> description_ {};
      // The estimated quota that will be consumed by this check item.
      shared_ptr<int32_t> estimatedCount_ {};
      // The asset subtype of the cloud service. Valid values:
      // 
      // *   If **InstanceType** is set to **ECS**, this parameter supports the following valid values:
      // 
      //     *   **INSTANCE**
      //     *   **DISK**
      //     *   **SECURITY_GROUP**
      // 
      // *   If **InstanceType** is set to **ACR**, this parameter supports the following valid values:
      // 
      //     *   **REPOSITORY_ENTERPRISE**
      //     *   **REPOSITORY_PERSON**
      // 
      // *   If **InstanceType** is set to **RAM**, this parameter supports the following valid values:
      // 
      //     *   **ALIAS**
      //     *   **USER**
      //     *   **POLICY**
      //     *   **GROUP**
      // 
      // *   If **InstanceType** is set to **WAF**, this parameter supports the following valid value:
      // 
      //     *   **DOMAIN**
      // 
      // *   If **InstanceType** is set to other values, this parameter supports the following valid values:
      // 
      //     *   **INSTANCE**
      shared_ptr<string> instanceSubType_ {};
      // The asset type of the cloud service. Valid values:
      // 
      // *   **ECS**: Elastic Compute Service (ECS).
      // *   **SLB**: Server Load Balancer (SLB).
      // *   **RDS**: ApsaraDB RDS.
      // *   **MONGODB**: ApsaraDB for MongoDB (MongoDB).
      // *   **KVSTORE**: ApsaraDB for Redis (Redis).
      // *   **ACR**: Container Registry.
      // *   **CSK**: Container Service for Kubernetes (ACK).
      // *   **VPC**: Virtual Private Cloud (VPC).
      // *   **ACTIONTRAIL**: ActionTrail.
      // *   **CDN**: Alibaba Cloud CDN (CDN).
      // *   **CAS**: Certificate Management Service (formerly SSL Certificates Service).
      // *   **RDC**: Apsara Devops.
      // *   **RAM**: Resource Access Management (RAM).
      // *   **DDOS**: Anti-DDoS.
      // *   **WAF**: Web Application Firewall (WAF).
      // *   **OSS**: Object Storage Service (OSS).
      // *   **POLARDB**: PolarDB.
      // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL.
      // *   **MSE**: Microservices Engine (MSE).
      // *   **NAS**: File Storage NAS (NAS).
      // *   **SDDP**: Sensitive Data Discovery and Protection (SDDP).
      // *   **EIP**: Elastic IP Address (EIP).
      shared_ptr<string> instanceType_ {};
      // The risk level of the check item. Valid values:
      // 
      // *   **HIGH**
      // *   **MEDIUM**
      // *   **LOW**
      shared_ptr<string> riskLevel_ {};
      // The IDs of the sections associated with the check items.
      shared_ptr<vector<int64_t>> sectionIds_ {};
      // The type of the cloud asset. Valid values:
      // 
      // *   **0**: an asset provided by Alibaba Cloud.
      // *   **1**: an asset outside Alibaba Cloud.
      // *   **2**: an asset in a data center.
      // *   **3**, **4**, **5**, and **7**: other cloud asset.
      // *   **8**: a simple application server.
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->checkItems_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // checkItems Field Functions 
    bool hasCheckItems() const { return this->checkItems_ != nullptr;};
    void deleteCheckItems() { this->checkItems_ = nullptr;};
    inline const vector<ListCheckItemResponseBody::CheckItems> & getCheckItems() const { DARABONBA_PTR_GET_CONST(checkItems_, vector<ListCheckItemResponseBody::CheckItems>) };
    inline vector<ListCheckItemResponseBody::CheckItems> getCheckItems() { DARABONBA_PTR_GET(checkItems_, vector<ListCheckItemResponseBody::CheckItems>) };
    inline ListCheckItemResponseBody& setCheckItems(const vector<ListCheckItemResponseBody::CheckItems> & checkItems) { DARABONBA_PTR_SET_VALUE(checkItems_, checkItems) };
    inline ListCheckItemResponseBody& setCheckItems(vector<ListCheckItemResponseBody::CheckItems> && checkItems) { DARABONBA_PTR_SET_RVALUE(checkItems_, checkItems) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListCheckItemResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListCheckItemResponseBody::PageInfo) };
    inline ListCheckItemResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListCheckItemResponseBody::PageInfo) };
    inline ListCheckItemResponseBody& setPageInfo(const ListCheckItemResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListCheckItemResponseBody& setPageInfo(ListCheckItemResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The check items.
    shared_ptr<vector<ListCheckItemResponseBody::CheckItems>> checkItems_ {};
    // The pagination information.
    shared_ptr<ListCheckItemResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
