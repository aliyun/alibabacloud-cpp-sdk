// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYLISTRESPONSEBODYPAGEDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYLISTRESPONSEBODYPAGEDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupQueryListResponseBodyPageDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupQueryListResponseBodyPageDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupQueryListResponseBodyPageDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
    };
    DsgUserGroupQueryListResponseBodyPageDataData() = default ;
    DsgUserGroupQueryListResponseBodyPageDataData(const DsgUserGroupQueryListResponseBodyPageDataData &) = default ;
    DsgUserGroupQueryListResponseBodyPageDataData(DsgUserGroupQueryListResponseBodyPageDataData &&) = default ;
    DsgUserGroupQueryListResponseBodyPageDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupQueryListResponseBodyPageDataData() = default ;
    DsgUserGroupQueryListResponseBodyPageDataData& operator=(const DsgUserGroupQueryListResponseBodyPageDataData &) = default ;
    DsgUserGroupQueryListResponseBodyPageDataData& operator=(DsgUserGroupQueryListResponseBodyPageDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accounts_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<string> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<string>) };
    inline vector<string> accounts() { DARABONBA_PTR_GET(accounts_, vector<string>) };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setAccounts(const vector<string> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setAccounts(vector<string> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DsgUserGroupQueryListResponseBodyPageDataData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


  protected:
    // The usernames in the user group.
    std::shared_ptr<vector<string>> accounts_ = nullptr;
    // The time when the user group was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the user group was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The user group ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the user group.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the user group.
    std::shared_ptr<string> owner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
