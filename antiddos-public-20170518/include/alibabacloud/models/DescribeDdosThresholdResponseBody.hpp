// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosThresholdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosThresholdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosThresholdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
    };
    DescribeDdosThresholdResponseBody() = default ;
    DescribeDdosThresholdResponseBody(const DescribeDdosThresholdResponseBody &) = default ;
    DescribeDdosThresholdResponseBody(DescribeDdosThresholdResponseBody &&) = default ;
    DescribeDdosThresholdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosThresholdResponseBody() = default ;
    DescribeDdosThresholdResponseBody& operator=(const DescribeDdosThresholdResponseBody &) = default ;
    DescribeDdosThresholdResponseBody& operator=(DescribeDdosThresholdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Thresholds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Thresholds& obj) { 
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, Thresholds& obj) { 
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      };
      Thresholds() = default ;
      Thresholds(const Thresholds &) = default ;
      Thresholds(Thresholds &&) = default ;
      Thresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Thresholds() = default ;
      Thresholds& operator=(const Thresholds &) = default ;
      Thresholds& operator=(Thresholds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Threshold : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Threshold& obj) { 
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(DdosType, ddosType_);
          DARABONBA_PTR_TO_JSON(ElasticBps, elasticBps_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_TO_JSON(IsAuto, isAuto_);
          DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
          DARABONBA_PTR_TO_JSON(MaxPps, maxPps_);
          DARABONBA_PTR_TO_JSON(Pps, pps_);
        };
        friend void from_json(const Darabonba::Json& j, Threshold& obj) { 
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(DdosType, ddosType_);
          DARABONBA_PTR_FROM_JSON(ElasticBps, elasticBps_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_FROM_JSON(IsAuto, isAuto_);
          DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
          DARABONBA_PTR_FROM_JSON(MaxPps, maxPps_);
          DARABONBA_PTR_FROM_JSON(Pps, pps_);
        };
        Threshold() = default ;
        Threshold(const Threshold &) = default ;
        Threshold(Threshold &&) = default ;
        Threshold(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Threshold() = default ;
        Threshold& operator=(const Threshold &) = default ;
        Threshold& operator=(Threshold &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bps_ == nullptr
        && this->ddosType_ == nullptr && this->elasticBps_ == nullptr && this->instanceId_ == nullptr && this->internetIp_ == nullptr && this->isAuto_ == nullptr
        && this->maxBps_ == nullptr && this->maxPps_ == nullptr && this->pps_ == nullptr; };
        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline int32_t getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
        inline Threshold& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // ddosType Field Functions 
        bool hasDdosType() const { return this->ddosType_ != nullptr;};
        void deleteDdosType() { this->ddosType_ = nullptr;};
        inline string getDdosType() const { DARABONBA_PTR_GET_DEFAULT(ddosType_, "") };
        inline Threshold& setDdosType(string ddosType) { DARABONBA_PTR_SET_VALUE(ddosType_, ddosType) };


        // elasticBps Field Functions 
        bool hasElasticBps() const { return this->elasticBps_ != nullptr;};
        void deleteElasticBps() { this->elasticBps_ = nullptr;};
        inline int32_t getElasticBps() const { DARABONBA_PTR_GET_DEFAULT(elasticBps_, 0) };
        inline Threshold& setElasticBps(int32_t elasticBps) { DARABONBA_PTR_SET_VALUE(elasticBps_, elasticBps) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Threshold& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline Threshold& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // isAuto Field Functions 
        bool hasIsAuto() const { return this->isAuto_ != nullptr;};
        void deleteIsAuto() { this->isAuto_ = nullptr;};
        inline bool getIsAuto() const { DARABONBA_PTR_GET_DEFAULT(isAuto_, false) };
        inline Threshold& setIsAuto(bool isAuto) { DARABONBA_PTR_SET_VALUE(isAuto_, isAuto) };


        // maxBps Field Functions 
        bool hasMaxBps() const { return this->maxBps_ != nullptr;};
        void deleteMaxBps() { this->maxBps_ = nullptr;};
        inline int32_t getMaxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, 0) };
        inline Threshold& setMaxBps(int32_t maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


        // maxPps Field Functions 
        bool hasMaxPps() const { return this->maxPps_ != nullptr;};
        void deleteMaxPps() { this->maxPps_ = nullptr;};
        inline int32_t getMaxPps() const { DARABONBA_PTR_GET_DEFAULT(maxPps_, 0) };
        inline Threshold& setMaxPps(int32_t maxPps) { DARABONBA_PTR_SET_VALUE(maxPps_, maxPps) };


        // pps Field Functions 
        bool hasPps() const { return this->pps_ != nullptr;};
        void deletePps() { this->pps_ = nullptr;};
        inline int32_t getPps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
        inline Threshold& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


      protected:
        shared_ptr<int32_t> bps_ {};
        shared_ptr<string> ddosType_ {};
        shared_ptr<int32_t> elasticBps_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> internetIp_ {};
        shared_ptr<bool> isAuto_ {};
        shared_ptr<int32_t> maxBps_ {};
        shared_ptr<int32_t> maxPps_ {};
        shared_ptr<int32_t> pps_ {};
      };

      virtual bool empty() const override { return this->threshold_ == nullptr; };
      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline const vector<Thresholds::Threshold> & getThreshold() const { DARABONBA_PTR_GET_CONST(threshold_, vector<Thresholds::Threshold>) };
      inline vector<Thresholds::Threshold> getThreshold() { DARABONBA_PTR_GET(threshold_, vector<Thresholds::Threshold>) };
      inline Thresholds& setThreshold(const vector<Thresholds::Threshold> & threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };
      inline Thresholds& setThreshold(vector<Thresholds::Threshold> && threshold) { DARABONBA_PTR_SET_RVALUE(threshold_, threshold) };


    protected:
      shared_ptr<vector<Thresholds::Threshold>> threshold_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->thresholds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDdosThresholdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // thresholds Field Functions 
    bool hasThresholds() const { return this->thresholds_ != nullptr;};
    void deleteThresholds() { this->thresholds_ = nullptr;};
    inline const DescribeDdosThresholdResponseBody::Thresholds & getThresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, DescribeDdosThresholdResponseBody::Thresholds) };
    inline DescribeDdosThresholdResponseBody::Thresholds getThresholds() { DARABONBA_PTR_GET(thresholds_, DescribeDdosThresholdResponseBody::Thresholds) };
    inline DescribeDdosThresholdResponseBody& setThresholds(const DescribeDdosThresholdResponseBody::Thresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
    inline DescribeDdosThresholdResponseBody& setThresholds(DescribeDdosThresholdResponseBody::Thresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeDdosThresholdResponseBody::Thresholds> thresholds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
