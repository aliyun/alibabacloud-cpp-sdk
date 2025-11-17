// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEATUREVIEWCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_FEATUREVIEWCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/FeatureViewConfigValuePartitionsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class FeatureViewConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeatureViewConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(Partitions, partitions_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(Equal, equal_);
      DARABONBA_PTR_TO_JSON(UseMock, useMock_);
    };
    friend void from_json(const Darabonba::Json& j, FeatureViewConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Partitions, partitions_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(Equal, equal_);
      DARABONBA_PTR_FROM_JSON(UseMock, useMock_);
    };
    FeatureViewConfigValue() = default ;
    FeatureViewConfigValue(const FeatureViewConfigValue &) = default ;
    FeatureViewConfigValue(FeatureViewConfigValue &&) = default ;
    FeatureViewConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeatureViewConfigValue() = default ;
    FeatureViewConfigValue& operator=(const FeatureViewConfigValue &) = default ;
    FeatureViewConfigValue& operator=(FeatureViewConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->partitions_ == nullptr
        && return this->eventTime_ == nullptr && return this->equal_ == nullptr && return this->useMock_ == nullptr; };
    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const map<string, FeatureViewConfigValuePartitionsValue> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, map<string, FeatureViewConfigValuePartitionsValue>) };
    inline map<string, FeatureViewConfigValuePartitionsValue> partitions() { DARABONBA_PTR_GET(partitions_, map<string, FeatureViewConfigValuePartitionsValue>) };
    inline FeatureViewConfigValue& setPartitions(const map<string, FeatureViewConfigValuePartitionsValue> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline FeatureViewConfigValue& setPartitions(map<string, FeatureViewConfigValuePartitionsValue> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline string eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
    inline FeatureViewConfigValue& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // equal Field Functions 
    bool hasEqual() const { return this->equal_ != nullptr;};
    void deleteEqual() { this->equal_ = nullptr;};
    inline bool equal() const { DARABONBA_PTR_GET_DEFAULT(equal_, false) };
    inline FeatureViewConfigValue& setEqual(bool equal) { DARABONBA_PTR_SET_VALUE(equal_, equal) };


    // useMock Field Functions 
    bool hasUseMock() const { return this->useMock_ != nullptr;};
    void deleteUseMock() { this->useMock_ = nullptr;};
    inline bool useMock() const { DARABONBA_PTR_GET_DEFAULT(useMock_, false) };
    inline FeatureViewConfigValue& setUseMock(bool useMock) { DARABONBA_PTR_SET_VALUE(useMock_, useMock) };


  protected:
    std::shared_ptr<map<string, FeatureViewConfigValuePartitionsValue>> partitions_ = nullptr;
    std::shared_ptr<string> eventTime_ = nullptr;
    std::shared_ptr<bool> equal_ = nullptr;
    std::shared_ptr<bool> useMock_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
