// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLRESPONSEBODYUSERDETAILLISTDURMETRICSTATDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLRESPONSEBODYUSERDETAILLISTDURMETRICSTATDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallResponseBodyUserDetailListDurMetricStatData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallResponseBodyUserDetailListDurMetricStatData& obj) { 
      DARABONBA_PTR_TO_JSON(PubAudio, pubAudio_);
      DARABONBA_PTR_TO_JSON(PubVideo1080, pubVideo1080_);
      DARABONBA_PTR_TO_JSON(PubVideo360, pubVideo360_);
      DARABONBA_PTR_TO_JSON(PubVideo720, pubVideo720_);
      DARABONBA_PTR_TO_JSON(PubVideoScreenShare, pubVideoScreenShare_);
      DARABONBA_PTR_TO_JSON(SubAudio, subAudio_);
      DARABONBA_PTR_TO_JSON(SubVideo1080, subVideo1080_);
      DARABONBA_PTR_TO_JSON(SubVideo360, subVideo360_);
      DARABONBA_PTR_TO_JSON(SubVideo720, subVideo720_);
      DARABONBA_PTR_TO_JSON(SubVideoScreenShare, subVideoScreenShare_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallResponseBodyUserDetailListDurMetricStatData& obj) { 
      DARABONBA_PTR_FROM_JSON(PubAudio, pubAudio_);
      DARABONBA_PTR_FROM_JSON(PubVideo1080, pubVideo1080_);
      DARABONBA_PTR_FROM_JSON(PubVideo360, pubVideo360_);
      DARABONBA_PTR_FROM_JSON(PubVideo720, pubVideo720_);
      DARABONBA_PTR_FROM_JSON(PubVideoScreenShare, pubVideoScreenShare_);
      DARABONBA_PTR_FROM_JSON(SubAudio, subAudio_);
      DARABONBA_PTR_FROM_JSON(SubVideo1080, subVideo1080_);
      DARABONBA_PTR_FROM_JSON(SubVideo360, subVideo360_);
      DARABONBA_PTR_FROM_JSON(SubVideo720, subVideo720_);
      DARABONBA_PTR_FROM_JSON(SubVideoScreenShare, subVideoScreenShare_);
    };
    DescribeCallResponseBodyUserDetailListDurMetricStatData() = default ;
    DescribeCallResponseBodyUserDetailListDurMetricStatData(const DescribeCallResponseBodyUserDetailListDurMetricStatData &) = default ;
    DescribeCallResponseBodyUserDetailListDurMetricStatData(DescribeCallResponseBodyUserDetailListDurMetricStatData &&) = default ;
    DescribeCallResponseBodyUserDetailListDurMetricStatData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallResponseBodyUserDetailListDurMetricStatData() = default ;
    DescribeCallResponseBodyUserDetailListDurMetricStatData& operator=(const DescribeCallResponseBodyUserDetailListDurMetricStatData &) = default ;
    DescribeCallResponseBodyUserDetailListDurMetricStatData& operator=(DescribeCallResponseBodyUserDetailListDurMetricStatData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pubAudio_ == nullptr
        && return this->pubVideo1080_ == nullptr && return this->pubVideo360_ == nullptr && return this->pubVideo720_ == nullptr && return this->pubVideoScreenShare_ == nullptr && return this->subAudio_ == nullptr
        && return this->subVideo1080_ == nullptr && return this->subVideo360_ == nullptr && return this->subVideo720_ == nullptr && return this->subVideoScreenShare_ == nullptr; };
    // pubAudio Field Functions 
    bool hasPubAudio() const { return this->pubAudio_ != nullptr;};
    void deletePubAudio() { this->pubAudio_ = nullptr;};
    inline int64_t pubAudio() const { DARABONBA_PTR_GET_DEFAULT(pubAudio_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setPubAudio(int64_t pubAudio) { DARABONBA_PTR_SET_VALUE(pubAudio_, pubAudio) };


    // pubVideo1080 Field Functions 
    bool hasPubVideo1080() const { return this->pubVideo1080_ != nullptr;};
    void deletePubVideo1080() { this->pubVideo1080_ = nullptr;};
    inline int64_t pubVideo1080() const { DARABONBA_PTR_GET_DEFAULT(pubVideo1080_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setPubVideo1080(int64_t pubVideo1080) { DARABONBA_PTR_SET_VALUE(pubVideo1080_, pubVideo1080) };


    // pubVideo360 Field Functions 
    bool hasPubVideo360() const { return this->pubVideo360_ != nullptr;};
    void deletePubVideo360() { this->pubVideo360_ = nullptr;};
    inline int64_t pubVideo360() const { DARABONBA_PTR_GET_DEFAULT(pubVideo360_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setPubVideo360(int64_t pubVideo360) { DARABONBA_PTR_SET_VALUE(pubVideo360_, pubVideo360) };


    // pubVideo720 Field Functions 
    bool hasPubVideo720() const { return this->pubVideo720_ != nullptr;};
    void deletePubVideo720() { this->pubVideo720_ = nullptr;};
    inline int64_t pubVideo720() const { DARABONBA_PTR_GET_DEFAULT(pubVideo720_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setPubVideo720(int64_t pubVideo720) { DARABONBA_PTR_SET_VALUE(pubVideo720_, pubVideo720) };


    // pubVideoScreenShare Field Functions 
    bool hasPubVideoScreenShare() const { return this->pubVideoScreenShare_ != nullptr;};
    void deletePubVideoScreenShare() { this->pubVideoScreenShare_ = nullptr;};
    inline int64_t pubVideoScreenShare() const { DARABONBA_PTR_GET_DEFAULT(pubVideoScreenShare_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setPubVideoScreenShare(int64_t pubVideoScreenShare) { DARABONBA_PTR_SET_VALUE(pubVideoScreenShare_, pubVideoScreenShare) };


    // subAudio Field Functions 
    bool hasSubAudio() const { return this->subAudio_ != nullptr;};
    void deleteSubAudio() { this->subAudio_ = nullptr;};
    inline int64_t subAudio() const { DARABONBA_PTR_GET_DEFAULT(subAudio_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setSubAudio(int64_t subAudio) { DARABONBA_PTR_SET_VALUE(subAudio_, subAudio) };


    // subVideo1080 Field Functions 
    bool hasSubVideo1080() const { return this->subVideo1080_ != nullptr;};
    void deleteSubVideo1080() { this->subVideo1080_ = nullptr;};
    inline int64_t subVideo1080() const { DARABONBA_PTR_GET_DEFAULT(subVideo1080_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setSubVideo1080(int64_t subVideo1080) { DARABONBA_PTR_SET_VALUE(subVideo1080_, subVideo1080) };


    // subVideo360 Field Functions 
    bool hasSubVideo360() const { return this->subVideo360_ != nullptr;};
    void deleteSubVideo360() { this->subVideo360_ = nullptr;};
    inline int64_t subVideo360() const { DARABONBA_PTR_GET_DEFAULT(subVideo360_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setSubVideo360(int64_t subVideo360) { DARABONBA_PTR_SET_VALUE(subVideo360_, subVideo360) };


    // subVideo720 Field Functions 
    bool hasSubVideo720() const { return this->subVideo720_ != nullptr;};
    void deleteSubVideo720() { this->subVideo720_ = nullptr;};
    inline int64_t subVideo720() const { DARABONBA_PTR_GET_DEFAULT(subVideo720_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setSubVideo720(int64_t subVideo720) { DARABONBA_PTR_SET_VALUE(subVideo720_, subVideo720) };


    // subVideoScreenShare Field Functions 
    bool hasSubVideoScreenShare() const { return this->subVideoScreenShare_ != nullptr;};
    void deleteSubVideoScreenShare() { this->subVideoScreenShare_ = nullptr;};
    inline int64_t subVideoScreenShare() const { DARABONBA_PTR_GET_DEFAULT(subVideoScreenShare_, 0L) };
    inline DescribeCallResponseBodyUserDetailListDurMetricStatData& setSubVideoScreenShare(int64_t subVideoScreenShare) { DARABONBA_PTR_SET_VALUE(subVideoScreenShare_, subVideoScreenShare) };


  protected:
    std::shared_ptr<int64_t> pubAudio_ = nullptr;
    std::shared_ptr<int64_t> pubVideo1080_ = nullptr;
    std::shared_ptr<int64_t> pubVideo360_ = nullptr;
    std::shared_ptr<int64_t> pubVideo720_ = nullptr;
    std::shared_ptr<int64_t> pubVideoScreenShare_ = nullptr;
    std::shared_ptr<int64_t> subAudio_ = nullptr;
    std::shared_ptr<int64_t> subVideo1080_ = nullptr;
    std::shared_ptr<int64_t> subVideo360_ = nullptr;
    std::shared_ptr<int64_t> subVideo720_ = nullptr;
    std::shared_ptr<int64_t> subVideoScreenShare_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
