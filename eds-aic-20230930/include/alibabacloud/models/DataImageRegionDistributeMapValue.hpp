// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAIMAGEREGIONDISTRIBUTEMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAIMAGEREGIONDISTRIBUTEMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DataImageRegionDistributeMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataImageRegionDistributeMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(DistributeStatus, distributeStatus_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
    };
    friend void from_json(const Darabonba::Json& j, DataImageRegionDistributeMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(DistributeStatus, distributeStatus_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
    };
    DataImageRegionDistributeMapValue() = default ;
    DataImageRegionDistributeMapValue(const DataImageRegionDistributeMapValue &) = default ;
    DataImageRegionDistributeMapValue(DataImageRegionDistributeMapValue &&) = default ;
    DataImageRegionDistributeMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataImageRegionDistributeMapValue() = default ;
    DataImageRegionDistributeMapValue& operator=(const DataImageRegionDistributeMapValue &) = default ;
    DataImageRegionDistributeMapValue& operator=(DataImageRegionDistributeMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->distributeStatus_ == nullptr
        && return this->progress_ == nullptr; };
    // distributeStatus Field Functions 
    bool hasDistributeStatus() const { return this->distributeStatus_ != nullptr;};
    void deleteDistributeStatus() { this->distributeStatus_ = nullptr;};
    inline string distributeStatus() const { DARABONBA_PTR_GET_DEFAULT(distributeStatus_, "") };
    inline DataImageRegionDistributeMapValue& setDistributeStatus(string distributeStatus) { DARABONBA_PTR_SET_VALUE(distributeStatus_, distributeStatus) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DataImageRegionDistributeMapValue& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


  protected:
    // The status of the image distribution task.
    // 
    // Valid values:
    // 
    // *   AVAILABLE: The task is ready.
    // *   DELETE: The task is deleted.
    // *   INIT: The task is being initialized.
    // *   CREATE_FAILED: The task failed to be created.
    // *   CREATING: The task is being created.
    std::shared_ptr<string> distributeStatus_ = nullptr;
    // The distribution progress of the image.
    std::shared_ptr<string> progress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
