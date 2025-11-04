// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATERESPONSEBODYRECORDTEMPLATERECORDFORMATLIST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVERECORDTEMPLATERESPONSEBODYRECORDTEMPLATERECORDFORMATLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_TO_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
      DARABONBA_PTR_FROM_JSON(SliceDuration, sliceDuration_);
      DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
    };
    GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList() = default ;
    GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList(const GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList &) = default ;
    GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList(GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList &&) = default ;
    GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList() = default ;
    GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& operator=(const GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList &) = default ;
    GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& operator=(GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && return this->format_ == nullptr && return this->ossObjectPrefix_ == nullptr && return this->sliceDuration_ == nullptr && return this->sliceOssObjectPrefix_ == nullptr; };
    // cycleDuration Field Functions 
    bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
    void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
    inline int32_t cycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
    inline GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // ossObjectPrefix Field Functions 
    bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
    void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
    inline string ossObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
    inline GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


    // sliceDuration Field Functions 
    bool hasSliceDuration() const { return this->sliceDuration_ != nullptr;};
    void deleteSliceDuration() { this->sliceDuration_ = nullptr;};
    inline int32_t sliceDuration() const { DARABONBA_PTR_GET_DEFAULT(sliceDuration_, 0) };
    inline GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& setSliceDuration(int32_t sliceDuration) { DARABONBA_PTR_SET_VALUE(sliceDuration_, sliceDuration) };


    // sliceOssObjectPrefix Field Functions 
    bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
    void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
    inline string sliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
    inline GetLiveRecordTemplateResponseBodyRecordTemplateRecordFormatList& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


  protected:
    // The duration of the recording cycle. Unit: seconds. If you do not specify this parameter, the default value 6 hours is used.
    std::shared_ptr<int32_t> cycleDuration_ = nullptr;
    // The output file format.
    std::shared_ptr<string> format_ = nullptr;
    // The name of the recording file that is stored in Object Storage Service (OSS).
    std::shared_ptr<string> ossObjectPrefix_ = nullptr;
    // The duration of a single segment. Unit: seconds.
    std::shared_ptr<int32_t> sliceDuration_ = nullptr;
    // The name of the TS segment.
    std::shared_ptr<string> sliceOssObjectPrefix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
