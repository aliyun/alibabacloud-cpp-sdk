// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONALINSTANCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/ResultSpecInfoMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionalInstanceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionalInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionalInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetRegionalInstanceConfigResponseBody() = default ;
    GetRegionalInstanceConfigResponseBody(const GetRegionalInstanceConfigResponseBody &) = default ;
    GetRegionalInstanceConfigResponseBody(GetRegionalInstanceConfigResponseBody &&) = default ;
    GetRegionalInstanceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionalInstanceConfigResponseBody() = default ;
    GetRegionalInstanceConfigResponseBody& operator=(const GetRegionalInstanceConfigResponseBody &) = default ;
    GetRegionalInstanceConfigResponseBody& operator=(GetRegionalInstanceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(clientNodeAmountRange, clientNodeAmountRange_);
        DARABONBA_PTR_TO_JSON(clientNodeDiskList, clientNodeDiskList_);
        DARABONBA_PTR_TO_JSON(clientSpecs, clientSpecs_);
        DARABONBA_PTR_TO_JSON(dataNodeAmountRange, dataNodeAmountRange_);
        DARABONBA_PTR_TO_JSON(dataNodeDiskList, dataNodeDiskList_);
        DARABONBA_PTR_TO_JSON(dataNodeSpecs, dataNodeSpecs_);
        DARABONBA_PTR_TO_JSON(kibanaSpecs, kibanaSpecs_);
        DARABONBA_PTR_TO_JSON(masterAmountRange, masterAmountRange_);
        DARABONBA_PTR_TO_JSON(masterDiskList, masterDiskList_);
        DARABONBA_PTR_TO_JSON(masterSpecs, masterSpecs_);
        DARABONBA_PTR_TO_JSON(specInfoMap, specInfoMap_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
        DARABONBA_PTR_TO_JSON(warmNodeAmountRange, warmNodeAmountRange_);
        DARABONBA_PTR_TO_JSON(warmNodeDiskList, warmNodeDiskList_);
        DARABONBA_PTR_TO_JSON(warmNodeSpecs, warmNodeSpecs_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(clientNodeAmountRange, clientNodeAmountRange_);
        DARABONBA_PTR_FROM_JSON(clientNodeDiskList, clientNodeDiskList_);
        DARABONBA_PTR_FROM_JSON(clientSpecs, clientSpecs_);
        DARABONBA_PTR_FROM_JSON(dataNodeAmountRange, dataNodeAmountRange_);
        DARABONBA_PTR_FROM_JSON(dataNodeDiskList, dataNodeDiskList_);
        DARABONBA_PTR_FROM_JSON(dataNodeSpecs, dataNodeSpecs_);
        DARABONBA_PTR_FROM_JSON(kibanaSpecs, kibanaSpecs_);
        DARABONBA_PTR_FROM_JSON(masterAmountRange, masterAmountRange_);
        DARABONBA_PTR_FROM_JSON(masterDiskList, masterDiskList_);
        DARABONBA_PTR_FROM_JSON(masterSpecs, masterSpecs_);
        DARABONBA_PTR_FROM_JSON(specInfoMap, specInfoMap_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
        DARABONBA_PTR_FROM_JSON(warmNodeAmountRange, warmNodeAmountRange_);
        DARABONBA_PTR_FROM_JSON(warmNodeDiskList, warmNodeDiskList_);
        DARABONBA_PTR_FROM_JSON(warmNodeSpecs, warmNodeSpecs_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WarmNodeDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarmNodeDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_TO_JSON(subClassificationConfines, subClassificationConfines_);
          DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
        };
        friend void from_json(const Darabonba::Json& j, WarmNodeDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_FROM_JSON(subClassificationConfines, subClassificationConfines_);
          DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
        };
        WarmNodeDiskList() = default ;
        WarmNodeDiskList(const WarmNodeDiskList &) = default ;
        WarmNodeDiskList(WarmNodeDiskList &&) = default ;
        WarmNodeDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarmNodeDiskList() = default ;
        WarmNodeDiskList& operator=(const WarmNodeDiskList &) = default ;
        WarmNodeDiskList& operator=(WarmNodeDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubClassificationConfines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubClassificationConfines& obj) { 
            DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
            DARABONBA_PTR_TO_JSON(minSize, minSize_);
            DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
          };
          friend void from_json(const Darabonba::Json& j, SubClassificationConfines& obj) { 
            DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
            DARABONBA_PTR_FROM_JSON(minSize, minSize_);
            DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
          };
          SubClassificationConfines() = default ;
          SubClassificationConfines(const SubClassificationConfines &) = default ;
          SubClassificationConfines(SubClassificationConfines &&) = default ;
          SubClassificationConfines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubClassificationConfines() = default ;
          SubClassificationConfines& operator=(const SubClassificationConfines &) = default ;
          SubClassificationConfines& operator=(SubClassificationConfines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxSize_ == nullptr
        && this->minSize_ == nullptr && this->performanceLevel_ == nullptr; };
          // maxSize Field Functions 
          bool hasMaxSize() const { return this->maxSize_ != nullptr;};
          void deleteMaxSize() { this->maxSize_ = nullptr;};
          inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
          inline SubClassificationConfines& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline SubClassificationConfines& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


          // performanceLevel Field Functions 
          bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
          void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
          inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
          inline SubClassificationConfines& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        protected:
          shared_ptr<int32_t> maxSize_ {};
          shared_ptr<int32_t> minSize_ {};
          shared_ptr<string> performanceLevel_ {};
        };

        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr && this->subClassificationConfines_ == nullptr && this->valueLimitSet_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline WarmNodeDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline WarmNodeDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline WarmNodeDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline WarmNodeDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


        // subClassificationConfines Field Functions 
        bool hasSubClassificationConfines() const { return this->subClassificationConfines_ != nullptr;};
        void deleteSubClassificationConfines() { this->subClassificationConfines_ = nullptr;};
        inline const vector<WarmNodeDiskList::SubClassificationConfines> & getSubClassificationConfines() const { DARABONBA_PTR_GET_CONST(subClassificationConfines_, vector<WarmNodeDiskList::SubClassificationConfines>) };
        inline vector<WarmNodeDiskList::SubClassificationConfines> getSubClassificationConfines() { DARABONBA_PTR_GET(subClassificationConfines_, vector<WarmNodeDiskList::SubClassificationConfines>) };
        inline WarmNodeDiskList& setSubClassificationConfines(const vector<WarmNodeDiskList::SubClassificationConfines> & subClassificationConfines) { DARABONBA_PTR_SET_VALUE(subClassificationConfines_, subClassificationConfines) };
        inline WarmNodeDiskList& setSubClassificationConfines(vector<WarmNodeDiskList::SubClassificationConfines> && subClassificationConfines) { DARABONBA_PTR_SET_RVALUE(subClassificationConfines_, subClassificationConfines) };


        // valueLimitSet Field Functions 
        bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
        void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
        inline const vector<int32_t> & getValueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<int32_t>) };
        inline vector<int32_t> getValueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<int32_t>) };
        inline WarmNodeDiskList& setValueLimitSet(const vector<int32_t> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
        inline WarmNodeDiskList& setValueLimitSet(vector<int32_t> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
        shared_ptr<vector<WarmNodeDiskList::SubClassificationConfines>> subClassificationConfines_ {};
        shared_ptr<vector<int32_t>> valueLimitSet_ {};
      };

      class WarmNodeAmountRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarmNodeAmountRange& obj) { 
          DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
        };
        friend void from_json(const Darabonba::Json& j, WarmNodeAmountRange& obj) { 
          DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
        };
        WarmNodeAmountRange() = default ;
        WarmNodeAmountRange(const WarmNodeAmountRange &) = default ;
        WarmNodeAmountRange(WarmNodeAmountRange &&) = default ;
        WarmNodeAmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarmNodeAmountRange() = default ;
        WarmNodeAmountRange& operator=(const WarmNodeAmountRange &) = default ;
        WarmNodeAmountRange& operator=(WarmNodeAmountRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
        // maxAmount Field Functions 
        bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
        void deleteMaxAmount() { this->maxAmount_ = nullptr;};
        inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
        inline WarmNodeAmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


        // minAmount Field Functions 
        bool hasMinAmount() const { return this->minAmount_ != nullptr;};
        void deleteMinAmount() { this->minAmount_ = nullptr;};
        inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
        inline WarmNodeAmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


      protected:
        shared_ptr<int32_t> maxAmount_ {};
        shared_ptr<int32_t> minAmount_ {};
      };

      class MasterDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_TO_JSON(subClassificationConfines, subClassificationConfines_);
        };
        friend void from_json(const Darabonba::Json& j, MasterDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_FROM_JSON(subClassificationConfines, subClassificationConfines_);
        };
        MasterDiskList() = default ;
        MasterDiskList(const MasterDiskList &) = default ;
        MasterDiskList(MasterDiskList &&) = default ;
        MasterDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterDiskList() = default ;
        MasterDiskList& operator=(const MasterDiskList &) = default ;
        MasterDiskList& operator=(MasterDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubClassificationConfines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubClassificationConfines& obj) { 
            DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
            DARABONBA_PTR_TO_JSON(minSize, minSize_);
            DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
          };
          friend void from_json(const Darabonba::Json& j, SubClassificationConfines& obj) { 
            DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
            DARABONBA_PTR_FROM_JSON(minSize, minSize_);
            DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
          };
          SubClassificationConfines() = default ;
          SubClassificationConfines(const SubClassificationConfines &) = default ;
          SubClassificationConfines(SubClassificationConfines &&) = default ;
          SubClassificationConfines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubClassificationConfines() = default ;
          SubClassificationConfines& operator=(const SubClassificationConfines &) = default ;
          SubClassificationConfines& operator=(SubClassificationConfines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxSize_ == nullptr
        && this->minSize_ == nullptr && this->performanceLevel_ == nullptr; };
          // maxSize Field Functions 
          bool hasMaxSize() const { return this->maxSize_ != nullptr;};
          void deleteMaxSize() { this->maxSize_ = nullptr;};
          inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
          inline SubClassificationConfines& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline SubClassificationConfines& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


          // performanceLevel Field Functions 
          bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
          void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
          inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
          inline SubClassificationConfines& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        protected:
          shared_ptr<int32_t> maxSize_ {};
          shared_ptr<int32_t> minSize_ {};
          shared_ptr<string> performanceLevel_ {};
        };

        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr && this->subClassificationConfines_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline MasterDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline MasterDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline MasterDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline MasterDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


        // subClassificationConfines Field Functions 
        bool hasSubClassificationConfines() const { return this->subClassificationConfines_ != nullptr;};
        void deleteSubClassificationConfines() { this->subClassificationConfines_ = nullptr;};
        inline const vector<MasterDiskList::SubClassificationConfines> & getSubClassificationConfines() const { DARABONBA_PTR_GET_CONST(subClassificationConfines_, vector<MasterDiskList::SubClassificationConfines>) };
        inline vector<MasterDiskList::SubClassificationConfines> getSubClassificationConfines() { DARABONBA_PTR_GET(subClassificationConfines_, vector<MasterDiskList::SubClassificationConfines>) };
        inline MasterDiskList& setSubClassificationConfines(const vector<MasterDiskList::SubClassificationConfines> & subClassificationConfines) { DARABONBA_PTR_SET_VALUE(subClassificationConfines_, subClassificationConfines) };
        inline MasterDiskList& setSubClassificationConfines(vector<MasterDiskList::SubClassificationConfines> && subClassificationConfines) { DARABONBA_PTR_SET_RVALUE(subClassificationConfines_, subClassificationConfines) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
        shared_ptr<vector<MasterDiskList::SubClassificationConfines>> subClassificationConfines_ {};
      };

      class DataNodeDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataNodeDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_TO_JSON(subClassificationConfines, subClassificationConfines_);
          DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
        };
        friend void from_json(const Darabonba::Json& j, DataNodeDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_FROM_JSON(subClassificationConfines, subClassificationConfines_);
          DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
        };
        DataNodeDiskList() = default ;
        DataNodeDiskList(const DataNodeDiskList &) = default ;
        DataNodeDiskList(DataNodeDiskList &&) = default ;
        DataNodeDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataNodeDiskList() = default ;
        DataNodeDiskList& operator=(const DataNodeDiskList &) = default ;
        DataNodeDiskList& operator=(DataNodeDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubClassificationConfines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubClassificationConfines& obj) { 
            DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
            DARABONBA_PTR_TO_JSON(minSize, minSize_);
            DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
          };
          friend void from_json(const Darabonba::Json& j, SubClassificationConfines& obj) { 
            DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
            DARABONBA_PTR_FROM_JSON(minSize, minSize_);
            DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
          };
          SubClassificationConfines() = default ;
          SubClassificationConfines(const SubClassificationConfines &) = default ;
          SubClassificationConfines(SubClassificationConfines &&) = default ;
          SubClassificationConfines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubClassificationConfines() = default ;
          SubClassificationConfines& operator=(const SubClassificationConfines &) = default ;
          SubClassificationConfines& operator=(SubClassificationConfines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxSize_ == nullptr
        && this->minSize_ == nullptr && this->performanceLevel_ == nullptr; };
          // maxSize Field Functions 
          bool hasMaxSize() const { return this->maxSize_ != nullptr;};
          void deleteMaxSize() { this->maxSize_ = nullptr;};
          inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
          inline SubClassificationConfines& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline SubClassificationConfines& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


          // performanceLevel Field Functions 
          bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
          void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
          inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
          inline SubClassificationConfines& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        protected:
          shared_ptr<int32_t> maxSize_ {};
          shared_ptr<int32_t> minSize_ {};
          shared_ptr<string> performanceLevel_ {};
        };

        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr && this->subClassificationConfines_ == nullptr && this->valueLimitSet_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline DataNodeDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline DataNodeDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline DataNodeDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline DataNodeDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


        // subClassificationConfines Field Functions 
        bool hasSubClassificationConfines() const { return this->subClassificationConfines_ != nullptr;};
        void deleteSubClassificationConfines() { this->subClassificationConfines_ = nullptr;};
        inline const vector<DataNodeDiskList::SubClassificationConfines> & getSubClassificationConfines() const { DARABONBA_PTR_GET_CONST(subClassificationConfines_, vector<DataNodeDiskList::SubClassificationConfines>) };
        inline vector<DataNodeDiskList::SubClassificationConfines> getSubClassificationConfines() { DARABONBA_PTR_GET(subClassificationConfines_, vector<DataNodeDiskList::SubClassificationConfines>) };
        inline DataNodeDiskList& setSubClassificationConfines(const vector<DataNodeDiskList::SubClassificationConfines> & subClassificationConfines) { DARABONBA_PTR_SET_VALUE(subClassificationConfines_, subClassificationConfines) };
        inline DataNodeDiskList& setSubClassificationConfines(vector<DataNodeDiskList::SubClassificationConfines> && subClassificationConfines) { DARABONBA_PTR_SET_RVALUE(subClassificationConfines_, subClassificationConfines) };


        // valueLimitSet Field Functions 
        bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
        void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
        inline const vector<int32_t> & getValueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<int32_t>) };
        inline vector<int32_t> getValueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<int32_t>) };
        inline DataNodeDiskList& setValueLimitSet(const vector<int32_t> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
        inline DataNodeDiskList& setValueLimitSet(vector<int32_t> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
        shared_ptr<vector<DataNodeDiskList::SubClassificationConfines>> subClassificationConfines_ {};
        shared_ptr<vector<int32_t>> valueLimitSet_ {};
      };

      class DataNodeAmountRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataNodeAmountRange& obj) { 
          DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
        };
        friend void from_json(const Darabonba::Json& j, DataNodeAmountRange& obj) { 
          DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
        };
        DataNodeAmountRange() = default ;
        DataNodeAmountRange(const DataNodeAmountRange &) = default ;
        DataNodeAmountRange(DataNodeAmountRange &&) = default ;
        DataNodeAmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataNodeAmountRange() = default ;
        DataNodeAmountRange& operator=(const DataNodeAmountRange &) = default ;
        DataNodeAmountRange& operator=(DataNodeAmountRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
        // maxAmount Field Functions 
        bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
        void deleteMaxAmount() { this->maxAmount_ = nullptr;};
        inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
        inline DataNodeAmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


        // minAmount Field Functions 
        bool hasMinAmount() const { return this->minAmount_ != nullptr;};
        void deleteMinAmount() { this->minAmount_ = nullptr;};
        inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
        inline DataNodeAmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


      protected:
        shared_ptr<int32_t> maxAmount_ {};
        shared_ptr<int32_t> minAmount_ {};
      };

      class ClientNodeDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientNodeDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
        };
        friend void from_json(const Darabonba::Json& j, ClientNodeDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
        };
        ClientNodeDiskList() = default ;
        ClientNodeDiskList(const ClientNodeDiskList &) = default ;
        ClientNodeDiskList(ClientNodeDiskList &&) = default ;
        ClientNodeDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientNodeDiskList() = default ;
        ClientNodeDiskList& operator=(const ClientNodeDiskList &) = default ;
        ClientNodeDiskList& operator=(ClientNodeDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ClientNodeDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline ClientNodeDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline ClientNodeDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline ClientNodeDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
      };

      class ClientNodeAmountRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientNodeAmountRange& obj) { 
          DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
        };
        friend void from_json(const Darabonba::Json& j, ClientNodeAmountRange& obj) { 
          DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
        };
        ClientNodeAmountRange() = default ;
        ClientNodeAmountRange(const ClientNodeAmountRange &) = default ;
        ClientNodeAmountRange(ClientNodeAmountRange &&) = default ;
        ClientNodeAmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientNodeAmountRange() = default ;
        ClientNodeAmountRange& operator=(const ClientNodeAmountRange &) = default ;
        ClientNodeAmountRange& operator=(ClientNodeAmountRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
        // maxAmount Field Functions 
        bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
        void deleteMaxAmount() { this->maxAmount_ = nullptr;};
        inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
        inline ClientNodeAmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


        // minAmount Field Functions 
        bool hasMinAmount() const { return this->minAmount_ != nullptr;};
        void deleteMinAmount() { this->minAmount_ = nullptr;};
        inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
        inline ClientNodeAmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


      protected:
        shared_ptr<int32_t> maxAmount_ {};
        shared_ptr<int32_t> minAmount_ {};
      };

      virtual bool empty() const override { return this->clientNodeAmountRange_ == nullptr
        && this->clientNodeDiskList_ == nullptr && this->clientSpecs_ == nullptr && this->dataNodeAmountRange_ == nullptr && this->dataNodeDiskList_ == nullptr && this->dataNodeSpecs_ == nullptr
        && this->kibanaSpecs_ == nullptr && this->masterAmountRange_ == nullptr && this->masterDiskList_ == nullptr && this->masterSpecs_ == nullptr && this->specInfoMap_ == nullptr
        && this->versions_ == nullptr && this->warmNodeAmountRange_ == nullptr && this->warmNodeDiskList_ == nullptr && this->warmNodeSpecs_ == nullptr; };
      // clientNodeAmountRange Field Functions 
      bool hasClientNodeAmountRange() const { return this->clientNodeAmountRange_ != nullptr;};
      void deleteClientNodeAmountRange() { this->clientNodeAmountRange_ = nullptr;};
      inline const Result::ClientNodeAmountRange & getClientNodeAmountRange() const { DARABONBA_PTR_GET_CONST(clientNodeAmountRange_, Result::ClientNodeAmountRange) };
      inline Result::ClientNodeAmountRange getClientNodeAmountRange() { DARABONBA_PTR_GET(clientNodeAmountRange_, Result::ClientNodeAmountRange) };
      inline Result& setClientNodeAmountRange(const Result::ClientNodeAmountRange & clientNodeAmountRange) { DARABONBA_PTR_SET_VALUE(clientNodeAmountRange_, clientNodeAmountRange) };
      inline Result& setClientNodeAmountRange(Result::ClientNodeAmountRange && clientNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(clientNodeAmountRange_, clientNodeAmountRange) };


      // clientNodeDiskList Field Functions 
      bool hasClientNodeDiskList() const { return this->clientNodeDiskList_ != nullptr;};
      void deleteClientNodeDiskList() { this->clientNodeDiskList_ = nullptr;};
      inline const vector<Result::ClientNodeDiskList> & getClientNodeDiskList() const { DARABONBA_PTR_GET_CONST(clientNodeDiskList_, vector<Result::ClientNodeDiskList>) };
      inline vector<Result::ClientNodeDiskList> getClientNodeDiskList() { DARABONBA_PTR_GET(clientNodeDiskList_, vector<Result::ClientNodeDiskList>) };
      inline Result& setClientNodeDiskList(const vector<Result::ClientNodeDiskList> & clientNodeDiskList) { DARABONBA_PTR_SET_VALUE(clientNodeDiskList_, clientNodeDiskList) };
      inline Result& setClientNodeDiskList(vector<Result::ClientNodeDiskList> && clientNodeDiskList) { DARABONBA_PTR_SET_RVALUE(clientNodeDiskList_, clientNodeDiskList) };


      // clientSpecs Field Functions 
      bool hasClientSpecs() const { return this->clientSpecs_ != nullptr;};
      void deleteClientSpecs() { this->clientSpecs_ = nullptr;};
      inline const vector<string> & getClientSpecs() const { DARABONBA_PTR_GET_CONST(clientSpecs_, vector<string>) };
      inline vector<string> getClientSpecs() { DARABONBA_PTR_GET(clientSpecs_, vector<string>) };
      inline Result& setClientSpecs(const vector<string> & clientSpecs) { DARABONBA_PTR_SET_VALUE(clientSpecs_, clientSpecs) };
      inline Result& setClientSpecs(vector<string> && clientSpecs) { DARABONBA_PTR_SET_RVALUE(clientSpecs_, clientSpecs) };


      // dataNodeAmountRange Field Functions 
      bool hasDataNodeAmountRange() const { return this->dataNodeAmountRange_ != nullptr;};
      void deleteDataNodeAmountRange() { this->dataNodeAmountRange_ = nullptr;};
      inline const Result::DataNodeAmountRange & getDataNodeAmountRange() const { DARABONBA_PTR_GET_CONST(dataNodeAmountRange_, Result::DataNodeAmountRange) };
      inline Result::DataNodeAmountRange getDataNodeAmountRange() { DARABONBA_PTR_GET(dataNodeAmountRange_, Result::DataNodeAmountRange) };
      inline Result& setDataNodeAmountRange(const Result::DataNodeAmountRange & dataNodeAmountRange) { DARABONBA_PTR_SET_VALUE(dataNodeAmountRange_, dataNodeAmountRange) };
      inline Result& setDataNodeAmountRange(Result::DataNodeAmountRange && dataNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(dataNodeAmountRange_, dataNodeAmountRange) };


      // dataNodeDiskList Field Functions 
      bool hasDataNodeDiskList() const { return this->dataNodeDiskList_ != nullptr;};
      void deleteDataNodeDiskList() { this->dataNodeDiskList_ = nullptr;};
      inline const vector<Result::DataNodeDiskList> & getDataNodeDiskList() const { DARABONBA_PTR_GET_CONST(dataNodeDiskList_, vector<Result::DataNodeDiskList>) };
      inline vector<Result::DataNodeDiskList> getDataNodeDiskList() { DARABONBA_PTR_GET(dataNodeDiskList_, vector<Result::DataNodeDiskList>) };
      inline Result& setDataNodeDiskList(const vector<Result::DataNodeDiskList> & dataNodeDiskList) { DARABONBA_PTR_SET_VALUE(dataNodeDiskList_, dataNodeDiskList) };
      inline Result& setDataNodeDiskList(vector<Result::DataNodeDiskList> && dataNodeDiskList) { DARABONBA_PTR_SET_RVALUE(dataNodeDiskList_, dataNodeDiskList) };


      // dataNodeSpecs Field Functions 
      bool hasDataNodeSpecs() const { return this->dataNodeSpecs_ != nullptr;};
      void deleteDataNodeSpecs() { this->dataNodeSpecs_ = nullptr;};
      inline const vector<string> & getDataNodeSpecs() const { DARABONBA_PTR_GET_CONST(dataNodeSpecs_, vector<string>) };
      inline vector<string> getDataNodeSpecs() { DARABONBA_PTR_GET(dataNodeSpecs_, vector<string>) };
      inline Result& setDataNodeSpecs(const vector<string> & dataNodeSpecs) { DARABONBA_PTR_SET_VALUE(dataNodeSpecs_, dataNodeSpecs) };
      inline Result& setDataNodeSpecs(vector<string> && dataNodeSpecs) { DARABONBA_PTR_SET_RVALUE(dataNodeSpecs_, dataNodeSpecs) };


      // kibanaSpecs Field Functions 
      bool hasKibanaSpecs() const { return this->kibanaSpecs_ != nullptr;};
      void deleteKibanaSpecs() { this->kibanaSpecs_ = nullptr;};
      inline const vector<string> & getKibanaSpecs() const { DARABONBA_PTR_GET_CONST(kibanaSpecs_, vector<string>) };
      inline vector<string> getKibanaSpecs() { DARABONBA_PTR_GET(kibanaSpecs_, vector<string>) };
      inline Result& setKibanaSpecs(const vector<string> & kibanaSpecs) { DARABONBA_PTR_SET_VALUE(kibanaSpecs_, kibanaSpecs) };
      inline Result& setKibanaSpecs(vector<string> && kibanaSpecs) { DARABONBA_PTR_SET_RVALUE(kibanaSpecs_, kibanaSpecs) };


      // masterAmountRange Field Functions 
      bool hasMasterAmountRange() const { return this->masterAmountRange_ != nullptr;};
      void deleteMasterAmountRange() { this->masterAmountRange_ = nullptr;};
      inline const vector<string> & getMasterAmountRange() const { DARABONBA_PTR_GET_CONST(masterAmountRange_, vector<string>) };
      inline vector<string> getMasterAmountRange() { DARABONBA_PTR_GET(masterAmountRange_, vector<string>) };
      inline Result& setMasterAmountRange(const vector<string> & masterAmountRange) { DARABONBA_PTR_SET_VALUE(masterAmountRange_, masterAmountRange) };
      inline Result& setMasterAmountRange(vector<string> && masterAmountRange) { DARABONBA_PTR_SET_RVALUE(masterAmountRange_, masterAmountRange) };


      // masterDiskList Field Functions 
      bool hasMasterDiskList() const { return this->masterDiskList_ != nullptr;};
      void deleteMasterDiskList() { this->masterDiskList_ = nullptr;};
      inline const vector<Result::MasterDiskList> & getMasterDiskList() const { DARABONBA_PTR_GET_CONST(masterDiskList_, vector<Result::MasterDiskList>) };
      inline vector<Result::MasterDiskList> getMasterDiskList() { DARABONBA_PTR_GET(masterDiskList_, vector<Result::MasterDiskList>) };
      inline Result& setMasterDiskList(const vector<Result::MasterDiskList> & masterDiskList) { DARABONBA_PTR_SET_VALUE(masterDiskList_, masterDiskList) };
      inline Result& setMasterDiskList(vector<Result::MasterDiskList> && masterDiskList) { DARABONBA_PTR_SET_RVALUE(masterDiskList_, masterDiskList) };


      // masterSpecs Field Functions 
      bool hasMasterSpecs() const { return this->masterSpecs_ != nullptr;};
      void deleteMasterSpecs() { this->masterSpecs_ = nullptr;};
      inline const vector<string> & getMasterSpecs() const { DARABONBA_PTR_GET_CONST(masterSpecs_, vector<string>) };
      inline vector<string> getMasterSpecs() { DARABONBA_PTR_GET(masterSpecs_, vector<string>) };
      inline Result& setMasterSpecs(const vector<string> & masterSpecs) { DARABONBA_PTR_SET_VALUE(masterSpecs_, masterSpecs) };
      inline Result& setMasterSpecs(vector<string> && masterSpecs) { DARABONBA_PTR_SET_RVALUE(masterSpecs_, masterSpecs) };


      // specInfoMap Field Functions 
      bool hasSpecInfoMap() const { return this->specInfoMap_ != nullptr;};
      void deleteSpecInfoMap() { this->specInfoMap_ = nullptr;};
      inline const map<string, ResultSpecInfoMapValue> & getSpecInfoMap() const { DARABONBA_PTR_GET_CONST(specInfoMap_, map<string, ResultSpecInfoMapValue>) };
      inline map<string, ResultSpecInfoMapValue> getSpecInfoMap() { DARABONBA_PTR_GET(specInfoMap_, map<string, ResultSpecInfoMapValue>) };
      inline Result& setSpecInfoMap(const map<string, ResultSpecInfoMapValue> & specInfoMap) { DARABONBA_PTR_SET_VALUE(specInfoMap_, specInfoMap) };
      inline Result& setSpecInfoMap(map<string, ResultSpecInfoMapValue> && specInfoMap) { DARABONBA_PTR_SET_RVALUE(specInfoMap_, specInfoMap) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
      inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
      inline Result& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Result& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


      // warmNodeAmountRange Field Functions 
      bool hasWarmNodeAmountRange() const { return this->warmNodeAmountRange_ != nullptr;};
      void deleteWarmNodeAmountRange() { this->warmNodeAmountRange_ = nullptr;};
      inline const Result::WarmNodeAmountRange & getWarmNodeAmountRange() const { DARABONBA_PTR_GET_CONST(warmNodeAmountRange_, Result::WarmNodeAmountRange) };
      inline Result::WarmNodeAmountRange getWarmNodeAmountRange() { DARABONBA_PTR_GET(warmNodeAmountRange_, Result::WarmNodeAmountRange) };
      inline Result& setWarmNodeAmountRange(const Result::WarmNodeAmountRange & warmNodeAmountRange) { DARABONBA_PTR_SET_VALUE(warmNodeAmountRange_, warmNodeAmountRange) };
      inline Result& setWarmNodeAmountRange(Result::WarmNodeAmountRange && warmNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(warmNodeAmountRange_, warmNodeAmountRange) };


      // warmNodeDiskList Field Functions 
      bool hasWarmNodeDiskList() const { return this->warmNodeDiskList_ != nullptr;};
      void deleteWarmNodeDiskList() { this->warmNodeDiskList_ = nullptr;};
      inline const vector<Result::WarmNodeDiskList> & getWarmNodeDiskList() const { DARABONBA_PTR_GET_CONST(warmNodeDiskList_, vector<Result::WarmNodeDiskList>) };
      inline vector<Result::WarmNodeDiskList> getWarmNodeDiskList() { DARABONBA_PTR_GET(warmNodeDiskList_, vector<Result::WarmNodeDiskList>) };
      inline Result& setWarmNodeDiskList(const vector<Result::WarmNodeDiskList> & warmNodeDiskList) { DARABONBA_PTR_SET_VALUE(warmNodeDiskList_, warmNodeDiskList) };
      inline Result& setWarmNodeDiskList(vector<Result::WarmNodeDiskList> && warmNodeDiskList) { DARABONBA_PTR_SET_RVALUE(warmNodeDiskList_, warmNodeDiskList) };


      // warmNodeSpecs Field Functions 
      bool hasWarmNodeSpecs() const { return this->warmNodeSpecs_ != nullptr;};
      void deleteWarmNodeSpecs() { this->warmNodeSpecs_ = nullptr;};
      inline const vector<string> & getWarmNodeSpecs() const { DARABONBA_PTR_GET_CONST(warmNodeSpecs_, vector<string>) };
      inline vector<string> getWarmNodeSpecs() { DARABONBA_PTR_GET(warmNodeSpecs_, vector<string>) };
      inline Result& setWarmNodeSpecs(const vector<string> & warmNodeSpecs) { DARABONBA_PTR_SET_VALUE(warmNodeSpecs_, warmNodeSpecs) };
      inline Result& setWarmNodeSpecs(vector<string> && warmNodeSpecs) { DARABONBA_PTR_SET_RVALUE(warmNodeSpecs_, warmNodeSpecs) };


    protected:
      shared_ptr<Result::ClientNodeAmountRange> clientNodeAmountRange_ {};
      shared_ptr<vector<Result::ClientNodeDiskList>> clientNodeDiskList_ {};
      shared_ptr<vector<string>> clientSpecs_ {};
      shared_ptr<Result::DataNodeAmountRange> dataNodeAmountRange_ {};
      shared_ptr<vector<Result::DataNodeDiskList>> dataNodeDiskList_ {};
      shared_ptr<vector<string>> dataNodeSpecs_ {};
      shared_ptr<vector<string>> kibanaSpecs_ {};
      shared_ptr<vector<string>> masterAmountRange_ {};
      shared_ptr<vector<Result::MasterDiskList>> masterDiskList_ {};
      shared_ptr<vector<string>> masterSpecs_ {};
      shared_ptr<map<string, ResultSpecInfoMapValue>> specInfoMap_ {};
      shared_ptr<vector<string>> versions_ {};
      shared_ptr<Result::WarmNodeAmountRange> warmNodeAmountRange_ {};
      shared_ptr<vector<Result::WarmNodeDiskList>> warmNodeDiskList_ {};
      shared_ptr<vector<string>> warmNodeSpecs_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegionalInstanceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetRegionalInstanceConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetRegionalInstanceConfigResponseBody::Result) };
    inline GetRegionalInstanceConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetRegionalInstanceConfigResponseBody::Result) };
    inline GetRegionalInstanceConfigResponseBody& setResult(const GetRegionalInstanceConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetRegionalInstanceConfigResponseBody& setResult(GetRegionalInstanceConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetRegionalInstanceConfigResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
