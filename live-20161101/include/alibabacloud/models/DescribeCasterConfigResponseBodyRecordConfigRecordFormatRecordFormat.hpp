// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYRECORDCONFIGRECORDFORMATRECORDFORMAT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYRECORDCONFIGRECORDFORMATRECORDFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat() = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat(const DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat &) = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat(DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat &&) = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat() = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& operator=(const DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat &) = default ;
    DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& operator=(DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleDuration_ != nullptr
        && this->format_ != nullptr && this->ossObjectPrefix_ != nullptr && this->sliceOssObjectPrefix_ != nullptr; };
    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t cycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // ossObjectPrefix Field Functions 
    bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
    void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
    inline string ossObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
    inline DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


    // sliceOssObjectPrefix Field Functions 
    bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
    void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
    inline string sliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
    inline DescribeCasterConfigResponseBodyRecordConfigRecordFormatRecordFormat& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


  protected:
    // The length of the recording.
    std::shared_ptr<int32_t> cycleDuration_ = nullptr;
    // The format of the recording.
    std::shared_ptr<string> format_ = nullptr;
    // The name of the recording.
    std::shared_ptr<string> ossObjectPrefix_ = nullptr;
    // The name of the segment.
    std::shared_ptr<string> sliceOssObjectPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
