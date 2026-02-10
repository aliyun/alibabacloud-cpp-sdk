// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePluginSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePluginSummaryResponseBody() = default ;
    DescribePluginSummaryResponseBody(const DescribePluginSummaryResponseBody &) = default ;
    DescribePluginSummaryResponseBody(DescribePluginSummaryResponseBody &&) = default ;
    DescribePluginSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginSummaryResponseBody() = default ;
    DescribePluginSummaryResponseBody& operator=(const DescribePluginSummaryResponseBody &) = default ;
    DescribePluginSummaryResponseBody& operator=(DescribePluginSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FailedCnt, failedCnt_);
        DARABONBA_PTR_TO_JSON(FailedReasons, failedReasons_);
        DARABONBA_PTR_TO_JSON(OfflineCnt, offlineCnt_);
        DARABONBA_PTR_TO_JSON(OnlineCnt, onlineCnt_);
        DARABONBA_PTR_TO_JSON(SwitchOffCnt, switchOffCnt_);
        DARABONBA_PTR_TO_JSON(TotalCnt, totalCnt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedCnt, failedCnt_);
        DARABONBA_PTR_FROM_JSON(FailedReasons, failedReasons_);
        DARABONBA_PTR_FROM_JSON(OfflineCnt, offlineCnt_);
        DARABONBA_PTR_FROM_JSON(OnlineCnt, onlineCnt_);
        DARABONBA_PTR_FROM_JSON(SwitchOffCnt, switchOffCnt_);
        DARABONBA_PTR_FROM_JSON(TotalCnt, totalCnt_);
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
      class FailedReasons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedReasons& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
        };
        friend void from_json(const Darabonba::Json& j, FailedReasons& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
        };
        FailedReasons() = default ;
        FailedReasons(const FailedReasons &) = default ;
        FailedReasons(FailedReasons &&) = default ;
        FailedReasons(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedReasons() = default ;
        FailedReasons& operator=(const FailedReasons &) = default ;
        FailedReasons& operator=(FailedReasons &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->reason_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FailedReasons& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline FailedReasons& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline FailedReasons& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      protected:
        // The error code for the installation failure.
        shared_ptr<string> code_ {};
        // The number of hosts on which the installation failed for this reason.
        shared_ptr<int32_t> count_ {};
        // The cause of the installation failure.
        shared_ptr<string> reason_ {};
      };

      virtual bool empty() const override { return this->failedCnt_ == nullptr
        && this->failedReasons_ == nullptr && this->offlineCnt_ == nullptr && this->onlineCnt_ == nullptr && this->switchOffCnt_ == nullptr && this->totalCnt_ == nullptr; };
      // failedCnt Field Functions 
      bool hasFailedCnt() const { return this->failedCnt_ != nullptr;};
      void deleteFailedCnt() { this->failedCnt_ = nullptr;};
      inline int32_t getFailedCnt() const { DARABONBA_PTR_GET_DEFAULT(failedCnt_, 0) };
      inline Data& setFailedCnt(int32_t failedCnt) { DARABONBA_PTR_SET_VALUE(failedCnt_, failedCnt) };


      // failedReasons Field Functions 
      bool hasFailedReasons() const { return this->failedReasons_ != nullptr;};
      void deleteFailedReasons() { this->failedReasons_ = nullptr;};
      inline const vector<Data::FailedReasons> & getFailedReasons() const { DARABONBA_PTR_GET_CONST(failedReasons_, vector<Data::FailedReasons>) };
      inline vector<Data::FailedReasons> getFailedReasons() { DARABONBA_PTR_GET(failedReasons_, vector<Data::FailedReasons>) };
      inline Data& setFailedReasons(const vector<Data::FailedReasons> & failedReasons) { DARABONBA_PTR_SET_VALUE(failedReasons_, failedReasons) };
      inline Data& setFailedReasons(vector<Data::FailedReasons> && failedReasons) { DARABONBA_PTR_SET_RVALUE(failedReasons_, failedReasons) };


      // offlineCnt Field Functions 
      bool hasOfflineCnt() const { return this->offlineCnt_ != nullptr;};
      void deleteOfflineCnt() { this->offlineCnt_ = nullptr;};
      inline int32_t getOfflineCnt() const { DARABONBA_PTR_GET_DEFAULT(offlineCnt_, 0) };
      inline Data& setOfflineCnt(int32_t offlineCnt) { DARABONBA_PTR_SET_VALUE(offlineCnt_, offlineCnt) };


      // onlineCnt Field Functions 
      bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
      void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
      inline int32_t getOnlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
      inline Data& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


      // switchOffCnt Field Functions 
      bool hasSwitchOffCnt() const { return this->switchOffCnt_ != nullptr;};
      void deleteSwitchOffCnt() { this->switchOffCnt_ = nullptr;};
      inline int32_t getSwitchOffCnt() const { DARABONBA_PTR_GET_DEFAULT(switchOffCnt_, 0) };
      inline Data& setSwitchOffCnt(int32_t switchOffCnt) { DARABONBA_PTR_SET_VALUE(switchOffCnt_, switchOffCnt) };


      // totalCnt Field Functions 
      bool hasTotalCnt() const { return this->totalCnt_ != nullptr;};
      void deleteTotalCnt() { this->totalCnt_ = nullptr;};
      inline int32_t getTotalCnt() const { DARABONBA_PTR_GET_DEFAULT(totalCnt_, 0) };
      inline Data& setTotalCnt(int32_t totalCnt) { DARABONBA_PTR_SET_VALUE(totalCnt_, totalCnt) };


    protected:
      // The number of hosts on which the plug-in failed to be installed.
      shared_ptr<int32_t> failedCnt_ {};
      // The causes of installation failures.
      shared_ptr<vector<Data::FailedReasons>> failedReasons_ {};
      // The number of hosts on which the plug-in is offline.
      shared_ptr<int32_t> offlineCnt_ {};
      // The number of hosts on which the plug-in is online.
      shared_ptr<int32_t> onlineCnt_ {};
      // The number of hosts for which the plug-in is not enabled.
      shared_ptr<int32_t> switchOffCnt_ {};
      // The total number of hosts.
      shared_ptr<int32_t> totalCnt_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribePluginSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribePluginSummaryResponseBody::Data) };
    inline DescribePluginSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribePluginSummaryResponseBody::Data) };
    inline DescribePluginSummaryResponseBody& setData(const DescribePluginSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribePluginSummaryResponseBody& setData(DescribePluginSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the plug-in data.
    shared_ptr<DescribePluginSummaryResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
