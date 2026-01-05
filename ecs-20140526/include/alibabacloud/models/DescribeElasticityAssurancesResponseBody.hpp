// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCESRESPONSEBODY_HPP_
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
  class DescribeElasticityAssurancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssurancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceSet, elasticityAssuranceSet_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssurancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceSet, elasticityAssuranceSet_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeElasticityAssurancesResponseBody() = default ;
    DescribeElasticityAssurancesResponseBody(const DescribeElasticityAssurancesResponseBody &) = default ;
    DescribeElasticityAssurancesResponseBody(DescribeElasticityAssurancesResponseBody &&) = default ;
    DescribeElasticityAssurancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssurancesResponseBody() = default ;
    DescribeElasticityAssurancesResponseBody& operator=(const DescribeElasticityAssurancesResponseBody &) = default ;
    DescribeElasticityAssurancesResponseBody& operator=(DescribeElasticityAssurancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ElasticityAssuranceSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticityAssuranceSet& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticityAssuranceSet& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticityAssuranceItem, elasticityAssuranceItem_);
      };
      ElasticityAssuranceSet() = default ;
      ElasticityAssuranceSet(const ElasticityAssuranceSet &) = default ;
      ElasticityAssuranceSet(ElasticityAssuranceSet &&) = default ;
      ElasticityAssuranceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticityAssuranceSet() = default ;
      ElasticityAssuranceSet& operator=(const ElasticityAssuranceSet &) = default ;
      ElasticityAssuranceSet& operator=(ElasticityAssuranceSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ElasticityAssuranceItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticityAssuranceItem& obj) { 
          DARABONBA_PTR_TO_JSON(AllocatedResources, allocatedResources_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ElasticityAssuranceOwnerId, elasticityAssuranceOwnerId_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(LatestStartTime, latestStartTime_);
          DARABONBA_PTR_TO_JSON(PackageType, packageType_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
          DARABONBA_PTR_TO_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
          DARABONBA_PTR_TO_JSON(RecurrenceRules, recurrenceRules_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(StartTimeType, startTimeType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TotalAssuranceTimes, totalAssuranceTimes_);
          DARABONBA_PTR_TO_JSON(UsedAssuranceTimes, usedAssuranceTimes_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticityAssuranceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AllocatedResources, allocatedResources_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ElasticityAssuranceOwnerId, elasticityAssuranceOwnerId_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(LatestStartTime, latestStartTime_);
          DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsId, privatePoolOptionsId_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsMatchCriteria, privatePoolOptionsMatchCriteria_);
          DARABONBA_PTR_FROM_JSON(PrivatePoolOptionsName, privatePoolOptionsName_);
          DARABONBA_PTR_FROM_JSON(RecurrenceRules, recurrenceRules_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(StartTimeType, startTimeType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TotalAssuranceTimes, totalAssuranceTimes_);
          DARABONBA_PTR_FROM_JSON(UsedAssuranceTimes, usedAssuranceTimes_);
        };
        ElasticityAssuranceItem() = default ;
        ElasticityAssuranceItem(const ElasticityAssuranceItem &) = default ;
        ElasticityAssuranceItem(ElasticityAssuranceItem &&) = default ;
        ElasticityAssuranceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticityAssuranceItem() = default ;
        ElasticityAssuranceItem& operator=(const ElasticityAssuranceItem &) = default ;
        ElasticityAssuranceItem& operator=(ElasticityAssuranceItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The key of the tag.
            shared_ptr<string> tagKey_ {};
            // The value of the tag.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class RecurrenceRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecurrenceRules& obj) { 
            DARABONBA_PTR_TO_JSON(RecurrenceRule, recurrenceRule_);
          };
          friend void from_json(const Darabonba::Json& j, RecurrenceRules& obj) { 
            DARABONBA_PTR_FROM_JSON(RecurrenceRule, recurrenceRule_);
          };
          RecurrenceRules() = default ;
          RecurrenceRules(const RecurrenceRules &) = default ;
          RecurrenceRules(RecurrenceRules &&) = default ;
          RecurrenceRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecurrenceRules() = default ;
          RecurrenceRules& operator=(const RecurrenceRules &) = default ;
          RecurrenceRules& operator=(RecurrenceRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RecurrenceRule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RecurrenceRule& obj) { 
              DARABONBA_PTR_TO_JSON(EndHour, endHour_);
              DARABONBA_PTR_TO_JSON(RecurrenceType, recurrenceType_);
              DARABONBA_PTR_TO_JSON(RecurrenceValue, recurrenceValue_);
              DARABONBA_PTR_TO_JSON(StartHour, startHour_);
            };
            friend void from_json(const Darabonba::Json& j, RecurrenceRule& obj) { 
              DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
              DARABONBA_PTR_FROM_JSON(RecurrenceType, recurrenceType_);
              DARABONBA_PTR_FROM_JSON(RecurrenceValue, recurrenceValue_);
              DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
            };
            RecurrenceRule() = default ;
            RecurrenceRule(const RecurrenceRule &) = default ;
            RecurrenceRule(RecurrenceRule &&) = default ;
            RecurrenceRule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RecurrenceRule() = default ;
            RecurrenceRule& operator=(const RecurrenceRule &) = default ;
            RecurrenceRule& operator=(RecurrenceRule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endHour_ == nullptr
        && this->recurrenceType_ == nullptr && this->recurrenceValue_ == nullptr && this->startHour_ == nullptr; };
            // endHour Field Functions 
            bool hasEndHour() const { return this->endHour_ != nullptr;};
            void deleteEndHour() { this->endHour_ = nullptr;};
            inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
            inline RecurrenceRule& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


            // recurrenceType Field Functions 
            bool hasRecurrenceType() const { return this->recurrenceType_ != nullptr;};
            void deleteRecurrenceType() { this->recurrenceType_ = nullptr;};
            inline string getRecurrenceType() const { DARABONBA_PTR_GET_DEFAULT(recurrenceType_, "") };
            inline RecurrenceRule& setRecurrenceType(string recurrenceType) { DARABONBA_PTR_SET_VALUE(recurrenceType_, recurrenceType) };


            // recurrenceValue Field Functions 
            bool hasRecurrenceValue() const { return this->recurrenceValue_ != nullptr;};
            void deleteRecurrenceValue() { this->recurrenceValue_ = nullptr;};
            inline string getRecurrenceValue() const { DARABONBA_PTR_GET_DEFAULT(recurrenceValue_, "") };
            inline RecurrenceRule& setRecurrenceValue(string recurrenceValue) { DARABONBA_PTR_SET_VALUE(recurrenceValue_, recurrenceValue) };


            // startHour Field Functions 
            bool hasStartHour() const { return this->startHour_ != nullptr;};
            void deleteStartHour() { this->startHour_ = nullptr;};
            inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
            inline RecurrenceRule& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


          protected:
            // The time when the time-segmented assurance ends.
            shared_ptr<int32_t> endHour_ {};
            // The type of the recurrence rule. Valid values:
            // 
            // *   Daily
            // *   Weekly
            // *   Monthly
            shared_ptr<string> recurrenceType_ {};
            // The recurrence value of the time-segmented assurance. Valid values:
            // 
            // *   If you set `RecurrenceType` to `Daily`, you can set RecurrenceValue to only one value. Valid values: 1 to 31. The time-segmented assurance is performed every few days.
            // *   If you set `RecurrenceType` to `Weekly`, you can set RecurrenceValue to one or more values. Separate the values with commas (,). The values that correspond to Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday are 0, 1, 2, 3, 4, 5, and 6. For example, `1,2` indicates that the time-segmented assurance is performed on Monday and Tuesday of every week.
            // *   If you set `RecurrenceType` to `Monthly`, you can set RecurrenceValue to two values in the `A-B` format. Valid values of A and B: 1 to 31. B must be greater than or equal to A. For example, `1-5` indicates that the time-segmented assurance is performed from the 1st to the 5th of each month.
            shared_ptr<string> recurrenceValue_ {};
            // The time when the time-segmented assurance takes effect.
            shared_ptr<int32_t> startHour_ {};
          };

          virtual bool empty() const override { return this->recurrenceRule_ == nullptr; };
          // recurrenceRule Field Functions 
          bool hasRecurrenceRule() const { return this->recurrenceRule_ != nullptr;};
          void deleteRecurrenceRule() { this->recurrenceRule_ = nullptr;};
          inline const vector<RecurrenceRules::RecurrenceRule> & getRecurrenceRule() const { DARABONBA_PTR_GET_CONST(recurrenceRule_, vector<RecurrenceRules::RecurrenceRule>) };
          inline vector<RecurrenceRules::RecurrenceRule> getRecurrenceRule() { DARABONBA_PTR_GET(recurrenceRule_, vector<RecurrenceRules::RecurrenceRule>) };
          inline RecurrenceRules& setRecurrenceRule(const vector<RecurrenceRules::RecurrenceRule> & recurrenceRule) { DARABONBA_PTR_SET_VALUE(recurrenceRule_, recurrenceRule) };
          inline RecurrenceRules& setRecurrenceRule(vector<RecurrenceRules::RecurrenceRule> && recurrenceRule) { DARABONBA_PTR_SET_RVALUE(recurrenceRule_, recurrenceRule) };


        protected:
          shared_ptr<vector<RecurrenceRules::RecurrenceRule>> recurrenceRule_ {};
        };

        class AllocatedResources : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AllocatedResources& obj) { 
            DARABONBA_PTR_TO_JSON(AllocatedResource, allocatedResource_);
          };
          friend void from_json(const Darabonba::Json& j, AllocatedResources& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocatedResource, allocatedResource_);
          };
          AllocatedResources() = default ;
          AllocatedResources(const AllocatedResources &) = default ;
          AllocatedResources(AllocatedResources &&) = default ;
          AllocatedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AllocatedResources() = default ;
          AllocatedResources& operator=(const AllocatedResources &) = default ;
          AllocatedResources& operator=(AllocatedResources &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AllocatedResource : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AllocatedResource& obj) { 
              DARABONBA_PTR_TO_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_TO_JSON(ElasticityAssuranceUsages, elasticityAssuranceUsages_);
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
              DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, AllocatedResource& obj) { 
              DARABONBA_PTR_FROM_JSON(AvailableAmount, availableAmount_);
              DARABONBA_PTR_FROM_JSON(ElasticityAssuranceUsages, elasticityAssuranceUsages_);
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
              DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
              DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
            };
            AllocatedResource() = default ;
            AllocatedResource(const AllocatedResource &) = default ;
            AllocatedResource(AllocatedResource &&) = default ;
            AllocatedResource(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AllocatedResource() = default ;
            AllocatedResource& operator=(const AllocatedResource &) = default ;
            AllocatedResource& operator=(AllocatedResource &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ElasticityAssuranceUsages : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ElasticityAssuranceUsages& obj) { 
                DARABONBA_PTR_TO_JSON(ElasticityAssuranceUsage, elasticityAssuranceUsage_);
              };
              friend void from_json(const Darabonba::Json& j, ElasticityAssuranceUsages& obj) { 
                DARABONBA_PTR_FROM_JSON(ElasticityAssuranceUsage, elasticityAssuranceUsage_);
              };
              ElasticityAssuranceUsages() = default ;
              ElasticityAssuranceUsages(const ElasticityAssuranceUsages &) = default ;
              ElasticityAssuranceUsages(ElasticityAssuranceUsages &&) = default ;
              ElasticityAssuranceUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ElasticityAssuranceUsages() = default ;
              ElasticityAssuranceUsages& operator=(const ElasticityAssuranceUsages &) = default ;
              ElasticityAssuranceUsages& operator=(ElasticityAssuranceUsages &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ElasticityAssuranceUsage : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ElasticityAssuranceUsage& obj) { 
                  DARABONBA_PTR_TO_JSON(AccountId, accountId_);
                  DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
                  DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
                };
                friend void from_json(const Darabonba::Json& j, ElasticityAssuranceUsage& obj) { 
                  DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
                  DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
                  DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
                };
                ElasticityAssuranceUsage() = default ;
                ElasticityAssuranceUsage(const ElasticityAssuranceUsage &) = default ;
                ElasticityAssuranceUsage(ElasticityAssuranceUsage &&) = default ;
                ElasticityAssuranceUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ElasticityAssuranceUsage() = default ;
                ElasticityAssuranceUsage& operator=(const ElasticityAssuranceUsage &) = default ;
                ElasticityAssuranceUsage& operator=(ElasticityAssuranceUsage &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->accountId_ == nullptr
        && this->serviceName_ == nullptr && this->usedAmount_ == nullptr; };
                // accountId Field Functions 
                bool hasAccountId() const { return this->accountId_ != nullptr;};
                void deleteAccountId() { this->accountId_ = nullptr;};
                inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
                inline ElasticityAssuranceUsage& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


                // serviceName Field Functions 
                bool hasServiceName() const { return this->serviceName_ != nullptr;};
                void deleteServiceName() { this->serviceName_ = nullptr;};
                inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
                inline ElasticityAssuranceUsage& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


                // usedAmount Field Functions 
                bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
                void deleteUsedAmount() { this->usedAmount_ = nullptr;};
                inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
                inline ElasticityAssuranceUsage& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


              protected:
                // >  This parameter is not publicly available.
                shared_ptr<string> accountId_ {};
                // >  This parameter is not publicly available.
                shared_ptr<string> serviceName_ {};
                // >  This parameter is not publicly available.
                shared_ptr<int32_t> usedAmount_ {};
              };

              virtual bool empty() const override { return this->elasticityAssuranceUsage_ == nullptr; };
              // elasticityAssuranceUsage Field Functions 
              bool hasElasticityAssuranceUsage() const { return this->elasticityAssuranceUsage_ != nullptr;};
              void deleteElasticityAssuranceUsage() { this->elasticityAssuranceUsage_ = nullptr;};
              inline const vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage> & getElasticityAssuranceUsage() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceUsage_, vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage>) };
              inline vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage> getElasticityAssuranceUsage() { DARABONBA_PTR_GET(elasticityAssuranceUsage_, vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage>) };
              inline ElasticityAssuranceUsages& setElasticityAssuranceUsage(const vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage> & elasticityAssuranceUsage) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceUsage_, elasticityAssuranceUsage) };
              inline ElasticityAssuranceUsages& setElasticityAssuranceUsage(vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage> && elasticityAssuranceUsage) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceUsage_, elasticityAssuranceUsage) };


            protected:
              shared_ptr<vector<ElasticityAssuranceUsages::ElasticityAssuranceUsage>> elasticityAssuranceUsage_ {};
            };

            virtual bool empty() const override { return this->availableAmount_ == nullptr
        && this->elasticityAssuranceUsages_ == nullptr && this->instanceType_ == nullptr && this->totalAmount_ == nullptr && this->usedAmount_ == nullptr && this->zoneId_ == nullptr; };
            // availableAmount Field Functions 
            bool hasAvailableAmount() const { return this->availableAmount_ != nullptr;};
            void deleteAvailableAmount() { this->availableAmount_ = nullptr;};
            inline int32_t getAvailableAmount() const { DARABONBA_PTR_GET_DEFAULT(availableAmount_, 0) };
            inline AllocatedResource& setAvailableAmount(int32_t availableAmount) { DARABONBA_PTR_SET_VALUE(availableAmount_, availableAmount) };


            // elasticityAssuranceUsages Field Functions 
            bool hasElasticityAssuranceUsages() const { return this->elasticityAssuranceUsages_ != nullptr;};
            void deleteElasticityAssuranceUsages() { this->elasticityAssuranceUsages_ = nullptr;};
            inline const AllocatedResource::ElasticityAssuranceUsages & getElasticityAssuranceUsages() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceUsages_, AllocatedResource::ElasticityAssuranceUsages) };
            inline AllocatedResource::ElasticityAssuranceUsages getElasticityAssuranceUsages() { DARABONBA_PTR_GET(elasticityAssuranceUsages_, AllocatedResource::ElasticityAssuranceUsages) };
            inline AllocatedResource& setElasticityAssuranceUsages(const AllocatedResource::ElasticityAssuranceUsages & elasticityAssuranceUsages) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceUsages_, elasticityAssuranceUsages) };
            inline AllocatedResource& setElasticityAssuranceUsages(AllocatedResource::ElasticityAssuranceUsages && elasticityAssuranceUsages) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceUsages_, elasticityAssuranceUsages) };


            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline AllocatedResource& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // totalAmount Field Functions 
            bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
            void deleteTotalAmount() { this->totalAmount_ = nullptr;};
            inline int32_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0) };
            inline AllocatedResource& setTotalAmount(int32_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


            // usedAmount Field Functions 
            bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
            void deleteUsedAmount() { this->usedAmount_ = nullptr;};
            inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
            inline AllocatedResource& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline AllocatedResource& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            // >  This parameter is not publicly available.
            shared_ptr<int32_t> availableAmount_ {};
            // >  This parameter is not publicly available.
            shared_ptr<AllocatedResource::ElasticityAssuranceUsages> elasticityAssuranceUsages_ {};
            // The instance type.
            shared_ptr<string> instanceType_ {};
            // The total number of instances for which capacity of an instance type is reserved.
            shared_ptr<int32_t> totalAmount_ {};
            // The number of instances that have used the elasticity assurance.
            shared_ptr<int32_t> usedAmount_ {};
            // The zone ID.
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->allocatedResource_ == nullptr; };
          // allocatedResource Field Functions 
          bool hasAllocatedResource() const { return this->allocatedResource_ != nullptr;};
          void deleteAllocatedResource() { this->allocatedResource_ = nullptr;};
          inline const vector<AllocatedResources::AllocatedResource> & getAllocatedResource() const { DARABONBA_PTR_GET_CONST(allocatedResource_, vector<AllocatedResources::AllocatedResource>) };
          inline vector<AllocatedResources::AllocatedResource> getAllocatedResource() { DARABONBA_PTR_GET(allocatedResource_, vector<AllocatedResources::AllocatedResource>) };
          inline AllocatedResources& setAllocatedResource(const vector<AllocatedResources::AllocatedResource> & allocatedResource) { DARABONBA_PTR_SET_VALUE(allocatedResource_, allocatedResource) };
          inline AllocatedResources& setAllocatedResource(vector<AllocatedResources::AllocatedResource> && allocatedResource) { DARABONBA_PTR_SET_RVALUE(allocatedResource_, allocatedResource) };


        protected:
          shared_ptr<vector<AllocatedResources::AllocatedResource>> allocatedResource_ {};
        };

        virtual bool empty() const override { return this->allocatedResources_ == nullptr
        && this->description_ == nullptr && this->elasticityAssuranceOwnerId_ == nullptr && this->endTime_ == nullptr && this->instanceChargeType_ == nullptr && this->latestStartTime_ == nullptr
        && this->packageType_ == nullptr && this->privatePoolOptionsId_ == nullptr && this->privatePoolOptionsMatchCriteria_ == nullptr && this->privatePoolOptionsName_ == nullptr && this->recurrenceRules_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->startTime_ == nullptr && this->startTimeType_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->totalAssuranceTimes_ == nullptr && this->usedAssuranceTimes_ == nullptr; };
        // allocatedResources Field Functions 
        bool hasAllocatedResources() const { return this->allocatedResources_ != nullptr;};
        void deleteAllocatedResources() { this->allocatedResources_ = nullptr;};
        inline const ElasticityAssuranceItem::AllocatedResources & getAllocatedResources() const { DARABONBA_PTR_GET_CONST(allocatedResources_, ElasticityAssuranceItem::AllocatedResources) };
        inline ElasticityAssuranceItem::AllocatedResources getAllocatedResources() { DARABONBA_PTR_GET(allocatedResources_, ElasticityAssuranceItem::AllocatedResources) };
        inline ElasticityAssuranceItem& setAllocatedResources(const ElasticityAssuranceItem::AllocatedResources & allocatedResources) { DARABONBA_PTR_SET_VALUE(allocatedResources_, allocatedResources) };
        inline ElasticityAssuranceItem& setAllocatedResources(ElasticityAssuranceItem::AllocatedResources && allocatedResources) { DARABONBA_PTR_SET_RVALUE(allocatedResources_, allocatedResources) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ElasticityAssuranceItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // elasticityAssuranceOwnerId Field Functions 
        bool hasElasticityAssuranceOwnerId() const { return this->elasticityAssuranceOwnerId_ != nullptr;};
        void deleteElasticityAssuranceOwnerId() { this->elasticityAssuranceOwnerId_ = nullptr;};
        inline string getElasticityAssuranceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(elasticityAssuranceOwnerId_, "") };
        inline ElasticityAssuranceItem& setElasticityAssuranceOwnerId(string elasticityAssuranceOwnerId) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceOwnerId_, elasticityAssuranceOwnerId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline ElasticityAssuranceItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline ElasticityAssuranceItem& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // latestStartTime Field Functions 
        bool hasLatestStartTime() const { return this->latestStartTime_ != nullptr;};
        void deleteLatestStartTime() { this->latestStartTime_ = nullptr;};
        inline string getLatestStartTime() const { DARABONBA_PTR_GET_DEFAULT(latestStartTime_, "") };
        inline ElasticityAssuranceItem& setLatestStartTime(string latestStartTime) { DARABONBA_PTR_SET_VALUE(latestStartTime_, latestStartTime) };


        // packageType Field Functions 
        bool hasPackageType() const { return this->packageType_ != nullptr;};
        void deletePackageType() { this->packageType_ = nullptr;};
        inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
        inline ElasticityAssuranceItem& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


        // privatePoolOptionsId Field Functions 
        bool hasPrivatePoolOptionsId() const { return this->privatePoolOptionsId_ != nullptr;};
        void deletePrivatePoolOptionsId() { this->privatePoolOptionsId_ = nullptr;};
        inline string getPrivatePoolOptionsId() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsId_, "") };
        inline ElasticityAssuranceItem& setPrivatePoolOptionsId(string privatePoolOptionsId) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsId_, privatePoolOptionsId) };


        // privatePoolOptionsMatchCriteria Field Functions 
        bool hasPrivatePoolOptionsMatchCriteria() const { return this->privatePoolOptionsMatchCriteria_ != nullptr;};
        void deletePrivatePoolOptionsMatchCriteria() { this->privatePoolOptionsMatchCriteria_ = nullptr;};
        inline string getPrivatePoolOptionsMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsMatchCriteria_, "") };
        inline ElasticityAssuranceItem& setPrivatePoolOptionsMatchCriteria(string privatePoolOptionsMatchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsMatchCriteria_, privatePoolOptionsMatchCriteria) };


        // privatePoolOptionsName Field Functions 
        bool hasPrivatePoolOptionsName() const { return this->privatePoolOptionsName_ != nullptr;};
        void deletePrivatePoolOptionsName() { this->privatePoolOptionsName_ = nullptr;};
        inline string getPrivatePoolOptionsName() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptionsName_, "") };
        inline ElasticityAssuranceItem& setPrivatePoolOptionsName(string privatePoolOptionsName) { DARABONBA_PTR_SET_VALUE(privatePoolOptionsName_, privatePoolOptionsName) };


        // recurrenceRules Field Functions 
        bool hasRecurrenceRules() const { return this->recurrenceRules_ != nullptr;};
        void deleteRecurrenceRules() { this->recurrenceRules_ = nullptr;};
        inline const ElasticityAssuranceItem::RecurrenceRules & getRecurrenceRules() const { DARABONBA_PTR_GET_CONST(recurrenceRules_, ElasticityAssuranceItem::RecurrenceRules) };
        inline ElasticityAssuranceItem::RecurrenceRules getRecurrenceRules() { DARABONBA_PTR_GET(recurrenceRules_, ElasticityAssuranceItem::RecurrenceRules) };
        inline ElasticityAssuranceItem& setRecurrenceRules(const ElasticityAssuranceItem::RecurrenceRules & recurrenceRules) { DARABONBA_PTR_SET_VALUE(recurrenceRules_, recurrenceRules) };
        inline ElasticityAssuranceItem& setRecurrenceRules(ElasticityAssuranceItem::RecurrenceRules && recurrenceRules) { DARABONBA_PTR_SET_RVALUE(recurrenceRules_, recurrenceRules) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline ElasticityAssuranceItem& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline ElasticityAssuranceItem& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ElasticityAssuranceItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // startTimeType Field Functions 
        bool hasStartTimeType() const { return this->startTimeType_ != nullptr;};
        void deleteStartTimeType() { this->startTimeType_ = nullptr;};
        inline string getStartTimeType() const { DARABONBA_PTR_GET_DEFAULT(startTimeType_, "") };
        inline ElasticityAssuranceItem& setStartTimeType(string startTimeType) { DARABONBA_PTR_SET_VALUE(startTimeType_, startTimeType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ElasticityAssuranceItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const ElasticityAssuranceItem::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, ElasticityAssuranceItem::Tags) };
        inline ElasticityAssuranceItem::Tags getTags() { DARABONBA_PTR_GET(tags_, ElasticityAssuranceItem::Tags) };
        inline ElasticityAssuranceItem& setTags(const ElasticityAssuranceItem::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline ElasticityAssuranceItem& setTags(ElasticityAssuranceItem::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // totalAssuranceTimes Field Functions 
        bool hasTotalAssuranceTimes() const { return this->totalAssuranceTimes_ != nullptr;};
        void deleteTotalAssuranceTimes() { this->totalAssuranceTimes_ = nullptr;};
        inline string getTotalAssuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(totalAssuranceTimes_, "") };
        inline ElasticityAssuranceItem& setTotalAssuranceTimes(string totalAssuranceTimes) { DARABONBA_PTR_SET_VALUE(totalAssuranceTimes_, totalAssuranceTimes) };


        // usedAssuranceTimes Field Functions 
        bool hasUsedAssuranceTimes() const { return this->usedAssuranceTimes_ != nullptr;};
        void deleteUsedAssuranceTimes() { this->usedAssuranceTimes_ = nullptr;};
        inline int32_t getUsedAssuranceTimes() const { DARABONBA_PTR_GET_DEFAULT(usedAssuranceTimes_, 0) };
        inline ElasticityAssuranceItem& setUsedAssuranceTimes(int32_t usedAssuranceTimes) { DARABONBA_PTR_SET_VALUE(usedAssuranceTimes_, usedAssuranceTimes) };


      protected:
        // Details of the allocated resources.
        shared_ptr<ElasticityAssuranceItem::AllocatedResources> allocatedResources_ {};
        // The description of the elasticity assurance.
        shared_ptr<string> description_ {};
        // >  This parameter is not publicly available.
        shared_ptr<string> elasticityAssuranceOwnerId_ {};
        // The time when the elasticity assurance expires.
        shared_ptr<string> endTime_ {};
        // The billing method of the instance. The value can be only PostPaid. Only pay-as-you-go instances can be created by using elasticity assurances.
        shared_ptr<string> instanceChargeType_ {};
        // > This parameter is not publicly available.
        shared_ptr<string> latestStartTime_ {};
        // The type of the elasticity assurance. Valid values:
        // 
        // *   ElasticityAssurance: the general-purpose elasticity assurance.
        // *   TimeDivisionElasticityAssurance: the time-segmented assurance of the elasticity assurance.
        shared_ptr<string> packageType_ {};
        // The ID of the elasticity assurance.
        shared_ptr<string> privatePoolOptionsId_ {};
        // The type of the private pool associated with the elasticity assurance. Valid values:
        // 
        // *   Open: open private pool
        // *   Target: specific private pool
        shared_ptr<string> privatePoolOptionsMatchCriteria_ {};
        // The name of the elasticity assurance.
        shared_ptr<string> privatePoolOptionsName_ {};
        // The recurrence rules of the time-segmented assurances.
        shared_ptr<ElasticityAssuranceItem::RecurrenceRules> recurrenceRules_ {};
        // The region ID of the elasticity assurance.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // The time when the elasticity assurance takes effect.
        shared_ptr<string> startTime_ {};
        // Indicates when the elasticity assurance takes effect. Valid values:
        // 
        // *   Now: The elasticity assurance takes effect immediately after it is created.
        // *   Later: The elasticity assurance takes effect at a specified time.
        shared_ptr<string> startTimeType_ {};
        // The status of the elasticity assurance. Valid values:
        // 
        // *   Preparing
        // *   Prepared
        // *   Active
        // *   Released
        shared_ptr<string> status_ {};
        // The tags of the elasticity assurance.
        shared_ptr<ElasticityAssuranceItem::Tags> tags_ {};
        // The total number of times that the elasticity assurance is applied.
        shared_ptr<string> totalAssuranceTimes_ {};
        // > This parameter is not publicly available.
        shared_ptr<int32_t> usedAssuranceTimes_ {};
      };

      virtual bool empty() const override { return this->elasticityAssuranceItem_ == nullptr; };
      // elasticityAssuranceItem Field Functions 
      bool hasElasticityAssuranceItem() const { return this->elasticityAssuranceItem_ != nullptr;};
      void deleteElasticityAssuranceItem() { this->elasticityAssuranceItem_ = nullptr;};
      inline const vector<ElasticityAssuranceSet::ElasticityAssuranceItem> & getElasticityAssuranceItem() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceItem_, vector<ElasticityAssuranceSet::ElasticityAssuranceItem>) };
      inline vector<ElasticityAssuranceSet::ElasticityAssuranceItem> getElasticityAssuranceItem() { DARABONBA_PTR_GET(elasticityAssuranceItem_, vector<ElasticityAssuranceSet::ElasticityAssuranceItem>) };
      inline ElasticityAssuranceSet& setElasticityAssuranceItem(const vector<ElasticityAssuranceSet::ElasticityAssuranceItem> & elasticityAssuranceItem) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };
      inline ElasticityAssuranceSet& setElasticityAssuranceItem(vector<ElasticityAssuranceSet::ElasticityAssuranceItem> && elasticityAssuranceItem) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceItem_, elasticityAssuranceItem) };


    protected:
      shared_ptr<vector<ElasticityAssuranceSet::ElasticityAssuranceItem>> elasticityAssuranceItem_ {};
    };

    virtual bool empty() const override { return this->elasticityAssuranceSet_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // elasticityAssuranceSet Field Functions 
    bool hasElasticityAssuranceSet() const { return this->elasticityAssuranceSet_ != nullptr;};
    void deleteElasticityAssuranceSet() { this->elasticityAssuranceSet_ = nullptr;};
    inline const DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet & getElasticityAssuranceSet() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceSet_, DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet) };
    inline DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet getElasticityAssuranceSet() { DARABONBA_PTR_GET(elasticityAssuranceSet_, DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet) };
    inline DescribeElasticityAssurancesResponseBody& setElasticityAssuranceSet(const DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet & elasticityAssuranceSet) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceSet_, elasticityAssuranceSet) };
    inline DescribeElasticityAssurancesResponseBody& setElasticityAssuranceSet(DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet && elasticityAssuranceSet) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceSet_, elasticityAssuranceSet) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeElasticityAssurancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeElasticityAssurancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticityAssurancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeElasticityAssurancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the elasticity assurances.
    shared_ptr<DescribeElasticityAssurancesResponseBody::ElasticityAssuranceSet> elasticityAssuranceSet_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
