// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeUpgradeReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DstDBType, dstDBType_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ItemsSize, itemsSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_TO_JSON(SrcDBType, srcDBType_);
      DARABONBA_PTR_TO_JSON(SrcDeleted, srcDeleted_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpgradeReportList, upgradeReportList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DstDBType, dstDBType_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ItemsSize, itemsSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceDBClusterId, sourceDBClusterId_);
      DARABONBA_PTR_FROM_JSON(SrcDBType, srcDBType_);
      DARABONBA_PTR_FROM_JSON(SrcDeleted, srcDeleted_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpgradeReportList, upgradeReportList_);
    };
    DescribeUpgradeReportResponseBody() = default ;
    DescribeUpgradeReportResponseBody(const DescribeUpgradeReportResponseBody &) = default ;
    DescribeUpgradeReportResponseBody(DescribeUpgradeReportResponseBody &&) = default ;
    DescribeUpgradeReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeReportResponseBody() = default ;
    DescribeUpgradeReportResponseBody& operator=(const DescribeUpgradeReportResponseBody &) = default ;
    DescribeUpgradeReportResponseBody& operator=(DescribeUpgradeReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpgradeReportList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpgradeReportList& obj) { 
        DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_TO_JSON(DstVersion, dstVersion_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(SrcInsName, srcInsName_);
        DARABONBA_PTR_TO_JSON(SrcVersion, srcVersion_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
      };
      friend void from_json(const Darabonba::Json& j, UpgradeReportList& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_FROM_JSON(DstVersion, dstVersion_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(SrcInsName, srcInsName_);
        DARABONBA_PTR_FROM_JSON(SrcVersion, srcVersion_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
      };
      UpgradeReportList() = default ;
      UpgradeReportList(const UpgradeReportList &) = default ;
      UpgradeReportList(UpgradeReportList &&) = default ;
      UpgradeReportList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpgradeReportList() = default ;
      UpgradeReportList& operator=(const UpgradeReportList &) = default ;
      UpgradeReportList& operator=(UpgradeReportList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkTime_ == nullptr
        && this->dstVersion_ == nullptr && this->effectiveTime_ == nullptr && this->endTime_ == nullptr && this->result_ == nullptr && this->srcInsName_ == nullptr
        && this->srcVersion_ == nullptr && this->startTime_ == nullptr && this->taskId_ == nullptr && this->upgradeMode_ == nullptr; };
      // checkTime Field Functions 
      bool hasCheckTime() const { return this->checkTime_ != nullptr;};
      void deleteCheckTime() { this->checkTime_ = nullptr;};
      inline string getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, "") };
      inline UpgradeReportList& setCheckTime(string checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


      // dstVersion Field Functions 
      bool hasDstVersion() const { return this->dstVersion_ != nullptr;};
      void deleteDstVersion() { this->dstVersion_ = nullptr;};
      inline string getDstVersion() const { DARABONBA_PTR_GET_DEFAULT(dstVersion_, "") };
      inline UpgradeReportList& setDstVersion(string dstVersion) { DARABONBA_PTR_SET_VALUE(dstVersion_, dstVersion) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline UpgradeReportList& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline UpgradeReportList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline UpgradeReportList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // srcInsName Field Functions 
      bool hasSrcInsName() const { return this->srcInsName_ != nullptr;};
      void deleteSrcInsName() { this->srcInsName_ = nullptr;};
      inline string getSrcInsName() const { DARABONBA_PTR_GET_DEFAULT(srcInsName_, "") };
      inline UpgradeReportList& setSrcInsName(string srcInsName) { DARABONBA_PTR_SET_VALUE(srcInsName_, srcInsName) };


      // srcVersion Field Functions 
      bool hasSrcVersion() const { return this->srcVersion_ != nullptr;};
      void deleteSrcVersion() { this->srcVersion_ = nullptr;};
      inline string getSrcVersion() const { DARABONBA_PTR_GET_DEFAULT(srcVersion_, "") };
      inline UpgradeReportList& setSrcVersion(string srcVersion) { DARABONBA_PTR_SET_VALUE(srcVersion_, srcVersion) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline UpgradeReportList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline UpgradeReportList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // upgradeMode Field Functions 
      bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
      void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
      inline string getUpgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
      inline UpgradeReportList& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


    protected:
      shared_ptr<string> checkTime_ {};
      shared_ptr<string> dstVersion_ {};
      shared_ptr<string> effectiveTime_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> srcInsName_ {};
      shared_ptr<string> srcVersion_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> upgradeMode_ {};
    };

    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DDL, DDL_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DDL, DDL_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DDL_ == nullptr
        && this->name_ == nullptr && this->schema_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // DDL Field Functions 
      bool hasDDL() const { return this->DDL_ != nullptr;};
      void deleteDDL() { this->DDL_ = nullptr;};
      inline string getDDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, "") };
      inline Items& setDDL(string DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Items& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> DDL_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> schema_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->details_ == nullptr
        && this->dstDBType_ == nullptr && this->items_ == nullptr && this->itemsSize_ == nullptr && this->requestId_ == nullptr && this->sourceDBClusterId_ == nullptr
        && this->srcDBType_ == nullptr && this->srcDeleted_ == nullptr && this->totalSize_ == nullptr && this->type_ == nullptr && this->upgradeReportList_ == nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string getDetails() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline DescribeUpgradeReportResponseBody& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // dstDBType Field Functions 
    bool hasDstDBType() const { return this->dstDBType_ != nullptr;};
    void deleteDstDBType() { this->dstDBType_ = nullptr;};
    inline string getDstDBType() const { DARABONBA_PTR_GET_DEFAULT(dstDBType_, "") };
    inline DescribeUpgradeReportResponseBody& setDstDBType(string dstDBType) { DARABONBA_PTR_SET_VALUE(dstDBType_, dstDBType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeUpgradeReportResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeUpgradeReportResponseBody::Items>) };
    inline vector<DescribeUpgradeReportResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeUpgradeReportResponseBody::Items>) };
    inline DescribeUpgradeReportResponseBody& setItems(const vector<DescribeUpgradeReportResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeUpgradeReportResponseBody& setItems(vector<DescribeUpgradeReportResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // itemsSize Field Functions 
    bool hasItemsSize() const { return this->itemsSize_ != nullptr;};
    void deleteItemsSize() { this->itemsSize_ = nullptr;};
    inline int64_t getItemsSize() const { DARABONBA_PTR_GET_DEFAULT(itemsSize_, 0L) };
    inline DescribeUpgradeReportResponseBody& setItemsSize(int64_t itemsSize) { DARABONBA_PTR_SET_VALUE(itemsSize_, itemsSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpgradeReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceDBClusterId Field Functions 
    bool hasSourceDBClusterId() const { return this->sourceDBClusterId_ != nullptr;};
    void deleteSourceDBClusterId() { this->sourceDBClusterId_ = nullptr;};
    inline string getSourceDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceDBClusterId_, "") };
    inline DescribeUpgradeReportResponseBody& setSourceDBClusterId(string sourceDBClusterId) { DARABONBA_PTR_SET_VALUE(sourceDBClusterId_, sourceDBClusterId) };


    // srcDBType Field Functions 
    bool hasSrcDBType() const { return this->srcDBType_ != nullptr;};
    void deleteSrcDBType() { this->srcDBType_ = nullptr;};
    inline string getSrcDBType() const { DARABONBA_PTR_GET_DEFAULT(srcDBType_, "") };
    inline DescribeUpgradeReportResponseBody& setSrcDBType(string srcDBType) { DARABONBA_PTR_SET_VALUE(srcDBType_, srcDBType) };


    // srcDeleted Field Functions 
    bool hasSrcDeleted() const { return this->srcDeleted_ != nullptr;};
    void deleteSrcDeleted() { this->srcDeleted_ = nullptr;};
    inline string getSrcDeleted() const { DARABONBA_PTR_GET_DEFAULT(srcDeleted_, "") };
    inline DescribeUpgradeReportResponseBody& setSrcDeleted(string srcDeleted) { DARABONBA_PTR_SET_VALUE(srcDeleted_, srcDeleted) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeUpgradeReportResponseBody& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeUpgradeReportResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // upgradeReportList Field Functions 
    bool hasUpgradeReportList() const { return this->upgradeReportList_ != nullptr;};
    void deleteUpgradeReportList() { this->upgradeReportList_ = nullptr;};
    inline const vector<DescribeUpgradeReportResponseBody::UpgradeReportList> & getUpgradeReportList() const { DARABONBA_PTR_GET_CONST(upgradeReportList_, vector<DescribeUpgradeReportResponseBody::UpgradeReportList>) };
    inline vector<DescribeUpgradeReportResponseBody::UpgradeReportList> getUpgradeReportList() { DARABONBA_PTR_GET(upgradeReportList_, vector<DescribeUpgradeReportResponseBody::UpgradeReportList>) };
    inline DescribeUpgradeReportResponseBody& setUpgradeReportList(const vector<DescribeUpgradeReportResponseBody::UpgradeReportList> & upgradeReportList) { DARABONBA_PTR_SET_VALUE(upgradeReportList_, upgradeReportList) };
    inline DescribeUpgradeReportResponseBody& setUpgradeReportList(vector<DescribeUpgradeReportResponseBody::UpgradeReportList> && upgradeReportList) { DARABONBA_PTR_SET_RVALUE(upgradeReportList_, upgradeReportList) };


  protected:
    shared_ptr<string> details_ {};
    shared_ptr<string> dstDBType_ {};
    shared_ptr<vector<DescribeUpgradeReportResponseBody::Items>> items_ {};
    shared_ptr<int64_t> itemsSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sourceDBClusterId_ {};
    shared_ptr<string> srcDBType_ {};
    shared_ptr<string> srcDeleted_ {};
    shared_ptr<int64_t> totalSize_ {};
    shared_ptr<string> type_ {};
    shared_ptr<vector<DescribeUpgradeReportResponseBody::UpgradeReportList>> upgradeReportList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
