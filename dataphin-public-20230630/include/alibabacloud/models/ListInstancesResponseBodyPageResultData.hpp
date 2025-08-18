// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYPAGERESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYPAGERESULTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyPageResultDataNodeInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListInstancesResponseBodyPageResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndExecuteTime, endExecuteTime_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_TO_JSON(StartExecuteTime, startExecuteTime_);
      DARABONBA_PTR_TO_JSON(StatusList, statusList_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyPageResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndExecuteTime, endExecuteTime_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(NodeInfo, nodeInfo_);
      DARABONBA_PTR_FROM_JSON(StartExecuteTime, startExecuteTime_);
      DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
    };
    ListInstancesResponseBodyPageResultData() = default ;
    ListInstancesResponseBodyPageResultData(const ListInstancesResponseBodyPageResultData &) = default ;
    ListInstancesResponseBodyPageResultData(ListInstancesResponseBodyPageResultData &&) = default ;
    ListInstancesResponseBodyPageResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyPageResultData() = default ;
    ListInstancesResponseBodyPageResultData& operator=(const ListInstancesResponseBodyPageResultData &) = default ;
    ListInstancesResponseBodyPageResultData& operator=(ListInstancesResponseBodyPageResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->dueTime_ != nullptr && this->duration_ != nullptr && this->endExecuteTime_ != nullptr && this->extendInfo_ != nullptr && this->id_ != nullptr
        && this->index_ != nullptr && this->nodeInfo_ != nullptr && this->startExecuteTime_ != nullptr && this->statusList_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline ListInstancesResponseBodyPageResultData& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline string dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, "") };
    inline ListInstancesResponseBodyPageResultData& setDueTime(string dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ListInstancesResponseBodyPageResultData& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endExecuteTime Field Functions 
    bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
    void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
    inline int64_t endExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
    inline ListInstancesResponseBodyPageResultData& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ListInstancesResponseBodyPageResultData& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListInstancesResponseBodyPageResultData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline ListInstancesResponseBodyPageResultData& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const Models::ListInstancesResponseBodyPageResultDataNodeInfo & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Models::ListInstancesResponseBodyPageResultDataNodeInfo) };
    inline Models::ListInstancesResponseBodyPageResultDataNodeInfo nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Models::ListInstancesResponseBodyPageResultDataNodeInfo) };
    inline ListInstancesResponseBodyPageResultData& setNodeInfo(const Models::ListInstancesResponseBodyPageResultDataNodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline ListInstancesResponseBodyPageResultData& setNodeInfo(Models::ListInstancesResponseBodyPageResultDataNodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // startExecuteTime Field Functions 
    bool hasStartExecuteTime() const { return this->startExecuteTime_ != nullptr;};
    void deleteStartExecuteTime() { this->startExecuteTime_ = nullptr;};
    inline int64_t startExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(startExecuteTime_, 0L) };
    inline ListInstancesResponseBodyPageResultData& setStartExecuteTime(int64_t startExecuteTime) { DARABONBA_PTR_SET_VALUE(startExecuteTime_, startExecuteTime) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline ListInstancesResponseBodyPageResultData& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline ListInstancesResponseBodyPageResultData& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    std::shared_ptr<string> bizDate_ = nullptr;
    std::shared_ptr<string> dueTime_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<int64_t> endExecuteTime_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::ListInstancesResponseBodyPageResultDataNodeInfo> nodeInfo_ = nullptr;
    std::shared_ptr<int64_t> startExecuteTime_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
