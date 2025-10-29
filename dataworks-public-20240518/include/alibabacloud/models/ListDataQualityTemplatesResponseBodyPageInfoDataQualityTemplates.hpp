// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODYPAGEINFODATAQUALITYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYTEMPLATESRESPONSEBODYPAGEINFODATAQUALITYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates() = default ;
    ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates(const ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates &) = default ;
    ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates(ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates &&) = default ;
    ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates() = default ;
    ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& operator=(const ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates &) = default ;
    ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& operator=(ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->createUser_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->owner_ == nullptr
        && return this->projectId_ == nullptr && return this->spec_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListDataQualityTemplatesResponseBodyPageInfoDataQualityTemplates& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The time when the data quality rule template was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator of the data quality rule template.
    std::shared_ptr<string> createUser_ = nullptr;
    // The ID of the data quality rule template.
    std::shared_ptr<string> id_ = nullptr;
    // The time when the data quality rule template was updated.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The last updater of the data quality rule template.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The owner of the data quality rule template.
    std::shared_ptr<string> owner_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // Specific configurations of the data quality rule template. For more information, see [Data quality Spec configuration description](~2963394~).
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
