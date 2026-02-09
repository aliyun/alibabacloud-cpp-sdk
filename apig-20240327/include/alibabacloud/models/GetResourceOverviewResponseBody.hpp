// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEOVERVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetResourceOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetResourceOverviewResponseBody() = default ;
    GetResourceOverviewResponseBody(const GetResourceOverviewResponseBody &) = default ;
    GetResourceOverviewResponseBody(GetResourceOverviewResponseBody &&) = default ;
    GetResourceOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceOverviewResponseBody() = default ;
    GetResourceOverviewResponseBody& operator=(const GetResourceOverviewResponseBody &) = default ;
    GetResourceOverviewResponseBody& operator=(GetResourceOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(api, api_);
        DARABONBA_PTR_TO_JSON(gateway, gateway_);
        DARABONBA_PTR_TO_JSON(riskOverview, riskOverview_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(api, api_);
        DARABONBA_PTR_FROM_JSON(gateway, gateway_);
        DARABONBA_PTR_FROM_JSON(riskOverview, riskOverview_);
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
      class RiskOverview : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskOverview& obj) { 
          DARABONBA_PTR_TO_JSON(count, count_);
          DARABONBA_PTR_TO_JSON(riskDetails, riskDetails_);
          DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, RiskOverview& obj) { 
          DARABONBA_PTR_FROM_JSON(count, count_);
          DARABONBA_PTR_FROM_JSON(riskDetails, riskDetails_);
          DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
        };
        RiskOverview() = default ;
        RiskOverview(const RiskOverview &) = default ;
        RiskOverview(RiskOverview &&) = default ;
        RiskOverview(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskOverview() = default ;
        RiskOverview& operator=(const RiskOverview &) = default ;
        RiskOverview& operator=(RiskOverview &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskDetails& obj) { 
            DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_TO_JSON(gatewayName, gatewayName_);
            DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(riskNames, riskNames_);
            DARABONBA_PTR_TO_JSON(score, score_);
          };
          friend void from_json(const Darabonba::Json& j, RiskDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
            DARABONBA_PTR_FROM_JSON(gatewayName, gatewayName_);
            DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(riskNames, riskNames_);
            DARABONBA_PTR_FROM_JSON(score, score_);
          };
          RiskDetails() = default ;
          RiskDetails(const RiskDetails &) = default ;
          RiskDetails(RiskDetails &&) = default ;
          RiskDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RiskDetails() = default ;
          RiskDetails& operator=(const RiskDetails &) = default ;
          RiskDetails& operator=(RiskDetails &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayName_ == nullptr && this->riskLevel_ == nullptr && this->riskNames_ == nullptr && this->score_ == nullptr; };
          // gatewayId Field Functions 
          bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
          void deleteGatewayId() { this->gatewayId_ = nullptr;};
          inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
          inline RiskDetails& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


          // gatewayName Field Functions 
          bool hasGatewayName() const { return this->gatewayName_ != nullptr;};
          void deleteGatewayName() { this->gatewayName_ = nullptr;};
          inline string getGatewayName() const { DARABONBA_PTR_GET_DEFAULT(gatewayName_, "") };
          inline RiskDetails& setGatewayName(string gatewayName) { DARABONBA_PTR_SET_VALUE(gatewayName_, gatewayName) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline RiskDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // riskNames Field Functions 
          bool hasRiskNames() const { return this->riskNames_ != nullptr;};
          void deleteRiskNames() { this->riskNames_ = nullptr;};
          inline const vector<string> & getRiskNames() const { DARABONBA_PTR_GET_CONST(riskNames_, vector<string>) };
          inline vector<string> getRiskNames() { DARABONBA_PTR_GET(riskNames_, vector<string>) };
          inline RiskDetails& setRiskNames(const vector<string> & riskNames) { DARABONBA_PTR_SET_VALUE(riskNames_, riskNames) };
          inline RiskDetails& setRiskNames(vector<string> && riskNames) { DARABONBA_PTR_SET_RVALUE(riskNames_, riskNames) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
          inline RiskDetails& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        protected:
          // The gateway ID.
          shared_ptr<string> gatewayId_ {};
          // The gateway name.
          shared_ptr<string> gatewayName_ {};
          // The risk level.
          shared_ptr<string> riskLevel_ {};
          // The risk name list.
          shared_ptr<vector<string>> riskNames_ {};
          // The risk score.
          shared_ptr<string> score_ {};
        };

        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskDetails_ == nullptr && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
        inline RiskOverview& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskDetails Field Functions 
        bool hasRiskDetails() const { return this->riskDetails_ != nullptr;};
        void deleteRiskDetails() { this->riskDetails_ = nullptr;};
        inline const vector<RiskOverview::RiskDetails> & getRiskDetails() const { DARABONBA_PTR_GET_CONST(riskDetails_, vector<RiskOverview::RiskDetails>) };
        inline vector<RiskOverview::RiskDetails> getRiskDetails() { DARABONBA_PTR_GET(riskDetails_, vector<RiskOverview::RiskDetails>) };
        inline RiskOverview& setRiskDetails(const vector<RiskOverview::RiskDetails> & riskDetails) { DARABONBA_PTR_SET_VALUE(riskDetails_, riskDetails) };
        inline RiskOverview& setRiskDetails(vector<RiskOverview::RiskDetails> && riskDetails) { DARABONBA_PTR_SET_RVALUE(riskDetails_, riskDetails) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline RiskOverview& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of instances at a risk level.
        shared_ptr<string> count_ {};
        // The risk details list.
        shared_ptr<vector<RiskOverview::RiskDetails>> riskDetails_ {};
        // The risk level.
        shared_ptr<string> riskLevel_ {};
      };

      class Gateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Gateway& obj) { 
          DARABONBA_PTR_TO_JSON(runningCount, runningCount_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Gateway& obj) { 
          DARABONBA_PTR_FROM_JSON(runningCount, runningCount_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        };
        Gateway() = default ;
        Gateway(const Gateway &) = default ;
        Gateway(Gateway &&) = default ;
        Gateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Gateway() = default ;
        Gateway& operator=(const Gateway &) = default ;
        Gateway& operator=(Gateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->runningCount_ == nullptr
        && this->totalCount_ == nullptr; };
        // runningCount Field Functions 
        bool hasRunningCount() const { return this->runningCount_ != nullptr;};
        void deleteRunningCount() { this->runningCount_ = nullptr;};
        inline int64_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0L) };
        inline Gateway& setRunningCount(int64_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline Gateway& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // Number of running gateways.
        shared_ptr<int64_t> runningCount_ {};
        // Number of gateway instances.
        shared_ptr<int64_t> totalCount_ {};
      };

      class Api : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Api& obj) { 
          DARABONBA_PTR_TO_JSON(publishedCount, publishedCount_);
          DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Api& obj) { 
          DARABONBA_PTR_FROM_JSON(publishedCount, publishedCount_);
          DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
        };
        Api() = default ;
        Api(const Api &) = default ;
        Api(Api &&) = default ;
        Api(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Api() = default ;
        Api& operator=(const Api &) = default ;
        Api& operator=(Api &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->publishedCount_ == nullptr
        && this->totalCount_ == nullptr; };
        // publishedCount Field Functions 
        bool hasPublishedCount() const { return this->publishedCount_ != nullptr;};
        void deletePublishedCount() { this->publishedCount_ = nullptr;};
        inline int64_t getPublishedCount() const { DARABONBA_PTR_GET_DEFAULT(publishedCount_, 0L) };
        inline Api& setPublishedCount(int64_t publishedCount) { DARABONBA_PTR_SET_VALUE(publishedCount_, publishedCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline Api& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // Number of published APIs.
        shared_ptr<int64_t> publishedCount_ {};
        // Number of APIs.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->api_ == nullptr
        && this->gateway_ == nullptr && this->riskOverview_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline const Data::Api & getApi() const { DARABONBA_PTR_GET_CONST(api_, Data::Api) };
      inline Data::Api getApi() { DARABONBA_PTR_GET(api_, Data::Api) };
      inline Data& setApi(const Data::Api & api) { DARABONBA_PTR_SET_VALUE(api_, api) };
      inline Data& setApi(Data::Api && api) { DARABONBA_PTR_SET_RVALUE(api_, api) };


      // gateway Field Functions 
      bool hasGateway() const { return this->gateway_ != nullptr;};
      void deleteGateway() { this->gateway_ = nullptr;};
      inline const Data::Gateway & getGateway() const { DARABONBA_PTR_GET_CONST(gateway_, Data::Gateway) };
      inline Data::Gateway getGateway() { DARABONBA_PTR_GET(gateway_, Data::Gateway) };
      inline Data& setGateway(const Data::Gateway & gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };
      inline Data& setGateway(Data::Gateway && gateway) { DARABONBA_PTR_SET_RVALUE(gateway_, gateway) };


      // riskOverview Field Functions 
      bool hasRiskOverview() const { return this->riskOverview_ != nullptr;};
      void deleteRiskOverview() { this->riskOverview_ = nullptr;};
      inline const vector<Data::RiskOverview> & getRiskOverview() const { DARABONBA_PTR_GET_CONST(riskOverview_, vector<Data::RiskOverview>) };
      inline vector<Data::RiskOverview> getRiskOverview() { DARABONBA_PTR_GET(riskOverview_, vector<Data::RiskOverview>) };
      inline Data& setRiskOverview(const vector<Data::RiskOverview> & riskOverview) { DARABONBA_PTR_SET_VALUE(riskOverview_, riskOverview) };
      inline Data& setRiskOverview(vector<Data::RiskOverview> && riskOverview) { DARABONBA_PTR_SET_RVALUE(riskOverview_, riskOverview) };


    protected:
      // API information.
      shared_ptr<Data::Api> api_ {};
      // Gateway information.
      shared_ptr<Data::Gateway> gateway_ {};
      // The risk overview.
      shared_ptr<vector<Data::RiskOverview>> riskOverview_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetResourceOverviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResourceOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResourceOverviewResponseBody::Data) };
    inline GetResourceOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResourceOverviewResponseBody::Data) };
    inline GetResourceOverviewResponseBody& setData(const GetResourceOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourceOverviewResponseBody& setData(GetResourceOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetResourceOverviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Response status code.
    shared_ptr<string> code_ {};
    // The resource information.
    shared_ptr<GetResourceOverviewResponseBody::Data> data_ {};
    // Response message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
