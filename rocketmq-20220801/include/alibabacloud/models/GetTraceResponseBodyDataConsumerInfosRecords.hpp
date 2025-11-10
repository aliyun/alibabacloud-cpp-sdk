// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOSRECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATACONSUMERINFOSRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodyDataConsumerInfosRecordsOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataConsumerInfosRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataConsumerInfosRecords& obj) { 
      DARABONBA_PTR_TO_JSON(clientHost, clientHost_);
      DARABONBA_PTR_TO_JSON(consumeStatus, consumeStatus_);
      DARABONBA_PTR_TO_JSON(fifoEnable, fifoEnable_);
      DARABONBA_PTR_TO_JSON(operations, operations_);
      DARABONBA_PTR_TO_JSON(popCk, popCk_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataConsumerInfosRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(clientHost, clientHost_);
      DARABONBA_PTR_FROM_JSON(consumeStatus, consumeStatus_);
      DARABONBA_PTR_FROM_JSON(fifoEnable, fifoEnable_);
      DARABONBA_PTR_FROM_JSON(operations, operations_);
      DARABONBA_PTR_FROM_JSON(popCk, popCk_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    GetTraceResponseBodyDataConsumerInfosRecords() = default ;
    GetTraceResponseBodyDataConsumerInfosRecords(const GetTraceResponseBodyDataConsumerInfosRecords &) = default ;
    GetTraceResponseBodyDataConsumerInfosRecords(GetTraceResponseBodyDataConsumerInfosRecords &&) = default ;
    GetTraceResponseBodyDataConsumerInfosRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataConsumerInfosRecords() = default ;
    GetTraceResponseBodyDataConsumerInfosRecords& operator=(const GetTraceResponseBodyDataConsumerInfosRecords &) = default ;
    GetTraceResponseBodyDataConsumerInfosRecords& operator=(GetTraceResponseBodyDataConsumerInfosRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientHost_ == nullptr
        && return this->consumeStatus_ == nullptr && return this->fifoEnable_ == nullptr && return this->operations_ == nullptr && return this->popCk_ == nullptr && return this->userName_ == nullptr; };
    // clientHost Field Functions 
    bool hasClientHost() const { return this->clientHost_ != nullptr;};
    void deleteClientHost() { this->clientHost_ = nullptr;};
    inline string clientHost() const { DARABONBA_PTR_GET_DEFAULT(clientHost_, "") };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setClientHost(string clientHost) { DARABONBA_PTR_SET_VALUE(clientHost_, clientHost) };


    // consumeStatus Field Functions 
    bool hasConsumeStatus() const { return this->consumeStatus_ != nullptr;};
    void deleteConsumeStatus() { this->consumeStatus_ = nullptr;};
    inline string consumeStatus() const { DARABONBA_PTR_GET_DEFAULT(consumeStatus_, "") };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setConsumeStatus(string consumeStatus) { DARABONBA_PTR_SET_VALUE(consumeStatus_, consumeStatus) };


    // fifoEnable Field Functions 
    bool hasFifoEnable() const { return this->fifoEnable_ != nullptr;};
    void deleteFifoEnable() { this->fifoEnable_ = nullptr;};
    inline bool fifoEnable() const { DARABONBA_PTR_GET_DEFAULT(fifoEnable_, false) };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setFifoEnable(bool fifoEnable) { DARABONBA_PTR_SET_VALUE(fifoEnable_, fifoEnable) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations>) };
    inline vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations> operations() { DARABONBA_PTR_GET(operations_, vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations>) };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setOperations(const vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setOperations(vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // popCk Field Functions 
    bool hasPopCk() const { return this->popCk_ != nullptr;};
    void deletePopCk() { this->popCk_ = nullptr;};
    inline string popCk() const { DARABONBA_PTR_GET_DEFAULT(popCk_, "") };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setPopCk(string popCk) { DARABONBA_PTR_SET_VALUE(popCk_, popCk) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetTraceResponseBodyDataConsumerInfosRecords& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Client host.
    std::shared_ptr<string> clientHost_ = nullptr;
    // Consume status.
    std::shared_ptr<string> consumeStatus_ = nullptr;
    // Whether to consume fifo.
    std::shared_ptr<bool> fifoEnable_ = nullptr;
    // Operation list.
    std::shared_ptr<vector<Models::GetTraceResponseBodyDataConsumerInfosRecordsOperations>> operations_ = nullptr;
    // POP_CK
    std::shared_ptr<string> popCk_ = nullptr;
    // Consumer name.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
