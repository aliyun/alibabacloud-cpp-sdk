// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPAGERESULTPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPAGERESULTPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListProjectsResponseBodyPageResultProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyPageResultProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(RealtimeDataSourceId, realtimeDataSourceId_);
      DARABONBA_PTR_TO_JSON(RealtimeDataSourceName, realtimeDataSourceName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyPageResultProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(RealtimeDataSourceId, realtimeDataSourceId_);
      DARABONBA_PTR_FROM_JSON(RealtimeDataSourceName, realtimeDataSourceName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectsResponseBodyPageResultProjectList() = default ;
    ListProjectsResponseBodyPageResultProjectList(const ListProjectsResponseBodyPageResultProjectList &) = default ;
    ListProjectsResponseBodyPageResultProjectList(ListProjectsResponseBodyPageResultProjectList &&) = default ;
    ListProjectsResponseBodyPageResultProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyPageResultProjectList() = default ;
    ListProjectsResponseBodyPageResultProjectList& operator=(const ListProjectsResponseBodyPageResultProjectList &) = default ;
    ListProjectsResponseBodyPageResultProjectList& operator=(ListProjectsResponseBodyPageResultProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && return this->dataSourceId_ == nullptr && return this->dataSourceName_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->env_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->mode_ == nullptr && return this->name_ == nullptr
        && return this->owner_ == nullptr && return this->ownerName_ == nullptr && return this->realtimeDataSourceId_ == nullptr && return this->realtimeDataSourceName_ == nullptr && return this->type_ == nullptr; };
    // bizUnitId Field Functions 
    bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
    void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
    inline int64_t bizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
    inline ListProjectsResponseBodyPageResultProjectList& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline ListProjectsResponseBodyPageResultProjectList& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListProjectsResponseBodyPageResultProjectList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // realtimeDataSourceId Field Functions 
    bool hasRealtimeDataSourceId() const { return this->realtimeDataSourceId_ != nullptr;};
    void deleteRealtimeDataSourceId() { this->realtimeDataSourceId_ = nullptr;};
    inline int64_t realtimeDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(realtimeDataSourceId_, 0L) };
    inline ListProjectsResponseBodyPageResultProjectList& setRealtimeDataSourceId(int64_t realtimeDataSourceId) { DARABONBA_PTR_SET_VALUE(realtimeDataSourceId_, realtimeDataSourceId) };


    // realtimeDataSourceName Field Functions 
    bool hasRealtimeDataSourceName() const { return this->realtimeDataSourceName_ != nullptr;};
    void deleteRealtimeDataSourceName() { this->realtimeDataSourceName_ = nullptr;};
    inline string realtimeDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(realtimeDataSourceName_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setRealtimeDataSourceName(string realtimeDataSourceName) { DARABONBA_PTR_SET_VALUE(realtimeDataSourceName_, realtimeDataSourceName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> bizUnitId_ = nullptr;
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<int64_t> realtimeDataSourceId_ = nullptr;
    std::shared_ptr<string> realtimeDataSourceName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
