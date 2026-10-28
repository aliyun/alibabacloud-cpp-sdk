// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUTILIZATIONOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUTILIZATIONOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaUtilizationOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUtilizationOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(GeneratedAt, generatedAt_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(QuotaOverview, quotaOverview_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUtilizationOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(GeneratedAt, generatedAt_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(QuotaOverview, quotaOverview_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQuotaUtilizationOverviewResponseBody() = default ;
    GetQuotaUtilizationOverviewResponseBody(const GetQuotaUtilizationOverviewResponseBody &) = default ;
    GetQuotaUtilizationOverviewResponseBody(GetQuotaUtilizationOverviewResponseBody &&) = default ;
    GetQuotaUtilizationOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUtilizationOverviewResponseBody() = default ;
    GetQuotaUtilizationOverviewResponseBody& operator=(const GetQuotaUtilizationOverviewResponseBody &) = default ;
    GetQuotaUtilizationOverviewResponseBody& operator=(GetQuotaUtilizationOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaOverview : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaOverview& obj) { 
        DARABONBA_PTR_TO_JSON(InUse, inUse_);
        DARABONBA_PTR_TO_JSON(Over80Percent, over80Percent_);
        DARABONBA_PTR_TO_JSON(Over95Percent, over95Percent_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaOverview& obj) { 
        DARABONBA_PTR_FROM_JSON(InUse, inUse_);
        DARABONBA_PTR_FROM_JSON(Over80Percent, over80Percent_);
        DARABONBA_PTR_FROM_JSON(Over95Percent, over95Percent_);
      };
      QuotaOverview() = default ;
      QuotaOverview(const QuotaOverview &) = default ;
      QuotaOverview(QuotaOverview &&) = default ;
      QuotaOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaOverview() = default ;
      QuotaOverview& operator=(const QuotaOverview &) = default ;
      QuotaOverview& operator=(QuotaOverview &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Over95Percent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Over95Percent& obj) { 
          DARABONBA_PTR_TO_JSON(Adjustable, adjustable_);
          DARABONBA_PTR_TO_JSON(AdjustableRatio, adjustableRatio_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, Over95Percent& obj) { 
          DARABONBA_PTR_FROM_JSON(Adjustable, adjustable_);
          DARABONBA_PTR_FROM_JSON(AdjustableRatio, adjustableRatio_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        Over95Percent() = default ;
        Over95Percent(const Over95Percent &) = default ;
        Over95Percent(Over95Percent &&) = default ;
        Over95Percent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Over95Percent() = default ;
        Over95Percent& operator=(const Over95Percent &) = default ;
        Over95Percent& operator=(Over95Percent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjustable_ == nullptr
        && this->adjustableRatio_ == nullptr && this->total_ == nullptr; };
        // adjustable Field Functions 
        bool hasAdjustable() const { return this->adjustable_ != nullptr;};
        void deleteAdjustable() { this->adjustable_ = nullptr;};
        inline int64_t getAdjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, 0L) };
        inline Over95Percent& setAdjustable(int64_t adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


        // adjustableRatio Field Functions 
        bool hasAdjustableRatio() const { return this->adjustableRatio_ != nullptr;};
        void deleteAdjustableRatio() { this->adjustableRatio_ = nullptr;};
        inline double getAdjustableRatio() const { DARABONBA_PTR_GET_DEFAULT(adjustableRatio_, 0.0) };
        inline Over95Percent& setAdjustableRatio(double adjustableRatio) { DARABONBA_PTR_SET_VALUE(adjustableRatio_, adjustableRatio) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Over95Percent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int64_t> adjustable_ {};
        shared_ptr<double> adjustableRatio_ {};
        shared_ptr<int64_t> total_ {};
      };

      class Over80Percent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Over80Percent& obj) { 
          DARABONBA_PTR_TO_JSON(Adjustable, adjustable_);
          DARABONBA_PTR_TO_JSON(AdjustableRatio, adjustableRatio_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, Over80Percent& obj) { 
          DARABONBA_PTR_FROM_JSON(Adjustable, adjustable_);
          DARABONBA_PTR_FROM_JSON(AdjustableRatio, adjustableRatio_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        Over80Percent() = default ;
        Over80Percent(const Over80Percent &) = default ;
        Over80Percent(Over80Percent &&) = default ;
        Over80Percent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Over80Percent() = default ;
        Over80Percent& operator=(const Over80Percent &) = default ;
        Over80Percent& operator=(Over80Percent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjustable_ == nullptr
        && this->adjustableRatio_ == nullptr && this->total_ == nullptr; };
        // adjustable Field Functions 
        bool hasAdjustable() const { return this->adjustable_ != nullptr;};
        void deleteAdjustable() { this->adjustable_ = nullptr;};
        inline int64_t getAdjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, 0L) };
        inline Over80Percent& setAdjustable(int64_t adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


        // adjustableRatio Field Functions 
        bool hasAdjustableRatio() const { return this->adjustableRatio_ != nullptr;};
        void deleteAdjustableRatio() { this->adjustableRatio_ = nullptr;};
        inline double getAdjustableRatio() const { DARABONBA_PTR_GET_DEFAULT(adjustableRatio_, 0.0) };
        inline Over80Percent& setAdjustableRatio(double adjustableRatio) { DARABONBA_PTR_SET_VALUE(adjustableRatio_, adjustableRatio) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline Over80Percent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int64_t> adjustable_ {};
        shared_ptr<double> adjustableRatio_ {};
        shared_ptr<int64_t> total_ {};
      };

      class InUse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InUse& obj) { 
          DARABONBA_PTR_TO_JSON(Adjustable, adjustable_);
          DARABONBA_PTR_TO_JSON(AdjustableRatio, adjustableRatio_);
          DARABONBA_PTR_TO_JSON(Total, total_);
        };
        friend void from_json(const Darabonba::Json& j, InUse& obj) { 
          DARABONBA_PTR_FROM_JSON(Adjustable, adjustable_);
          DARABONBA_PTR_FROM_JSON(AdjustableRatio, adjustableRatio_);
          DARABONBA_PTR_FROM_JSON(Total, total_);
        };
        InUse() = default ;
        InUse(const InUse &) = default ;
        InUse(InUse &&) = default ;
        InUse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InUse() = default ;
        InUse& operator=(const InUse &) = default ;
        InUse& operator=(InUse &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adjustable_ == nullptr
        && this->adjustableRatio_ == nullptr && this->total_ == nullptr; };
        // adjustable Field Functions 
        bool hasAdjustable() const { return this->adjustable_ != nullptr;};
        void deleteAdjustable() { this->adjustable_ = nullptr;};
        inline int64_t getAdjustable() const { DARABONBA_PTR_GET_DEFAULT(adjustable_, 0L) };
        inline InUse& setAdjustable(int64_t adjustable) { DARABONBA_PTR_SET_VALUE(adjustable_, adjustable) };


        // adjustableRatio Field Functions 
        bool hasAdjustableRatio() const { return this->adjustableRatio_ != nullptr;};
        void deleteAdjustableRatio() { this->adjustableRatio_ = nullptr;};
        inline double getAdjustableRatio() const { DARABONBA_PTR_GET_DEFAULT(adjustableRatio_, 0.0) };
        inline InUse& setAdjustableRatio(double adjustableRatio) { DARABONBA_PTR_SET_VALUE(adjustableRatio_, adjustableRatio) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline InUse& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      protected:
        shared_ptr<int64_t> adjustable_ {};
        shared_ptr<double> adjustableRatio_ {};
        shared_ptr<int64_t> total_ {};
      };

      virtual bool empty() const override { return this->inUse_ == nullptr
        && this->over80Percent_ == nullptr && this->over95Percent_ == nullptr; };
      // inUse Field Functions 
      bool hasInUse() const { return this->inUse_ != nullptr;};
      void deleteInUse() { this->inUse_ = nullptr;};
      inline const QuotaOverview::InUse & getInUse() const { DARABONBA_PTR_GET_CONST(inUse_, QuotaOverview::InUse) };
      inline QuotaOverview::InUse getInUse() { DARABONBA_PTR_GET(inUse_, QuotaOverview::InUse) };
      inline QuotaOverview& setInUse(const QuotaOverview::InUse & inUse) { DARABONBA_PTR_SET_VALUE(inUse_, inUse) };
      inline QuotaOverview& setInUse(QuotaOverview::InUse && inUse) { DARABONBA_PTR_SET_RVALUE(inUse_, inUse) };


      // over80Percent Field Functions 
      bool hasOver80Percent() const { return this->over80Percent_ != nullptr;};
      void deleteOver80Percent() { this->over80Percent_ = nullptr;};
      inline const QuotaOverview::Over80Percent & getOver80Percent() const { DARABONBA_PTR_GET_CONST(over80Percent_, QuotaOverview::Over80Percent) };
      inline QuotaOverview::Over80Percent getOver80Percent() { DARABONBA_PTR_GET(over80Percent_, QuotaOverview::Over80Percent) };
      inline QuotaOverview& setOver80Percent(const QuotaOverview::Over80Percent & over80Percent) { DARABONBA_PTR_SET_VALUE(over80Percent_, over80Percent) };
      inline QuotaOverview& setOver80Percent(QuotaOverview::Over80Percent && over80Percent) { DARABONBA_PTR_SET_RVALUE(over80Percent_, over80Percent) };


      // over95Percent Field Functions 
      bool hasOver95Percent() const { return this->over95Percent_ != nullptr;};
      void deleteOver95Percent() { this->over95Percent_ = nullptr;};
      inline const QuotaOverview::Over95Percent & getOver95Percent() const { DARABONBA_PTR_GET_CONST(over95Percent_, QuotaOverview::Over95Percent) };
      inline QuotaOverview::Over95Percent getOver95Percent() { DARABONBA_PTR_GET(over95Percent_, QuotaOverview::Over95Percent) };
      inline QuotaOverview& setOver95Percent(const QuotaOverview::Over95Percent & over95Percent) { DARABONBA_PTR_SET_VALUE(over95Percent_, over95Percent) };
      inline QuotaOverview& setOver95Percent(QuotaOverview::Over95Percent && over95Percent) { DARABONBA_PTR_SET_RVALUE(over95Percent_, over95Percent) };


    protected:
      shared_ptr<QuotaOverview::InUse> inUse_ {};
      shared_ptr<QuotaOverview::Over80Percent> over80Percent_ {};
      shared_ptr<QuotaOverview::Over95Percent> over95Percent_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMsg_ == nullptr && this->generatedAt_ == nullptr && this->message_ == nullptr && this->quotaOverview_ == nullptr && this->requestId_ == nullptr
        && this->status_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetQuotaUtilizationOverviewResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetQuotaUtilizationOverviewResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // generatedAt Field Functions 
    bool hasGeneratedAt() const { return this->generatedAt_ != nullptr;};
    void deleteGeneratedAt() { this->generatedAt_ = nullptr;};
    inline string getGeneratedAt() const { DARABONBA_PTR_GET_DEFAULT(generatedAt_, "") };
    inline GetQuotaUtilizationOverviewResponseBody& setGeneratedAt(string generatedAt) { DARABONBA_PTR_SET_VALUE(generatedAt_, generatedAt) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQuotaUtilizationOverviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // quotaOverview Field Functions 
    bool hasQuotaOverview() const { return this->quotaOverview_ != nullptr;};
    void deleteQuotaOverview() { this->quotaOverview_ = nullptr;};
    inline const GetQuotaUtilizationOverviewResponseBody::QuotaOverview & getQuotaOverview() const { DARABONBA_PTR_GET_CONST(quotaOverview_, GetQuotaUtilizationOverviewResponseBody::QuotaOverview) };
    inline GetQuotaUtilizationOverviewResponseBody::QuotaOverview getQuotaOverview() { DARABONBA_PTR_GET(quotaOverview_, GetQuotaUtilizationOverviewResponseBody::QuotaOverview) };
    inline GetQuotaUtilizationOverviewResponseBody& setQuotaOverview(const GetQuotaUtilizationOverviewResponseBody::QuotaOverview & quotaOverview) { DARABONBA_PTR_SET_VALUE(quotaOverview_, quotaOverview) };
    inline GetQuotaUtilizationOverviewResponseBody& setQuotaOverview(GetQuotaUtilizationOverviewResponseBody::QuotaOverview && quotaOverview) { DARABONBA_PTR_SET_RVALUE(quotaOverview_, quotaOverview) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaUtilizationOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQuotaUtilizationOverviewResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQuotaUtilizationOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> generatedAt_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetQuotaUtilizationOverviewResponseBody::QuotaOverview> quotaOverview_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
