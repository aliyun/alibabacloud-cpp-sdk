// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLPROGRESSSLOWDETAIL_HPP_
#define ALIBABACLOUD_MODELS_RLPROGRESSSLOWDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLProgressSlowDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLProgressSlowDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Elapsed, elapsed_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Ipc, ipc_);
      DARABONBA_PTR_TO_JSON(IsPause, isPause_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OutQueue, outQueue_);
      DARABONBA_PTR_TO_JSON(Pod, pod_);
      DARABONBA_PTR_TO_JSON(Rank, rank_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(StatePresent, statePresent_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TokenizerPid, tokenizerPid_);
      DARABONBA_PTR_TO_JSON(WorkerPid, workerPid_);
    };
    friend void from_json(const Darabonba::Json& j, RLProgressSlowDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Elapsed, elapsed_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Ipc, ipc_);
      DARABONBA_PTR_FROM_JSON(IsPause, isPause_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OutQueue, outQueue_);
      DARABONBA_PTR_FROM_JSON(Pod, pod_);
      DARABONBA_PTR_FROM_JSON(Rank, rank_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(StatePresent, statePresent_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TokenizerPid, tokenizerPid_);
      DARABONBA_PTR_FROM_JSON(WorkerPid, workerPid_);
    };
    RLProgressSlowDetail() = default ;
    RLProgressSlowDetail(const RLProgressSlowDetail &) = default ;
    RLProgressSlowDetail(RLProgressSlowDetail &&) = default ;
    RLProgressSlowDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLProgressSlowDetail() = default ;
    RLProgressSlowDetail& operator=(const RLProgressSlowDetail &) = default ;
    RLProgressSlowDetail& operator=(RLProgressSlowDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elapsed_ == nullptr
        && this->ip_ == nullptr && this->ipc_ == nullptr && this->isPause_ == nullptr && this->message_ == nullptr && this->outQueue_ == nullptr
        && this->pod_ == nullptr && this->rank_ == nullptr && this->rid_ == nullptr && this->statePresent_ == nullptr && this->time_ == nullptr
        && this->tokenizerPid_ == nullptr && this->workerPid_ == nullptr; };
    // elapsed Field Functions 
    bool hasElapsed() const { return this->elapsed_ != nullptr;};
    void deleteElapsed() { this->elapsed_ = nullptr;};
    inline double getElapsed() const { DARABONBA_PTR_GET_DEFAULT(elapsed_, 0.0) };
    inline RLProgressSlowDetail& setElapsed(double elapsed) { DARABONBA_PTR_SET_VALUE(elapsed_, elapsed) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline RLProgressSlowDetail& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipc Field Functions 
    bool hasIpc() const { return this->ipc_ != nullptr;};
    void deleteIpc() { this->ipc_ = nullptr;};
    inline string getIpc() const { DARABONBA_PTR_GET_DEFAULT(ipc_, "") };
    inline RLProgressSlowDetail& setIpc(string ipc) { DARABONBA_PTR_SET_VALUE(ipc_, ipc) };


    // isPause Field Functions 
    bool hasIsPause() const { return this->isPause_ != nullptr;};
    void deleteIsPause() { this->isPause_ = nullptr;};
    inline string getIsPause() const { DARABONBA_PTR_GET_DEFAULT(isPause_, "") };
    inline RLProgressSlowDetail& setIsPause(string isPause) { DARABONBA_PTR_SET_VALUE(isPause_, isPause) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RLProgressSlowDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outQueue Field Functions 
    bool hasOutQueue() const { return this->outQueue_ != nullptr;};
    void deleteOutQueue() { this->outQueue_ = nullptr;};
    inline string getOutQueue() const { DARABONBA_PTR_GET_DEFAULT(outQueue_, "") };
    inline RLProgressSlowDetail& setOutQueue(string outQueue) { DARABONBA_PTR_SET_VALUE(outQueue_, outQueue) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline RLProgressSlowDetail& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // rank Field Functions 
    bool hasRank() const { return this->rank_ != nullptr;};
    void deleteRank() { this->rank_ = nullptr;};
    inline int32_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0) };
    inline RLProgressSlowDetail& setRank(int32_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline RLProgressSlowDetail& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // statePresent Field Functions 
    bool hasStatePresent() const { return this->statePresent_ != nullptr;};
    void deleteStatePresent() { this->statePresent_ = nullptr;};
    inline string getStatePresent() const { DARABONBA_PTR_GET_DEFAULT(statePresent_, "") };
    inline RLProgressSlowDetail& setStatePresent(string statePresent) { DARABONBA_PTR_SET_VALUE(statePresent_, statePresent) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline RLProgressSlowDetail& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // tokenizerPid Field Functions 
    bool hasTokenizerPid() const { return this->tokenizerPid_ != nullptr;};
    void deleteTokenizerPid() { this->tokenizerPid_ = nullptr;};
    inline string getTokenizerPid() const { DARABONBA_PTR_GET_DEFAULT(tokenizerPid_, "") };
    inline RLProgressSlowDetail& setTokenizerPid(string tokenizerPid) { DARABONBA_PTR_SET_VALUE(tokenizerPid_, tokenizerPid) };


    // workerPid Field Functions 
    bool hasWorkerPid() const { return this->workerPid_ != nullptr;};
    void deleteWorkerPid() { this->workerPid_ = nullptr;};
    inline int32_t getWorkerPid() const { DARABONBA_PTR_GET_DEFAULT(workerPid_, 0) };
    inline RLProgressSlowDetail& setWorkerPid(int32_t workerPid) { DARABONBA_PTR_SET_VALUE(workerPid_, workerPid) };


  protected:
    // The elapsed time of the request, in seconds.
    shared_ptr<double> elapsed_ {};
    // worker IP
    shared_ptr<string> ip_ {};
    // The IPC channel identifier, which corresponds to the ipc field in the log.
    shared_ptr<string> ipc_ {};
    // Indicates whether the request is paused. This is the raw value of the is_pause field in the log.
    shared_ptr<string> isPause_ {};
    // The log message, truncated to 700 characters.
    shared_ptr<string> message_ {};
    // The output queue length. This is the raw value of the out_queue field in the log.
    shared_ptr<string> outQueue_ {};
    // The name of the pod.
    shared_ptr<string> pod_ {};
    // The training rank.
    shared_ptr<int32_t> rank_ {};
    // The inference request ID, which corresponds to the rid field in the log.
    shared_ptr<string> rid_ {};
    // Indicates whether the state is present. This is the raw value of the state_present field in the log.
    shared_ptr<string> statePresent_ {};
    // The log time, in UNIX seconds.
    shared_ptr<int64_t> time_ {};
    // The tokenizer process ID, which corresponds to the pid field in the log.
    shared_ptr<string> tokenizerPid_ {};
    // The worker process ID.
    shared_ptr<int32_t> workerPid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
