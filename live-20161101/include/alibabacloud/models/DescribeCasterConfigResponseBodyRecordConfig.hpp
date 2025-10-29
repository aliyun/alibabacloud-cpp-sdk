// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYRECORDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYRECORDCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterConfigResponseBodyRecordConfigRecordFormat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodyRecordConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodyRecordConfig& obj) { 
      DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodyRecordConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
      DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
    };
    DescribeCasterConfigResponseBodyRecordConfig() = default ;
    DescribeCasterConfigResponseBodyRecordConfig(const DescribeCasterConfigResponseBodyRecordConfig &) = default ;
    DescribeCasterConfigResponseBodyRecordConfig(DescribeCasterConfigResponseBodyRecordConfig &&) = default ;
    DescribeCasterConfigResponseBodyRecordConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodyRecordConfig() = default ;
    DescribeCasterConfigResponseBodyRecordConfig& operator=(const DescribeCasterConfigResponseBodyRecordConfig &) = default ;
    DescribeCasterConfigResponseBodyRecordConfig& operator=(DescribeCasterConfigResponseBodyRecordConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onDemand_ == nullptr
        && return this->ossBucket_ == nullptr && return this->ossEndpoint_ == nullptr && return this->recordFormat_ == nullptr; };
    // onDemand Field Functions 
    bool hasOnDemand() const { return this->onDemand_ != nullptr;};
    void deleteOnDemand() { this->onDemand_ = nullptr;};
    inline int32_t onDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
    inline DescribeCasterConfigResponseBodyRecordConfig& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline DescribeCasterConfigResponseBodyRecordConfig& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline DescribeCasterConfigResponseBodyRecordConfig& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline const Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat & recordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat) };
    inline Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat recordFormat() { DARABONBA_PTR_GET(recordFormat_, Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat) };
    inline DescribeCasterConfigResponseBodyRecordConfig& setRecordFormat(const Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
    inline DescribeCasterConfigResponseBodyRecordConfig& setRecordFormat(Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


  protected:
    // On-demand recording. Values:
    // - 0: Off. 
    // - 1: Via HTTP callback. 
    // - 2: Parse streaming parameters for on-demand recording. 
    // - 7: Default to not record.
    std::shared_ptr<int32_t> onDemand_ = nullptr;
    // The OSS bucket for storage.
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The Object Storage Service (OSS) endpoint.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The recording configuration.
    std::shared_ptr<Models::DescribeCasterConfigResponseBodyRecordConfigRecordFormat> recordFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
