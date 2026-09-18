// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETUNNELQUOTATIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateTunnelQuotaTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTunnelQuotaTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTunnelQuotaTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
    };
    UpdateTunnelQuotaTimerRequest() = default ;
    UpdateTunnelQuotaTimerRequest(const UpdateTunnelQuotaTimerRequest &) = default ;
    UpdateTunnelQuotaTimerRequest(UpdateTunnelQuotaTimerRequest &&) = default ;
    UpdateTunnelQuotaTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTunnelQuotaTimerRequest() = default ;
    UpdateTunnelQuotaTimerRequest& operator=(const UpdateTunnelQuotaTimerRequest &) = default ;
    UpdateTunnelQuotaTimerRequest& operator=(UpdateTunnelQuotaTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(tunnelQuotaParameter, tunnelQuotaParameter_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(tunnelQuotaParameter, tunnelQuotaParameter_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TunnelQuotaParameter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TunnelQuotaParameter& obj) { 
          DARABONBA_PTR_TO_JSON(elasticReservedSlotNum, elasticReservedSlotNum_);
          DARABONBA_PTR_TO_JSON(slotNum, slotNum_);
        };
        friend void from_json(const Darabonba::Json& j, TunnelQuotaParameter& obj) { 
          DARABONBA_PTR_FROM_JSON(elasticReservedSlotNum, elasticReservedSlotNum_);
          DARABONBA_PTR_FROM_JSON(slotNum, slotNum_);
        };
        TunnelQuotaParameter() = default ;
        TunnelQuotaParameter(const TunnelQuotaParameter &) = default ;
        TunnelQuotaParameter(TunnelQuotaParameter &&) = default ;
        TunnelQuotaParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TunnelQuotaParameter() = default ;
        TunnelQuotaParameter& operator=(const TunnelQuotaParameter &) = default ;
        TunnelQuotaParameter& operator=(TunnelQuotaParameter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->elasticReservedSlotNum_ == nullptr
        && this->slotNum_ == nullptr; };
        // elasticReservedSlotNum Field Functions 
        bool hasElasticReservedSlotNum() const { return this->elasticReservedSlotNum_ != nullptr;};
        void deleteElasticReservedSlotNum() { this->elasticReservedSlotNum_ = nullptr;};
        inline int64_t getElasticReservedSlotNum() const { DARABONBA_PTR_GET_DEFAULT(elasticReservedSlotNum_, 0L) };
        inline TunnelQuotaParameter& setElasticReservedSlotNum(int64_t elasticReservedSlotNum) { DARABONBA_PTR_SET_VALUE(elasticReservedSlotNum_, elasticReservedSlotNum) };


        // slotNum Field Functions 
        bool hasSlotNum() const { return this->slotNum_ != nullptr;};
        void deleteSlotNum() { this->slotNum_ = nullptr;};
        inline int64_t getSlotNum() const { DARABONBA_PTR_GET_DEFAULT(slotNum_, 0L) };
        inline TunnelQuotaParameter& setSlotNum(int64_t slotNum) { DARABONBA_PTR_SET_VALUE(slotNum_, slotNum) };


      protected:
        // The number of elastic reserved concurrent slots.
        shared_ptr<int64_t> elasticReservedSlotNum_ {};
        // The number of reserved concurrent slots.
        shared_ptr<int64_t> slotNum_ {};
      };

      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->tunnelQuotaParameter_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
      inline Body& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Body& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // tunnelQuotaParameter Field Functions 
      bool hasTunnelQuotaParameter() const { return this->tunnelQuotaParameter_ != nullptr;};
      void deleteTunnelQuotaParameter() { this->tunnelQuotaParameter_ = nullptr;};
      inline const Body::TunnelQuotaParameter & getTunnelQuotaParameter() const { DARABONBA_PTR_GET_CONST(tunnelQuotaParameter_, Body::TunnelQuotaParameter) };
      inline Body::TunnelQuotaParameter getTunnelQuotaParameter() { DARABONBA_PTR_GET(tunnelQuotaParameter_, Body::TunnelQuotaParameter) };
      inline Body& setTunnelQuotaParameter(const Body::TunnelQuotaParameter & tunnelQuotaParameter) { DARABONBA_PTR_SET_VALUE(tunnelQuotaParameter_, tunnelQuotaParameter) };
      inline Body& setTunnelQuotaParameter(Body::TunnelQuotaParameter && tunnelQuotaParameter) { DARABONBA_PTR_SET_RVALUE(tunnelQuotaParameter_, tunnelQuotaParameter) };


    protected:
      // The start time of the time-based configuration.
      shared_ptr<string> beginTime_ {};
      // The end time of the time-based configuration.
      shared_ptr<string> endTime_ {};
      // The parameters of the time-based configuration.
      shared_ptr<Body::TunnelQuotaParameter> tunnelQuotaParameter_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->timezone_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<UpdateTunnelQuotaTimerRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<UpdateTunnelQuotaTimerRequest::Body>) };
    inline vector<UpdateTunnelQuotaTimerRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<UpdateTunnelQuotaTimerRequest::Body>) };
    inline UpdateTunnelQuotaTimerRequest& setBody(const vector<UpdateTunnelQuotaTimerRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTunnelQuotaTimerRequest& setBody(vector<UpdateTunnelQuotaTimerRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline UpdateTunnelQuotaTimerRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


  protected:
    // The request body.
    shared_ptr<vector<UpdateTunnelQuotaTimerRequest::Body>> body_ {};
    // The time zone.
    shared_ptr<string> timezone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
