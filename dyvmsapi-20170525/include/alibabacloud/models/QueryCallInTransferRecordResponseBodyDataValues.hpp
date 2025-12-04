// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINTRANSFERRECORDRESPONSEBODYDATAVALUES_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINTRANSFERRECORDRESPONSEBODYDATAVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInTransferRecordResponseBodyDataValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInTransferRecordResponseBodyDataValues& obj) { 
      DARABONBA_PTR_TO_JSON(CallInCalled, callInCalled_);
      DARABONBA_PTR_TO_JSON(CallInCaller, callInCaller_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(RecordUrl, recordUrl_);
      DARABONBA_PTR_TO_JSON(TransferCalled, transferCalled_);
      DARABONBA_PTR_TO_JSON(TransferCaller, transferCaller_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInTransferRecordResponseBodyDataValues& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInCalled, callInCalled_);
      DARABONBA_PTR_FROM_JSON(CallInCaller, callInCaller_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(RecordUrl, recordUrl_);
      DARABONBA_PTR_FROM_JSON(TransferCalled, transferCalled_);
      DARABONBA_PTR_FROM_JSON(TransferCaller, transferCaller_);
    };
    QueryCallInTransferRecordResponseBodyDataValues() = default ;
    QueryCallInTransferRecordResponseBodyDataValues(const QueryCallInTransferRecordResponseBodyDataValues &) = default ;
    QueryCallInTransferRecordResponseBodyDataValues(QueryCallInTransferRecordResponseBodyDataValues &&) = default ;
    QueryCallInTransferRecordResponseBodyDataValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInTransferRecordResponseBodyDataValues() = default ;
    QueryCallInTransferRecordResponseBodyDataValues& operator=(const QueryCallInTransferRecordResponseBodyDataValues &) = default ;
    QueryCallInTransferRecordResponseBodyDataValues& operator=(QueryCallInTransferRecordResponseBodyDataValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callInCalled_ == nullptr
        && return this->callInCaller_ == nullptr && return this->gmtCreate_ == nullptr && return this->recordUrl_ == nullptr && return this->transferCalled_ == nullptr && return this->transferCaller_ == nullptr; };
    // callInCalled Field Functions 
    bool hasCallInCalled() const { return this->callInCalled_ != nullptr;};
    void deleteCallInCalled() { this->callInCalled_ = nullptr;};
    inline string callInCalled() const { DARABONBA_PTR_GET_DEFAULT(callInCalled_, "") };
    inline QueryCallInTransferRecordResponseBodyDataValues& setCallInCalled(string callInCalled) { DARABONBA_PTR_SET_VALUE(callInCalled_, callInCalled) };


    // callInCaller Field Functions 
    bool hasCallInCaller() const { return this->callInCaller_ != nullptr;};
    void deleteCallInCaller() { this->callInCaller_ = nullptr;};
    inline string callInCaller() const { DARABONBA_PTR_GET_DEFAULT(callInCaller_, "") };
    inline QueryCallInTransferRecordResponseBodyDataValues& setCallInCaller(string callInCaller) { DARABONBA_PTR_SET_VALUE(callInCaller_, callInCaller) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline QueryCallInTransferRecordResponseBodyDataValues& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // recordUrl Field Functions 
    bool hasRecordUrl() const { return this->recordUrl_ != nullptr;};
    void deleteRecordUrl() { this->recordUrl_ = nullptr;};
    inline string recordUrl() const { DARABONBA_PTR_GET_DEFAULT(recordUrl_, "") };
    inline QueryCallInTransferRecordResponseBodyDataValues& setRecordUrl(string recordUrl) { DARABONBA_PTR_SET_VALUE(recordUrl_, recordUrl) };


    // transferCalled Field Functions 
    bool hasTransferCalled() const { return this->transferCalled_ != nullptr;};
    void deleteTransferCalled() { this->transferCalled_ = nullptr;};
    inline string transferCalled() const { DARABONBA_PTR_GET_DEFAULT(transferCalled_, "") };
    inline QueryCallInTransferRecordResponseBodyDataValues& setTransferCalled(string transferCalled) { DARABONBA_PTR_SET_VALUE(transferCalled_, transferCalled) };


    // transferCaller Field Functions 
    bool hasTransferCaller() const { return this->transferCaller_ != nullptr;};
    void deleteTransferCaller() { this->transferCaller_ = nullptr;};
    inline string transferCaller() const { DARABONBA_PTR_GET_DEFAULT(transferCaller_, "") };
    inline QueryCallInTransferRecordResponseBodyDataValues& setTransferCaller(string transferCaller) { DARABONBA_PTR_SET_VALUE(transferCaller_, transferCaller) };


  protected:
    // The called number of the inbound call.
    std::shared_ptr<string> callInCalled_ = nullptr;
    // The calling number of the inbound call.
    std::shared_ptr<string> callInCaller_ = nullptr;
    // The time when the call was initiated.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The recording URL.
    std::shared_ptr<string> recordUrl_ = nullptr;
    // The phone number to which the call was transferred.
    std::shared_ptr<string> transferCalled_ = nullptr;
    // The calling number that transferred the call.
    std::shared_ptr<string> transferCaller_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
