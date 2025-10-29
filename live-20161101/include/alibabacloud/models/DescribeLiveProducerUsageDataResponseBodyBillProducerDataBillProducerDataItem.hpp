// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODYBILLPRODUCERDATABILLPRODUCERDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODYBILLPRODUCERDATABILLPRODUCERDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Instance, instance_);
      DARABONBA_PTR_TO_JSON(OutputHdDuration, outputHdDuration_);
      DARABONBA_PTR_TO_JSON(OutputLdDuration, outputLdDuration_);
      DARABONBA_PTR_TO_JSON(OutputSdDuration, outputSdDuration_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TranHdDuration, tranHdDuration_);
      DARABONBA_PTR_TO_JSON(TranLdDuration, tranLdDuration_);
      DARABONBA_PTR_TO_JSON(TranSdDuration, tranSdDuration_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
      DARABONBA_PTR_FROM_JSON(OutputHdDuration, outputHdDuration_);
      DARABONBA_PTR_FROM_JSON(OutputLdDuration, outputLdDuration_);
      DARABONBA_PTR_FROM_JSON(OutputSdDuration, outputSdDuration_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TranHdDuration, tranHdDuration_);
      DARABONBA_PTR_FROM_JSON(TranLdDuration, tranLdDuration_);
      DARABONBA_PTR_FROM_JSON(TranSdDuration, tranSdDuration_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem() = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem(const DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem &) = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem(DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem &&) = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem() = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& operator=(const DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem &) = default ;
    DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& operator=(DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->instance_ == nullptr && return this->outputHdDuration_ == nullptr && return this->outputLdDuration_ == nullptr && return this->outputSdDuration_ == nullptr && return this->region_ == nullptr
        && return this->timeStamp_ == nullptr && return this->tranHdDuration_ == nullptr && return this->tranLdDuration_ == nullptr && return this->tranSdDuration_ == nullptr && return this->type_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // outputHdDuration Field Functions 
    bool hasOutputHdDuration() const { return this->outputHdDuration_ != nullptr;};
    void deleteOutputHdDuration() { this->outputHdDuration_ = nullptr;};
    inline int64_t outputHdDuration() const { DARABONBA_PTR_GET_DEFAULT(outputHdDuration_, 0L) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setOutputHdDuration(int64_t outputHdDuration) { DARABONBA_PTR_SET_VALUE(outputHdDuration_, outputHdDuration) };


    // outputLdDuration Field Functions 
    bool hasOutputLdDuration() const { return this->outputLdDuration_ != nullptr;};
    void deleteOutputLdDuration() { this->outputLdDuration_ = nullptr;};
    inline int64_t outputLdDuration() const { DARABONBA_PTR_GET_DEFAULT(outputLdDuration_, 0L) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setOutputLdDuration(int64_t outputLdDuration) { DARABONBA_PTR_SET_VALUE(outputLdDuration_, outputLdDuration) };


    // outputSdDuration Field Functions 
    bool hasOutputSdDuration() const { return this->outputSdDuration_ != nullptr;};
    void deleteOutputSdDuration() { this->outputSdDuration_ = nullptr;};
    inline int64_t outputSdDuration() const { DARABONBA_PTR_GET_DEFAULT(outputSdDuration_, 0L) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setOutputSdDuration(int64_t outputSdDuration) { DARABONBA_PTR_SET_VALUE(outputSdDuration_, outputSdDuration) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // tranHdDuration Field Functions 
    bool hasTranHdDuration() const { return this->tranHdDuration_ != nullptr;};
    void deleteTranHdDuration() { this->tranHdDuration_ = nullptr;};
    inline int64_t tranHdDuration() const { DARABONBA_PTR_GET_DEFAULT(tranHdDuration_, 0L) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setTranHdDuration(int64_t tranHdDuration) { DARABONBA_PTR_SET_VALUE(tranHdDuration_, tranHdDuration) };


    // tranLdDuration Field Functions 
    bool hasTranLdDuration() const { return this->tranLdDuration_ != nullptr;};
    void deleteTranLdDuration() { this->tranLdDuration_ = nullptr;};
    inline int64_t tranLdDuration() const { DARABONBA_PTR_GET_DEFAULT(tranLdDuration_, 0L) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setTranLdDuration(int64_t tranLdDuration) { DARABONBA_PTR_SET_VALUE(tranLdDuration_, tranLdDuration) };


    // tranSdDuration Field Functions 
    bool hasTranSdDuration() const { return this->tranSdDuration_ != nullptr;};
    void deleteTranSdDuration() { this->tranSdDuration_ = nullptr;};
    inline int64_t tranSdDuration() const { DARABONBA_PTR_GET_DEFAULT(tranSdDuration_, 0L) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setTranSdDuration(int64_t tranSdDuration) { DARABONBA_PTR_SET_VALUE(tranSdDuration_, tranSdDuration) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerDataBillProducerDataItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name. If domain is specified by the SplitBy parameter, the usage data is returned based on different domain names.
    std::shared_ptr<string> domainName_ = nullptr;
    // The production studio instance. If instance is specified by the SplitBy parameter, the usage data is returned based on different production studio instances.
    std::shared_ptr<string> instance_ = nullptr;
    // The duration of high definition streaming. Unit: minutes.
    std::shared_ptr<int64_t> outputHdDuration_ = nullptr;
    // The duration of low definition streaming. Unit: minutes.
    std::shared_ptr<int64_t> outputLdDuration_ = nullptr;
    // The duration of standard definition streaming. Unit: minutes.
    std::shared_ptr<int64_t> outputSdDuration_ = nullptr;
    // The region. If region is specified by the SplitBy parameter, the usage data is returned based on different regions.
    std::shared_ptr<string> region_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The duration of high definition transcoding. Unit: minutes.
    std::shared_ptr<int64_t> tranHdDuration_ = nullptr;
    // The duration of low definition transcoding. Unit: minutes.
    std::shared_ptr<int64_t> tranLdDuration_ = nullptr;
    // The duration of standard definition transcoding. Unit: minutes.
    std::shared_ptr<int64_t> tranSdDuration_ = nullptr;
    // The type of the production studio. If type is specified by the SplitBy parameter, the usage data is returned based on different types of production studios.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
