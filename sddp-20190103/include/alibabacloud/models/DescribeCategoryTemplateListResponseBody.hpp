// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATELISTRESPONSEBODY_HPP_
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
  class DescribeCategoryTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCategoryTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCategoryTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCategoryTemplateListResponseBody() = default ;
    DescribeCategoryTemplateListResponseBody(const DescribeCategoryTemplateListResponseBody &) = default ;
    DescribeCategoryTemplateListResponseBody(DescribeCategoryTemplateListResponseBody &&) = default ;
    DescribeCategoryTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCategoryTemplateListResponseBody() = default ;
    DescribeCategoryTemplateListResponseBody& operator=(const DescribeCategoryTemplateListResponseBody &) = default ;
    DescribeCategoryTemplateListResponseBody& operator=(DescribeCategoryTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentRiskLevel, currentRiskLevel_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxCategoryLevel, maxCategoryLevel_);
        DARABONBA_PTR_TO_JSON(MaxRiskLevel, maxRiskLevel_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SupportEdit, supportEdit_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentRiskLevel, currentRiskLevel_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxCategoryLevel, maxCategoryLevel_);
        DARABONBA_PTR_FROM_JSON(MaxRiskLevel, maxRiskLevel_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SupportEdit, supportEdit_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->currentRiskLevel_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->maxCategoryLevel_ == nullptr
        && this->maxRiskLevel_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->supportEdit_ == nullptr && this->type_ == nullptr; };
      // currentRiskLevel Field Functions 
      bool hasCurrentRiskLevel() const { return this->currentRiskLevel_ != nullptr;};
      void deleteCurrentRiskLevel() { this->currentRiskLevel_ = nullptr;};
      inline int32_t getCurrentRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(currentRiskLevel_, 0) };
      inline Items& setCurrentRiskLevel(int32_t currentRiskLevel) { DARABONBA_PTR_SET_VALUE(currentRiskLevel_, currentRiskLevel) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline Items& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxCategoryLevel Field Functions 
      bool hasMaxCategoryLevel() const { return this->maxCategoryLevel_ != nullptr;};
      void deleteMaxCategoryLevel() { this->maxCategoryLevel_ = nullptr;};
      inline int32_t getMaxCategoryLevel() const { DARABONBA_PTR_GET_DEFAULT(maxCategoryLevel_, 0) };
      inline Items& setMaxCategoryLevel(int32_t maxCategoryLevel) { DARABONBA_PTR_SET_VALUE(maxCategoryLevel_, maxCategoryLevel) };


      // maxRiskLevel Field Functions 
      bool hasMaxRiskLevel() const { return this->maxRiskLevel_ != nullptr;};
      void deleteMaxRiskLevel() { this->maxRiskLevel_ = nullptr;};
      inline int32_t getMaxRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(maxRiskLevel_, 0) };
      inline Items& setMaxRiskLevel(int32_t maxRiskLevel) { DARABONBA_PTR_SET_VALUE(maxRiskLevel_, maxRiskLevel) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // supportEdit Field Functions 
      bool hasSupportEdit() const { return this->supportEdit_ != nullptr;};
      void deleteSupportEdit() { this->supportEdit_ = nullptr;};
      inline int32_t getSupportEdit() const { DARABONBA_PTR_GET_DEFAULT(supportEdit_, 0) };
      inline Items& setSupportEdit(int32_t supportEdit) { DARABONBA_PTR_SET_VALUE(supportEdit_, supportEdit) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Items& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the current risk level.
      shared_ptr<int32_t> currentRiskLevel_ {};
      // The description of the industry-specific template.
      shared_ptr<string> description_ {};
      // The time when the industry-specific template was created.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the industry-specific template was last modified.
      shared_ptr<int64_t> gmtModified_ {};
      // The unique ID of the industry-specific template.
      shared_ptr<int64_t> id_ {};
      // The maximum categorization level.
      shared_ptr<int32_t> maxCategoryLevel_ {};
      // The ID of the maximum risk level.
      shared_ptr<int32_t> maxRiskLevel_ {};
      // The name of the industry-specific template.
      shared_ptr<string> name_ {};
      // The status of the industry-specific template. Valid values:
      // 
      // - **0**: Disabled.
      // 
      // - **1**: Enabled. This is the current primary template of the user.
      // 
      // - **2**: Active. Both enabled and active templates can be used in detection tasks.
      // 
      // - **3**: The status of the template for the general-purpose detection model.
      // 
      // > The IDs of enabled and active templates can be used as the industry-specific template ID for the [DescribeDataObjects](https://help.aliyun.com/document_detail/2399253.html) operation.
      shared_ptr<int32_t> status_ {};
      // Specifies whether the industry-specific template can be edited. Valid values:
      // 
      // - **0**: No.
      // 
      // - **1**: Yes.
      shared_ptr<int32_t> supportEdit_ {};
      // The type of the industry-specific template.
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCategoryTemplateListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeCategoryTemplateListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeCategoryTemplateListResponseBody::Items>) };
    inline vector<DescribeCategoryTemplateListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeCategoryTemplateListResponseBody::Items>) };
    inline DescribeCategoryTemplateListResponseBody& setItems(const vector<DescribeCategoryTemplateListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCategoryTemplateListResponseBody& setItems(vector<DescribeCategoryTemplateListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCategoryTemplateListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCategoryTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCategoryTemplateListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // A list of industry-specific templates.
    shared_ptr<vector<DescribeCategoryTemplateListResponseBody::Items>> items_ {};
    // The number of entries returned per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
