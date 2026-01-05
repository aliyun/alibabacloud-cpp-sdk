// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLOTSTATUSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_SLOTSTATUSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIElasticDatasetAccelerator20220801
{
namespace Models
{
  class SlotStatusDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SlotStatusDetail& obj) { 
      DARABONBA_PTR_TO_JSON(LoadedFileNum, loadedFileNum_);
      DARABONBA_PTR_TO_JSON(LoadedFileSize, loadedFileSize_);
      DARABONBA_PTR_TO_JSON(LoadingTimeCost, loadingTimeCost_);
    };
    friend void from_json(const Darabonba::Json& j, SlotStatusDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadedFileNum, loadedFileNum_);
      DARABONBA_PTR_FROM_JSON(LoadedFileSize, loadedFileSize_);
      DARABONBA_PTR_FROM_JSON(LoadingTimeCost, loadingTimeCost_);
    };
    SlotStatusDetail() = default ;
    SlotStatusDetail(const SlotStatusDetail &) = default ;
    SlotStatusDetail(SlotStatusDetail &&) = default ;
    SlotStatusDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SlotStatusDetail() = default ;
    SlotStatusDetail& operator=(const SlotStatusDetail &) = default ;
    SlotStatusDetail& operator=(SlotStatusDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadedFileNum_ == nullptr
        && this->loadedFileSize_ == nullptr && this->loadingTimeCost_ == nullptr; };
    // loadedFileNum Field Functions 
    bool hasLoadedFileNum() const { return this->loadedFileNum_ != nullptr;};
    void deleteLoadedFileNum() { this->loadedFileNum_ = nullptr;};
    inline int64_t getLoadedFileNum() const { DARABONBA_PTR_GET_DEFAULT(loadedFileNum_, 0L) };
    inline SlotStatusDetail& setLoadedFileNum(int64_t loadedFileNum) { DARABONBA_PTR_SET_VALUE(loadedFileNum_, loadedFileNum) };


    // loadedFileSize Field Functions 
    bool hasLoadedFileSize() const { return this->loadedFileSize_ != nullptr;};
    void deleteLoadedFileSize() { this->loadedFileSize_ = nullptr;};
    inline string getLoadedFileSize() const { DARABONBA_PTR_GET_DEFAULT(loadedFileSize_, "") };
    inline SlotStatusDetail& setLoadedFileSize(string loadedFileSize) { DARABONBA_PTR_SET_VALUE(loadedFileSize_, loadedFileSize) };


    // loadingTimeCost Field Functions 
    bool hasLoadingTimeCost() const { return this->loadingTimeCost_ != nullptr;};
    void deleteLoadingTimeCost() { this->loadingTimeCost_ = nullptr;};
    inline int64_t getLoadingTimeCost() const { DARABONBA_PTR_GET_DEFAULT(loadingTimeCost_, 0L) };
    inline SlotStatusDetail& setLoadingTimeCost(int64_t loadingTimeCost) { DARABONBA_PTR_SET_VALUE(loadingTimeCost_, loadingTimeCost) };


  protected:
    shared_ptr<int64_t> loadedFileNum_ {};
    shared_ptr<string> loadedFileSize_ {};
    shared_ptr<int64_t> loadingTimeCost_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIElasticDatasetAccelerator20220801
#endif
