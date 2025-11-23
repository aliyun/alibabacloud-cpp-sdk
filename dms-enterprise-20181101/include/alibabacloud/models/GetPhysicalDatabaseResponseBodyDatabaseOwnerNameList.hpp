// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALDATABASERESPONSEBODYDATABASEOWNERNAMELIST_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALDATABASERESPONSEBODYDATABASEOWNERNAMELIST_HPP_
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
  class GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerNames, ownerNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerNames, ownerNames_);
    };
    GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList() = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList(const GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList &) = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList(GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList &&) = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList() = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList& operator=(const GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList &) = default ;
    GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList& operator=(GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerNames_ == nullptr; };
    // ownerNames Field Functions 
    bool hasOwnerNames() const { return this->ownerNames_ != nullptr;};
    void deleteOwnerNames() { this->ownerNames_ = nullptr;};
    inline const vector<string> & ownerNames() const { DARABONBA_PTR_GET_CONST(ownerNames_, vector<string>) };
    inline vector<string> ownerNames() { DARABONBA_PTR_GET(ownerNames_, vector<string>) };
    inline GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList& setOwnerNames(const vector<string> & ownerNames) { DARABONBA_PTR_SET_VALUE(ownerNames_, ownerNames) };
    inline GetPhysicalDatabaseResponseBodyDatabaseOwnerNameList& setOwnerNames(vector<string> && ownerNames) { DARABONBA_PTR_SET_RVALUE(ownerNames_, ownerNames) };


  protected:
    std::shared_ptr<vector<string>> ownerNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
