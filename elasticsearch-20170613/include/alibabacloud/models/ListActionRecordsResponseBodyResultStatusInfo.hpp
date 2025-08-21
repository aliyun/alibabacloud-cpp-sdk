// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONRECORDSRESPONSEBODYRESULTSTATUSINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONRECORDSRESPONSEBODYRESULTSTATUSINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListActionRecordsResponseBodyResultStatusInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionRecordsResponseBodyResultStatusInfo& obj) { 
      DARABONBA_PTR_TO_JSON(completeNodeCount, completeNodeCount_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(exception, exception_);
      DARABONBA_PTR_TO_JSON(latencyMills, latencyMills_);
      DARABONBA_PTR_TO_JSON(nodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(process, process_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(stateType, stateType_);
      DARABONBA_PTR_TO_JSON(subState, subState_);
      DARABONBA_PTR_TO_JSON(subStatusInfo, subStatusInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionRecordsResponseBodyResultStatusInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(completeNodeCount, completeNodeCount_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(exception, exception_);
      DARABONBA_PTR_FROM_JSON(latencyMills, latencyMills_);
      DARABONBA_PTR_FROM_JSON(nodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(process, process_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(stateType, stateType_);
      DARABONBA_PTR_FROM_JSON(subState, subState_);
      DARABONBA_PTR_FROM_JSON(subStatusInfo, subStatusInfo_);
    };
    ListActionRecordsResponseBodyResultStatusInfo() = default ;
    ListActionRecordsResponseBodyResultStatusInfo(const ListActionRecordsResponseBodyResultStatusInfo &) = default ;
    ListActionRecordsResponseBodyResultStatusInfo(ListActionRecordsResponseBodyResultStatusInfo &&) = default ;
    ListActionRecordsResponseBodyResultStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionRecordsResponseBodyResultStatusInfo() = default ;
    ListActionRecordsResponseBodyResultStatusInfo& operator=(const ListActionRecordsResponseBodyResultStatusInfo &) = default ;
    ListActionRecordsResponseBodyResultStatusInfo& operator=(ListActionRecordsResponseBodyResultStatusInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeNodeCount_ != nullptr
        && this->endTime_ != nullptr && this->exception_ != nullptr && this->latencyMills_ != nullptr && this->nodeCount_ != nullptr && this->process_ != nullptr
        && this->startTime_ != nullptr && this->stateType_ != nullptr && this->subState_ != nullptr && this->subStatusInfo_ != nullptr; };
    // completeNodeCount Field Functions 
    bool hasCompleteNodeCount() const { return this->completeNodeCount_ != nullptr;};
    void deleteCompleteNodeCount() { this->completeNodeCount_ = nullptr;};
    inline int32_t completeNodeCount() const { DARABONBA_PTR_GET_DEFAULT(completeNodeCount_, 0) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setCompleteNodeCount(int32_t completeNodeCount) { DARABONBA_PTR_SET_VALUE(completeNodeCount_, completeNodeCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // exception Field Functions 
    bool hasException() const { return this->exception_ != nullptr;};
    void deleteException() { this->exception_ = nullptr;};
    inline string exception() const { DARABONBA_PTR_GET_DEFAULT(exception_, "") };
    inline ListActionRecordsResponseBodyResultStatusInfo& setException(string exception) { DARABONBA_PTR_SET_VALUE(exception_, exception) };


    // latencyMills Field Functions 
    bool hasLatencyMills() const { return this->latencyMills_ != nullptr;};
    void deleteLatencyMills() { this->latencyMills_ = nullptr;};
    inline int64_t latencyMills() const { DARABONBA_PTR_GET_DEFAULT(latencyMills_, 0L) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setLatencyMills(int64_t latencyMills) { DARABONBA_PTR_SET_VALUE(latencyMills_, latencyMills) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline ListActionRecordsResponseBodyResultStatusInfo& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stateType Field Functions 
    bool hasStateType() const { return this->stateType_ != nullptr;};
    void deleteStateType() { this->stateType_ = nullptr;};
    inline string stateType() const { DARABONBA_PTR_GET_DEFAULT(stateType_, "") };
    inline ListActionRecordsResponseBodyResultStatusInfo& setStateType(string stateType) { DARABONBA_PTR_SET_VALUE(stateType_, stateType) };


    // subState Field Functions 
    bool hasSubState() const { return this->subState_ != nullptr;};
    void deleteSubState() { this->subState_ = nullptr;};
    inline string subState() const { DARABONBA_PTR_GET_DEFAULT(subState_, "") };
    inline ListActionRecordsResponseBodyResultStatusInfo& setSubState(string subState) { DARABONBA_PTR_SET_VALUE(subState_, subState) };


    // subStatusInfo Field Functions 
    bool hasSubStatusInfo() const { return this->subStatusInfo_ != nullptr;};
    void deleteSubStatusInfo() { this->subStatusInfo_ = nullptr;};
    inline const vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo> & subStatusInfo() const { DARABONBA_PTR_GET_CONST(subStatusInfo_, vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo>) };
    inline vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo> subStatusInfo() { DARABONBA_PTR_GET(subStatusInfo_, vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo>) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setSubStatusInfo(const vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo> & subStatusInfo) { DARABONBA_PTR_SET_VALUE(subStatusInfo_, subStatusInfo) };
    inline ListActionRecordsResponseBodyResultStatusInfo& setSubStatusInfo(vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo> && subStatusInfo) { DARABONBA_PTR_SET_RVALUE(subStatusInfo_, subStatusInfo) };


  protected:
    std::shared_ptr<int32_t> completeNodeCount_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> exception_ = nullptr;
    std::shared_ptr<int64_t> latencyMills_ = nullptr;
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    std::shared_ptr<string> process_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> stateType_ = nullptr;
    std::shared_ptr<string> subState_ = nullptr;
    std::shared_ptr<vector<Models::ListActionRecordsResponseBodyResultStatusInfoSubStatusInfo>> subStatusInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
