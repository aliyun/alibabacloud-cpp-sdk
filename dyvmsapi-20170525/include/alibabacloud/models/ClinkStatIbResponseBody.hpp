// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKSTATIBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKSTATIBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkStatIbResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkStatIbResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkStatIbResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkStatIbResponseBody() = default ;
    ClinkStatIbResponseBody(const ClinkStatIbResponseBody &) = default ;
    ClinkStatIbResponseBody(ClinkStatIbResponseBody &&) = default ;
    ClinkStatIbResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkStatIbResponseBody() = default ;
    ClinkStatIbResponseBody& operator=(const ClinkStatIbResponseBody &) = default ;
    ClinkStatIbResponseBody& operator=(ClinkStatIbResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(StatIb, statIb_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(StatIb, statIb_);
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
      class StatIb : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatIb& obj) { 
          DARABONBA_PTR_TO_JSON(AnsweredAgentCount, answeredAgentCount_);
          DARABONBA_PTR_TO_JSON(AvgAnsweredAgentCount, avgAnsweredAgentCount_);
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(Hotline, hotline_);
          DARABONBA_PTR_TO_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_TO_JSON(IbAgentCount, ibAgentCount_);
          DARABONBA_PTR_TO_JSON(IbAnsweredCount, ibAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbAnsweredQueueDuration, ibAnsweredQueueDuration_);
          DARABONBA_PTR_TO_JSON(IbAnsweredRate, ibAnsweredRate_);
          DARABONBA_PTR_TO_JSON(IbAvgAnsweredQueueDuration, ibAvgAnsweredQueueDuration_);
          DARABONBA_PTR_TO_JSON(IbAvgBridgeDuration, ibAvgBridgeDuration_);
          DARABONBA_PTR_TO_JSON(IbAvgDuration, ibAvgDuration_);
          DARABONBA_PTR_TO_JSON(IbAvgQueueDuration, ibAvgQueueDuration_);
          DARABONBA_PTR_TO_JSON(IbBotAnsweredCount, ibBotAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbBotUnansweredCount, ibBotUnansweredCount_);
          DARABONBA_PTR_TO_JSON(IbBridgeDuration, ibBridgeDuration_);
          DARABONBA_PTR_TO_JSON(IbDirectAgentCount, ibDirectAgentCount_);
          DARABONBA_PTR_TO_JSON(IbDirectQueueCount, ibDirectQueueCount_);
          DARABONBA_PTR_TO_JSON(IbDirectTelCount, ibDirectTelCount_);
          DARABONBA_PTR_TO_JSON(IbIvrAnsweredCount, ibIvrAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbIvrCount, ibIvrCount_);
          DARABONBA_PTR_TO_JSON(IbIvrNoQueueCount, ibIvrNoQueueCount_);
          DARABONBA_PTR_TO_JSON(IbIvrQueueCount, ibIvrQueueCount_);
          DARABONBA_PTR_TO_JSON(IbIvrQuickUnlinkCount, ibIvrQuickUnlinkCount_);
          DARABONBA_PTR_TO_JSON(IbIvrSystemAnsweredCount, ibIvrSystemAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbIvrUnAnsweredCount, ibIvrUnAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbNoIvrCount, ibNoIvrCount_);
          DARABONBA_PTR_TO_JSON(IbQueueCount, ibQueueCount_);
          DARABONBA_PTR_TO_JSON(IbQueueDuration, ibQueueDuration_);
          DARABONBA_PTR_TO_JSON(IbRestrictCount, ibRestrictCount_);
          DARABONBA_PTR_TO_JSON(IbRingingRangeCount, ibRingingRangeCount_);
          DARABONBA_PTR_TO_JSON(IbRingingRangeRate, ibRingingRangeRate_);
          DARABONBA_PTR_TO_JSON(IbSystemAnsweredCount, ibSystemAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbSystemUnAnsweredCount, ibSystemUnAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IbTotalCount, ibTotalCount_);
          DARABONBA_PTR_TO_JSON(IbUnansweredCount, ibUnansweredCount_);
          DARABONBA_PTR_TO_JSON(IbVipCount, ibVipCount_);
          DARABONBA_PTR_TO_JSON(IbWebCount, ibWebCount_);
          DARABONBA_PTR_TO_JSON(IbtotalDuration, ibtotalDuration_);
          DARABONBA_PTR_TO_JSON(IvrDirectTelAnsweredCount, ivrDirectTelAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IvrDirectTelCount, ivrDirectTelCount_);
          DARABONBA_PTR_TO_JSON(IvrDirectTelSysAnsweredCount, ivrDirectTelSysAnsweredCount_);
          DARABONBA_PTR_TO_JSON(IvrDirectTelUnansweredCount, ivrDirectTelUnansweredCount_);
          DARABONBA_PTR_TO_JSON(QuickUnlinkCount, quickUnlinkCount_);
          DARABONBA_PTR_TO_JSON(RepeatHotlineCount, repeatHotlineCount_);
        };
        friend void from_json(const Darabonba::Json& j, StatIb& obj) { 
          DARABONBA_PTR_FROM_JSON(AnsweredAgentCount, answeredAgentCount_);
          DARABONBA_PTR_FROM_JSON(AvgAnsweredAgentCount, avgAnsweredAgentCount_);
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(Hotline, hotline_);
          DARABONBA_PTR_FROM_JSON(HotlineName, hotlineName_);
          DARABONBA_PTR_FROM_JSON(IbAgentCount, ibAgentCount_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredCount, ibAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredQueueDuration, ibAnsweredQueueDuration_);
          DARABONBA_PTR_FROM_JSON(IbAnsweredRate, ibAnsweredRate_);
          DARABONBA_PTR_FROM_JSON(IbAvgAnsweredQueueDuration, ibAvgAnsweredQueueDuration_);
          DARABONBA_PTR_FROM_JSON(IbAvgBridgeDuration, ibAvgBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(IbAvgDuration, ibAvgDuration_);
          DARABONBA_PTR_FROM_JSON(IbAvgQueueDuration, ibAvgQueueDuration_);
          DARABONBA_PTR_FROM_JSON(IbBotAnsweredCount, ibBotAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbBotUnansweredCount, ibBotUnansweredCount_);
          DARABONBA_PTR_FROM_JSON(IbBridgeDuration, ibBridgeDuration_);
          DARABONBA_PTR_FROM_JSON(IbDirectAgentCount, ibDirectAgentCount_);
          DARABONBA_PTR_FROM_JSON(IbDirectQueueCount, ibDirectQueueCount_);
          DARABONBA_PTR_FROM_JSON(IbDirectTelCount, ibDirectTelCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrAnsweredCount, ibIvrAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrCount, ibIvrCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrNoQueueCount, ibIvrNoQueueCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrQueueCount, ibIvrQueueCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrQuickUnlinkCount, ibIvrQuickUnlinkCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrSystemAnsweredCount, ibIvrSystemAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbIvrUnAnsweredCount, ibIvrUnAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbNoIvrCount, ibNoIvrCount_);
          DARABONBA_PTR_FROM_JSON(IbQueueCount, ibQueueCount_);
          DARABONBA_PTR_FROM_JSON(IbQueueDuration, ibQueueDuration_);
          DARABONBA_PTR_FROM_JSON(IbRestrictCount, ibRestrictCount_);
          DARABONBA_PTR_FROM_JSON(IbRingingRangeCount, ibRingingRangeCount_);
          DARABONBA_PTR_FROM_JSON(IbRingingRangeRate, ibRingingRangeRate_);
          DARABONBA_PTR_FROM_JSON(IbSystemAnsweredCount, ibSystemAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbSystemUnAnsweredCount, ibSystemUnAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IbTotalCount, ibTotalCount_);
          DARABONBA_PTR_FROM_JSON(IbUnansweredCount, ibUnansweredCount_);
          DARABONBA_PTR_FROM_JSON(IbVipCount, ibVipCount_);
          DARABONBA_PTR_FROM_JSON(IbWebCount, ibWebCount_);
          DARABONBA_PTR_FROM_JSON(IbtotalDuration, ibtotalDuration_);
          DARABONBA_PTR_FROM_JSON(IvrDirectTelAnsweredCount, ivrDirectTelAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IvrDirectTelCount, ivrDirectTelCount_);
          DARABONBA_PTR_FROM_JSON(IvrDirectTelSysAnsweredCount, ivrDirectTelSysAnsweredCount_);
          DARABONBA_PTR_FROM_JSON(IvrDirectTelUnansweredCount, ivrDirectTelUnansweredCount_);
          DARABONBA_PTR_FROM_JSON(QuickUnlinkCount, quickUnlinkCount_);
          DARABONBA_PTR_FROM_JSON(RepeatHotlineCount, repeatHotlineCount_);
        };
        StatIb() = default ;
        StatIb(const StatIb &) = default ;
        StatIb(StatIb &&) = default ;
        StatIb(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatIb() = default ;
        StatIb& operator=(const StatIb &) = default ;
        StatIb& operator=(StatIb &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answeredAgentCount_ == nullptr
        && this->avgAnsweredAgentCount_ == nullptr && this->date_ == nullptr && this->hotline_ == nullptr && this->hotlineName_ == nullptr && this->ibAgentCount_ == nullptr
        && this->ibAnsweredCount_ == nullptr && this->ibAnsweredQueueDuration_ == nullptr && this->ibAnsweredRate_ == nullptr && this->ibAvgAnsweredQueueDuration_ == nullptr && this->ibAvgBridgeDuration_ == nullptr
        && this->ibAvgDuration_ == nullptr && this->ibAvgQueueDuration_ == nullptr && this->ibBotAnsweredCount_ == nullptr && this->ibBotUnansweredCount_ == nullptr && this->ibBridgeDuration_ == nullptr
        && this->ibDirectAgentCount_ == nullptr && this->ibDirectQueueCount_ == nullptr && this->ibDirectTelCount_ == nullptr && this->ibIvrAnsweredCount_ == nullptr && this->ibIvrCount_ == nullptr
        && this->ibIvrNoQueueCount_ == nullptr && this->ibIvrQueueCount_ == nullptr && this->ibIvrQuickUnlinkCount_ == nullptr && this->ibIvrSystemAnsweredCount_ == nullptr && this->ibIvrUnAnsweredCount_ == nullptr
        && this->ibNoIvrCount_ == nullptr && this->ibQueueCount_ == nullptr && this->ibQueueDuration_ == nullptr && this->ibRestrictCount_ == nullptr && this->ibRingingRangeCount_ == nullptr
        && this->ibRingingRangeRate_ == nullptr && this->ibSystemAnsweredCount_ == nullptr && this->ibSystemUnAnsweredCount_ == nullptr && this->ibTotalCount_ == nullptr && this->ibUnansweredCount_ == nullptr
        && this->ibVipCount_ == nullptr && this->ibWebCount_ == nullptr && this->ibtotalDuration_ == nullptr && this->ivrDirectTelAnsweredCount_ == nullptr && this->ivrDirectTelCount_ == nullptr
        && this->ivrDirectTelSysAnsweredCount_ == nullptr && this->ivrDirectTelUnansweredCount_ == nullptr && this->quickUnlinkCount_ == nullptr && this->repeatHotlineCount_ == nullptr; };
        // answeredAgentCount Field Functions 
        bool hasAnsweredAgentCount() const { return this->answeredAgentCount_ != nullptr;};
        void deleteAnsweredAgentCount() { this->answeredAgentCount_ = nullptr;};
        inline int64_t getAnsweredAgentCount() const { DARABONBA_PTR_GET_DEFAULT(answeredAgentCount_, 0L) };
        inline StatIb& setAnsweredAgentCount(int64_t answeredAgentCount) { DARABONBA_PTR_SET_VALUE(answeredAgentCount_, answeredAgentCount) };


        // avgAnsweredAgentCount Field Functions 
        bool hasAvgAnsweredAgentCount() const { return this->avgAnsweredAgentCount_ != nullptr;};
        void deleteAvgAnsweredAgentCount() { this->avgAnsweredAgentCount_ = nullptr;};
        inline int64_t getAvgAnsweredAgentCount() const { DARABONBA_PTR_GET_DEFAULT(avgAnsweredAgentCount_, 0L) };
        inline StatIb& setAvgAnsweredAgentCount(int64_t avgAnsweredAgentCount) { DARABONBA_PTR_SET_VALUE(avgAnsweredAgentCount_, avgAnsweredAgentCount) };


        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline StatIb& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // hotline Field Functions 
        bool hasHotline() const { return this->hotline_ != nullptr;};
        void deleteHotline() { this->hotline_ = nullptr;};
        inline string getHotline() const { DARABONBA_PTR_GET_DEFAULT(hotline_, "") };
        inline StatIb& setHotline(string hotline) { DARABONBA_PTR_SET_VALUE(hotline_, hotline) };


        // hotlineName Field Functions 
        bool hasHotlineName() const { return this->hotlineName_ != nullptr;};
        void deleteHotlineName() { this->hotlineName_ = nullptr;};
        inline string getHotlineName() const { DARABONBA_PTR_GET_DEFAULT(hotlineName_, "") };
        inline StatIb& setHotlineName(string hotlineName) { DARABONBA_PTR_SET_VALUE(hotlineName_, hotlineName) };


        // ibAgentCount Field Functions 
        bool hasIbAgentCount() const { return this->ibAgentCount_ != nullptr;};
        void deleteIbAgentCount() { this->ibAgentCount_ = nullptr;};
        inline int64_t getIbAgentCount() const { DARABONBA_PTR_GET_DEFAULT(ibAgentCount_, 0L) };
        inline StatIb& setIbAgentCount(int64_t ibAgentCount) { DARABONBA_PTR_SET_VALUE(ibAgentCount_, ibAgentCount) };


        // ibAnsweredCount Field Functions 
        bool hasIbAnsweredCount() const { return this->ibAnsweredCount_ != nullptr;};
        void deleteIbAnsweredCount() { this->ibAnsweredCount_ = nullptr;};
        inline int64_t getIbAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibAnsweredCount_, 0L) };
        inline StatIb& setIbAnsweredCount(int64_t ibAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibAnsweredCount_, ibAnsweredCount) };


        // ibAnsweredQueueDuration Field Functions 
        bool hasIbAnsweredQueueDuration() const { return this->ibAnsweredQueueDuration_ != nullptr;};
        void deleteIbAnsweredQueueDuration() { this->ibAnsweredQueueDuration_ = nullptr;};
        inline int64_t getIbAnsweredQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(ibAnsweredQueueDuration_, 0L) };
        inline StatIb& setIbAnsweredQueueDuration(int64_t ibAnsweredQueueDuration) { DARABONBA_PTR_SET_VALUE(ibAnsweredQueueDuration_, ibAnsweredQueueDuration) };


        // ibAnsweredRate Field Functions 
        bool hasIbAnsweredRate() const { return this->ibAnsweredRate_ != nullptr;};
        void deleteIbAnsweredRate() { this->ibAnsweredRate_ = nullptr;};
        inline double getIbAnsweredRate() const { DARABONBA_PTR_GET_DEFAULT(ibAnsweredRate_, 0.0) };
        inline StatIb& setIbAnsweredRate(double ibAnsweredRate) { DARABONBA_PTR_SET_VALUE(ibAnsweredRate_, ibAnsweredRate) };


        // ibAvgAnsweredQueueDuration Field Functions 
        bool hasIbAvgAnsweredQueueDuration() const { return this->ibAvgAnsweredQueueDuration_ != nullptr;};
        void deleteIbAvgAnsweredQueueDuration() { this->ibAvgAnsweredQueueDuration_ = nullptr;};
        inline int64_t getIbAvgAnsweredQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(ibAvgAnsweredQueueDuration_, 0L) };
        inline StatIb& setIbAvgAnsweredQueueDuration(int64_t ibAvgAnsweredQueueDuration) { DARABONBA_PTR_SET_VALUE(ibAvgAnsweredQueueDuration_, ibAvgAnsweredQueueDuration) };


        // ibAvgBridgeDuration Field Functions 
        bool hasIbAvgBridgeDuration() const { return this->ibAvgBridgeDuration_ != nullptr;};
        void deleteIbAvgBridgeDuration() { this->ibAvgBridgeDuration_ = nullptr;};
        inline int64_t getIbAvgBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(ibAvgBridgeDuration_, 0L) };
        inline StatIb& setIbAvgBridgeDuration(int64_t ibAvgBridgeDuration) { DARABONBA_PTR_SET_VALUE(ibAvgBridgeDuration_, ibAvgBridgeDuration) };


        // ibAvgDuration Field Functions 
        bool hasIbAvgDuration() const { return this->ibAvgDuration_ != nullptr;};
        void deleteIbAvgDuration() { this->ibAvgDuration_ = nullptr;};
        inline int64_t getIbAvgDuration() const { DARABONBA_PTR_GET_DEFAULT(ibAvgDuration_, 0L) };
        inline StatIb& setIbAvgDuration(int64_t ibAvgDuration) { DARABONBA_PTR_SET_VALUE(ibAvgDuration_, ibAvgDuration) };


        // ibAvgQueueDuration Field Functions 
        bool hasIbAvgQueueDuration() const { return this->ibAvgQueueDuration_ != nullptr;};
        void deleteIbAvgQueueDuration() { this->ibAvgQueueDuration_ = nullptr;};
        inline int64_t getIbAvgQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(ibAvgQueueDuration_, 0L) };
        inline StatIb& setIbAvgQueueDuration(int64_t ibAvgQueueDuration) { DARABONBA_PTR_SET_VALUE(ibAvgQueueDuration_, ibAvgQueueDuration) };


        // ibBotAnsweredCount Field Functions 
        bool hasIbBotAnsweredCount() const { return this->ibBotAnsweredCount_ != nullptr;};
        void deleteIbBotAnsweredCount() { this->ibBotAnsweredCount_ = nullptr;};
        inline int64_t getIbBotAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibBotAnsweredCount_, 0L) };
        inline StatIb& setIbBotAnsweredCount(int64_t ibBotAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibBotAnsweredCount_, ibBotAnsweredCount) };


        // ibBotUnansweredCount Field Functions 
        bool hasIbBotUnansweredCount() const { return this->ibBotUnansweredCount_ != nullptr;};
        void deleteIbBotUnansweredCount() { this->ibBotUnansweredCount_ = nullptr;};
        inline int64_t getIbBotUnansweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibBotUnansweredCount_, 0L) };
        inline StatIb& setIbBotUnansweredCount(int64_t ibBotUnansweredCount) { DARABONBA_PTR_SET_VALUE(ibBotUnansweredCount_, ibBotUnansweredCount) };


        // ibBridgeDuration Field Functions 
        bool hasIbBridgeDuration() const { return this->ibBridgeDuration_ != nullptr;};
        void deleteIbBridgeDuration() { this->ibBridgeDuration_ = nullptr;};
        inline int64_t getIbBridgeDuration() const { DARABONBA_PTR_GET_DEFAULT(ibBridgeDuration_, 0L) };
        inline StatIb& setIbBridgeDuration(int64_t ibBridgeDuration) { DARABONBA_PTR_SET_VALUE(ibBridgeDuration_, ibBridgeDuration) };


        // ibDirectAgentCount Field Functions 
        bool hasIbDirectAgentCount() const { return this->ibDirectAgentCount_ != nullptr;};
        void deleteIbDirectAgentCount() { this->ibDirectAgentCount_ = nullptr;};
        inline int64_t getIbDirectAgentCount() const { DARABONBA_PTR_GET_DEFAULT(ibDirectAgentCount_, 0L) };
        inline StatIb& setIbDirectAgentCount(int64_t ibDirectAgentCount) { DARABONBA_PTR_SET_VALUE(ibDirectAgentCount_, ibDirectAgentCount) };


        // ibDirectQueueCount Field Functions 
        bool hasIbDirectQueueCount() const { return this->ibDirectQueueCount_ != nullptr;};
        void deleteIbDirectQueueCount() { this->ibDirectQueueCount_ = nullptr;};
        inline int64_t getIbDirectQueueCount() const { DARABONBA_PTR_GET_DEFAULT(ibDirectQueueCount_, 0L) };
        inline StatIb& setIbDirectQueueCount(int64_t ibDirectQueueCount) { DARABONBA_PTR_SET_VALUE(ibDirectQueueCount_, ibDirectQueueCount) };


        // ibDirectTelCount Field Functions 
        bool hasIbDirectTelCount() const { return this->ibDirectTelCount_ != nullptr;};
        void deleteIbDirectTelCount() { this->ibDirectTelCount_ = nullptr;};
        inline int64_t getIbDirectTelCount() const { DARABONBA_PTR_GET_DEFAULT(ibDirectTelCount_, 0L) };
        inline StatIb& setIbDirectTelCount(int64_t ibDirectTelCount) { DARABONBA_PTR_SET_VALUE(ibDirectTelCount_, ibDirectTelCount) };


        // ibIvrAnsweredCount Field Functions 
        bool hasIbIvrAnsweredCount() const { return this->ibIvrAnsweredCount_ != nullptr;};
        void deleteIbIvrAnsweredCount() { this->ibIvrAnsweredCount_ = nullptr;};
        inline int64_t getIbIvrAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrAnsweredCount_, 0L) };
        inline StatIb& setIbIvrAnsweredCount(int64_t ibIvrAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibIvrAnsweredCount_, ibIvrAnsweredCount) };


        // ibIvrCount Field Functions 
        bool hasIbIvrCount() const { return this->ibIvrCount_ != nullptr;};
        void deleteIbIvrCount() { this->ibIvrCount_ = nullptr;};
        inline int64_t getIbIvrCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrCount_, 0L) };
        inline StatIb& setIbIvrCount(int64_t ibIvrCount) { DARABONBA_PTR_SET_VALUE(ibIvrCount_, ibIvrCount) };


        // ibIvrNoQueueCount Field Functions 
        bool hasIbIvrNoQueueCount() const { return this->ibIvrNoQueueCount_ != nullptr;};
        void deleteIbIvrNoQueueCount() { this->ibIvrNoQueueCount_ = nullptr;};
        inline int64_t getIbIvrNoQueueCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrNoQueueCount_, 0L) };
        inline StatIb& setIbIvrNoQueueCount(int64_t ibIvrNoQueueCount) { DARABONBA_PTR_SET_VALUE(ibIvrNoQueueCount_, ibIvrNoQueueCount) };


        // ibIvrQueueCount Field Functions 
        bool hasIbIvrQueueCount() const { return this->ibIvrQueueCount_ != nullptr;};
        void deleteIbIvrQueueCount() { this->ibIvrQueueCount_ = nullptr;};
        inline int64_t getIbIvrQueueCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrQueueCount_, 0L) };
        inline StatIb& setIbIvrQueueCount(int64_t ibIvrQueueCount) { DARABONBA_PTR_SET_VALUE(ibIvrQueueCount_, ibIvrQueueCount) };


        // ibIvrQuickUnlinkCount Field Functions 
        bool hasIbIvrQuickUnlinkCount() const { return this->ibIvrQuickUnlinkCount_ != nullptr;};
        void deleteIbIvrQuickUnlinkCount() { this->ibIvrQuickUnlinkCount_ = nullptr;};
        inline int64_t getIbIvrQuickUnlinkCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrQuickUnlinkCount_, 0L) };
        inline StatIb& setIbIvrQuickUnlinkCount(int64_t ibIvrQuickUnlinkCount) { DARABONBA_PTR_SET_VALUE(ibIvrQuickUnlinkCount_, ibIvrQuickUnlinkCount) };


        // ibIvrSystemAnsweredCount Field Functions 
        bool hasIbIvrSystemAnsweredCount() const { return this->ibIvrSystemAnsweredCount_ != nullptr;};
        void deleteIbIvrSystemAnsweredCount() { this->ibIvrSystemAnsweredCount_ = nullptr;};
        inline int64_t getIbIvrSystemAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrSystemAnsweredCount_, 0L) };
        inline StatIb& setIbIvrSystemAnsweredCount(int64_t ibIvrSystemAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibIvrSystemAnsweredCount_, ibIvrSystemAnsweredCount) };


        // ibIvrUnAnsweredCount Field Functions 
        bool hasIbIvrUnAnsweredCount() const { return this->ibIvrUnAnsweredCount_ != nullptr;};
        void deleteIbIvrUnAnsweredCount() { this->ibIvrUnAnsweredCount_ = nullptr;};
        inline int64_t getIbIvrUnAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibIvrUnAnsweredCount_, 0L) };
        inline StatIb& setIbIvrUnAnsweredCount(int64_t ibIvrUnAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibIvrUnAnsweredCount_, ibIvrUnAnsweredCount) };


        // ibNoIvrCount Field Functions 
        bool hasIbNoIvrCount() const { return this->ibNoIvrCount_ != nullptr;};
        void deleteIbNoIvrCount() { this->ibNoIvrCount_ = nullptr;};
        inline int64_t getIbNoIvrCount() const { DARABONBA_PTR_GET_DEFAULT(ibNoIvrCount_, 0L) };
        inline StatIb& setIbNoIvrCount(int64_t ibNoIvrCount) { DARABONBA_PTR_SET_VALUE(ibNoIvrCount_, ibNoIvrCount) };


        // ibQueueCount Field Functions 
        bool hasIbQueueCount() const { return this->ibQueueCount_ != nullptr;};
        void deleteIbQueueCount() { this->ibQueueCount_ = nullptr;};
        inline int64_t getIbQueueCount() const { DARABONBA_PTR_GET_DEFAULT(ibQueueCount_, 0L) };
        inline StatIb& setIbQueueCount(int64_t ibQueueCount) { DARABONBA_PTR_SET_VALUE(ibQueueCount_, ibQueueCount) };


        // ibQueueDuration Field Functions 
        bool hasIbQueueDuration() const { return this->ibQueueDuration_ != nullptr;};
        void deleteIbQueueDuration() { this->ibQueueDuration_ = nullptr;};
        inline int64_t getIbQueueDuration() const { DARABONBA_PTR_GET_DEFAULT(ibQueueDuration_, 0L) };
        inline StatIb& setIbQueueDuration(int64_t ibQueueDuration) { DARABONBA_PTR_SET_VALUE(ibQueueDuration_, ibQueueDuration) };


        // ibRestrictCount Field Functions 
        bool hasIbRestrictCount() const { return this->ibRestrictCount_ != nullptr;};
        void deleteIbRestrictCount() { this->ibRestrictCount_ = nullptr;};
        inline int64_t getIbRestrictCount() const { DARABONBA_PTR_GET_DEFAULT(ibRestrictCount_, 0L) };
        inline StatIb& setIbRestrictCount(int64_t ibRestrictCount) { DARABONBA_PTR_SET_VALUE(ibRestrictCount_, ibRestrictCount) };


        // ibRingingRangeCount Field Functions 
        bool hasIbRingingRangeCount() const { return this->ibRingingRangeCount_ != nullptr;};
        void deleteIbRingingRangeCount() { this->ibRingingRangeCount_ = nullptr;};
        inline int64_t getIbRingingRangeCount() const { DARABONBA_PTR_GET_DEFAULT(ibRingingRangeCount_, 0L) };
        inline StatIb& setIbRingingRangeCount(int64_t ibRingingRangeCount) { DARABONBA_PTR_SET_VALUE(ibRingingRangeCount_, ibRingingRangeCount) };


        // ibRingingRangeRate Field Functions 
        bool hasIbRingingRangeRate() const { return this->ibRingingRangeRate_ != nullptr;};
        void deleteIbRingingRangeRate() { this->ibRingingRangeRate_ = nullptr;};
        inline double getIbRingingRangeRate() const { DARABONBA_PTR_GET_DEFAULT(ibRingingRangeRate_, 0.0) };
        inline StatIb& setIbRingingRangeRate(double ibRingingRangeRate) { DARABONBA_PTR_SET_VALUE(ibRingingRangeRate_, ibRingingRangeRate) };


        // ibSystemAnsweredCount Field Functions 
        bool hasIbSystemAnsweredCount() const { return this->ibSystemAnsweredCount_ != nullptr;};
        void deleteIbSystemAnsweredCount() { this->ibSystemAnsweredCount_ = nullptr;};
        inline int64_t getIbSystemAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibSystemAnsweredCount_, 0L) };
        inline StatIb& setIbSystemAnsweredCount(int64_t ibSystemAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibSystemAnsweredCount_, ibSystemAnsweredCount) };


        // ibSystemUnAnsweredCount Field Functions 
        bool hasIbSystemUnAnsweredCount() const { return this->ibSystemUnAnsweredCount_ != nullptr;};
        void deleteIbSystemUnAnsweredCount() { this->ibSystemUnAnsweredCount_ = nullptr;};
        inline int64_t getIbSystemUnAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibSystemUnAnsweredCount_, 0L) };
        inline StatIb& setIbSystemUnAnsweredCount(int64_t ibSystemUnAnsweredCount) { DARABONBA_PTR_SET_VALUE(ibSystemUnAnsweredCount_, ibSystemUnAnsweredCount) };


        // ibTotalCount Field Functions 
        bool hasIbTotalCount() const { return this->ibTotalCount_ != nullptr;};
        void deleteIbTotalCount() { this->ibTotalCount_ = nullptr;};
        inline int64_t getIbTotalCount() const { DARABONBA_PTR_GET_DEFAULT(ibTotalCount_, 0L) };
        inline StatIb& setIbTotalCount(int64_t ibTotalCount) { DARABONBA_PTR_SET_VALUE(ibTotalCount_, ibTotalCount) };


        // ibUnansweredCount Field Functions 
        bool hasIbUnansweredCount() const { return this->ibUnansweredCount_ != nullptr;};
        void deleteIbUnansweredCount() { this->ibUnansweredCount_ = nullptr;};
        inline int64_t getIbUnansweredCount() const { DARABONBA_PTR_GET_DEFAULT(ibUnansweredCount_, 0L) };
        inline StatIb& setIbUnansweredCount(int64_t ibUnansweredCount) { DARABONBA_PTR_SET_VALUE(ibUnansweredCount_, ibUnansweredCount) };


        // ibVipCount Field Functions 
        bool hasIbVipCount() const { return this->ibVipCount_ != nullptr;};
        void deleteIbVipCount() { this->ibVipCount_ = nullptr;};
        inline int64_t getIbVipCount() const { DARABONBA_PTR_GET_DEFAULT(ibVipCount_, 0L) };
        inline StatIb& setIbVipCount(int64_t ibVipCount) { DARABONBA_PTR_SET_VALUE(ibVipCount_, ibVipCount) };


        // ibWebCount Field Functions 
        bool hasIbWebCount() const { return this->ibWebCount_ != nullptr;};
        void deleteIbWebCount() { this->ibWebCount_ = nullptr;};
        inline int64_t getIbWebCount() const { DARABONBA_PTR_GET_DEFAULT(ibWebCount_, 0L) };
        inline StatIb& setIbWebCount(int64_t ibWebCount) { DARABONBA_PTR_SET_VALUE(ibWebCount_, ibWebCount) };


        // ibtotalDuration Field Functions 
        bool hasIbtotalDuration() const { return this->ibtotalDuration_ != nullptr;};
        void deleteIbtotalDuration() { this->ibtotalDuration_ = nullptr;};
        inline int64_t getIbtotalDuration() const { DARABONBA_PTR_GET_DEFAULT(ibtotalDuration_, 0L) };
        inline StatIb& setIbtotalDuration(int64_t ibtotalDuration) { DARABONBA_PTR_SET_VALUE(ibtotalDuration_, ibtotalDuration) };


        // ivrDirectTelAnsweredCount Field Functions 
        bool hasIvrDirectTelAnsweredCount() const { return this->ivrDirectTelAnsweredCount_ != nullptr;};
        void deleteIvrDirectTelAnsweredCount() { this->ivrDirectTelAnsweredCount_ = nullptr;};
        inline int64_t getIvrDirectTelAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ivrDirectTelAnsweredCount_, 0L) };
        inline StatIb& setIvrDirectTelAnsweredCount(int64_t ivrDirectTelAnsweredCount) { DARABONBA_PTR_SET_VALUE(ivrDirectTelAnsweredCount_, ivrDirectTelAnsweredCount) };


        // ivrDirectTelCount Field Functions 
        bool hasIvrDirectTelCount() const { return this->ivrDirectTelCount_ != nullptr;};
        void deleteIvrDirectTelCount() { this->ivrDirectTelCount_ = nullptr;};
        inline int64_t getIvrDirectTelCount() const { DARABONBA_PTR_GET_DEFAULT(ivrDirectTelCount_, 0L) };
        inline StatIb& setIvrDirectTelCount(int64_t ivrDirectTelCount) { DARABONBA_PTR_SET_VALUE(ivrDirectTelCount_, ivrDirectTelCount) };


        // ivrDirectTelSysAnsweredCount Field Functions 
        bool hasIvrDirectTelSysAnsweredCount() const { return this->ivrDirectTelSysAnsweredCount_ != nullptr;};
        void deleteIvrDirectTelSysAnsweredCount() { this->ivrDirectTelSysAnsweredCount_ = nullptr;};
        inline int64_t getIvrDirectTelSysAnsweredCount() const { DARABONBA_PTR_GET_DEFAULT(ivrDirectTelSysAnsweredCount_, 0L) };
        inline StatIb& setIvrDirectTelSysAnsweredCount(int64_t ivrDirectTelSysAnsweredCount) { DARABONBA_PTR_SET_VALUE(ivrDirectTelSysAnsweredCount_, ivrDirectTelSysAnsweredCount) };


        // ivrDirectTelUnansweredCount Field Functions 
        bool hasIvrDirectTelUnansweredCount() const { return this->ivrDirectTelUnansweredCount_ != nullptr;};
        void deleteIvrDirectTelUnansweredCount() { this->ivrDirectTelUnansweredCount_ = nullptr;};
        inline int64_t getIvrDirectTelUnansweredCount() const { DARABONBA_PTR_GET_DEFAULT(ivrDirectTelUnansweredCount_, 0L) };
        inline StatIb& setIvrDirectTelUnansweredCount(int64_t ivrDirectTelUnansweredCount) { DARABONBA_PTR_SET_VALUE(ivrDirectTelUnansweredCount_, ivrDirectTelUnansweredCount) };


        // quickUnlinkCount Field Functions 
        bool hasQuickUnlinkCount() const { return this->quickUnlinkCount_ != nullptr;};
        void deleteQuickUnlinkCount() { this->quickUnlinkCount_ = nullptr;};
        inline int64_t getQuickUnlinkCount() const { DARABONBA_PTR_GET_DEFAULT(quickUnlinkCount_, 0L) };
        inline StatIb& setQuickUnlinkCount(int64_t quickUnlinkCount) { DARABONBA_PTR_SET_VALUE(quickUnlinkCount_, quickUnlinkCount) };


        // repeatHotlineCount Field Functions 
        bool hasRepeatHotlineCount() const { return this->repeatHotlineCount_ != nullptr;};
        void deleteRepeatHotlineCount() { this->repeatHotlineCount_ = nullptr;};
        inline int64_t getRepeatHotlineCount() const { DARABONBA_PTR_GET_DEFAULT(repeatHotlineCount_, 0L) };
        inline StatIb& setRepeatHotlineCount(int64_t repeatHotlineCount) { DARABONBA_PTR_SET_VALUE(repeatHotlineCount_, repeatHotlineCount) };


      protected:
        // 接听电话座席数
        shared_ptr<int64_t> answeredAgentCount_ {};
        // 人均接听量
        shared_ptr<int64_t> avgAnsweredAgentCount_ {};
        // 日期（统计方式2为同步日期；统计方式3为分时信息，例 0-1时）
        shared_ptr<string> date_ {};
        // 热线号码
        shared_ptr<string> hotline_ {};
        // 热线别名
        shared_ptr<string> hotlineName_ {};
        // 呼叫座席来电总数
        shared_ptr<int64_t> ibAgentCount_ {};
        // 人工接听数
        shared_ptr<int64_t> ibAnsweredCount_ {};
        // 人工接听排队总时长
        shared_ptr<int64_t> ibAnsweredQueueDuration_ {};
        // 呼入人工接听率
        shared_ptr<double> ibAnsweredRate_ {};
        // 人工接听平均排队时长
        shared_ptr<int64_t> ibAvgAnsweredQueueDuration_ {};
        // 呼入平均通话时长
        shared_ptr<int64_t> ibAvgBridgeDuration_ {};
        // 呼入平均时长
        shared_ptr<int64_t> ibAvgDuration_ {};
        // 进入队列平均排队时长
        shared_ptr<int64_t> ibAvgQueueDuration_ {};
        // 机器人应答数
        shared_ptr<int64_t> ibBotAnsweredCount_ {};
        // 机器人未应答数
        shared_ptr<int64_t> ibBotUnansweredCount_ {};
        // 呼入通话总时长（客户侧）
        shared_ptr<int64_t> ibBridgeDuration_ {};
        // 直转座席数
        shared_ptr<int64_t> ibDirectAgentCount_ {};
        // 直转队列数
        shared_ptr<int64_t> ibDirectQueueCount_ {};
        // 直转电话/IP话机数
        shared_ptr<int64_t> ibDirectTelCount_ {};
        // 进入IVR人工接听数
        shared_ptr<int64_t> ibIvrAnsweredCount_ {};
        // 进入IVR数
        shared_ptr<int64_t> ibIvrCount_ {};
        // 进入IVR未转队列数
        shared_ptr<int64_t> ibIvrNoQueueCount_ {};
        // 进入IVR转队列数
        shared_ptr<int64_t> ibIvrQueueCount_ {};
        // 进入IVR客户速挂
        shared_ptr<int64_t> ibIvrQuickUnlinkCount_ {};
        // 进入IVR系统应答数
        shared_ptr<int64_t> ibIvrSystemAnsweredCount_ {};
        // 进入IVR人工未接听数
        shared_ptr<int64_t> ibIvrUnAnsweredCount_ {};
        // 未进入IVR数
        shared_ptr<int64_t> ibNoIvrCount_ {};
        // 进入队列来电通数
        shared_ptr<int64_t> ibQueueCount_ {};
        // 进入队列排队总时长
        shared_ptr<int64_t> ibQueueDuration_ {};
        // 黑名单来电数
        shared_ptr<int64_t> ibRestrictCount_ {};
        // X秒接听数
        shared_ptr<int64_t> ibRingingRangeCount_ {};
        // X秒接听率
        shared_ptr<double> ibRingingRangeRate_ {};
        // 系统应答数
        shared_ptr<int64_t> ibSystemAnsweredCount_ {};
        // 系统未应答数
        shared_ptr<int64_t> ibSystemUnAnsweredCount_ {};
        // 来电总通数
        shared_ptr<int64_t> ibTotalCount_ {};
        // 人工未接听数
        shared_ptr<int64_t> ibUnansweredCount_ {};
        // VIP呼入数
        shared_ptr<int64_t> ibVipCount_ {};
        // 网上400呼入数
        shared_ptr<int64_t> ibWebCount_ {};
        // 呼入总时长
        shared_ptr<int64_t> ibtotalDuration_ {};
        // 进入IVR直转电话/IP话机人工接听数
        shared_ptr<int64_t> ivrDirectTelAnsweredCount_ {};
        // 进入IVR直转电话/IP话机数
        shared_ptr<int64_t> ivrDirectTelCount_ {};
        // 进入IVR直转电话/IP话机系统应答数
        shared_ptr<int64_t> ivrDirectTelSysAnsweredCount_ {};
        // 进入IVR直转电话/IP话机人工未接听数
        shared_ptr<int64_t> ivrDirectTelUnansweredCount_ {};
        // 客户速挂数
        shared_ptr<int64_t> quickUnlinkCount_ {};
        // 热线重复来电数
        shared_ptr<int64_t> repeatHotlineCount_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->statIb_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // statIb Field Functions 
      bool hasStatIb() const { return this->statIb_ != nullptr;};
      void deleteStatIb() { this->statIb_ = nullptr;};
      inline const vector<Data::StatIb> & getStatIb() const { DARABONBA_PTR_GET_CONST(statIb_, vector<Data::StatIb>) };
      inline vector<Data::StatIb> getStatIb() { DARABONBA_PTR_GET(statIb_, vector<Data::StatIb>) };
      inline Data& setStatIb(const vector<Data::StatIb> & statIb) { DARABONBA_PTR_SET_VALUE(statIb_, statIb) };
      inline Data& setStatIb(vector<Data::StatIb> && statIb) { DARABONBA_PTR_SET_RVALUE(statIb_, statIb) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 报表数据（注：时长字段单位均为秒）
      shared_ptr<vector<Data::StatIb>> statIb_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkStatIbResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkStatIbResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkStatIbResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkStatIbResponseBody::Data) };
    inline ClinkStatIbResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkStatIbResponseBody::Data) };
    inline ClinkStatIbResponseBody& setData(const ClinkStatIbResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkStatIbResponseBody& setData(ClinkStatIbResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkStatIbResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkStatIbResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkStatIbResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
