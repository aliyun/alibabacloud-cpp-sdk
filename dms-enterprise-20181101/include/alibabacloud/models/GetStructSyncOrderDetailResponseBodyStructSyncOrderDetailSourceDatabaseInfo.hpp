// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODYSTRUCTSYNCORDERDETAILSOURCEDATABASEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODYSTRUCTSYNCORDERDETAILSOURCEDATABASEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo() = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo &) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo &&) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo() = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& operator=(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo &) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& operator=(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->dbType_ != nullptr && this->envType_ != nullptr && this->logic_ != nullptr && this->searchName_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The ID of the source database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the database instance belongs. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is not a logical database
    std::shared_ptr<bool> logic_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
