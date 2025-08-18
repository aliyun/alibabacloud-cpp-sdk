// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYTREERESPONSEBODYDATACHILDREN_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYTREERESPONSEBODYDATACHILDREN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDirectoryTreeResponseBodyDataChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectoryTreeResponseBodyDataChildren& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
      DARABONBA_PTR_TO_JSON(DirName, dirName_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StringId, stringId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectoryTreeResponseBodyDataChildren& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
      DARABONBA_PTR_FROM_JSON(DirName, dirName_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StringId, stringId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDirectoryTreeResponseBodyDataChildren() = default ;
    GetDirectoryTreeResponseBodyDataChildren(const GetDirectoryTreeResponseBodyDataChildren &) = default ;
    GetDirectoryTreeResponseBodyDataChildren(GetDirectoryTreeResponseBodyDataChildren &&) = default ;
    GetDirectoryTreeResponseBodyDataChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectoryTreeResponseBodyDataChildren() = default ;
    GetDirectoryTreeResponseBodyDataChildren& operator=(const GetDirectoryTreeResponseBodyDataChildren &) = default ;
    GetDirectoryTreeResponseBodyDataChildren& operator=(GetDirectoryTreeResponseBodyDataChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryType_ != nullptr
        && this->creator_ != nullptr && this->creatorName_ != nullptr && this->dataCellId_ != nullptr && this->dirName_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->id_ != nullptr && this->lastModifier_ != nullptr && this->lastModifierName_ != nullptr && this->name_ != nullptr
        && this->projectId_ != nullptr && this->stringId_ != nullptr && this->type_ != nullptr; };
    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // dataCellId Field Functions 
    bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
    void deleteDataCellId() { this->dataCellId_ = nullptr;};
    inline int64_t dataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, 0L) };
    inline GetDirectoryTreeResponseBodyDataChildren& setDataCellId(int64_t dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


    // dirName Field Functions 
    bool hasDirName() const { return this->dirName_ != nullptr;};
    void deleteDirName() { this->dirName_ = nullptr;};
    inline string dirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDirectoryTreeResponseBodyDataChildren& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDirectoryTreeResponseBodyDataChildren& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // stringId Field Functions 
    bool hasStringId() const { return this->stringId_ != nullptr;};
    void deleteStringId() { this->stringId_ = nullptr;};
    inline string stringId() const { DARABONBA_PTR_GET_DEFAULT(stringId_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setStringId(string stringId) { DARABONBA_PTR_SET_VALUE(stringId_, stringId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDirectoryTreeResponseBodyDataChildren& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> categoryType_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<int64_t> dataCellId_ = nullptr;
    std::shared_ptr<string> dirName_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> stringId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
