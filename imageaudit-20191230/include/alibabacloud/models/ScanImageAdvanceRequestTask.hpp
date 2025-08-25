// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANIMAGEADVANCEREQUESTTASK_HPP_
#define ALIBABACLOUD_MODELS_SCANIMAGEADVANCEREQUESTTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageaudit20191230
{
namespace Models
{
  class ScanImageAdvanceRequestTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanImageAdvanceRequestTask& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ImageTimeMillisecond, imageTimeMillisecond_);
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(MaxFrames, maxFrames_);
    };
    friend void from_json(const Darabonba::Json& j, ScanImageAdvanceRequestTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ImageTimeMillisecond, imageTimeMillisecond_);
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(MaxFrames, maxFrames_);
    };
    ScanImageAdvanceRequestTask() = default ;
    ScanImageAdvanceRequestTask(const ScanImageAdvanceRequestTask &) = default ;
    ScanImageAdvanceRequestTask(ScanImageAdvanceRequestTask &&) = default ;
    ScanImageAdvanceRequestTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanImageAdvanceRequestTask() = default ;
    ScanImageAdvanceRequestTask& operator=(const ScanImageAdvanceRequestTask &) = default ;
    ScanImageAdvanceRequestTask& operator=(ScanImageAdvanceRequestTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->imageTimeMillisecond_ != nullptr && this->imageURLObject_ != nullptr && this->interval_ != nullptr && this->maxFrames_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ScanImageAdvanceRequestTask& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // imageTimeMillisecond Field Functions 
    bool hasImageTimeMillisecond() const { return this->imageTimeMillisecond_ != nullptr;};
    void deleteImageTimeMillisecond() { this->imageTimeMillisecond_ = nullptr;};
    inline int64_t imageTimeMillisecond() const { DARABONBA_PTR_GET_DEFAULT(imageTimeMillisecond_, 0L) };
    inline ScanImageAdvanceRequestTask& setImageTimeMillisecond(int64_t imageTimeMillisecond) { DARABONBA_PTR_SET_VALUE(imageTimeMillisecond_, imageTimeMillisecond) };


    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline ScanImageAdvanceRequestTask& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline ScanImageAdvanceRequestTask& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // maxFrames Field Functions 
    bool hasMaxFrames() const { return this->maxFrames_ != nullptr;};
    void deleteMaxFrames() { this->maxFrames_ = nullptr;};
    inline int32_t maxFrames() const { DARABONBA_PTR_GET_DEFAULT(maxFrames_, 0) };
    inline ScanImageAdvanceRequestTask& setMaxFrames(int32_t maxFrames) { DARABONBA_PTR_SET_VALUE(maxFrames_, maxFrames) };


  protected:
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<int64_t> imageTimeMillisecond_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<int32_t> maxFrames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageaudit20191230
#endif
