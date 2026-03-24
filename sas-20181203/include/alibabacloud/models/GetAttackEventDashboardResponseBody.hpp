// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKEVENTDASHBOARDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKEVENTDASHBOARDRESPONSEBODY_HPP_
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
  class GetAttackEventDashboardResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackEventDashboardResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackEventDashboardResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAttackEventDashboardResponseBody() = default ;
    GetAttackEventDashboardResponseBody(const GetAttackEventDashboardResponseBody &) = default ;
    GetAttackEventDashboardResponseBody(GetAttackEventDashboardResponseBody &&) = default ;
    GetAttackEventDashboardResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackEventDashboardResponseBody() = default ;
    GetAttackEventDashboardResponseBody& operator=(const GetAttackEventDashboardResponseBody &) = default ;
    GetAttackEventDashboardResponseBody& operator=(GetAttackEventDashboardResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AttackAllCount, attackAllCount_);
        DARABONBA_PTR_TO_JSON(AttackInstanceTopCount, attackInstanceTopCount_);
        DARABONBA_PTR_TO_JSON(AttackTypeTopCount, attackTypeTopCount_);
        DARABONBA_PTR_TO_JSON(LatestTimeHourCount, latestTimeHourCount_);
        DARABONBA_PTR_TO_JSON(SrcIpTopCount, srcIpTopCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackAllCount, attackAllCount_);
        DARABONBA_PTR_FROM_JSON(AttackInstanceTopCount, attackInstanceTopCount_);
        DARABONBA_PTR_FROM_JSON(AttackTypeTopCount, attackTypeTopCount_);
        DARABONBA_PTR_FROM_JSON(LatestTimeHourCount, latestTimeHourCount_);
        DARABONBA_PTR_FROM_JSON(SrcIpTopCount, srcIpTopCount_);
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
      class SrcIpTopCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SrcIpTopCount& obj) { 
          DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_TO_JSON(StatisticsValue, statisticsValue_);
        };
        friend void from_json(const Darabonba::Json& j, SrcIpTopCount& obj) { 
          DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_FROM_JSON(StatisticsValue, statisticsValue_);
        };
        SrcIpTopCount() = default ;
        SrcIpTopCount(const SrcIpTopCount &) = default ;
        SrcIpTopCount(SrcIpTopCount &&) = default ;
        SrcIpTopCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SrcIpTopCount() = default ;
        SrcIpTopCount& operator=(const SrcIpTopCount &) = default ;
        SrcIpTopCount& operator=(SrcIpTopCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && this->statisticsValue_ == nullptr; };
        // statisticsCount Field Functions 
        bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
        void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
        inline int32_t getStatisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, 0) };
        inline SrcIpTopCount& setStatisticsCount(int32_t statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


        // statisticsValue Field Functions 
        bool hasStatisticsValue() const { return this->statisticsValue_ != nullptr;};
        void deleteStatisticsValue() { this->statisticsValue_ = nullptr;};
        inline string getStatisticsValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsValue_, "") };
        inline SrcIpTopCount& setStatisticsValue(string statisticsValue) { DARABONBA_PTR_SET_VALUE(statisticsValue_, statisticsValue) };


      protected:
        // Count of statistical values.
        shared_ptr<int32_t> statisticsCount_ {};
        // Statistical value.
        shared_ptr<string> statisticsValue_ {};
      };

      class LatestTimeHourCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LatestTimeHourCount& obj) { 
          DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_TO_JSON(StatisticsValue, statisticsValue_);
        };
        friend void from_json(const Darabonba::Json& j, LatestTimeHourCount& obj) { 
          DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_FROM_JSON(StatisticsValue, statisticsValue_);
        };
        LatestTimeHourCount() = default ;
        LatestTimeHourCount(const LatestTimeHourCount &) = default ;
        LatestTimeHourCount(LatestTimeHourCount &&) = default ;
        LatestTimeHourCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LatestTimeHourCount() = default ;
        LatestTimeHourCount& operator=(const LatestTimeHourCount &) = default ;
        LatestTimeHourCount& operator=(LatestTimeHourCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && this->statisticsValue_ == nullptr; };
        // statisticsCount Field Functions 
        bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
        void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
        inline int32_t getStatisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, 0) };
        inline LatestTimeHourCount& setStatisticsCount(int32_t statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


        // statisticsValue Field Functions 
        bool hasStatisticsValue() const { return this->statisticsValue_ != nullptr;};
        void deleteStatisticsValue() { this->statisticsValue_ = nullptr;};
        inline string getStatisticsValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsValue_, "") };
        inline LatestTimeHourCount& setStatisticsValue(string statisticsValue) { DARABONBA_PTR_SET_VALUE(statisticsValue_, statisticsValue) };


      protected:
        // Count of statistical values.
        shared_ptr<int32_t> statisticsCount_ {};
        // Statistical value.
        shared_ptr<string> statisticsValue_ {};
      };

      class AttackTypeTopCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttackTypeTopCount& obj) { 
          DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_TO_JSON(StatisticsValue, statisticsValue_);
        };
        friend void from_json(const Darabonba::Json& j, AttackTypeTopCount& obj) { 
          DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_FROM_JSON(StatisticsValue, statisticsValue_);
        };
        AttackTypeTopCount() = default ;
        AttackTypeTopCount(const AttackTypeTopCount &) = default ;
        AttackTypeTopCount(AttackTypeTopCount &&) = default ;
        AttackTypeTopCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttackTypeTopCount() = default ;
        AttackTypeTopCount& operator=(const AttackTypeTopCount &) = default ;
        AttackTypeTopCount& operator=(AttackTypeTopCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && this->statisticsValue_ == nullptr; };
        // statisticsCount Field Functions 
        bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
        void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
        inline int32_t getStatisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, 0) };
        inline AttackTypeTopCount& setStatisticsCount(int32_t statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


        // statisticsValue Field Functions 
        bool hasStatisticsValue() const { return this->statisticsValue_ != nullptr;};
        void deleteStatisticsValue() { this->statisticsValue_ = nullptr;};
        inline string getStatisticsValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsValue_, "") };
        inline AttackTypeTopCount& setStatisticsValue(string statisticsValue) { DARABONBA_PTR_SET_VALUE(statisticsValue_, statisticsValue) };


      protected:
        // Count of statistical values.
        shared_ptr<int32_t> statisticsCount_ {};
        // Statistical value.
        shared_ptr<string> statisticsValue_ {};
      };

      class AttackInstanceTopCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttackInstanceTopCount& obj) { 
          DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_TO_JSON(StatisticsValue, statisticsValue_);
        };
        friend void from_json(const Darabonba::Json& j, AttackInstanceTopCount& obj) { 
          DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_FROM_JSON(StatisticsValue, statisticsValue_);
        };
        AttackInstanceTopCount() = default ;
        AttackInstanceTopCount(const AttackInstanceTopCount &) = default ;
        AttackInstanceTopCount(AttackInstanceTopCount &&) = default ;
        AttackInstanceTopCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttackInstanceTopCount() = default ;
        AttackInstanceTopCount& operator=(const AttackInstanceTopCount &) = default ;
        AttackInstanceTopCount& operator=(AttackInstanceTopCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && this->statisticsValue_ == nullptr; };
        // statisticsCount Field Functions 
        bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
        void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
        inline int32_t getStatisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, 0) };
        inline AttackInstanceTopCount& setStatisticsCount(int32_t statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


        // statisticsValue Field Functions 
        bool hasStatisticsValue() const { return this->statisticsValue_ != nullptr;};
        void deleteStatisticsValue() { this->statisticsValue_ = nullptr;};
        inline string getStatisticsValue() const { DARABONBA_PTR_GET_DEFAULT(statisticsValue_, "") };
        inline AttackInstanceTopCount& setStatisticsValue(string statisticsValue) { DARABONBA_PTR_SET_VALUE(statisticsValue_, statisticsValue) };


      protected:
        // The count of the statistics value.
        shared_ptr<int32_t> statisticsCount_ {};
        // Statistical value.
        shared_ptr<string> statisticsValue_ {};
      };

      virtual bool empty() const override { return this->attackAllCount_ == nullptr
        && this->attackInstanceTopCount_ == nullptr && this->attackTypeTopCount_ == nullptr && this->latestTimeHourCount_ == nullptr && this->srcIpTopCount_ == nullptr; };
      // attackAllCount Field Functions 
      bool hasAttackAllCount() const { return this->attackAllCount_ != nullptr;};
      void deleteAttackAllCount() { this->attackAllCount_ = nullptr;};
      inline int32_t getAttackAllCount() const { DARABONBA_PTR_GET_DEFAULT(attackAllCount_, 0) };
      inline Data& setAttackAllCount(int32_t attackAllCount) { DARABONBA_PTR_SET_VALUE(attackAllCount_, attackAllCount) };


      // attackInstanceTopCount Field Functions 
      bool hasAttackInstanceTopCount() const { return this->attackInstanceTopCount_ != nullptr;};
      void deleteAttackInstanceTopCount() { this->attackInstanceTopCount_ = nullptr;};
      inline const vector<Data::AttackInstanceTopCount> & getAttackInstanceTopCount() const { DARABONBA_PTR_GET_CONST(attackInstanceTopCount_, vector<Data::AttackInstanceTopCount>) };
      inline vector<Data::AttackInstanceTopCount> getAttackInstanceTopCount() { DARABONBA_PTR_GET(attackInstanceTopCount_, vector<Data::AttackInstanceTopCount>) };
      inline Data& setAttackInstanceTopCount(const vector<Data::AttackInstanceTopCount> & attackInstanceTopCount) { DARABONBA_PTR_SET_VALUE(attackInstanceTopCount_, attackInstanceTopCount) };
      inline Data& setAttackInstanceTopCount(vector<Data::AttackInstanceTopCount> && attackInstanceTopCount) { DARABONBA_PTR_SET_RVALUE(attackInstanceTopCount_, attackInstanceTopCount) };


      // attackTypeTopCount Field Functions 
      bool hasAttackTypeTopCount() const { return this->attackTypeTopCount_ != nullptr;};
      void deleteAttackTypeTopCount() { this->attackTypeTopCount_ = nullptr;};
      inline const vector<Data::AttackTypeTopCount> & getAttackTypeTopCount() const { DARABONBA_PTR_GET_CONST(attackTypeTopCount_, vector<Data::AttackTypeTopCount>) };
      inline vector<Data::AttackTypeTopCount> getAttackTypeTopCount() { DARABONBA_PTR_GET(attackTypeTopCount_, vector<Data::AttackTypeTopCount>) };
      inline Data& setAttackTypeTopCount(const vector<Data::AttackTypeTopCount> & attackTypeTopCount) { DARABONBA_PTR_SET_VALUE(attackTypeTopCount_, attackTypeTopCount) };
      inline Data& setAttackTypeTopCount(vector<Data::AttackTypeTopCount> && attackTypeTopCount) { DARABONBA_PTR_SET_RVALUE(attackTypeTopCount_, attackTypeTopCount) };


      // latestTimeHourCount Field Functions 
      bool hasLatestTimeHourCount() const { return this->latestTimeHourCount_ != nullptr;};
      void deleteLatestTimeHourCount() { this->latestTimeHourCount_ = nullptr;};
      inline const vector<Data::LatestTimeHourCount> & getLatestTimeHourCount() const { DARABONBA_PTR_GET_CONST(latestTimeHourCount_, vector<Data::LatestTimeHourCount>) };
      inline vector<Data::LatestTimeHourCount> getLatestTimeHourCount() { DARABONBA_PTR_GET(latestTimeHourCount_, vector<Data::LatestTimeHourCount>) };
      inline Data& setLatestTimeHourCount(const vector<Data::LatestTimeHourCount> & latestTimeHourCount) { DARABONBA_PTR_SET_VALUE(latestTimeHourCount_, latestTimeHourCount) };
      inline Data& setLatestTimeHourCount(vector<Data::LatestTimeHourCount> && latestTimeHourCount) { DARABONBA_PTR_SET_RVALUE(latestTimeHourCount_, latestTimeHourCount) };


      // srcIpTopCount Field Functions 
      bool hasSrcIpTopCount() const { return this->srcIpTopCount_ != nullptr;};
      void deleteSrcIpTopCount() { this->srcIpTopCount_ = nullptr;};
      inline const vector<Data::SrcIpTopCount> & getSrcIpTopCount() const { DARABONBA_PTR_GET_CONST(srcIpTopCount_, vector<Data::SrcIpTopCount>) };
      inline vector<Data::SrcIpTopCount> getSrcIpTopCount() { DARABONBA_PTR_GET(srcIpTopCount_, vector<Data::SrcIpTopCount>) };
      inline Data& setSrcIpTopCount(const vector<Data::SrcIpTopCount> & srcIpTopCount) { DARABONBA_PTR_SET_VALUE(srcIpTopCount_, srcIpTopCount) };
      inline Data& setSrcIpTopCount(vector<Data::SrcIpTopCount> && srcIpTopCount) { DARABONBA_PTR_SET_RVALUE(srcIpTopCount_, srcIpTopCount) };


    protected:
      // Number of attacks.
      shared_ptr<int32_t> attackAllCount_ {};
      // List of attack counts by attacked asset.
      shared_ptr<vector<Data::AttackInstanceTopCount>> attackInstanceTopCount_ {};
      // List of attack counts by attack type.
      shared_ptr<vector<Data::AttackTypeTopCount>> attackTypeTopCount_ {};
      // List of attack counts by hour.
      shared_ptr<vector<Data::LatestTimeHourCount>> latestTimeHourCount_ {};
      // List of attack counts by source IP.
      shared_ptr<vector<Data::SrcIpTopCount>> srcIpTopCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAttackEventDashboardResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAttackEventDashboardResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAttackEventDashboardResponseBody::Data) };
    inline GetAttackEventDashboardResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAttackEventDashboardResponseBody::Data) };
    inline GetAttackEventDashboardResponseBody& setData(const GetAttackEventDashboardResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAttackEventDashboardResponseBody& setData(GetAttackEventDashboardResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAttackEventDashboardResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAttackEventDashboardResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackEventDashboardResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAttackEventDashboardResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result code, **200** indicates success, any other value indicates failure. The caller can use this field to determine the reason for the failure.
    shared_ptr<string> code_ {};
    // Returned data.
    shared_ptr<GetAttackEventDashboardResponseBody::Data> data_ {};
    // The HTTP response status code, 200 indicates that the request was sent successfully.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned by the API request.
    shared_ptr<string> message_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Values:
    // - **true**: Success
    // - **false**: Failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
