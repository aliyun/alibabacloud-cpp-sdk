// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSpotAdviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableSpotZones, availableSpotZones_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableSpotZones, availableSpotZones_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSpotAdviceResponseBody() = default ;
    DescribeSpotAdviceResponseBody(const DescribeSpotAdviceResponseBody &) = default ;
    DescribeSpotAdviceResponseBody(DescribeSpotAdviceResponseBody &&) = default ;
    DescribeSpotAdviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceResponseBody() = default ;
    DescribeSpotAdviceResponseBody& operator=(const DescribeSpotAdviceResponseBody &) = default ;
    DescribeSpotAdviceResponseBody& operator=(DescribeSpotAdviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableSpotZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableSpotZones& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableSpotZone, availableSpotZone_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableSpotZones& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableSpotZone, availableSpotZone_);
      };
      AvailableSpotZones() = default ;
      AvailableSpotZones(const AvailableSpotZones &) = default ;
      AvailableSpotZones(AvailableSpotZones &&) = default ;
      AvailableSpotZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableSpotZones() = default ;
      AvailableSpotZones& operator=(const AvailableSpotZones &) = default ;
      AvailableSpotZones& operator=(AvailableSpotZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AvailableSpotZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableSpotZone& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableSpotResources, availableSpotResources_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableSpotZone& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableSpotResources, availableSpotResources_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        AvailableSpotZone() = default ;
        AvailableSpotZone(const AvailableSpotZone &) = default ;
        AvailableSpotZone(AvailableSpotZone &&) = default ;
        AvailableSpotZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableSpotZone() = default ;
        AvailableSpotZone& operator=(const AvailableSpotZone &) = default ;
        AvailableSpotZone& operator=(AvailableSpotZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AvailableSpotResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableSpotResources& obj) { 
            DARABONBA_PTR_TO_JSON(AvailableSpotResource, availableSpotResource_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableSpotResources& obj) { 
            DARABONBA_PTR_FROM_JSON(AvailableSpotResource, availableSpotResource_);
          };
          AvailableSpotResources() = default ;
          AvailableSpotResources(const AvailableSpotResources &) = default ;
          AvailableSpotResources(AvailableSpotResources &&) = default ;
          AvailableSpotResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableSpotResources() = default ;
          AvailableSpotResources& operator=(const AvailableSpotResources &) = default ;
          AvailableSpotResources& operator=(AvailableSpotResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AvailableSpotResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AvailableSpotResource& obj) { 
              DARABONBA_PTR_TO_JSON(AverageSpotDiscount, averageSpotDiscount_);
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(InterruptRateDesc, interruptRateDesc_);
              DARABONBA_PTR_TO_JSON(InterruptionRate, interruptionRate_);
            };
            friend void from_json(const Darabonba::Json& j, AvailableSpotResource& obj) { 
              DARABONBA_PTR_FROM_JSON(AverageSpotDiscount, averageSpotDiscount_);
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(InterruptRateDesc, interruptRateDesc_);
              DARABONBA_PTR_FROM_JSON(InterruptionRate, interruptionRate_);
            };
            AvailableSpotResource() = default ;
            AvailableSpotResource(const AvailableSpotResource &) = default ;
            AvailableSpotResource(AvailableSpotResource &&) = default ;
            AvailableSpotResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AvailableSpotResource() = default ;
            AvailableSpotResource& operator=(const AvailableSpotResource &) = default ;
            AvailableSpotResource& operator=(AvailableSpotResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->averageSpotDiscount_ == nullptr
        && this->instanceType_ == nullptr && this->interruptRateDesc_ == nullptr && this->interruptionRate_ == nullptr; };
            // averageSpotDiscount Field Functions 
            bool hasAverageSpotDiscount() const { return this->averageSpotDiscount_ != nullptr;};
            void deleteAverageSpotDiscount() { this->averageSpotDiscount_ = nullptr;};
            inline int32_t getAverageSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(averageSpotDiscount_, 0) };
            inline AvailableSpotResource& setAverageSpotDiscount(int32_t averageSpotDiscount) { DARABONBA_PTR_SET_VALUE(averageSpotDiscount_, averageSpotDiscount) };


            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline AvailableSpotResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // interruptRateDesc Field Functions 
            bool hasInterruptRateDesc() const { return this->interruptRateDesc_ != nullptr;};
            void deleteInterruptRateDesc() { this->interruptRateDesc_ = nullptr;};
            inline string getInterruptRateDesc() const { DARABONBA_PTR_GET_DEFAULT(interruptRateDesc_, "") };
            inline AvailableSpotResource& setInterruptRateDesc(string interruptRateDesc) { DARABONBA_PTR_SET_VALUE(interruptRateDesc_, interruptRateDesc) };


            // interruptionRate Field Functions 
            bool hasInterruptionRate() const { return this->interruptionRate_ != nullptr;};
            void deleteInterruptionRate() { this->interruptionRate_ = nullptr;};
            inline float getInterruptionRate() const { DARABONBA_PTR_GET_DEFAULT(interruptionRate_, 0.0) };
            inline AvailableSpotResource& setInterruptionRate(float interruptionRate) { DARABONBA_PTR_SET_VALUE(interruptionRate_, interruptionRate) };


          protected:
            // The percentage of the average spot instance price relative to the pay-as-you-go instance price in the previous 30 days. Unit: %. Valid values: 1 to 100.
            // 
            // You can calculate the average spot instance price based on the return value. For example, if the pay-as-you-go instance price is 1 and the return value of this parameter is 20, the average spot instance price in the previous 30 days is 0.2.
            shared_ptr<int32_t> averageSpotDiscount_ {};
            // The instance type.
            shared_ptr<string> instanceType_ {};
            // The release rate range of spot instances in the previous 30 days, which corresponds to the `InterruptionRate` value. Valid values:
            // 
            // *   0-3%
            // *   3-5%
            // *   5-10%
            // *   10-100%
            shared_ptr<string> interruptRateDesc_ {};
            // The average release rate of spot instances in the previous 30 days. Unit: %.
            shared_ptr<float> interruptionRate_ {};
          };

          virtual bool empty() const override { return this->availableSpotResource_ == nullptr; };
          // availableSpotResource Field Functions 
          bool hasAvailableSpotResource() const { return this->availableSpotResource_ != nullptr;};
          void deleteAvailableSpotResource() { this->availableSpotResource_ = nullptr;};
          inline const vector<AvailableSpotResources::AvailableSpotResource> & getAvailableSpotResource() const { DARABONBA_PTR_GET_CONST(availableSpotResource_, vector<AvailableSpotResources::AvailableSpotResource>) };
          inline vector<AvailableSpotResources::AvailableSpotResource> getAvailableSpotResource() { DARABONBA_PTR_GET(availableSpotResource_, vector<AvailableSpotResources::AvailableSpotResource>) };
          inline AvailableSpotResources& setAvailableSpotResource(const vector<AvailableSpotResources::AvailableSpotResource> & availableSpotResource) { DARABONBA_PTR_SET_VALUE(availableSpotResource_, availableSpotResource) };
          inline AvailableSpotResources& setAvailableSpotResource(vector<AvailableSpotResources::AvailableSpotResource> && availableSpotResource) { DARABONBA_PTR_SET_RVALUE(availableSpotResource_, availableSpotResource) };


        protected:
          shared_ptr<vector<AvailableSpotResources::AvailableSpotResource>> availableSpotResource_ {};
        };

        virtual bool empty() const override { return this->availableSpotResources_ == nullptr
        && this->zoneId_ == nullptr; };
        // availableSpotResources Field Functions 
        bool hasAvailableSpotResources() const { return this->availableSpotResources_ != nullptr;};
        void deleteAvailableSpotResources() { this->availableSpotResources_ = nullptr;};
        inline const AvailableSpotZone::AvailableSpotResources & getAvailableSpotResources() const { DARABONBA_PTR_GET_CONST(availableSpotResources_, AvailableSpotZone::AvailableSpotResources) };
        inline AvailableSpotZone::AvailableSpotResources getAvailableSpotResources() { DARABONBA_PTR_GET(availableSpotResources_, AvailableSpotZone::AvailableSpotResources) };
        inline AvailableSpotZone& setAvailableSpotResources(const AvailableSpotZone::AvailableSpotResources & availableSpotResources) { DARABONBA_PTR_SET_VALUE(availableSpotResources_, availableSpotResources) };
        inline AvailableSpotZone& setAvailableSpotResources(AvailableSpotZone::AvailableSpotResources && availableSpotResources) { DARABONBA_PTR_SET_RVALUE(availableSpotResources_, availableSpotResources) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline AvailableSpotZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // Details about spot instances in the previous 30 days, including the release rate of spot instances and percentages of average spot instance prices relative to pay-as-you-go instance prices.
        shared_ptr<AvailableSpotZone::AvailableSpotResources> availableSpotResources_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->availableSpotZone_ == nullptr; };
      // availableSpotZone Field Functions 
      bool hasAvailableSpotZone() const { return this->availableSpotZone_ != nullptr;};
      void deleteAvailableSpotZone() { this->availableSpotZone_ = nullptr;};
      inline const vector<AvailableSpotZones::AvailableSpotZone> & getAvailableSpotZone() const { DARABONBA_PTR_GET_CONST(availableSpotZone_, vector<AvailableSpotZones::AvailableSpotZone>) };
      inline vector<AvailableSpotZones::AvailableSpotZone> getAvailableSpotZone() { DARABONBA_PTR_GET(availableSpotZone_, vector<AvailableSpotZones::AvailableSpotZone>) };
      inline AvailableSpotZones& setAvailableSpotZone(const vector<AvailableSpotZones::AvailableSpotZone> & availableSpotZone) { DARABONBA_PTR_SET_VALUE(availableSpotZone_, availableSpotZone) };
      inline AvailableSpotZones& setAvailableSpotZone(vector<AvailableSpotZones::AvailableSpotZone> && availableSpotZone) { DARABONBA_PTR_SET_RVALUE(availableSpotZone_, availableSpotZone) };


    protected:
      shared_ptr<vector<AvailableSpotZones::AvailableSpotZone>> availableSpotZone_ {};
    };

    virtual bool empty() const override { return this->availableSpotZones_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // availableSpotZones Field Functions 
    bool hasAvailableSpotZones() const { return this->availableSpotZones_ != nullptr;};
    void deleteAvailableSpotZones() { this->availableSpotZones_ = nullptr;};
    inline const DescribeSpotAdviceResponseBody::AvailableSpotZones & getAvailableSpotZones() const { DARABONBA_PTR_GET_CONST(availableSpotZones_, DescribeSpotAdviceResponseBody::AvailableSpotZones) };
    inline DescribeSpotAdviceResponseBody::AvailableSpotZones getAvailableSpotZones() { DARABONBA_PTR_GET(availableSpotZones_, DescribeSpotAdviceResponseBody::AvailableSpotZones) };
    inline DescribeSpotAdviceResponseBody& setAvailableSpotZones(const DescribeSpotAdviceResponseBody::AvailableSpotZones & availableSpotZones) { DARABONBA_PTR_SET_VALUE(availableSpotZones_, availableSpotZones) };
    inline DescribeSpotAdviceResponseBody& setAvailableSpotZones(DescribeSpotAdviceResponseBody::AvailableSpotZones && availableSpotZones) { DARABONBA_PTR_SET_RVALUE(availableSpotZones_, availableSpotZones) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSpotAdviceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSpotAdviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about spot instances in the zones of the specified region.
    // 
    // >  The return values are sorted based on the historical percentages of average spot instance prices relative to pay-as-you-go instance prices for instance types.
    shared_ptr<DescribeSpotAdviceResponseBody::AvailableSpotZones> availableSpotZones_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
