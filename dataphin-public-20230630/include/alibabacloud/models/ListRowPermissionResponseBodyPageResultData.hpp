// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRowPermissionResponseBodyPageResultDataMappingColumns.hpp>
#include <alibabacloud/models/ListRowPermissionResponseBodyPageResultDataRules.hpp>
#include <alibabacloud/models/ListRowPermissionResponseBodyPageResultDataTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionResponseBodyPageResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(MappingColumns, mappingColumns_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(RowPermissionDesc, rowPermissionDesc_);
      DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
      DARABONBA_PTR_TO_JSON(RowPermissionName, rowPermissionName_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(MappingColumns, mappingColumns_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(RowPermissionDesc, rowPermissionDesc_);
      DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
      DARABONBA_PTR_FROM_JSON(RowPermissionName, rowPermissionName_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ListRowPermissionResponseBodyPageResultData() = default ;
    ListRowPermissionResponseBodyPageResultData(const ListRowPermissionResponseBodyPageResultData &) = default ;
    ListRowPermissionResponseBodyPageResultData(ListRowPermissionResponseBodyPageResultData &&) = default ;
    ListRowPermissionResponseBodyPageResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionResponseBodyPageResultData() = default ;
    ListRowPermissionResponseBodyPageResultData& operator=(const ListRowPermissionResponseBodyPageResultData &) = default ;
    ListRowPermissionResponseBodyPageResultData& operator=(ListRowPermissionResponseBodyPageResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->mappingColumns_ == nullptr && return this->modifier_ == nullptr && return this->rowPermissionDesc_ == nullptr
        && return this->rowPermissionId_ == nullptr && return this->rowPermissionName_ == nullptr && return this->rules_ == nullptr && return this->tables_ == nullptr && return this->tenantId_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListRowPermissionResponseBodyPageResultData& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListRowPermissionResponseBodyPageResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListRowPermissionResponseBodyPageResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // mappingColumns Field Functions 
    bool hasMappingColumns() const { return this->mappingColumns_ != nullptr;};
    void deleteMappingColumns() { this->mappingColumns_ = nullptr;};
    inline const vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns> & mappingColumns() const { DARABONBA_PTR_GET_CONST(mappingColumns_, vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns>) };
    inline vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns> mappingColumns() { DARABONBA_PTR_GET(mappingColumns_, vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns>) };
    inline ListRowPermissionResponseBodyPageResultData& setMappingColumns(const vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns> & mappingColumns) { DARABONBA_PTR_SET_VALUE(mappingColumns_, mappingColumns) };
    inline ListRowPermissionResponseBodyPageResultData& setMappingColumns(vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns> && mappingColumns) { DARABONBA_PTR_SET_RVALUE(mappingColumns_, mappingColumns) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListRowPermissionResponseBodyPageResultData& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // rowPermissionDesc Field Functions 
    bool hasRowPermissionDesc() const { return this->rowPermissionDesc_ != nullptr;};
    void deleteRowPermissionDesc() { this->rowPermissionDesc_ = nullptr;};
    inline string rowPermissionDesc() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionDesc_, "") };
    inline ListRowPermissionResponseBodyPageResultData& setRowPermissionDesc(string rowPermissionDesc) { DARABONBA_PTR_SET_VALUE(rowPermissionDesc_, rowPermissionDesc) };


    // rowPermissionId Field Functions 
    bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
    void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
    inline int64_t rowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, 0L) };
    inline ListRowPermissionResponseBodyPageResultData& setRowPermissionId(int64_t rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


    // rowPermissionName Field Functions 
    bool hasRowPermissionName() const { return this->rowPermissionName_ != nullptr;};
    void deleteRowPermissionName() { this->rowPermissionName_ = nullptr;};
    inline string rowPermissionName() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionName_, "") };
    inline ListRowPermissionResponseBodyPageResultData& setRowPermissionName(string rowPermissionName) { DARABONBA_PTR_SET_VALUE(rowPermissionName_, rowPermissionName) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListRowPermissionResponseBodyPageResultDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListRowPermissionResponseBodyPageResultDataRules>) };
    inline vector<Models::ListRowPermissionResponseBodyPageResultDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListRowPermissionResponseBodyPageResultDataRules>) };
    inline ListRowPermissionResponseBodyPageResultData& setRules(const vector<Models::ListRowPermissionResponseBodyPageResultDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListRowPermissionResponseBodyPageResultData& setRules(vector<Models::ListRowPermissionResponseBodyPageResultDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Models::ListRowPermissionResponseBodyPageResultDataTables> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Models::ListRowPermissionResponseBodyPageResultDataTables>) };
    inline vector<Models::ListRowPermissionResponseBodyPageResultDataTables> tables() { DARABONBA_PTR_GET(tables_, vector<Models::ListRowPermissionResponseBodyPageResultDataTables>) };
    inline ListRowPermissionResponseBodyPageResultData& setTables(const vector<Models::ListRowPermissionResponseBodyPageResultDataTables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline ListRowPermissionResponseBodyPageResultData& setTables(vector<Models::ListRowPermissionResponseBodyPageResultDataTables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListRowPermissionResponseBodyPageResultData& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionResponseBodyPageResultDataMappingColumns>> mappingColumns_ = nullptr;
    std::shared_ptr<string> modifier_ = nullptr;
    std::shared_ptr<string> rowPermissionDesc_ = nullptr;
    std::shared_ptr<int64_t> rowPermissionId_ = nullptr;
    std::shared_ptr<string> rowPermissionName_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionResponseBodyPageResultDataRules>> rules_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionResponseBodyPageResultDataTables>> tables_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
