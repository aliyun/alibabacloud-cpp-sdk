// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODYPAGERESULTDATASOURCELISTPRODDATASOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCEWITHCONFIGRESPONSEBODYPAGERESULTDATASOURCELISTPRODDATASOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigItemList, configItemList_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo() = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo(const ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo &) = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo(ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo &&) = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo() = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& operator=(const ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo &) = default ;
    ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& operator=(ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configItemList_ != nullptr
        && this->createTime_ != nullptr && this->creator_ != nullptr && this->creatorName_ != nullptr && this->description_ != nullptr && this->env_ != nullptr
        && this->id_ != nullptr && this->modifyTime_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->ownerName_ != nullptr
        && this->scope_ != nullptr && this->type_ != nullptr; };
    // configItemList Field Functions 
    bool hasConfigItemList() const { return this->configItemList_ != nullptr;};
    void deleteConfigItemList() { this->configItemList_ = nullptr;};
    inline const vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList> & configItemList() const { DARABONBA_PTR_GET_CONST(configItemList_, vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList>) };
    inline vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList> configItemList() { DARABONBA_PTR_GET(configItemList_, vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList>) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setConfigItemList(const vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList> & configItemList) { DARABONBA_PTR_SET_VALUE(configItemList_, configItemList) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setConfigItemList(vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList> && configItemList) { DARABONBA_PTR_SET_RVALUE(configItemList_, configItemList) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<vector<Models::ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList>> configItemList_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
