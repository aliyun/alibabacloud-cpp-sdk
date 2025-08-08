// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODYOWNERAPPLYORDERDETAILRESOURCESRESOURCEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODYOWNERAPPLYORDERDETAILRESOURCESRESOURCEDETAIL_HPP_
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
  class GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_TO_JSON(OwnerNickNames, ownerNickNames_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_FROM_JSON(OwnerNickNames, ownerNickNames_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail() = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail &) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail &&) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail() = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& operator=(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail &) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& operator=(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbType_ != nullptr
        && this->envType_ != nullptr && this->ownerIds_ != nullptr && this->ownerNickNames_ != nullptr && this->searchName_ != nullptr && this->tableName_ != nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // ownerIds Field Functions 
    bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
    void deleteOwnerIds() { this->ownerIds_ = nullptr;};
    inline const vector<int64_t> & ownerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
    inline vector<int64_t> ownerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


    // ownerNickNames Field Functions 
    bool hasOwnerNickNames() const { return this->ownerNickNames_ != nullptr;};
    void deleteOwnerNickNames() { this->ownerNickNames_ = nullptr;};
    inline const vector<string> & ownerNickNames() const { DARABONBA_PTR_GET_CONST(ownerNickNames_, vector<string>) };
    inline vector<string> ownerNickNames() { DARABONBA_PTR_GET(ownerNickNames_, vector<string>) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setOwnerNickNames(const vector<string> & ownerNickNames) { DARABONBA_PTR_SET_VALUE(ownerNickNames_, ownerNickNames) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setOwnerNickNames(vector<string> && ownerNickNames) { DARABONBA_PTR_SET_RVALUE(ownerNickNames_, ownerNickNames) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // The IDs of the original owners.
    std::shared_ptr<vector<int64_t>> ownerIds_ = nullptr;
    // The nicknames of the owners.
    std::shared_ptr<vector<string>> ownerNickNames_ = nullptr;
    // The search name of the resource.
    std::shared_ptr<string> searchName_ = nullptr;
    // The name of the table.
    // 
    // > : This parameter is returned when you submit a Database-OWNER ticket.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
