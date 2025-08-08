// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODYDATATASKPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_GETAIOUTBOUNDTASKPROGRESSRESPONSEBODYDATATASKPROGRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetAiOutboundTaskProgressResponseBodyDataTaskProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiOutboundTaskProgressResponseBodyDataTaskProgress& obj) { 
      DARABONBA_PTR_TO_JSON(CallingCount, callingCount_);
      DARABONBA_PTR_TO_JSON(ConnectCount, connectCount_);
      DARABONBA_PTR_TO_JSON(ConnectRate, connectRate_);
      DARABONBA_PTR_TO_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
      DARABONBA_PTR_TO_JSON(ServicerPickupCount, servicerPickupCount_);
      DARABONBA_PTR_TO_JSON(ServicerPickupRate, servicerPickupRate_);
      DARABONBA_PTR_TO_JSON(TerminateCount, terminateCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserPickupCount, userPickupCount_);
      DARABONBA_PTR_TO_JSON(UserPickupRate, userPickupRate_);
      DARABONBA_PTR_TO_JSON(WaitingCallCount, waitingCallCount_);
      DARABONBA_PTR_TO_JSON(WaitingRecallCount, waitingRecallCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiOutboundTaskProgressResponseBodyDataTaskProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(CallingCount, callingCount_);
      DARABONBA_PTR_FROM_JSON(ConnectCount, connectCount_);
      DARABONBA_PTR_FROM_JSON(ConnectRate, connectRate_);
      DARABONBA_PTR_FROM_JSON(FinishCount, finishCount_);
      DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
      DARABONBA_PTR_FROM_JSON(ServicerPickupCount, servicerPickupCount_);
      DARABONBA_PTR_FROM_JSON(ServicerPickupRate, servicerPickupRate_);
      DARABONBA_PTR_FROM_JSON(TerminateCount, terminateCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserPickupCount, userPickupCount_);
      DARABONBA_PTR_FROM_JSON(UserPickupRate, userPickupRate_);
      DARABONBA_PTR_FROM_JSON(WaitingCallCount, waitingCallCount_);
      DARABONBA_PTR_FROM_JSON(WaitingRecallCount, waitingRecallCount_);
    };
    GetAiOutboundTaskProgressResponseBodyDataTaskProgress() = default ;
    GetAiOutboundTaskProgressResponseBodyDataTaskProgress(const GetAiOutboundTaskProgressResponseBodyDataTaskProgress &) = default ;
    GetAiOutboundTaskProgressResponseBodyDataTaskProgress(GetAiOutboundTaskProgressResponseBodyDataTaskProgress &&) = default ;
    GetAiOutboundTaskProgressResponseBodyDataTaskProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiOutboundTaskProgressResponseBodyDataTaskProgress() = default ;
    GetAiOutboundTaskProgressResponseBodyDataTaskProgress& operator=(const GetAiOutboundTaskProgressResponseBodyDataTaskProgress &) = default ;
    GetAiOutboundTaskProgressResponseBodyDataTaskProgress& operator=(GetAiOutboundTaskProgressResponseBodyDataTaskProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callingCount_ != nullptr
        && this->connectCount_ != nullptr && this->connectRate_ != nullptr && this->finishCount_ != nullptr && this->finishRate_ != nullptr && this->servicerPickupCount_ != nullptr
        && this->servicerPickupRate_ != nullptr && this->terminateCount_ != nullptr && this->totalCount_ != nullptr && this->userPickupCount_ != nullptr && this->userPickupRate_ != nullptr
        && this->waitingCallCount_ != nullptr && this->waitingRecallCount_ != nullptr; };
    // callingCount Field Functions 
    bool hasCallingCount() const { return this->callingCount_ != nullptr;};
    void deleteCallingCount() { this->callingCount_ = nullptr;};
    inline int32_t callingCount() const { DARABONBA_PTR_GET_DEFAULT(callingCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setCallingCount(int32_t callingCount) { DARABONBA_PTR_SET_VALUE(callingCount_, callingCount) };


    // connectCount Field Functions 
    bool hasConnectCount() const { return this->connectCount_ != nullptr;};
    void deleteConnectCount() { this->connectCount_ = nullptr;};
    inline int32_t connectCount() const { DARABONBA_PTR_GET_DEFAULT(connectCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setConnectCount(int32_t connectCount) { DARABONBA_PTR_SET_VALUE(connectCount_, connectCount) };


    // connectRate Field Functions 
    bool hasConnectRate() const { return this->connectRate_ != nullptr;};
    void deleteConnectRate() { this->connectRate_ = nullptr;};
    inline float connectRate() const { DARABONBA_PTR_GET_DEFAULT(connectRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setConnectRate(float connectRate) { DARABONBA_PTR_SET_VALUE(connectRate_, connectRate) };


    // finishCount Field Functions 
    bool hasFinishCount() const { return this->finishCount_ != nullptr;};
    void deleteFinishCount() { this->finishCount_ = nullptr;};
    inline int32_t finishCount() const { DARABONBA_PTR_GET_DEFAULT(finishCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setFinishCount(int32_t finishCount) { DARABONBA_PTR_SET_VALUE(finishCount_, finishCount) };


    // finishRate Field Functions 
    bool hasFinishRate() const { return this->finishRate_ != nullptr;};
    void deleteFinishRate() { this->finishRate_ = nullptr;};
    inline float finishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setFinishRate(float finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


    // servicerPickupCount Field Functions 
    bool hasServicerPickupCount() const { return this->servicerPickupCount_ != nullptr;};
    void deleteServicerPickupCount() { this->servicerPickupCount_ = nullptr;};
    inline int32_t servicerPickupCount() const { DARABONBA_PTR_GET_DEFAULT(servicerPickupCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setServicerPickupCount(int32_t servicerPickupCount) { DARABONBA_PTR_SET_VALUE(servicerPickupCount_, servicerPickupCount) };


    // servicerPickupRate Field Functions 
    bool hasServicerPickupRate() const { return this->servicerPickupRate_ != nullptr;};
    void deleteServicerPickupRate() { this->servicerPickupRate_ = nullptr;};
    inline float servicerPickupRate() const { DARABONBA_PTR_GET_DEFAULT(servicerPickupRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setServicerPickupRate(float servicerPickupRate) { DARABONBA_PTR_SET_VALUE(servicerPickupRate_, servicerPickupRate) };


    // terminateCount Field Functions 
    bool hasTerminateCount() const { return this->terminateCount_ != nullptr;};
    void deleteTerminateCount() { this->terminateCount_ = nullptr;};
    inline int32_t terminateCount() const { DARABONBA_PTR_GET_DEFAULT(terminateCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setTerminateCount(int32_t terminateCount) { DARABONBA_PTR_SET_VALUE(terminateCount_, terminateCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userPickupCount Field Functions 
    bool hasUserPickupCount() const { return this->userPickupCount_ != nullptr;};
    void deleteUserPickupCount() { this->userPickupCount_ = nullptr;};
    inline int32_t userPickupCount() const { DARABONBA_PTR_GET_DEFAULT(userPickupCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setUserPickupCount(int32_t userPickupCount) { DARABONBA_PTR_SET_VALUE(userPickupCount_, userPickupCount) };


    // userPickupRate Field Functions 
    bool hasUserPickupRate() const { return this->userPickupRate_ != nullptr;};
    void deleteUserPickupRate() { this->userPickupRate_ = nullptr;};
    inline float userPickupRate() const { DARABONBA_PTR_GET_DEFAULT(userPickupRate_, 0.0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setUserPickupRate(float userPickupRate) { DARABONBA_PTR_SET_VALUE(userPickupRate_, userPickupRate) };


    // waitingCallCount Field Functions 
    bool hasWaitingCallCount() const { return this->waitingCallCount_ != nullptr;};
    void deleteWaitingCallCount() { this->waitingCallCount_ = nullptr;};
    inline int32_t waitingCallCount() const { DARABONBA_PTR_GET_DEFAULT(waitingCallCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setWaitingCallCount(int32_t waitingCallCount) { DARABONBA_PTR_SET_VALUE(waitingCallCount_, waitingCallCount) };


    // waitingRecallCount Field Functions 
    bool hasWaitingRecallCount() const { return this->waitingRecallCount_ != nullptr;};
    void deleteWaitingRecallCount() { this->waitingRecallCount_ = nullptr;};
    inline int32_t waitingRecallCount() const { DARABONBA_PTR_GET_DEFAULT(waitingRecallCount_, 0) };
    inline GetAiOutboundTaskProgressResponseBodyDataTaskProgress& setWaitingRecallCount(int32_t waitingRecallCount) { DARABONBA_PTR_SET_VALUE(waitingRecallCount_, waitingRecallCount) };


  protected:
    std::shared_ptr<int32_t> callingCount_ = nullptr;
    std::shared_ptr<int32_t> connectCount_ = nullptr;
    std::shared_ptr<float> connectRate_ = nullptr;
    std::shared_ptr<int32_t> finishCount_ = nullptr;
    std::shared_ptr<float> finishRate_ = nullptr;
    std::shared_ptr<int32_t> servicerPickupCount_ = nullptr;
    std::shared_ptr<float> servicerPickupRate_ = nullptr;
    std::shared_ptr<int32_t> terminateCount_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<int32_t> userPickupCount_ = nullptr;
    std::shared_ptr<float> userPickupRate_ = nullptr;
    std::shared_ptr<int32_t> waitingCallCount_ = nullptr;
    std::shared_ptr<int32_t> waitingRecallCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
