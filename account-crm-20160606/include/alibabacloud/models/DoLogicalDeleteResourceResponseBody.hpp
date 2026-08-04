// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOLOGICALDELETERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOLOGICALDELETERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class DoLogicalDeleteResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DoLogicalDeleteResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(GmtWakeup, gmtWakeup_);
      DARABONBA_PTR_TO_JSON(Hid, hid_);
      DARABONBA_PTR_TO_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_TO_JSON(Invoker, invoker_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskExtraData, taskExtraData_);
      DARABONBA_PTR_TO_JSON(TaskIdentifier, taskIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, DoLogicalDeleteResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(GmtWakeup, gmtWakeup_);
      DARABONBA_PTR_FROM_JSON(Hid, hid_);
      DARABONBA_PTR_FROM_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_FROM_JSON(Invoker, invoker_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskExtraData, taskExtraData_);
      DARABONBA_PTR_FROM_JSON(TaskIdentifier, taskIdentifier_);
    };
    DoLogicalDeleteResourceResponseBody() = default ;
    DoLogicalDeleteResourceResponseBody(const DoLogicalDeleteResourceResponseBody &) = default ;
    DoLogicalDeleteResourceResponseBody(DoLogicalDeleteResourceResponseBody &&) = default ;
    DoLogicalDeleteResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DoLogicalDeleteResourceResponseBody() = default ;
    DoLogicalDeleteResourceResponseBody& operator=(const DoLogicalDeleteResourceResponseBody &) = default ;
    DoLogicalDeleteResourceResponseBody& operator=(DoLogicalDeleteResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bid_ == nullptr
        && this->country_ == nullptr && this->gmtWakeup_ == nullptr && this->hid_ == nullptr && this->interrupt_ == nullptr && this->invoker_ == nullptr
        && this->message_ == nullptr && this->pk_ == nullptr && this->success_ == nullptr && this->taskExtraData_ == nullptr && this->taskIdentifier_ == nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DoLogicalDeleteResourceResponseBody& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline DoLogicalDeleteResourceResponseBody& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // gmtWakeup Field Functions 
    bool hasGmtWakeup() const { return this->gmtWakeup_ != nullptr;};
    void deleteGmtWakeup() { this->gmtWakeup_ = nullptr;};
    inline string getGmtWakeup() const { DARABONBA_PTR_GET_DEFAULT(gmtWakeup_, "") };
    inline DoLogicalDeleteResourceResponseBody& setGmtWakeup(string gmtWakeup) { DARABONBA_PTR_SET_VALUE(gmtWakeup_, gmtWakeup) };


    // hid Field Functions 
    bool hasHid() const { return this->hid_ != nullptr;};
    void deleteHid() { this->hid_ = nullptr;};
    inline int64_t getHid() const { DARABONBA_PTR_GET_DEFAULT(hid_, 0L) };
    inline DoLogicalDeleteResourceResponseBody& setHid(int64_t hid) { DARABONBA_PTR_SET_VALUE(hid_, hid) };


    // interrupt Field Functions 
    bool hasInterrupt() const { return this->interrupt_ != nullptr;};
    void deleteInterrupt() { this->interrupt_ = nullptr;};
    inline bool getInterrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
    inline DoLogicalDeleteResourceResponseBody& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


    // invoker Field Functions 
    bool hasInvoker() const { return this->invoker_ != nullptr;};
    void deleteInvoker() { this->invoker_ = nullptr;};
    inline string getInvoker() const { DARABONBA_PTR_GET_DEFAULT(invoker_, "") };
    inline DoLogicalDeleteResourceResponseBody& setInvoker(string invoker) { DARABONBA_PTR_SET_VALUE(invoker_, invoker) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DoLogicalDeleteResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline DoLogicalDeleteResourceResponseBody& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DoLogicalDeleteResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskExtraData Field Functions 
    bool hasTaskExtraData() const { return this->taskExtraData_ != nullptr;};
    void deleteTaskExtraData() { this->taskExtraData_ = nullptr;};
    inline string getTaskExtraData() const { DARABONBA_PTR_GET_DEFAULT(taskExtraData_, "") };
    inline DoLogicalDeleteResourceResponseBody& setTaskExtraData(string taskExtraData) { DARABONBA_PTR_SET_VALUE(taskExtraData_, taskExtraData) };


    // taskIdentifier Field Functions 
    bool hasTaskIdentifier() const { return this->taskIdentifier_ != nullptr;};
    void deleteTaskIdentifier() { this->taskIdentifier_ = nullptr;};
    inline string getTaskIdentifier() const { DARABONBA_PTR_GET_DEFAULT(taskIdentifier_, "") };
    inline DoLogicalDeleteResourceResponseBody& setTaskIdentifier(string taskIdentifier) { DARABONBA_PTR_SET_VALUE(taskIdentifier_, taskIdentifier) };


  protected:
    shared_ptr<string> bid_ {};
    shared_ptr<string> country_ {};
    shared_ptr<string> gmtWakeup_ {};
    shared_ptr<int64_t> hid_ {};
    shared_ptr<bool> interrupt_ {};
    shared_ptr<string> invoker_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> pk_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> taskExtraData_ {};
    shared_ptr<string> taskIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
