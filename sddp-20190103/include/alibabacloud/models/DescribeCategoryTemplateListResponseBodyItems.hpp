// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeCategoryTemplateListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCategoryTemplateListResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCategoryTemplateListResponseBodyItems& obj) { 
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
    DescribeCategoryTemplateListResponseBodyItems() = default ;
    DescribeCategoryTemplateListResponseBodyItems(const DescribeCategoryTemplateListResponseBodyItems &) = default ;
    DescribeCategoryTemplateListResponseBodyItems(DescribeCategoryTemplateListResponseBodyItems &&) = default ;
    DescribeCategoryTemplateListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCategoryTemplateListResponseBodyItems() = default ;
    DescribeCategoryTemplateListResponseBodyItems& operator=(const DescribeCategoryTemplateListResponseBodyItems &) = default ;
    DescribeCategoryTemplateListResponseBodyItems& operator=(DescribeCategoryTemplateListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentRiskLevel_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->maxCategoryLevel_ == nullptr
        && return this->maxRiskLevel_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr && return this->supportEdit_ == nullptr && return this->type_ == nullptr; };
    // currentRiskLevel Field Functions 
    bool hasCurrentRiskLevel() const { return this->currentRiskLevel_ != nullptr;};
    void deleteCurrentRiskLevel() { this->currentRiskLevel_ = nullptr;};
    inline int32_t currentRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(currentRiskLevel_, 0) };
    inline DescribeCategoryTemplateListResponseBodyItems& setCurrentRiskLevel(int32_t currentRiskLevel) { DARABONBA_PTR_SET_VALUE(currentRiskLevel_, currentRiskLevel) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCategoryTemplateListResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeCategoryTemplateListResponseBodyItems& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeCategoryTemplateListResponseBodyItems& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCategoryTemplateListResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxCategoryLevel Field Functions 
    bool hasMaxCategoryLevel() const { return this->maxCategoryLevel_ != nullptr;};
    void deleteMaxCategoryLevel() { this->maxCategoryLevel_ = nullptr;};
    inline int32_t maxCategoryLevel() const { DARABONBA_PTR_GET_DEFAULT(maxCategoryLevel_, 0) };
    inline DescribeCategoryTemplateListResponseBodyItems& setMaxCategoryLevel(int32_t maxCategoryLevel) { DARABONBA_PTR_SET_VALUE(maxCategoryLevel_, maxCategoryLevel) };


    // maxRiskLevel Field Functions 
    bool hasMaxRiskLevel() const { return this->maxRiskLevel_ != nullptr;};
    void deleteMaxRiskLevel() { this->maxRiskLevel_ = nullptr;};
    inline int32_t maxRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(maxRiskLevel_, 0) };
    inline DescribeCategoryTemplateListResponseBodyItems& setMaxRiskLevel(int32_t maxRiskLevel) { DARABONBA_PTR_SET_VALUE(maxRiskLevel_, maxRiskLevel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCategoryTemplateListResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCategoryTemplateListResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportEdit Field Functions 
    bool hasSupportEdit() const { return this->supportEdit_ != nullptr;};
    void deleteSupportEdit() { this->supportEdit_ = nullptr;};
    inline int32_t supportEdit() const { DARABONBA_PTR_GET_DEFAULT(supportEdit_, 0) };
    inline DescribeCategoryTemplateListResponseBodyItems& setSupportEdit(int32_t supportEdit) { DARABONBA_PTR_SET_VALUE(supportEdit_, supportEdit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeCategoryTemplateListResponseBodyItems& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Current risk level ID.
    std::shared_ptr<int32_t> currentRiskLevel_ = nullptr;
    // Description information of the industry template.
    std::shared_ptr<string> description_ = nullptr;
    // Industry template creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Industry template modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Unique identifier ID of the industry template.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Maximum category level.
    std::shared_ptr<int32_t> maxCategoryLevel_ = nullptr;
    // Maximum risk level ID.
    std::shared_ptr<int32_t> maxRiskLevel_ = nullptr;
    // Name of the industry template.
    std::shared_ptr<string> name_ = nullptr;
    // Status of the industry template. Values:
    // - **0**: Closed status.
    // - **1**: Enabled status, user\\"s current main template.
    // - **2**: Active status, both enabled and active templates can be applied to recognition tasks.
    // - **3**: General recognition model template status.
    // 
    // > Templates in enabled and active status can be used as the industry template ID parameter for [DescribeDataObjects](https://help.aliyun.com/document_detail/2399253.html).
    std::shared_ptr<int32_t> status_ = nullptr;
    // Whether the industry template supports editing. Values:
    // - **0**: Not supported.
    // - **1**: Supported.
    std::shared_ptr<int32_t> supportEdit_ = nullptr;
    // Type of the industry template.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
