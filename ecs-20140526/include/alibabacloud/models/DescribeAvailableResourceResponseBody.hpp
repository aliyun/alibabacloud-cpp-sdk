// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODY_HPP_
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
  class DescribeAvailableResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody(DescribeAvailableResourceResponseBody &&) = default ;
    DescribeAvailableResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBody() = default ;
    DescribeAvailableResourceResponseBody& operator=(const DescribeAvailableResourceResponseBody &) = default ;
    DescribeAvailableResourceResponseBody& operator=(DescribeAvailableResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZones& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableZone, availableZone_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZones& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableZone, availableZone_);
      };
      AvailableZones() = default ;
      AvailableZones(const AvailableZones &) = default ;
      AvailableZones(AvailableZones &&) = default ;
      AvailableZones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableZones() = default ;
      AvailableZones& operator=(const AvailableZones &) = default ;
      AvailableZones& operator=(AvailableZones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AvailableZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvailableZone& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, AvailableZone& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        AvailableZone() = default ;
        AvailableZone(const AvailableZone &) = default ;
        AvailableZone(AvailableZone &&) = default ;
        AvailableZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvailableZone() = default ;
        AvailableZone& operator=(const AvailableZone &) = default ;
        AvailableZone& operator=(AvailableZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AvailableResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableResources& obj) { 
            DARABONBA_PTR_TO_JSON(AvailableResource, availableResource_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableResources& obj) { 
            DARABONBA_PTR_FROM_JSON(AvailableResource, availableResource_);
          };
          AvailableResources() = default ;
          AvailableResources(const AvailableResources &) = default ;
          AvailableResources(AvailableResources &&) = default ;
          AvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableResources() = default ;
          AvailableResources& operator=(const AvailableResources &) = default ;
          AvailableResources& operator=(AvailableResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AvailableResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AvailableResource& obj) { 
              DARABONBA_PTR_TO_JSON(SupportedResources, supportedResources_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, AvailableResource& obj) { 
              DARABONBA_PTR_FROM_JSON(SupportedResources, supportedResources_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            AvailableResource() = default ;
            AvailableResource(const AvailableResource &) = default ;
            AvailableResource(AvailableResource &&) = default ;
            AvailableResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AvailableResource() = default ;
            AvailableResource& operator=(const AvailableResource &) = default ;
            AvailableResource& operator=(AvailableResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SupportedResources : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SupportedResources& obj) { 
                DARABONBA_PTR_TO_JSON(SupportedResource, supportedResource_);
              };
              friend void from_json(const Darabonba::Json& j, SupportedResources& obj) { 
                DARABONBA_PTR_FROM_JSON(SupportedResource, supportedResource_);
              };
              SupportedResources() = default ;
              SupportedResources(const SupportedResources &) = default ;
              SupportedResources(SupportedResources &&) = default ;
              SupportedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SupportedResources() = default ;
              SupportedResources& operator=(const SupportedResources &) = default ;
              SupportedResources& operator=(SupportedResources &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class SupportedResource : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SupportedResource& obj) { 
                  DARABONBA_PTR_TO_JSON(Max, max_);
                  DARABONBA_PTR_TO_JSON(Min, min_);
                  DARABONBA_PTR_TO_JSON(Status, status_);
                  DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
                  DARABONBA_PTR_TO_JSON(Unit, unit_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, SupportedResource& obj) { 
                  DARABONBA_PTR_FROM_JSON(Max, max_);
                  DARABONBA_PTR_FROM_JSON(Min, min_);
                  DARABONBA_PTR_FROM_JSON(Status, status_);
                  DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
                  DARABONBA_PTR_FROM_JSON(Unit, unit_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                SupportedResource() = default ;
                SupportedResource(const SupportedResource &) = default ;
                SupportedResource(SupportedResource &&) = default ;
                SupportedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SupportedResource() = default ;
                SupportedResource& operator=(const SupportedResource &) = default ;
                SupportedResource& operator=(SupportedResource &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr && this->status_ == nullptr && this->statusCategory_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
                // max Field Functions 
                bool hasMax() const { return this->max_ != nullptr;};
                void deleteMax() { this->max_ = nullptr;};
                inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
                inline SupportedResource& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


                // min Field Functions 
                bool hasMin() const { return this->min_ != nullptr;};
                void deleteMin() { this->min_ = nullptr;};
                inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
                inline SupportedResource& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


                // status Field Functions 
                bool hasStatus() const { return this->status_ != nullptr;};
                void deleteStatus() { this->status_ = nullptr;};
                inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
                inline SupportedResource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


                // statusCategory Field Functions 
                bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
                void deleteStatusCategory() { this->statusCategory_ = nullptr;};
                inline string getStatusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
                inline SupportedResource& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


                // unit Field Functions 
                bool hasUnit() const { return this->unit_ != nullptr;};
                void deleteUnit() { this->unit_ = nullptr;};
                inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
                inline SupportedResource& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline SupportedResource& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<int32_t> max_ {};
                shared_ptr<int32_t> min_ {};
                shared_ptr<string> status_ {};
                shared_ptr<string> statusCategory_ {};
                shared_ptr<string> unit_ {};
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->supportedResource_ == nullptr; };
              // supportedResource Field Functions 
              bool hasSupportedResource() const { return this->supportedResource_ != nullptr;};
              void deleteSupportedResource() { this->supportedResource_ = nullptr;};
              inline const vector<SupportedResources::SupportedResource> & getSupportedResource() const { DARABONBA_PTR_GET_CONST(supportedResource_, vector<SupportedResources::SupportedResource>) };
              inline vector<SupportedResources::SupportedResource> getSupportedResource() { DARABONBA_PTR_GET(supportedResource_, vector<SupportedResources::SupportedResource>) };
              inline SupportedResources& setSupportedResource(const vector<SupportedResources::SupportedResource> & supportedResource) { DARABONBA_PTR_SET_VALUE(supportedResource_, supportedResource) };
              inline SupportedResources& setSupportedResource(vector<SupportedResources::SupportedResource> && supportedResource) { DARABONBA_PTR_SET_RVALUE(supportedResource_, supportedResource) };


            protected:
              shared_ptr<vector<SupportedResources::SupportedResource>> supportedResource_ {};
            };

            virtual bool empty() const override { return this->supportedResources_ == nullptr
        && this->type_ == nullptr; };
            // supportedResources Field Functions 
            bool hasSupportedResources() const { return this->supportedResources_ != nullptr;};
            void deleteSupportedResources() { this->supportedResources_ = nullptr;};
            inline const AvailableResource::SupportedResources & getSupportedResources() const { DARABONBA_PTR_GET_CONST(supportedResources_, AvailableResource::SupportedResources) };
            inline AvailableResource::SupportedResources getSupportedResources() { DARABONBA_PTR_GET(supportedResources_, AvailableResource::SupportedResources) };
            inline AvailableResource& setSupportedResources(const AvailableResource::SupportedResources & supportedResources) { DARABONBA_PTR_SET_VALUE(supportedResources_, supportedResources) };
            inline AvailableResource& setSupportedResources(AvailableResource::SupportedResources && supportedResources) { DARABONBA_PTR_SET_RVALUE(supportedResources_, supportedResources) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline AvailableResource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<AvailableResource::SupportedResources> supportedResources_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->availableResource_ == nullptr; };
          // availableResource Field Functions 
          bool hasAvailableResource() const { return this->availableResource_ != nullptr;};
          void deleteAvailableResource() { this->availableResource_ = nullptr;};
          inline const vector<AvailableResources::AvailableResource> & getAvailableResource() const { DARABONBA_PTR_GET_CONST(availableResource_, vector<AvailableResources::AvailableResource>) };
          inline vector<AvailableResources::AvailableResource> getAvailableResource() { DARABONBA_PTR_GET(availableResource_, vector<AvailableResources::AvailableResource>) };
          inline AvailableResources& setAvailableResource(const vector<AvailableResources::AvailableResource> & availableResource) { DARABONBA_PTR_SET_VALUE(availableResource_, availableResource) };
          inline AvailableResources& setAvailableResource(vector<AvailableResources::AvailableResource> && availableResource) { DARABONBA_PTR_SET_RVALUE(availableResource_, availableResource) };


        protected:
          shared_ptr<vector<AvailableResources::AvailableResource>> availableResource_ {};
        };

        virtual bool empty() const override { return this->availableResources_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr && this->statusCategory_ == nullptr && this->zoneId_ == nullptr; };
        // availableResources Field Functions 
        bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
        void deleteAvailableResources() { this->availableResources_ = nullptr;};
        inline const AvailableZone::AvailableResources & getAvailableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, AvailableZone::AvailableResources) };
        inline AvailableZone::AvailableResources getAvailableResources() { DARABONBA_PTR_GET(availableResources_, AvailableZone::AvailableResources) };
        inline AvailableZone& setAvailableResources(const AvailableZone::AvailableResources & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
        inline AvailableZone& setAvailableResources(AvailableZone::AvailableResources && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AvailableZone& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AvailableZone& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCategory Field Functions 
        bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
        void deleteStatusCategory() { this->statusCategory_ = nullptr;};
        inline string getStatusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
        inline AvailableZone& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline AvailableZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<AvailableZone::AvailableResources> availableResources_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        // The resource status based on the stock level in the zone. Valid value:
        // 
        // *   WithStock: The resources are available and can be continuously replenished.
        // *   ClosedWithStock: Inventory is available, but resources will not be replenished. The ability to guarantee the supply of inventory is low. We recommend selecting a product specification in the WithStock state.
        // *   WithoutStock: The resource is out of stock and will be replenished. We recommend using other resources that are in stock.
        // *   ClosedWithoutStock: The resource is out of stock and will no longer be replenished. We recommend using other resources that are in stock.
        shared_ptr<string> statusCategory_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->availableZone_ == nullptr; };
      // availableZone Field Functions 
      bool hasAvailableZone() const { return this->availableZone_ != nullptr;};
      void deleteAvailableZone() { this->availableZone_ = nullptr;};
      inline const vector<AvailableZones::AvailableZone> & getAvailableZone() const { DARABONBA_PTR_GET_CONST(availableZone_, vector<AvailableZones::AvailableZone>) };
      inline vector<AvailableZones::AvailableZone> getAvailableZone() { DARABONBA_PTR_GET(availableZone_, vector<AvailableZones::AvailableZone>) };
      inline AvailableZones& setAvailableZone(const vector<AvailableZones::AvailableZone> & availableZone) { DARABONBA_PTR_SET_VALUE(availableZone_, availableZone) };
      inline AvailableZones& setAvailableZone(vector<AvailableZones::AvailableZone> && availableZone) { DARABONBA_PTR_SET_RVALUE(availableZone_, availableZone) };


    protected:
      shared_ptr<vector<AvailableZones::AvailableZone>> availableZone_ {};
    };

    virtual bool empty() const override { return this->availableZones_ == nullptr
        && this->requestId_ == nullptr; };
    // availableZones Field Functions 
    bool hasAvailableZones() const { return this->availableZones_ != nullptr;};
    void deleteAvailableZones() { this->availableZones_ = nullptr;};
    inline const DescribeAvailableResourceResponseBody::AvailableZones & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, DescribeAvailableResourceResponseBody::AvailableZones) };
    inline DescribeAvailableResourceResponseBody::AvailableZones getAvailableZones() { DARABONBA_PTR_GET(availableZones_, DescribeAvailableResourceResponseBody::AvailableZones) };
    inline DescribeAvailableResourceResponseBody& setAvailableZones(const DescribeAvailableResourceResponseBody::AvailableZones & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeAvailableResourceResponseBody& setAvailableZones(DescribeAvailableResourceResponseBody::AvailableZones && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the availability of resources in the zones.
    shared_ptr<DescribeAvailableResourceResponseBody::AvailableZones> availableZones_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
