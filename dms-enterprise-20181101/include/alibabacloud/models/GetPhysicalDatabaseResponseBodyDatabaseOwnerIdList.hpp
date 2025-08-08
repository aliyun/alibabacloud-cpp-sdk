// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALDATABASERESPONSEBODYDATABASEOWNERIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALDATABASERESPONSEBODYDATABASEOWNERIDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
    };
    GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList() = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList(const GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList &) = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList(GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList &&) = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList() = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList& operator=(const GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList &) = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList& operator=(GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerIds_ != nullptr; };
    // ownerIds Field Functions 
    bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
    void deleteOwnerIds() { this->ownerIds_ = nullptr;};
    inline const vector<string> & ownerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<string>) };
    inline vector<string> ownerIds() { DARABONBA_PTR_GET(ownerIds_, vector<string>) };
    inline GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList& setOwnerIds(const vector<string> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
    inline GetPhysicalDatabaseResponseBodyDatabaseOwnerIdList& setOwnerIds(vector<string> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


  protected:
    std::shared_ptr<vector<string>> ownerIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
