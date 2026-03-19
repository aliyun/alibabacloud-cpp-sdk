// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULEATTRIBUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RuleAttributesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RuleAttributesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RuleAttributesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLayer4RuleAttributesResponseBody() = default ;
    DescribeLayer4RuleAttributesResponseBody(const DescribeLayer4RuleAttributesResponseBody &) = default ;
    DescribeLayer4RuleAttributesResponseBody(DescribeLayer4RuleAttributesResponseBody &&) = default ;
    DescribeLayer4RuleAttributesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RuleAttributesResponseBody() = default ;
    DescribeLayer4RuleAttributesResponseBody& operator=(const DescribeLayer4RuleAttributesResponseBody &) = default ;
    DescribeLayer4RuleAttributesResponseBody& operator=(DescribeLayer4RuleAttributesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      };
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      };
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(Cc, cc_);
          DARABONBA_PTR_TO_JSON(NodataConn, nodataConn_);
          DARABONBA_PTR_TO_JSON(PayloadLen, payloadLen_);
          DARABONBA_PTR_TO_JSON(PersistenceTimeout, persistenceTimeout_);
          DARABONBA_PTR_TO_JSON(Sla, sla_);
          DARABONBA_PTR_TO_JSON(Slimit, slimit_);
          DARABONBA_PTR_TO_JSON(Synproxy, synproxy_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(Cc, cc_);
          DARABONBA_PTR_FROM_JSON(NodataConn, nodataConn_);
          DARABONBA_PTR_FROM_JSON(PayloadLen, payloadLen_);
          DARABONBA_PTR_FROM_JSON(PersistenceTimeout, persistenceTimeout_);
          DARABONBA_PTR_FROM_JSON(Sla, sla_);
          DARABONBA_PTR_FROM_JSON(Slimit, slimit_);
          DARABONBA_PTR_FROM_JSON(Synproxy, synproxy_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Slimit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Slimit& obj) { 
            DARABONBA_PTR_TO_JSON(Bps, bps_);
            DARABONBA_PTR_TO_JSON(Cps, cps_);
            DARABONBA_PTR_TO_JSON(CpsEnable, cpsEnable_);
            DARABONBA_PTR_TO_JSON(CpsMode, cpsMode_);
            DARABONBA_PTR_TO_JSON(Maxconn, maxconn_);
            DARABONBA_PTR_TO_JSON(MaxconnEnable, maxconnEnable_);
            DARABONBA_PTR_TO_JSON(Pps, pps_);
          };
          friend void from_json(const Darabonba::Json& j, Slimit& obj) { 
            DARABONBA_PTR_FROM_JSON(Bps, bps_);
            DARABONBA_PTR_FROM_JSON(Cps, cps_);
            DARABONBA_PTR_FROM_JSON(CpsEnable, cpsEnable_);
            DARABONBA_PTR_FROM_JSON(CpsMode, cpsMode_);
            DARABONBA_PTR_FROM_JSON(Maxconn, maxconn_);
            DARABONBA_PTR_FROM_JSON(MaxconnEnable, maxconnEnable_);
            DARABONBA_PTR_FROM_JSON(Pps, pps_);
          };
          Slimit() = default ;
          Slimit(const Slimit &) = default ;
          Slimit(Slimit &&) = default ;
          Slimit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Slimit() = default ;
          Slimit& operator=(const Slimit &) = default ;
          Slimit& operator=(Slimit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bps_ == nullptr
        && this->cps_ == nullptr && this->cpsEnable_ == nullptr && this->cpsMode_ == nullptr && this->maxconn_ == nullptr && this->maxconnEnable_ == nullptr
        && this->pps_ == nullptr; };
          // bps Field Functions 
          bool hasBps() const { return this->bps_ != nullptr;};
          void deleteBps() { this->bps_ = nullptr;};
          inline int64_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0L) };
          inline Slimit& setBps(int64_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


          // cps Field Functions 
          bool hasCps() const { return this->cps_ != nullptr;};
          void deleteCps() { this->cps_ = nullptr;};
          inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
          inline Slimit& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


          // cpsEnable Field Functions 
          bool hasCpsEnable() const { return this->cpsEnable_ != nullptr;};
          void deleteCpsEnable() { this->cpsEnable_ = nullptr;};
          inline int32_t getCpsEnable() const { DARABONBA_PTR_GET_DEFAULT(cpsEnable_, 0) };
          inline Slimit& setCpsEnable(int32_t cpsEnable) { DARABONBA_PTR_SET_VALUE(cpsEnable_, cpsEnable) };


          // cpsMode Field Functions 
          bool hasCpsMode() const { return this->cpsMode_ != nullptr;};
          void deleteCpsMode() { this->cpsMode_ = nullptr;};
          inline int32_t getCpsMode() const { DARABONBA_PTR_GET_DEFAULT(cpsMode_, 0) };
          inline Slimit& setCpsMode(int32_t cpsMode) { DARABONBA_PTR_SET_VALUE(cpsMode_, cpsMode) };


          // maxconn Field Functions 
          bool hasMaxconn() const { return this->maxconn_ != nullptr;};
          void deleteMaxconn() { this->maxconn_ = nullptr;};
          inline int32_t getMaxconn() const { DARABONBA_PTR_GET_DEFAULT(maxconn_, 0) };
          inline Slimit& setMaxconn(int32_t maxconn) { DARABONBA_PTR_SET_VALUE(maxconn_, maxconn) };


          // maxconnEnable Field Functions 
          bool hasMaxconnEnable() const { return this->maxconnEnable_ != nullptr;};
          void deleteMaxconnEnable() { this->maxconnEnable_ = nullptr;};
          inline int32_t getMaxconnEnable() const { DARABONBA_PTR_GET_DEFAULT(maxconnEnable_, 0) };
          inline Slimit& setMaxconnEnable(int32_t maxconnEnable) { DARABONBA_PTR_SET_VALUE(maxconnEnable_, maxconnEnable) };


          // pps Field Functions 
          bool hasPps() const { return this->pps_ != nullptr;};
          void deletePps() { this->pps_ = nullptr;};
          inline int64_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0L) };
          inline Slimit& setPps(int64_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


        protected:
          shared_ptr<int64_t> bps_ {};
          shared_ptr<int32_t> cps_ {};
          shared_ptr<int32_t> cpsEnable_ {};
          shared_ptr<int32_t> cpsMode_ {};
          shared_ptr<int32_t> maxconn_ {};
          shared_ptr<int32_t> maxconnEnable_ {};
          shared_ptr<int64_t> pps_ {};
        };

        class Sla : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Sla& obj) { 
            DARABONBA_PTR_TO_JSON(Cps, cps_);
            DARABONBA_PTR_TO_JSON(CpsEnable, cpsEnable_);
            DARABONBA_PTR_TO_JSON(Maxconn, maxconn_);
            DARABONBA_PTR_TO_JSON(MaxconnEnable, maxconnEnable_);
          };
          friend void from_json(const Darabonba::Json& j, Sla& obj) { 
            DARABONBA_PTR_FROM_JSON(Cps, cps_);
            DARABONBA_PTR_FROM_JSON(CpsEnable, cpsEnable_);
            DARABONBA_PTR_FROM_JSON(Maxconn, maxconn_);
            DARABONBA_PTR_FROM_JSON(MaxconnEnable, maxconnEnable_);
          };
          Sla() = default ;
          Sla(const Sla &) = default ;
          Sla(Sla &&) = default ;
          Sla(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Sla() = default ;
          Sla& operator=(const Sla &) = default ;
          Sla& operator=(Sla &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cps_ == nullptr
        && this->cpsEnable_ == nullptr && this->maxconn_ == nullptr && this->maxconnEnable_ == nullptr; };
          // cps Field Functions 
          bool hasCps() const { return this->cps_ != nullptr;};
          void deleteCps() { this->cps_ = nullptr;};
          inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
          inline Sla& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


          // cpsEnable Field Functions 
          bool hasCpsEnable() const { return this->cpsEnable_ != nullptr;};
          void deleteCpsEnable() { this->cpsEnable_ = nullptr;};
          inline int32_t getCpsEnable() const { DARABONBA_PTR_GET_DEFAULT(cpsEnable_, 0) };
          inline Sla& setCpsEnable(int32_t cpsEnable) { DARABONBA_PTR_SET_VALUE(cpsEnable_, cpsEnable) };


          // maxconn Field Functions 
          bool hasMaxconn() const { return this->maxconn_ != nullptr;};
          void deleteMaxconn() { this->maxconn_ = nullptr;};
          inline int32_t getMaxconn() const { DARABONBA_PTR_GET_DEFAULT(maxconn_, 0) };
          inline Sla& setMaxconn(int32_t maxconn) { DARABONBA_PTR_SET_VALUE(maxconn_, maxconn) };


          // maxconnEnable Field Functions 
          bool hasMaxconnEnable() const { return this->maxconnEnable_ != nullptr;};
          void deleteMaxconnEnable() { this->maxconnEnable_ = nullptr;};
          inline int32_t getMaxconnEnable() const { DARABONBA_PTR_GET_DEFAULT(maxconnEnable_, 0) };
          inline Sla& setMaxconnEnable(int32_t maxconnEnable) { DARABONBA_PTR_SET_VALUE(maxconnEnable_, maxconnEnable) };


        protected:
          shared_ptr<int32_t> cps_ {};
          shared_ptr<int32_t> cpsEnable_ {};
          shared_ptr<int32_t> maxconn_ {};
          shared_ptr<int32_t> maxconnEnable_ {};
        };

        class PayloadLen : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PayloadLen& obj) { 
            DARABONBA_PTR_TO_JSON(Max, max_);
            DARABONBA_PTR_TO_JSON(Min, min_);
          };
          friend void from_json(const Darabonba::Json& j, PayloadLen& obj) { 
            DARABONBA_PTR_FROM_JSON(Max, max_);
            DARABONBA_PTR_FROM_JSON(Min, min_);
          };
          PayloadLen() = default ;
          PayloadLen(const PayloadLen &) = default ;
          PayloadLen(PayloadLen &&) = default ;
          PayloadLen(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PayloadLen() = default ;
          PayloadLen& operator=(const PayloadLen &) = default ;
          PayloadLen& operator=(PayloadLen &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr; };
          // max Field Functions 
          bool hasMax() const { return this->max_ != nullptr;};
          void deleteMax() { this->max_ = nullptr;};
          inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
          inline PayloadLen& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


          // min Field Functions 
          bool hasMin() const { return this->min_ != nullptr;};
          void deleteMin() { this->min_ = nullptr;};
          inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
          inline PayloadLen& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        protected:
          shared_ptr<int32_t> max_ {};
          shared_ptr<int32_t> min_ {};
        };

        class Cc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cc& obj) { 
            DARABONBA_PTR_TO_JSON(Sblack, sblack_);
          };
          friend void from_json(const Darabonba::Json& j, Cc& obj) { 
            DARABONBA_PTR_FROM_JSON(Sblack, sblack_);
          };
          Cc() = default ;
          Cc(const Cc &) = default ;
          Cc(Cc &&) = default ;
          Cc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cc() = default ;
          Cc& operator=(const Cc &) = default ;
          Cc& operator=(Cc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Sblack : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Sblack& obj) { 
              DARABONBA_PTR_TO_JSON(Cnt, cnt_);
              DARABONBA_PTR_TO_JSON(During, during_);
              DARABONBA_PTR_TO_JSON(Expires, expires_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Sblack& obj) { 
              DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
              DARABONBA_PTR_FROM_JSON(During, during_);
              DARABONBA_PTR_FROM_JSON(Expires, expires_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Sblack() = default ;
            Sblack(const Sblack &) = default ;
            Sblack(Sblack &&) = default ;
            Sblack(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Sblack() = default ;
            Sblack& operator=(const Sblack &) = default ;
            Sblack& operator=(Sblack &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cnt_ == nullptr
        && this->during_ == nullptr && this->expires_ == nullptr && this->type_ == nullptr; };
            // cnt Field Functions 
            bool hasCnt() const { return this->cnt_ != nullptr;};
            void deleteCnt() { this->cnt_ = nullptr;};
            inline int32_t getCnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0) };
            inline Sblack& setCnt(int32_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


            // during Field Functions 
            bool hasDuring() const { return this->during_ != nullptr;};
            void deleteDuring() { this->during_ = nullptr;};
            inline int32_t getDuring() const { DARABONBA_PTR_GET_DEFAULT(during_, 0) };
            inline Sblack& setDuring(int32_t during) { DARABONBA_PTR_SET_VALUE(during_, during) };


            // expires Field Functions 
            bool hasExpires() const { return this->expires_ != nullptr;};
            void deleteExpires() { this->expires_ = nullptr;};
            inline int32_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0) };
            inline Sblack& setExpires(int32_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
            inline Sblack& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<int32_t> cnt_ {};
            shared_ptr<int32_t> during_ {};
            shared_ptr<int32_t> expires_ {};
            shared_ptr<int32_t> type_ {};
          };

          virtual bool empty() const override { return this->sblack_ == nullptr; };
          // sblack Field Functions 
          bool hasSblack() const { return this->sblack_ != nullptr;};
          void deleteSblack() { this->sblack_ = nullptr;};
          inline const vector<Cc::Sblack> & getSblack() const { DARABONBA_PTR_GET_CONST(sblack_, vector<Cc::Sblack>) };
          inline vector<Cc::Sblack> getSblack() { DARABONBA_PTR_GET(sblack_, vector<Cc::Sblack>) };
          inline Cc& setSblack(const vector<Cc::Sblack> & sblack) { DARABONBA_PTR_SET_VALUE(sblack_, sblack) };
          inline Cc& setSblack(vector<Cc::Sblack> && sblack) { DARABONBA_PTR_SET_RVALUE(sblack_, sblack) };


        protected:
          shared_ptr<vector<Cc::Sblack>> sblack_ {};
        };

        virtual bool empty() const override { return this->cc_ == nullptr
        && this->nodataConn_ == nullptr && this->payloadLen_ == nullptr && this->persistenceTimeout_ == nullptr && this->sla_ == nullptr && this->slimit_ == nullptr
        && this->synproxy_ == nullptr; };
        // cc Field Functions 
        bool hasCc() const { return this->cc_ != nullptr;};
        void deleteCc() { this->cc_ = nullptr;};
        inline const Config::Cc & getCc() const { DARABONBA_PTR_GET_CONST(cc_, Config::Cc) };
        inline Config::Cc getCc() { DARABONBA_PTR_GET(cc_, Config::Cc) };
        inline Config& setCc(const Config::Cc & cc) { DARABONBA_PTR_SET_VALUE(cc_, cc) };
        inline Config& setCc(Config::Cc && cc) { DARABONBA_PTR_SET_RVALUE(cc_, cc) };


        // nodataConn Field Functions 
        bool hasNodataConn() const { return this->nodataConn_ != nullptr;};
        void deleteNodataConn() { this->nodataConn_ = nullptr;};
        inline string getNodataConn() const { DARABONBA_PTR_GET_DEFAULT(nodataConn_, "") };
        inline Config& setNodataConn(string nodataConn) { DARABONBA_PTR_SET_VALUE(nodataConn_, nodataConn) };


        // payloadLen Field Functions 
        bool hasPayloadLen() const { return this->payloadLen_ != nullptr;};
        void deletePayloadLen() { this->payloadLen_ = nullptr;};
        inline const Config::PayloadLen & getPayloadLen() const { DARABONBA_PTR_GET_CONST(payloadLen_, Config::PayloadLen) };
        inline Config::PayloadLen getPayloadLen() { DARABONBA_PTR_GET(payloadLen_, Config::PayloadLen) };
        inline Config& setPayloadLen(const Config::PayloadLen & payloadLen) { DARABONBA_PTR_SET_VALUE(payloadLen_, payloadLen) };
        inline Config& setPayloadLen(Config::PayloadLen && payloadLen) { DARABONBA_PTR_SET_RVALUE(payloadLen_, payloadLen) };


        // persistenceTimeout Field Functions 
        bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
        void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
        inline int32_t getPersistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
        inline Config& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


        // sla Field Functions 
        bool hasSla() const { return this->sla_ != nullptr;};
        void deleteSla() { this->sla_ = nullptr;};
        inline const Config::Sla & getSla() const { DARABONBA_PTR_GET_CONST(sla_, Config::Sla) };
        inline Config::Sla getSla() { DARABONBA_PTR_GET(sla_, Config::Sla) };
        inline Config& setSla(const Config::Sla & sla) { DARABONBA_PTR_SET_VALUE(sla_, sla) };
        inline Config& setSla(Config::Sla && sla) { DARABONBA_PTR_SET_RVALUE(sla_, sla) };


        // slimit Field Functions 
        bool hasSlimit() const { return this->slimit_ != nullptr;};
        void deleteSlimit() { this->slimit_ = nullptr;};
        inline const Config::Slimit & getSlimit() const { DARABONBA_PTR_GET_CONST(slimit_, Config::Slimit) };
        inline Config::Slimit getSlimit() { DARABONBA_PTR_GET(slimit_, Config::Slimit) };
        inline Config& setSlimit(const Config::Slimit & slimit) { DARABONBA_PTR_SET_VALUE(slimit_, slimit) };
        inline Config& setSlimit(Config::Slimit && slimit) { DARABONBA_PTR_SET_RVALUE(slimit_, slimit) };


        // synproxy Field Functions 
        bool hasSynproxy() const { return this->synproxy_ != nullptr;};
        void deleteSynproxy() { this->synproxy_ = nullptr;};
        inline string getSynproxy() const { DARABONBA_PTR_GET_DEFAULT(synproxy_, "") };
        inline Config& setSynproxy(string synproxy) { DARABONBA_PTR_SET_VALUE(synproxy_, synproxy) };


      protected:
        shared_ptr<Config::Cc> cc_ {};
        shared_ptr<string> nodataConn_ {};
        shared_ptr<Config::PayloadLen> payloadLen_ {};
        shared_ptr<int32_t> persistenceTimeout_ {};
        shared_ptr<Config::Sla> sla_ {};
        shared_ptr<Config::Slimit> slimit_ {};
        shared_ptr<string> synproxy_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->frontendPort_ == nullptr && this->instanceId_ == nullptr && this->protocol_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const Listeners::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, Listeners::Config) };
      inline Listeners::Config getConfig() { DARABONBA_PTR_GET(config_, Listeners::Config) };
      inline Listeners& setConfig(const Listeners::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline Listeners& setConfig(Listeners::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // frontendPort Field Functions 
      bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
      void deleteFrontendPort() { this->frontendPort_ = nullptr;};
      inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
      inline Listeners& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Listeners& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Listeners& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    protected:
      shared_ptr<Listeners::Config> config_ {};
      shared_ptr<int32_t> frontendPort_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> protocol_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->requestId_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<DescribeLayer4RuleAttributesResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<DescribeLayer4RuleAttributesResponseBody::Listeners>) };
    inline vector<DescribeLayer4RuleAttributesResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<DescribeLayer4RuleAttributesResponseBody::Listeners>) };
    inline DescribeLayer4RuleAttributesResponseBody& setListeners(const vector<DescribeLayer4RuleAttributesResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline DescribeLayer4RuleAttributesResponseBody& setListeners(vector<DescribeLayer4RuleAttributesResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLayer4RuleAttributesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeLayer4RuleAttributesResponseBody::Listeners>> listeners_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
