// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZUNITSRESPONSEBODYDATABIZUNITLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZUNITSRESPONSEBODYDATABIZUNITLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListBizUnitsResponseBodyDataBizUnitListAccountList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizUnitsResponseBodyDataBizUnitList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizUnitsResponseBodyDataBizUnitList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountList, accountList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizUnitsResponseBodyDataBizUnitList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
      DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
    };
    ListBizUnitsResponseBodyDataBizUnitList() = default ;
    ListBizUnitsResponseBodyDataBizUnitList(const ListBizUnitsResponseBodyDataBizUnitList &) = default ;
    ListBizUnitsResponseBodyDataBizUnitList(ListBizUnitsResponseBodyDataBizUnitList &&) = default ;
    ListBizUnitsResponseBodyDataBizUnitList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizUnitsResponseBodyDataBizUnitList() = default ;
    ListBizUnitsResponseBodyDataBizUnitList& operator=(const ListBizUnitsResponseBodyDataBizUnitList &) = default ;
    ListBizUnitsResponseBodyDataBizUnitList& operator=(ListBizUnitsResponseBodyDataBizUnitList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountList_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->env_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->icon_ == nullptr && return this->id_ == nullptr && return this->lastModifier_ == nullptr && return this->lastModifierName_ == nullptr && return this->mode_ == nullptr
        && return this->name_ == nullptr && return this->ownerName_ == nullptr && return this->ownerUserId_ == nullptr; };
    // accountList Field Functions 
    bool hasAccountList() const { return this->accountList_ != nullptr;};
    void deleteAccountList() { this->accountList_ = nullptr;};
    inline const vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList> & accountList() const { DARABONBA_PTR_GET_CONST(accountList_, vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList>) };
    inline vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList> accountList() { DARABONBA_PTR_GET(accountList_, vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList>) };
    inline ListBizUnitsResponseBodyDataBizUnitList& setAccountList(const vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList> & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
    inline ListBizUnitsResponseBodyDataBizUnitList& setAccountList(vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList> && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListBizUnitsResponseBodyDataBizUnitList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifier Field Functions 
    bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
    void deleteLastModifier() { this->lastModifier_ = nullptr;};
    inline string lastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


    // lastModifierName Field Functions 
    bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
    void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
    inline string lastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline ListBizUnitsResponseBodyDataBizUnitList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


  protected:
    std::shared_ptr<vector<Models::ListBizUnitsResponseBodyDataBizUnitListAccountList>> accountList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastModifier_ = nullptr;
    std::shared_ptr<string> lastModifierName_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerName_ = nullptr;
    std::shared_ptr<string> ownerUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
