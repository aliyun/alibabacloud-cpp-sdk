// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPhysicalInstanceResponseBodyInstanceNodeInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalInstanceResponseBodyInstance& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPhysicalInstanceResponseBodyInstance& obj) { 
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
    GetPhysicalInstanceResponseBodyInstance() = default ;
    GetPhysicalInstanceResponseBodyInstance(const GetPhysicalInstanceResponseBodyInstance &) = default ;
    GetPhysicalInstanceResponseBodyInstance(GetPhysicalInstanceResponseBodyInstance &&) = default ;
    GetPhysicalInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalInstanceResponseBodyInstance() = default ;
    GetPhysicalInstanceResponseBodyInstance& operator=(const GetPhysicalInstanceResponseBodyInstance &) = default ;
    GetPhysicalInstanceResponseBodyInstance& operator=(GetPhysicalInstanceResponseBodyInstance &&) = default ;
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
    inline GetPhysicalInstanceResponseBodyInstance& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline string dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, "") };
    inline GetPhysicalInstanceResponseBodyInstance& setDueTime(string dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetPhysicalInstanceResponseBodyInstance& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endExecuteTime Field Functions 
    bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
    void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
    inline int64_t endExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
    inline GetPhysicalInstanceResponseBodyInstance& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetPhysicalInstanceResponseBodyInstance& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetPhysicalInstanceResponseBodyInstance& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetPhysicalInstanceResponseBodyInstance& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo) };
    inline Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo) };
    inline GetPhysicalInstanceResponseBodyInstance& setNodeInfo(const Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline GetPhysicalInstanceResponseBodyInstance& setNodeInfo(Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // startExecuteTime Field Functions 
    bool hasStartExecuteTime() const { return this->startExecuteTime_ != nullptr;};
    void deleteStartExecuteTime() { this->startExecuteTime_ = nullptr;};
    inline int64_t startExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(startExecuteTime_, 0L) };
    inline GetPhysicalInstanceResponseBodyInstance& setStartExecuteTime(int64_t startExecuteTime) { DARABONBA_PTR_SET_VALUE(startExecuteTime_, startExecuteTime) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline GetPhysicalInstanceResponseBodyInstance& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline GetPhysicalInstanceResponseBodyInstance& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


  protected:
    std::shared_ptr<string> bizDate_ = nullptr;
    std::shared_ptr<string> dueTime_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<int64_t> endExecuteTime_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::GetPhysicalInstanceResponseBodyInstanceNodeInfo> nodeInfo_ = nullptr;
    std::shared_ptr<int64_t> startExecuteTime_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
