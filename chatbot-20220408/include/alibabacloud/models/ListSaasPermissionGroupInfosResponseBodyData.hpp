// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSAASPERMISSIONGROUPINFOSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSaasPermissionGroupInfosResponseBodyDataPgInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSaasPermissionGroupInfosResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSaasPermissionGroupInfosResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EnName, enName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PgInfos, pgInfos_);
      DARABONBA_PTR_TO_JSON(SaasCode, saasCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListSaasPermissionGroupInfosResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EnName, enName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PgInfos, pgInfos_);
      DARABONBA_PTR_FROM_JSON(SaasCode, saasCode_);
    };
    ListSaasPermissionGroupInfosResponseBodyData() = default ;
    ListSaasPermissionGroupInfosResponseBodyData(const ListSaasPermissionGroupInfosResponseBodyData &) = default ;
    ListSaasPermissionGroupInfosResponseBodyData(ListSaasPermissionGroupInfosResponseBodyData &&) = default ;
    ListSaasPermissionGroupInfosResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSaasPermissionGroupInfosResponseBodyData() = default ;
    ListSaasPermissionGroupInfosResponseBodyData& operator=(const ListSaasPermissionGroupInfosResponseBodyData &) = default ;
    ListSaasPermissionGroupInfosResponseBodyData& operator=(ListSaasPermissionGroupInfosResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enName_ == nullptr
        && return this->name_ == nullptr && return this->pgInfos_ == nullptr && return this->saasCode_ == nullptr; };
    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline ListSaasPermissionGroupInfosResponseBodyData& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSaasPermissionGroupInfosResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pgInfos Field Functions 
    bool hasPgInfos() const { return this->pgInfos_ != nullptr;};
    void deletePgInfos() { this->pgInfos_ = nullptr;};
    inline const vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos> & pgInfos() const { DARABONBA_PTR_GET_CONST(pgInfos_, vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos>) };
    inline vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos> pgInfos() { DARABONBA_PTR_GET(pgInfos_, vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos>) };
    inline ListSaasPermissionGroupInfosResponseBodyData& setPgInfos(const vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos> & pgInfos) { DARABONBA_PTR_SET_VALUE(pgInfos_, pgInfos) };
    inline ListSaasPermissionGroupInfosResponseBodyData& setPgInfos(vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos> && pgInfos) { DARABONBA_PTR_SET_RVALUE(pgInfos_, pgInfos) };


    // saasCode Field Functions 
    bool hasSaasCode() const { return this->saasCode_ != nullptr;};
    void deleteSaasCode() { this->saasCode_ = nullptr;};
    inline string saasCode() const { DARABONBA_PTR_GET_DEFAULT(saasCode_, "") };
    inline ListSaasPermissionGroupInfosResponseBodyData& setSaasCode(string saasCode) { DARABONBA_PTR_SET_VALUE(saasCode_, saasCode) };


  protected:
    std::shared_ptr<string> enName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListSaasPermissionGroupInfosResponseBodyDataPgInfos>> pgInfos_ = nullptr;
    std::shared_ptr<string> saasCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
