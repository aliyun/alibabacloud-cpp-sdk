// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREBALANCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREBALANCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ListRebalanceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRebalanceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRebalanceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRebalanceInfoResponseBody() = default ;
    ListRebalanceInfoResponseBody(const ListRebalanceInfoResponseBody &) = default ;
    ListRebalanceInfoResponseBody(ListRebalanceInfoResponseBody &&) = default ;
    ListRebalanceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRebalanceInfoResponseBody() = default ;
    ListRebalanceInfoResponseBody& operator=(const ListRebalanceInfoResponseBody &) = default ;
    ListRebalanceInfoResponseBody& operator=(ListRebalanceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RebalanceInfoList, rebalanceInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RebalanceInfoList, rebalanceInfoList_);
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
      class RebalanceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RebalanceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(Generation, generation_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(LastRebalanceTimestamp, lastRebalanceTimestamp_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(RebalanceSuccess, rebalanceSuccess_);
          DARABONBA_PTR_TO_JSON(RebalanceTimeConsuming, rebalanceTimeConsuming_);
        };
        friend void from_json(const Darabonba::Json& j, RebalanceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(Generation, generation_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(LastRebalanceTimestamp, lastRebalanceTimestamp_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(RebalanceSuccess, rebalanceSuccess_);
          DARABONBA_PTR_FROM_JSON(RebalanceTimeConsuming, rebalanceTimeConsuming_);
        };
        RebalanceInfoList() = default ;
        RebalanceInfoList(const RebalanceInfoList &) = default ;
        RebalanceInfoList(RebalanceInfoList &&) = default ;
        RebalanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RebalanceInfoList() = default ;
        RebalanceInfoList& operator=(const RebalanceInfoList &) = default ;
        RebalanceInfoList& operator=(RebalanceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->generation_ == nullptr
        && this->groupId_ == nullptr && this->lastRebalanceTimestamp_ == nullptr && this->reason_ == nullptr && this->rebalanceSuccess_ == nullptr && this->rebalanceTimeConsuming_ == nullptr; };
        // generation Field Functions 
        bool hasGeneration() const { return this->generation_ != nullptr;};
        void deleteGeneration() { this->generation_ = nullptr;};
        inline int64_t getGeneration() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
        inline RebalanceInfoList& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline RebalanceInfoList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // lastRebalanceTimestamp Field Functions 
        bool hasLastRebalanceTimestamp() const { return this->lastRebalanceTimestamp_ != nullptr;};
        void deleteLastRebalanceTimestamp() { this->lastRebalanceTimestamp_ = nullptr;};
        inline int64_t getLastRebalanceTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastRebalanceTimestamp_, 0L) };
        inline RebalanceInfoList& setLastRebalanceTimestamp(int64_t lastRebalanceTimestamp) { DARABONBA_PTR_SET_VALUE(lastRebalanceTimestamp_, lastRebalanceTimestamp) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline RebalanceInfoList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // rebalanceSuccess Field Functions 
        bool hasRebalanceSuccess() const { return this->rebalanceSuccess_ != nullptr;};
        void deleteRebalanceSuccess() { this->rebalanceSuccess_ = nullptr;};
        inline bool getRebalanceSuccess() const { DARABONBA_PTR_GET_DEFAULT(rebalanceSuccess_, false) };
        inline RebalanceInfoList& setRebalanceSuccess(bool rebalanceSuccess) { DARABONBA_PTR_SET_VALUE(rebalanceSuccess_, rebalanceSuccess) };


        // rebalanceTimeConsuming Field Functions 
        bool hasRebalanceTimeConsuming() const { return this->rebalanceTimeConsuming_ != nullptr;};
        void deleteRebalanceTimeConsuming() { this->rebalanceTimeConsuming_ = nullptr;};
        inline int64_t getRebalanceTimeConsuming() const { DARABONBA_PTR_GET_DEFAULT(rebalanceTimeConsuming_, 0L) };
        inline RebalanceInfoList& setRebalanceTimeConsuming(int64_t rebalanceTimeConsuming) { DARABONBA_PTR_SET_VALUE(rebalanceTimeConsuming_, rebalanceTimeConsuming) };


      protected:
        shared_ptr<int64_t> generation_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<int64_t> lastRebalanceTimestamp_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<bool> rebalanceSuccess_ {};
        shared_ptr<int64_t> rebalanceTimeConsuming_ {};
      };

      virtual bool empty() const override { return this->rebalanceInfoList_ == nullptr; };
      // rebalanceInfoList Field Functions 
      bool hasRebalanceInfoList() const { return this->rebalanceInfoList_ != nullptr;};
      void deleteRebalanceInfoList() { this->rebalanceInfoList_ = nullptr;};
      inline const vector<Data::RebalanceInfoList> & getRebalanceInfoList() const { DARABONBA_PTR_GET_CONST(rebalanceInfoList_, vector<Data::RebalanceInfoList>) };
      inline vector<Data::RebalanceInfoList> getRebalanceInfoList() { DARABONBA_PTR_GET(rebalanceInfoList_, vector<Data::RebalanceInfoList>) };
      inline Data& setRebalanceInfoList(const vector<Data::RebalanceInfoList> & rebalanceInfoList) { DARABONBA_PTR_SET_VALUE(rebalanceInfoList_, rebalanceInfoList) };
      inline Data& setRebalanceInfoList(vector<Data::RebalanceInfoList> && rebalanceInfoList) { DARABONBA_PTR_SET_RVALUE(rebalanceInfoList_, rebalanceInfoList) };


    protected:
      shared_ptr<vector<Data::RebalanceInfoList>> rebalanceInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListRebalanceInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRebalanceInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRebalanceInfoResponseBody::Data) };
    inline ListRebalanceInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRebalanceInfoResponseBody::Data) };
    inline ListRebalanceInfoResponseBody& setData(const ListRebalanceInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRebalanceInfoResponseBody& setData(ListRebalanceInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRebalanceInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRebalanceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRebalanceInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListRebalanceInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
