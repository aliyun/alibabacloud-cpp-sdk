// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETADATAAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETADATAAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class GetMetadataAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetadataAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetadataAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMetadataAmountResponseBody() = default ;
    GetMetadataAmountResponseBody(const GetMetadataAmountResponseBody &) = default ;
    GetMetadataAmountResponseBody(GetMetadataAmountResponseBody &&) = default ;
    GetMetadataAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetadataAmountResponseBody() = default ;
    GetMetadataAmountResponseBody& operator=(const GetMetadataAmountResponseBody &) = default ;
    GetMetadataAmountResponseBody& operator=(GetMetadataAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentExchanges, currentExchanges_);
        DARABONBA_PTR_TO_JSON(CurrentQueues, currentQueues_);
        DARABONBA_PTR_TO_JSON(CurrentVirtualHosts, currentVirtualHosts_);
        DARABONBA_PTR_TO_JSON(MaxExchanges, maxExchanges_);
        DARABONBA_PTR_TO_JSON(MaxQueues, maxQueues_);
        DARABONBA_PTR_TO_JSON(MaxVirtualHosts, maxVirtualHosts_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentExchanges, currentExchanges_);
        DARABONBA_PTR_FROM_JSON(CurrentQueues, currentQueues_);
        DARABONBA_PTR_FROM_JSON(CurrentVirtualHosts, currentVirtualHosts_);
        DARABONBA_PTR_FROM_JSON(MaxExchanges, maxExchanges_);
        DARABONBA_PTR_FROM_JSON(MaxQueues, maxQueues_);
        DARABONBA_PTR_FROM_JSON(MaxVirtualHosts, maxVirtualHosts_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentExchanges_ == nullptr
        && this->currentQueues_ == nullptr && this->currentVirtualHosts_ == nullptr && this->maxExchanges_ == nullptr && this->maxQueues_ == nullptr && this->maxVirtualHosts_ == nullptr; };
      // currentExchanges Field Functions 
      bool hasCurrentExchanges() const { return this->currentExchanges_ != nullptr;};
      void deleteCurrentExchanges() { this->currentExchanges_ = nullptr;};
      inline int32_t getCurrentExchanges() const { DARABONBA_PTR_GET_DEFAULT(currentExchanges_, 0) };
      inline Data& setCurrentExchanges(int32_t currentExchanges) { DARABONBA_PTR_SET_VALUE(currentExchanges_, currentExchanges) };


      // currentQueues Field Functions 
      bool hasCurrentQueues() const { return this->currentQueues_ != nullptr;};
      void deleteCurrentQueues() { this->currentQueues_ = nullptr;};
      inline int32_t getCurrentQueues() const { DARABONBA_PTR_GET_DEFAULT(currentQueues_, 0) };
      inline Data& setCurrentQueues(int32_t currentQueues) { DARABONBA_PTR_SET_VALUE(currentQueues_, currentQueues) };


      // currentVirtualHosts Field Functions 
      bool hasCurrentVirtualHosts() const { return this->currentVirtualHosts_ != nullptr;};
      void deleteCurrentVirtualHosts() { this->currentVirtualHosts_ = nullptr;};
      inline int32_t getCurrentVirtualHosts() const { DARABONBA_PTR_GET_DEFAULT(currentVirtualHosts_, 0) };
      inline Data& setCurrentVirtualHosts(int32_t currentVirtualHosts) { DARABONBA_PTR_SET_VALUE(currentVirtualHosts_, currentVirtualHosts) };


      // maxExchanges Field Functions 
      bool hasMaxExchanges() const { return this->maxExchanges_ != nullptr;};
      void deleteMaxExchanges() { this->maxExchanges_ = nullptr;};
      inline int32_t getMaxExchanges() const { DARABONBA_PTR_GET_DEFAULT(maxExchanges_, 0) };
      inline Data& setMaxExchanges(int32_t maxExchanges) { DARABONBA_PTR_SET_VALUE(maxExchanges_, maxExchanges) };


      // maxQueues Field Functions 
      bool hasMaxQueues() const { return this->maxQueues_ != nullptr;};
      void deleteMaxQueues() { this->maxQueues_ = nullptr;};
      inline int32_t getMaxQueues() const { DARABONBA_PTR_GET_DEFAULT(maxQueues_, 0) };
      inline Data& setMaxQueues(int32_t maxQueues) { DARABONBA_PTR_SET_VALUE(maxQueues_, maxQueues) };


      // maxVirtualHosts Field Functions 
      bool hasMaxVirtualHosts() const { return this->maxVirtualHosts_ != nullptr;};
      void deleteMaxVirtualHosts() { this->maxVirtualHosts_ = nullptr;};
      inline int32_t getMaxVirtualHosts() const { DARABONBA_PTR_GET_DEFAULT(maxVirtualHosts_, 0) };
      inline Data& setMaxVirtualHosts(int32_t maxVirtualHosts) { DARABONBA_PTR_SET_VALUE(maxVirtualHosts_, maxVirtualHosts) };


    protected:
      // The number of existing exchanges.
      shared_ptr<int32_t> currentExchanges_ {};
      // The number of existing queues.
      shared_ptr<int32_t> currentQueues_ {};
      // The number of existing vhosts.
      shared_ptr<int32_t> currentVirtualHosts_ {};
      // The maximum number of exchanges that you can create.
      shared_ptr<int32_t> maxExchanges_ {};
      // The maximum number of queues that you can create.
      shared_ptr<int32_t> maxQueues_ {};
      // The maximum number of vhosts that you can create.
      shared_ptr<int32_t> maxVirtualHosts_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetadataAmountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetadataAmountResponseBody::Data) };
    inline GetMetadataAmountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetadataAmountResponseBody::Data) };
    inline GetMetadataAmountResponseBody& setData(const GetMetadataAmountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetadataAmountResponseBody& setData(GetMetadataAmountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetadataAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetMetadataAmountResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
