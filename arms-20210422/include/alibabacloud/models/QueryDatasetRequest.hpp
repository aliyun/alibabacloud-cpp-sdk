// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class QueryDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DateStr, dateStr_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(HungryMode, hungryMode_);
      DARABONBA_PTR_TO_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_TO_JSON(IsDrillDown, isDrillDown_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_TO_JSON(Measures, measures_);
      DARABONBA_PTR_TO_JSON(MinTime, minTime_);
      DARABONBA_PTR_TO_JSON(OptionalDims, optionalDims_);
      DARABONBA_PTR_TO_JSON(OrderByKey, orderByKey_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(ReduceTail, reduceTail_);
      DARABONBA_PTR_TO_JSON(RequiredDims, requiredDims_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DateStr, dateStr_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(HungryMode, hungryMode_);
      DARABONBA_PTR_FROM_JSON(IntervalInSec, intervalInSec_);
      DARABONBA_PTR_FROM_JSON(IsDrillDown, isDrillDown_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_FROM_JSON(Measures, measures_);
      DARABONBA_PTR_FROM_JSON(MinTime, minTime_);
      DARABONBA_PTR_FROM_JSON(OptionalDims, optionalDims_);
      DARABONBA_PTR_FROM_JSON(OrderByKey, orderByKey_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(ReduceTail, reduceTail_);
      DARABONBA_PTR_FROM_JSON(RequiredDims, requiredDims_);
    };
    QueryDatasetRequest() = default ;
    QueryDatasetRequest(const QueryDatasetRequest &) = default ;
    QueryDatasetRequest(QueryDatasetRequest &&) = default ;
    QueryDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDatasetRequest() = default ;
    QueryDatasetRequest& operator=(const QueryDatasetRequest &) = default ;
    QueryDatasetRequest& operator=(QueryDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RequiredDims : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequiredDims& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RequiredDims& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RequiredDims() = default ;
      RequiredDims(const RequiredDims &) = default ;
      RequiredDims(RequiredDims &&) = default ;
      RequiredDims(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequiredDims() = default ;
      RequiredDims& operator=(const RequiredDims &) = default ;
      RequiredDims& operator=(RequiredDims &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline RequiredDims& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RequiredDims& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RequiredDims& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    class OptionalDims : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OptionalDims& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, OptionalDims& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      OptionalDims() = default ;
      OptionalDims(const OptionalDims &) = default ;
      OptionalDims(OptionalDims &&) = default ;
      OptionalDims(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OptionalDims() = default ;
      OptionalDims& operator=(const OptionalDims &) = default ;
      OptionalDims& operator=(OptionalDims &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline OptionalDims& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OptionalDims& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline OptionalDims& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    class Dimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Dimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Dimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Dimensions() = default ;
      Dimensions(const Dimensions &) = default ;
      Dimensions(Dimensions &&) = default ;
      Dimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Dimensions() = default ;
      Dimensions& operator=(const Dimensions &) = default ;
      Dimensions& operator=(Dimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Dimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Dimensions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Dimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->dateStr_ == nullptr && this->dimensions_ == nullptr && this->hungryMode_ == nullptr && this->intervalInSec_ == nullptr && this->isDrillDown_ == nullptr
        && this->limit_ == nullptr && this->maxTime_ == nullptr && this->measures_ == nullptr && this->minTime_ == nullptr && this->optionalDims_ == nullptr
        && this->orderByKey_ == nullptr && this->proxyUserId_ == nullptr && this->reduceTail_ == nullptr && this->requiredDims_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline QueryDatasetRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // dateStr Field Functions 
    bool hasDateStr() const { return this->dateStr_ != nullptr;};
    void deleteDateStr() { this->dateStr_ = nullptr;};
    inline string getDateStr() const { DARABONBA_PTR_GET_DEFAULT(dateStr_, "") };
    inline QueryDatasetRequest& setDateStr(string dateStr) { DARABONBA_PTR_SET_VALUE(dateStr_, dateStr) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<QueryDatasetRequest::Dimensions> & getDimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<QueryDatasetRequest::Dimensions>) };
    inline vector<QueryDatasetRequest::Dimensions> getDimensions() { DARABONBA_PTR_GET(dimensions_, vector<QueryDatasetRequest::Dimensions>) };
    inline QueryDatasetRequest& setDimensions(const vector<QueryDatasetRequest::Dimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline QueryDatasetRequest& setDimensions(vector<QueryDatasetRequest::Dimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // hungryMode Field Functions 
    bool hasHungryMode() const { return this->hungryMode_ != nullptr;};
    void deleteHungryMode() { this->hungryMode_ = nullptr;};
    inline bool getHungryMode() const { DARABONBA_PTR_GET_DEFAULT(hungryMode_, false) };
    inline QueryDatasetRequest& setHungryMode(bool hungryMode) { DARABONBA_PTR_SET_VALUE(hungryMode_, hungryMode) };


    // intervalInSec Field Functions 
    bool hasIntervalInSec() const { return this->intervalInSec_ != nullptr;};
    void deleteIntervalInSec() { this->intervalInSec_ = nullptr;};
    inline int32_t getIntervalInSec() const { DARABONBA_PTR_GET_DEFAULT(intervalInSec_, 0) };
    inline QueryDatasetRequest& setIntervalInSec(int32_t intervalInSec) { DARABONBA_PTR_SET_VALUE(intervalInSec_, intervalInSec) };


    // isDrillDown Field Functions 
    bool hasIsDrillDown() const { return this->isDrillDown_ != nullptr;};
    void deleteIsDrillDown() { this->isDrillDown_ = nullptr;};
    inline bool getIsDrillDown() const { DARABONBA_PTR_GET_DEFAULT(isDrillDown_, false) };
    inline QueryDatasetRequest& setIsDrillDown(bool isDrillDown) { DARABONBA_PTR_SET_VALUE(isDrillDown_, isDrillDown) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline QueryDatasetRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // maxTime Field Functions 
    bool hasMaxTime() const { return this->maxTime_ != nullptr;};
    void deleteMaxTime() { this->maxTime_ = nullptr;};
    inline int64_t getMaxTime() const { DARABONBA_PTR_GET_DEFAULT(maxTime_, 0L) };
    inline QueryDatasetRequest& setMaxTime(int64_t maxTime) { DARABONBA_PTR_SET_VALUE(maxTime_, maxTime) };


    // measures Field Functions 
    bool hasMeasures() const { return this->measures_ != nullptr;};
    void deleteMeasures() { this->measures_ = nullptr;};
    inline const vector<string> & getMeasures() const { DARABONBA_PTR_GET_CONST(measures_, vector<string>) };
    inline vector<string> getMeasures() { DARABONBA_PTR_GET(measures_, vector<string>) };
    inline QueryDatasetRequest& setMeasures(const vector<string> & measures) { DARABONBA_PTR_SET_VALUE(measures_, measures) };
    inline QueryDatasetRequest& setMeasures(vector<string> && measures) { DARABONBA_PTR_SET_RVALUE(measures_, measures) };


    // minTime Field Functions 
    bool hasMinTime() const { return this->minTime_ != nullptr;};
    void deleteMinTime() { this->minTime_ = nullptr;};
    inline int64_t getMinTime() const { DARABONBA_PTR_GET_DEFAULT(minTime_, 0L) };
    inline QueryDatasetRequest& setMinTime(int64_t minTime) { DARABONBA_PTR_SET_VALUE(minTime_, minTime) };


    // optionalDims Field Functions 
    bool hasOptionalDims() const { return this->optionalDims_ != nullptr;};
    void deleteOptionalDims() { this->optionalDims_ = nullptr;};
    inline const vector<QueryDatasetRequest::OptionalDims> & getOptionalDims() const { DARABONBA_PTR_GET_CONST(optionalDims_, vector<QueryDatasetRequest::OptionalDims>) };
    inline vector<QueryDatasetRequest::OptionalDims> getOptionalDims() { DARABONBA_PTR_GET(optionalDims_, vector<QueryDatasetRequest::OptionalDims>) };
    inline QueryDatasetRequest& setOptionalDims(const vector<QueryDatasetRequest::OptionalDims> & optionalDims) { DARABONBA_PTR_SET_VALUE(optionalDims_, optionalDims) };
    inline QueryDatasetRequest& setOptionalDims(vector<QueryDatasetRequest::OptionalDims> && optionalDims) { DARABONBA_PTR_SET_RVALUE(optionalDims_, optionalDims) };


    // orderByKey Field Functions 
    bool hasOrderByKey() const { return this->orderByKey_ != nullptr;};
    void deleteOrderByKey() { this->orderByKey_ = nullptr;};
    inline string getOrderByKey() const { DARABONBA_PTR_GET_DEFAULT(orderByKey_, "") };
    inline QueryDatasetRequest& setOrderByKey(string orderByKey) { DARABONBA_PTR_SET_VALUE(orderByKey_, orderByKey) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline string getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, "") };
    inline QueryDatasetRequest& setProxyUserId(string proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // reduceTail Field Functions 
    bool hasReduceTail() const { return this->reduceTail_ != nullptr;};
    void deleteReduceTail() { this->reduceTail_ = nullptr;};
    inline bool getReduceTail() const { DARABONBA_PTR_GET_DEFAULT(reduceTail_, false) };
    inline QueryDatasetRequest& setReduceTail(bool reduceTail) { DARABONBA_PTR_SET_VALUE(reduceTail_, reduceTail) };


    // requiredDims Field Functions 
    bool hasRequiredDims() const { return this->requiredDims_ != nullptr;};
    void deleteRequiredDims() { this->requiredDims_ = nullptr;};
    inline const vector<QueryDatasetRequest::RequiredDims> & getRequiredDims() const { DARABONBA_PTR_GET_CONST(requiredDims_, vector<QueryDatasetRequest::RequiredDims>) };
    inline vector<QueryDatasetRequest::RequiredDims> getRequiredDims() { DARABONBA_PTR_GET(requiredDims_, vector<QueryDatasetRequest::RequiredDims>) };
    inline QueryDatasetRequest& setRequiredDims(const vector<QueryDatasetRequest::RequiredDims> & requiredDims) { DARABONBA_PTR_SET_VALUE(requiredDims_, requiredDims) };
    inline QueryDatasetRequest& setRequiredDims(vector<QueryDatasetRequest::RequiredDims> && requiredDims) { DARABONBA_PTR_SET_RVALUE(requiredDims_, requiredDims) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> dateStr_ {};
    shared_ptr<vector<QueryDatasetRequest::Dimensions>> dimensions_ {};
    shared_ptr<bool> hungryMode_ {};
    // This parameter is required.
    shared_ptr<int32_t> intervalInSec_ {};
    shared_ptr<bool> isDrillDown_ {};
    shared_ptr<int32_t> limit_ {};
    // This parameter is required.
    shared_ptr<int64_t> maxTime_ {};
    shared_ptr<vector<string>> measures_ {};
    // This parameter is required.
    shared_ptr<int64_t> minTime_ {};
    shared_ptr<vector<QueryDatasetRequest::OptionalDims>> optionalDims_ {};
    shared_ptr<string> orderByKey_ {};
    shared_ptr<string> proxyUserId_ {};
    shared_ptr<bool> reduceTail_ {};
    shared_ptr<vector<QueryDatasetRequest::RequiredDims>> requiredDims_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
