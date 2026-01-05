// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCESMODIFICATIONRESPONSEBODY_HPP_
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
  class DescribeResourcesModificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourcesModificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourcesModificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZones, availableZones_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeResourcesModificationResponseBody() = default ;
    DescribeResourcesModificationResponseBody(const DescribeResourcesModificationResponseBody &) = default ;
    DescribeResourcesModificationResponseBody(DescribeResourcesModificationResponseBody &&) = default ;
    DescribeResourcesModificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourcesModificationResponseBody() = default ;
    DescribeResourcesModificationResponseBody& operator=(const DescribeResourcesModificationResponseBody &) = default ;
    DescribeResourcesModificationResponseBody& operator=(DescribeResourcesModificationResponseBody &&) = default ;
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
              DARABONBA_PTR_TO_JSON(ConditionSupportedResources, conditionSupportedResources_);
              DARABONBA_PTR_TO_JSON(SupportedResources, supportedResources_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, AvailableResource& obj) { 
              DARABONBA_PTR_FROM_JSON(ConditionSupportedResources, conditionSupportedResources_);
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
                // The maximum disk capacity.
                // 
                // This parameter takes effect only when the DestinationResource request parameter is set to SystemDisk.
                shared_ptr<int32_t> max_ {};
                // The minimum disk capacity.
                // 
                // This parameter takes effect only when the DestinationResource request parameter is set to SystemDisk.
                shared_ptr<int32_t> min_ {};
                // The state of the resource. Valid values:
                // 
                // *   Available
                // *   SoldOut
                shared_ptr<string> status_ {};
                // The category of the resource based on stock status. Valid values:
                // 
                // *   WithStock: resources that are in sufficient stock
                // *   ClosedWithStock: resources that are in insufficient stock
                // *   WithoutStock: resources that are out of stock
                shared_ptr<string> statusCategory_ {};
                // The unit of the disk capacity. This parameter takes effect only when the DestinationResource request parameter is set to SystemDisk.
                shared_ptr<string> unit_ {};
                // The resource type.
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

            class ConditionSupportedResources : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConditionSupportedResources& obj) { 
                DARABONBA_PTR_TO_JSON(ConditionSupportedResource, conditionSupportedResource_);
              };
              friend void from_json(const Darabonba::Json& j, ConditionSupportedResources& obj) { 
                DARABONBA_PTR_FROM_JSON(ConditionSupportedResource, conditionSupportedResource_);
              };
              ConditionSupportedResources() = default ;
              ConditionSupportedResources(const ConditionSupportedResources &) = default ;
              ConditionSupportedResources(ConditionSupportedResources &&) = default ;
              ConditionSupportedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConditionSupportedResources() = default ;
              ConditionSupportedResources& operator=(const ConditionSupportedResources &) = default ;
              ConditionSupportedResources& operator=(ConditionSupportedResources &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ConditionSupportedResource : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ConditionSupportedResource& obj) { 
                  DARABONBA_PTR_TO_JSON(Conditions, conditions_);
                  DARABONBA_PTR_TO_JSON(Max, max_);
                  DARABONBA_PTR_TO_JSON(Min, min_);
                  DARABONBA_PTR_TO_JSON(Status, status_);
                  DARABONBA_PTR_TO_JSON(StatusCategory, statusCategory_);
                  DARABONBA_PTR_TO_JSON(Unit, unit_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, ConditionSupportedResource& obj) { 
                  DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
                  DARABONBA_PTR_FROM_JSON(Max, max_);
                  DARABONBA_PTR_FROM_JSON(Min, min_);
                  DARABONBA_PTR_FROM_JSON(Status, status_);
                  DARABONBA_PTR_FROM_JSON(StatusCategory, statusCategory_);
                  DARABONBA_PTR_FROM_JSON(Unit, unit_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                ConditionSupportedResource() = default ;
                ConditionSupportedResource(const ConditionSupportedResource &) = default ;
                ConditionSupportedResource(ConditionSupportedResource &&) = default ;
                ConditionSupportedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ConditionSupportedResource() = default ;
                ConditionSupportedResource& operator=(const ConditionSupportedResource &) = default ;
                ConditionSupportedResource& operator=(ConditionSupportedResource &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Conditions : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
                    DARABONBA_PTR_TO_JSON(Condition, condition_);
                  };
                  friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
                    DARABONBA_PTR_FROM_JSON(Condition, condition_);
                  };
                  Conditions() = default ;
                  Conditions(const Conditions &) = default ;
                  Conditions(Conditions &&) = default ;
                  Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~Conditions() = default ;
                  Conditions& operator=(const Conditions &) = default ;
                  Conditions& operator=(Conditions &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class Condition : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const Condition& obj) { 
                      DARABONBA_PTR_TO_JSON(Key, key_);
                    };
                    friend void from_json(const Darabonba::Json& j, Condition& obj) { 
                      DARABONBA_PTR_FROM_JSON(Key, key_);
                    };
                    Condition() = default ;
                    Condition(const Condition &) = default ;
                    Condition(Condition &&) = default ;
                    Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~Condition() = default ;
                    Condition& operator=(const Condition &) = default ;
                    Condition& operator=(Condition &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->key_ == nullptr; };
                    // key Field Functions 
                    bool hasKey() const { return this->key_ != nullptr;};
                    void deleteKey() { this->key_ = nullptr;};
                    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
                    inline Condition& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


                  protected:
                    // The condition name. Valid value:
                    // 
                    // DiskCategory, which indicates a disk category change.
                    shared_ptr<string> key_ {};
                  };

                  virtual bool empty() const override { return this->condition_ == nullptr; };
                  // condition Field Functions 
                  bool hasCondition() const { return this->condition_ != nullptr;};
                  void deleteCondition() { this->condition_ = nullptr;};
                  inline const vector<Conditions::Condition> & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, vector<Conditions::Condition>) };
                  inline vector<Conditions::Condition> getCondition() { DARABONBA_PTR_GET(condition_, vector<Conditions::Condition>) };
                  inline Conditions& setCondition(const vector<Conditions::Condition> & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
                  inline Conditions& setCondition(vector<Conditions::Condition> && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


                protected:
                  shared_ptr<vector<Conditions::Condition>> condition_ {};
                };

                virtual bool empty() const override { return this->conditions_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->status_ == nullptr && this->statusCategory_ == nullptr && this->unit_ == nullptr
        && this->value_ == nullptr; };
                // conditions Field Functions 
                bool hasConditions() const { return this->conditions_ != nullptr;};
                void deleteConditions() { this->conditions_ = nullptr;};
                inline const ConditionSupportedResource::Conditions & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, ConditionSupportedResource::Conditions) };
                inline ConditionSupportedResource::Conditions getConditions() { DARABONBA_PTR_GET(conditions_, ConditionSupportedResource::Conditions) };
                inline ConditionSupportedResource& setConditions(const ConditionSupportedResource::Conditions & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
                inline ConditionSupportedResource& setConditions(ConditionSupportedResource::Conditions && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


                // max Field Functions 
                bool hasMax() const { return this->max_ != nullptr;};
                void deleteMax() { this->max_ = nullptr;};
                inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
                inline ConditionSupportedResource& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


                // min Field Functions 
                bool hasMin() const { return this->min_ != nullptr;};
                void deleteMin() { this->min_ = nullptr;};
                inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
                inline ConditionSupportedResource& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


                // status Field Functions 
                bool hasStatus() const { return this->status_ != nullptr;};
                void deleteStatus() { this->status_ = nullptr;};
                inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
                inline ConditionSupportedResource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


                // statusCategory Field Functions 
                bool hasStatusCategory() const { return this->statusCategory_ != nullptr;};
                void deleteStatusCategory() { this->statusCategory_ = nullptr;};
                inline string getStatusCategory() const { DARABONBA_PTR_GET_DEFAULT(statusCategory_, "") };
                inline ConditionSupportedResource& setStatusCategory(string statusCategory) { DARABONBA_PTR_SET_VALUE(statusCategory_, statusCategory) };


                // unit Field Functions 
                bool hasUnit() const { return this->unit_ != nullptr;};
                void deleteUnit() { this->unit_ = nullptr;};
                inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
                inline ConditionSupportedResource& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline ConditionSupportedResource& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                // The conditions.
                shared_ptr<ConditionSupportedResource::Conditions> conditions_ {};
                // The maximum disk capacity.
                // 
                // This parameter takes effect only when the DestinationResource request parameter is set to SystemDisk.
                shared_ptr<int32_t> max_ {};
                // The minimum disk capacity.
                // 
                // This parameter takes effect only when the DestinationResource request parameter is set to SystemDisk.
                shared_ptr<int32_t> min_ {};
                // The stock state of the resource. Valid values:
                // 
                // *   Available
                // *   SoldOut
                shared_ptr<string> status_ {};
                // The category of the resource based on stock status. Valid values:
                // 
                // *   WithStock: resources that are in sufficient stock
                // *   ClosedWithStock: resources that are in insufficient stock
                // *   WithoutStock: resources that are out of stock
                shared_ptr<string> statusCategory_ {};
                // The unit of the disk capacity.
                // 
                // This parameter takes effect only when the DestinationResource request parameter is set to SystemDisk.
                shared_ptr<string> unit_ {};
                // The resource type.
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->conditionSupportedResource_ == nullptr; };
              // conditionSupportedResource Field Functions 
              bool hasConditionSupportedResource() const { return this->conditionSupportedResource_ != nullptr;};
              void deleteConditionSupportedResource() { this->conditionSupportedResource_ = nullptr;};
              inline const vector<ConditionSupportedResources::ConditionSupportedResource> & getConditionSupportedResource() const { DARABONBA_PTR_GET_CONST(conditionSupportedResource_, vector<ConditionSupportedResources::ConditionSupportedResource>) };
              inline vector<ConditionSupportedResources::ConditionSupportedResource> getConditionSupportedResource() { DARABONBA_PTR_GET(conditionSupportedResource_, vector<ConditionSupportedResources::ConditionSupportedResource>) };
              inline ConditionSupportedResources& setConditionSupportedResource(const vector<ConditionSupportedResources::ConditionSupportedResource> & conditionSupportedResource) { DARABONBA_PTR_SET_VALUE(conditionSupportedResource_, conditionSupportedResource) };
              inline ConditionSupportedResources& setConditionSupportedResource(vector<ConditionSupportedResources::ConditionSupportedResource> && conditionSupportedResource) { DARABONBA_PTR_SET_RVALUE(conditionSupportedResource_, conditionSupportedResource) };


            protected:
              shared_ptr<vector<ConditionSupportedResources::ConditionSupportedResource>> conditionSupportedResource_ {};
            };

            virtual bool empty() const override { return this->conditionSupportedResources_ == nullptr
        && this->supportedResources_ == nullptr && this->type_ == nullptr; };
            // conditionSupportedResources Field Functions 
            bool hasConditionSupportedResources() const { return this->conditionSupportedResources_ != nullptr;};
            void deleteConditionSupportedResources() { this->conditionSupportedResources_ = nullptr;};
            inline const AvailableResource::ConditionSupportedResources & getConditionSupportedResources() const { DARABONBA_PTR_GET_CONST(conditionSupportedResources_, AvailableResource::ConditionSupportedResources) };
            inline AvailableResource::ConditionSupportedResources getConditionSupportedResources() { DARABONBA_PTR_GET(conditionSupportedResources_, AvailableResource::ConditionSupportedResources) };
            inline AvailableResource& setConditionSupportedResources(const AvailableResource::ConditionSupportedResources & conditionSupportedResources) { DARABONBA_PTR_SET_VALUE(conditionSupportedResources_, conditionSupportedResources) };
            inline AvailableResource& setConditionSupportedResources(AvailableResource::ConditionSupportedResources && conditionSupportedResources) { DARABONBA_PTR_SET_RVALUE(conditionSupportedResources_, conditionSupportedResources) };


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
            // The resource types that resources can be changed to after the resources meet specified conditions. If the conditions are met, you can change the current resource to a resource in the list.
            shared_ptr<AvailableResource::ConditionSupportedResources> conditionSupportedResources_ {};
            // The information about the supported resources.
            shared_ptr<AvailableResource::SupportedResources> supportedResources_ {};
            // The resource type. Valid values:
            // 
            // *   InstanceType
            // *   SystemDisk
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
        // The resources that are available in the zone.
        shared_ptr<AvailableZone::AvailableResources> availableResources_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The state of the resource. Valid values:
        // 
        // *   Available
        // *   SoldOut
        shared_ptr<string> status_ {};
        // The category of the resource based on stock status. Valid values:
        // 
        // *   WithStock: resources that are in sufficient stock
        // *   ClosedWithStock: resources that are in insufficient stock
        // *   WithoutStock: resources that are out of stock
        shared_ptr<string> statusCategory_ {};
        // The zone ID.
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
    inline const DescribeResourcesModificationResponseBody::AvailableZones & getAvailableZones() const { DARABONBA_PTR_GET_CONST(availableZones_, DescribeResourcesModificationResponseBody::AvailableZones) };
    inline DescribeResourcesModificationResponseBody::AvailableZones getAvailableZones() { DARABONBA_PTR_GET(availableZones_, DescribeResourcesModificationResponseBody::AvailableZones) };
    inline DescribeResourcesModificationResponseBody& setAvailableZones(const DescribeResourcesModificationResponseBody::AvailableZones & availableZones) { DARABONBA_PTR_SET_VALUE(availableZones_, availableZones) };
    inline DescribeResourcesModificationResponseBody& setAvailableZones(DescribeResourcesModificationResponseBody::AvailableZones && availableZones) { DARABONBA_PTR_SET_RVALUE(availableZones_, availableZones) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResourcesModificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the queried zones.
    shared_ptr<DescribeResourcesModificationResponseBody::AvailableZones> availableZones_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
