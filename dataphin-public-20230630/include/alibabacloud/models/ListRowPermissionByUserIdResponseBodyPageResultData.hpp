// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRowPermissionByUserIdResponseBodyPageResultDataRules.hpp>
#include <alibabacloud/models/ListRowPermissionByUserIdResponseBodyPageResultDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionByUserIdResponseBodyPageResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListRowPermissionByUserIdResponseBodyPageResultData() = default ;
    ListRowPermissionByUserIdResponseBodyPageResultData(const ListRowPermissionByUserIdResponseBodyPageResultData &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultData(ListRowPermissionByUserIdResponseBodyPageResultData &&) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdResponseBodyPageResultData() = default ;
    ListRowPermissionByUserIdResponseBodyPageResultData& operator=(const ListRowPermissionByUserIdResponseBodyPageResultData &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultData& operator=(ListRowPermissionByUserIdResponseBodyPageResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->modifier_ != nullptr && this->rules_ != nullptr && this->tables_ != nullptr
        && this->tenantId_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules>) };
    inline vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules>) };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setRules(const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setRules(vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables>) };
    inline vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables>) };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setTables(const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setTables(vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListRowPermissionByUserIdResponseBodyPageResultData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRules>> rules_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataTables>> tables_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
