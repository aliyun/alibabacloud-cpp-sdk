// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNINSTANCERESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNINSTANCERESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSupplementDagrunInstanceResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplementDagrunInstanceResponseBodyInstanceList& obj) { 
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
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplementDagrunInstanceResponseBodyInstanceList& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetSupplementDagrunInstanceResponseBodyInstanceList() = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceList(const GetSupplementDagrunInstanceResponseBodyInstanceList &) = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceList(GetSupplementDagrunInstanceResponseBodyInstanceList &&) = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplementDagrunInstanceResponseBodyInstanceList() = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceList& operator=(const GetSupplementDagrunInstanceResponseBodyInstanceList &) = default ;
    GetSupplementDagrunInstanceResponseBodyInstanceList& operator=(GetSupplementDagrunInstanceResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizDate_ == nullptr
        && return this->dueTime_ == nullptr && return this->duration_ == nullptr && return this->endExecuteTime_ == nullptr && return this->extendInfo_ == nullptr && return this->id_ == nullptr
        && return this->index_ == nullptr && return this->nodeInfo_ == nullptr && return this->startExecuteTime_ == nullptr && return this->statusList_ == nullptr && return this->type_ == nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endExecuteTime Field Functions 
    bool hasEndExecuteTime() const { return this->endExecuteTime_ != nullptr;};
    void deleteEndExecuteTime() { this->endExecuteTime_ = nullptr;};
    inline int64_t endExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(endExecuteTime_, 0L) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setEndExecuteTime(int64_t endExecuteTime) { DARABONBA_PTR_SET_VALUE(endExecuteTime_, endExecuteTime) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // nodeInfo Field Functions 
    bool hasNodeInfo() const { return this->nodeInfo_ != nullptr;};
    void deleteNodeInfo() { this->nodeInfo_ = nullptr;};
    inline const Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo & nodeInfo() const { DARABONBA_PTR_GET_CONST(nodeInfo_, Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo) };
    inline Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo nodeInfo() { DARABONBA_PTR_GET(nodeInfo_, Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setNodeInfo(const Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo & nodeInfo) { DARABONBA_PTR_SET_VALUE(nodeInfo_, nodeInfo) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setNodeInfo(Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo && nodeInfo) { DARABONBA_PTR_SET_RVALUE(nodeInfo_, nodeInfo) };


    // startExecuteTime Field Functions 
    bool hasStartExecuteTime() const { return this->startExecuteTime_ != nullptr;};
    void deleteStartExecuteTime() { this->startExecuteTime_ = nullptr;};
    inline int64_t startExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(startExecuteTime_, 0L) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setStartExecuteTime(int64_t startExecuteTime) { DARABONBA_PTR_SET_VALUE(startExecuteTime_, startExecuteTime) };


    // statusList Field Functions 
    bool hasStatusList() const { return this->statusList_ != nullptr;};
    void deleteStatusList() { this->statusList_ = nullptr;};
    inline const vector<string> & statusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
    inline vector<string> statusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSupplementDagrunInstanceResponseBodyInstanceList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> bizDate_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<int64_t> endExecuteTime_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<Models::GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo> nodeInfo_ = nullptr;
    std::shared_ptr<int64_t> startExecuteTime_ = nullptr;
    std::shared_ptr<vector<string>> statusList_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
