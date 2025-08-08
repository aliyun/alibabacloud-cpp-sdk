// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo.hpp>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances.hpp>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& obj) { 
      DARABONBA_PTR_TO_JSON(DagInfo, dagInfo_);
      DARABONBA_PTR_TO_JSON(DbBaseInfo, dbBaseInfo_);
      DARABONBA_PTR_TO_JSON(InstanceTotal, instanceTotal_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(NextFireTimeResult, nextFireTimeResult_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_ANY_TO_JSON(TempTableNameMap, tempTableNameMap_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& obj) { 
      DARABONBA_PTR_FROM_JSON(DagInfo, dagInfo_);
      DARABONBA_PTR_FROM_JSON(DbBaseInfo, dbBaseInfo_);
      DARABONBA_PTR_FROM_JSON(InstanceTotal, instanceTotal_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(NextFireTimeResult, nextFireTimeResult_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_ANY_FROM_JSON(TempTableNameMap, tempTableNameMap_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagInfo_ != nullptr
        && this->dbBaseInfo_ != nullptr && this->instanceTotal_ != nullptr && this->instances_ != nullptr && this->nextFireTimeResult_ != nullptr && this->pageIndex_ != nullptr
        && this->pageSize_ != nullptr && this->tempTableNameMap_ != nullptr; };
    // dagInfo Field Functions 
    bool hasDagInfo() const { return this->dagInfo_ != nullptr;};
    void deleteDagInfo() { this->dagInfo_ = nullptr;};
    inline const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo & dagInfo() const { DARABONBA_PTR_GET_CONST(dagInfo_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo) };
    inline Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo dagInfo() { DARABONBA_PTR_GET(dagInfo_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setDagInfo(const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo & dagInfo) { DARABONBA_PTR_SET_VALUE(dagInfo_, dagInfo) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setDagInfo(Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo && dagInfo) { DARABONBA_PTR_SET_RVALUE(dagInfo_, dagInfo) };


    // dbBaseInfo Field Functions 
    bool hasDbBaseInfo() const { return this->dbBaseInfo_ != nullptr;};
    void deleteDbBaseInfo() { this->dbBaseInfo_ = nullptr;};
    inline const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo & dbBaseInfo() const { DARABONBA_PTR_GET_CONST(dbBaseInfo_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo) };
    inline Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo dbBaseInfo() { DARABONBA_PTR_GET(dbBaseInfo_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setDbBaseInfo(const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo & dbBaseInfo) { DARABONBA_PTR_SET_VALUE(dbBaseInfo_, dbBaseInfo) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setDbBaseInfo(Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo && dbBaseInfo) { DARABONBA_PTR_SET_RVALUE(dbBaseInfo_, dbBaseInfo) };


    // instanceTotal Field Functions 
    bool hasInstanceTotal() const { return this->instanceTotal_ != nullptr;};
    void deleteInstanceTotal() { this->instanceTotal_ = nullptr;};
    inline int64_t instanceTotal() const { DARABONBA_PTR_GET_DEFAULT(instanceTotal_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setInstanceTotal(int64_t instanceTotal) { DARABONBA_PTR_SET_VALUE(instanceTotal_, instanceTotal) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances>) };
    inline vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setInstances(const vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setInstances(vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // nextFireTimeResult Field Functions 
    bool hasNextFireTimeResult() const { return this->nextFireTimeResult_ != nullptr;};
    void deleteNextFireTimeResult() { this->nextFireTimeResult_ = nullptr;};
    inline const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult & nextFireTimeResult() const { DARABONBA_PTR_GET_CONST(nextFireTimeResult_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult) };
    inline Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult nextFireTimeResult() { DARABONBA_PTR_GET(nextFireTimeResult_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setNextFireTimeResult(const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult & nextFireTimeResult) { DARABONBA_PTR_SET_VALUE(nextFireTimeResult_, nextFireTimeResult) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setNextFireTimeResult(Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult && nextFireTimeResult) { DARABONBA_PTR_SET_RVALUE(nextFireTimeResult_, nextFireTimeResult) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tempTableNameMap Field Functions 
    bool hasTempTableNameMap() const { return this->tempTableNameMap_ != nullptr;};
    void deleteTempTableNameMap() { this->tempTableNameMap_ = nullptr;};
    inline     const Darabonba::Json & tempTableNameMap() const { DARABONBA_GET(tempTableNameMap_) };
    Darabonba::Json & tempTableNameMap() { DARABONBA_GET(tempTableNameMap_) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setTempTableNameMap(const Darabonba::Json & tempTableNameMap) { DARABONBA_SET_VALUE(tempTableNameMap_, tempTableNameMap) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraData& setTempTableNameMap(Darabonba::Json & tempTableNameMap) { DARABONBA_SET_RVALUE(tempTableNameMap_, tempTableNameMap) };


  protected:
    // The information about the workflow.
    std::shared_ptr<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDagInfo> dagInfo_ = nullptr;
    // The database information related to data archiving tickets.
    std::shared_ptr<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo> dbBaseInfo_ = nullptr;
    // The total number of archiving tasks.
    std::shared_ptr<int64_t> instanceTotal_ = nullptr;
    // The list of archiving tasks.
    std::shared_ptr<vector<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataInstances>> instances_ = nullptr;
    // The time when the next task is triggered.
    std::shared_ptr<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataNextFireTimeResult> nextFireTimeResult_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The name of the temporary table that is generated by the archiving task (indicated by the archiving task ID).
    Darabonba::Json tempTableNameMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
