// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACOMPAREINCREMENTDBOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETACOMPAREINCREMENTDBOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetMetaCompareIncrementDbOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCompareIncrementDbOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(catalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(isSummary, isSummary_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCompareIncrementDbOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(isSummary, isSummary_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetMetaCompareIncrementDbOverviewRequest() = default ;
    GetMetaCompareIncrementDbOverviewRequest(const GetMetaCompareIncrementDbOverviewRequest &) = default ;
    GetMetaCompareIncrementDbOverviewRequest(GetMetaCompareIncrementDbOverviewRequest &&) = default ;
    GetMetaCompareIncrementDbOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCompareIncrementDbOverviewRequest() = default ;
    GetMetaCompareIncrementDbOverviewRequest& operator=(const GetMetaCompareIncrementDbOverviewRequest &) = default ;
    GetMetaCompareIncrementDbOverviewRequest& operator=(GetMetaCompareIncrementDbOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dbName_ == nullptr && this->isSummary_ == nullptr && this->taskId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline GetMetaCompareIncrementDbOverviewRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetMetaCompareIncrementDbOverviewRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // isSummary Field Functions 
    bool hasIsSummary() const { return this->isSummary_ != nullptr;};
    void deleteIsSummary() { this->isSummary_ = nullptr;};
    inline bool getIsSummary() const { DARABONBA_PTR_GET_DEFAULT(isSummary_, false) };
    inline GetMetaCompareIncrementDbOverviewRequest& setIsSummary(bool isSummary) { DARABONBA_PTR_SET_VALUE(isSummary_, isSummary) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline GetMetaCompareIncrementDbOverviewRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The name of the catalog. In a multi-catalog environment, it is used to locate the catalog where the destination database resides.
    shared_ptr<string> catalogName_ {};
    // The name of the database for which you want to query incremental changes.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // Specifies whether to return only summary statistics.
    shared_ptr<bool> isSummary_ {};
    // The ID of the metadata comparison task, which is obtained from the return value of the create or save comparison task API operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
