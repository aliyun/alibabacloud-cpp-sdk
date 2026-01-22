// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKSQLFLASHBACKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class PreCheckSqlFlashbackTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckSqlFlashbackTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckSqlFlashbackTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    PreCheckSqlFlashbackTaskResponseBody() = default ;
    PreCheckSqlFlashbackTaskResponseBody(const PreCheckSqlFlashbackTaskResponseBody &) = default ;
    PreCheckSqlFlashbackTaskResponseBody(PreCheckSqlFlashbackTaskResponseBody &&) = default ;
    PreCheckSqlFlashbackTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckSqlFlashbackTaskResponseBody() = default ;
    PreCheckSqlFlashbackTaskResponseBody& operator=(const PreCheckSqlFlashbackTaskResponseBody &) = default ;
    PreCheckSqlFlashbackTaskResponseBody& operator=(PreCheckSqlFlashbackTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
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
      class CheckResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckResult& obj) { 
          DARABONBA_PTR_TO_JSON(BinlogExists, binlogExists_);
          DARABONBA_PTR_TO_JSON(BinlogRowQueryEventEnabled, binlogRowQueryEventEnabled_);
          DARABONBA_PTR_TO_JSON(CanUpgradeSupportBinlogRowQueryEvents, canUpgradeSupportBinlogRowQueryEvents_);
          DARABONBA_PTR_TO_JSON(HasTable, hasTable_);
          DARABONBA_PTR_TO_JSON(SupportBinlogRowQueryEvents, supportBinlogRowQueryEvents_);
        };
        friend void from_json(const Darabonba::Json& j, CheckResult& obj) { 
          DARABONBA_PTR_FROM_JSON(BinlogExists, binlogExists_);
          DARABONBA_PTR_FROM_JSON(BinlogRowQueryEventEnabled, binlogRowQueryEventEnabled_);
          DARABONBA_PTR_FROM_JSON(CanUpgradeSupportBinlogRowQueryEvents, canUpgradeSupportBinlogRowQueryEvents_);
          DARABONBA_PTR_FROM_JSON(HasTable, hasTable_);
          DARABONBA_PTR_FROM_JSON(SupportBinlogRowQueryEvents, supportBinlogRowQueryEvents_);
        };
        CheckResult() = default ;
        CheckResult(const CheckResult &) = default ;
        CheckResult(CheckResult &&) = default ;
        CheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckResult() = default ;
        CheckResult& operator=(const CheckResult &) = default ;
        CheckResult& operator=(CheckResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->binlogExists_ == nullptr
        && this->binlogRowQueryEventEnabled_ == nullptr && this->canUpgradeSupportBinlogRowQueryEvents_ == nullptr && this->hasTable_ == nullptr && this->supportBinlogRowQueryEvents_ == nullptr; };
        // binlogExists Field Functions 
        bool hasBinlogExists() const { return this->binlogExists_ != nullptr;};
        void deleteBinlogExists() { this->binlogExists_ = nullptr;};
        inline bool getBinlogExists() const { DARABONBA_PTR_GET_DEFAULT(binlogExists_, false) };
        inline CheckResult& setBinlogExists(bool binlogExists) { DARABONBA_PTR_SET_VALUE(binlogExists_, binlogExists) };


        // binlogRowQueryEventEnabled Field Functions 
        bool hasBinlogRowQueryEventEnabled() const { return this->binlogRowQueryEventEnabled_ != nullptr;};
        void deleteBinlogRowQueryEventEnabled() { this->binlogRowQueryEventEnabled_ = nullptr;};
        inline bool getBinlogRowQueryEventEnabled() const { DARABONBA_PTR_GET_DEFAULT(binlogRowQueryEventEnabled_, false) };
        inline CheckResult& setBinlogRowQueryEventEnabled(bool binlogRowQueryEventEnabled) { DARABONBA_PTR_SET_VALUE(binlogRowQueryEventEnabled_, binlogRowQueryEventEnabled) };


        // canUpgradeSupportBinlogRowQueryEvents Field Functions 
        bool hasCanUpgradeSupportBinlogRowQueryEvents() const { return this->canUpgradeSupportBinlogRowQueryEvents_ != nullptr;};
        void deleteCanUpgradeSupportBinlogRowQueryEvents() { this->canUpgradeSupportBinlogRowQueryEvents_ = nullptr;};
        inline bool getCanUpgradeSupportBinlogRowQueryEvents() const { DARABONBA_PTR_GET_DEFAULT(canUpgradeSupportBinlogRowQueryEvents_, false) };
        inline CheckResult& setCanUpgradeSupportBinlogRowQueryEvents(bool canUpgradeSupportBinlogRowQueryEvents) { DARABONBA_PTR_SET_VALUE(canUpgradeSupportBinlogRowQueryEvents_, canUpgradeSupportBinlogRowQueryEvents) };


        // hasTable Field Functions 
        bool hasHasTable() const { return this->hasTable_ != nullptr;};
        void deleteHasTable() { this->hasTable_ = nullptr;};
        inline bool getHasTable() const { DARABONBA_PTR_GET_DEFAULT(hasTable_, false) };
        inline CheckResult& setHasTable(bool hasTable) { DARABONBA_PTR_SET_VALUE(hasTable_, hasTable) };


        // supportBinlogRowQueryEvents Field Functions 
        bool hasSupportBinlogRowQueryEvents() const { return this->supportBinlogRowQueryEvents_ != nullptr;};
        void deleteSupportBinlogRowQueryEvents() { this->supportBinlogRowQueryEvents_ = nullptr;};
        inline bool getSupportBinlogRowQueryEvents() const { DARABONBA_PTR_GET_DEFAULT(supportBinlogRowQueryEvents_, false) };
        inline CheckResult& setSupportBinlogRowQueryEvents(bool supportBinlogRowQueryEvents) { DARABONBA_PTR_SET_VALUE(supportBinlogRowQueryEvents_, supportBinlogRowQueryEvents) };


      protected:
        shared_ptr<bool> binlogExists_ {};
        shared_ptr<bool> binlogRowQueryEventEnabled_ {};
        shared_ptr<bool> canUpgradeSupportBinlogRowQueryEvents_ {};
        shared_ptr<bool> hasTable_ {};
        shared_ptr<bool> supportBinlogRowQueryEvents_ {};
      };

      virtual bool empty() const override { return this->checkResult_ == nullptr; };
      // checkResult Field Functions 
      bool hasCheckResult() const { return this->checkResult_ != nullptr;};
      void deleteCheckResult() { this->checkResult_ = nullptr;};
      inline const Data::CheckResult & getCheckResult() const { DARABONBA_PTR_GET_CONST(checkResult_, Data::CheckResult) };
      inline Data::CheckResult getCheckResult() { DARABONBA_PTR_GET(checkResult_, Data::CheckResult) };
      inline Data& setCheckResult(const Data::CheckResult & checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };
      inline Data& setCheckResult(Data::CheckResult && checkResult) { DARABONBA_PTR_SET_RVALUE(checkResult_, checkResult) };


    protected:
      shared_ptr<Data::CheckResult> checkResult_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const PreCheckSqlFlashbackTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, PreCheckSqlFlashbackTaskResponseBody::Data) };
    inline PreCheckSqlFlashbackTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, PreCheckSqlFlashbackTaskResponseBody::Data) };
    inline PreCheckSqlFlashbackTaskResponseBody& setData(const PreCheckSqlFlashbackTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PreCheckSqlFlashbackTaskResponseBody& setData(PreCheckSqlFlashbackTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PreCheckSqlFlashbackTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreCheckSqlFlashbackTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline PreCheckSqlFlashbackTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<PreCheckSqlFlashbackTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
