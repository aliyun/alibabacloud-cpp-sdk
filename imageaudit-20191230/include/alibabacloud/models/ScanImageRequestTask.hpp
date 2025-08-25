// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGEREQUESTTASK_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGEREQUESTTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageRequestTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageRequestTask& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ImageTimeMillisecond, imageTimeMillisecond_);
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(MaxFrames, maxFrames_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageRequestTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ImageTimeMillisecond, imageTimeMillisecond_);
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(MaxFrames, maxFrames_);
    };
    ScanImageRequestTask() = default ;
    ScanImageRequestTask(const ScanImageRequestTask &) = default ;
    ScanImageRequestTask(ScanImageRequestTask &&) = default ;
    ScanImageRequestTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageRequestTask() = default ;
    ScanImageRequestTask& operator=(const ScanImageRequestTask &) = default ;
    ScanImageRequestTask& operator=(ScanImageRequestTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->imageTimeMillisecond_ != nullptr && this->imageURL_ != nullptr && this->interval_ != nullptr && this->maxFrames_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ScanImageRequestTask& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // imageTimeMillisecond Field Functions 
    bool hasImageTimeMillisecond() const { return this->imageTimeMillisecond_ != nullptr;};
    void deleteImageTimeMillisecond() { this->imageTimeMillisecond_ = nullptr;};
    inline int64_t imageTimeMillisecond() const { DARABONBA_PTR_GET_DEFAULT(imageTimeMillisecond_, 0L) };
    inline ScanImageRequestTask& setImageTimeMillisecond(int64_t imageTimeMillisecond) { DARABONBA_PTR_SET_VALUE(imageTimeMillisecond_, imageTimeMillisecond) };


    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline ScanImageRequestTask& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ScanImageRequestTask& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // maxFrames Field Functions 
    bool hasMaxFrames() const { return this->maxFrames_ != nullptr;};
    void deleteMaxFrames() { this->maxFrames_ = nullptr;};
    inline int32_t maxFrames() const { DARABONBA_PTR_GET_DEFAULT(maxFrames_, 0) };
    inline ScanImageRequestTask& setMaxFrames(int32_t maxFrames) { DARABONBA_PTR_SET_VALUE(maxFrames_, maxFrames) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<int64_t> imageTimeMillisecond_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> maxFrames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
