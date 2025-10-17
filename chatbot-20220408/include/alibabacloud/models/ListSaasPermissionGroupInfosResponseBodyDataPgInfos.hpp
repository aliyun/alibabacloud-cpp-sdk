// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODYDATAPGINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODYDATAPGINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasPermissionGroupInfosResponseBodyDataPgInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasPermissionGroupInfosResponseBodyDataPgInfos& obj) { 
      DARABONBA_PTR_TO_JSON(PgCode, pgCode_);
      DARABONBA_PTR_TO_JSON(PgEnName, pgEnName_);
      DARABONBA_PTR_TO_JSON(PgName, pgName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasPermissionGroupInfosResponseBodyDataPgInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(PgCode, pgCode_);
      DARABONBA_PTR_FROM_JSON(PgEnName, pgEnName_);
      DARABONBA_PTR_FROM_JSON(PgName, pgName_);
    };
    ListSaasPermissionGroupInfosResponseBodyDataPgInfos() = default ;
    ListSaasPermissionGroupInfosResponseBodyDataPgInfos(const ListSaasPermissionGroupInfosResponseBodyDataPgInfos &) = default ;
    ListSaasPermissionGroupInfosResponseBodyDataPgInfos(ListSaasPermissionGroupInfosResponseBodyDataPgInfos &&) = default ;
    ListSaasPermissionGroupInfosResponseBodyDataPgInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasPermissionGroupInfosResponseBodyDataPgInfos() = default ;
    ListSaasPermissionGroupInfosResponseBodyDataPgInfos& operator=(const ListSaasPermissionGroupInfosResponseBodyDataPgInfos &) = default ;
    ListSaasPermissionGroupInfosResponseBodyDataPgInfos& operator=(ListSaasPermissionGroupInfosResponseBodyDataPgInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pgCode_ == nullptr
        && return this->pgEnName_ == nullptr && return this->pgName_ == nullptr; };
    // pgCode Field Functions 
    bool hasPgCode() const { return this->pgCode_ != nullptr;};
    void deletePgCode() { this->pgCode_ = nullptr;};
    inline string pgCode() const { DARABONBA_PTR_GET_DEFAULT(pgCode_, "") };
    inline ListSaasPermissionGroupInfosResponseBodyDataPgInfos& setPgCode(string pgCode) { DARABONBA_PTR_SET_VALUE(pgCode_, pgCode) };


    // pgEnName Field Functions 
    bool hasPgEnName() const { return this->pgEnName_ != nullptr;};
    void deletePgEnName() { this->pgEnName_ = nullptr;};
    inline string pgEnName() const { DARABONBA_PTR_GET_DEFAULT(pgEnName_, "") };
    inline ListSaasPermissionGroupInfosResponseBodyDataPgInfos& setPgEnName(string pgEnName) { DARABONBA_PTR_SET_VALUE(pgEnName_, pgEnName) };


    // pgName Field Functions 
    bool hasPgName() const { return this->pgName_ != nullptr;};
    void deletePgName() { this->pgName_ = nullptr;};
    inline string pgName() const { DARABONBA_PTR_GET_DEFAULT(pgName_, "") };
    inline ListSaasPermissionGroupInfosResponseBodyDataPgInfos& setPgName(string pgName) { DARABONBA_PTR_SET_VALUE(pgName_, pgName) };


  protected:
    std::shared_ptr<string> pgCode_ = nullptr;
    std::shared_ptr<string> pgEnName_ = nullptr;
    std::shared_ptr<string> pgName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
