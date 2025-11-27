// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_RUNRCINSTANCESREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCInstancesRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCInstancesRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCInstancesRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    RunRCInstancesRequestSystemDisk() = default ;
    RunRCInstancesRequestSystemDisk(const RunRCInstancesRequestSystemDisk &) = default ;
    RunRCInstancesRequestSystemDisk(RunRCInstancesRequestSystemDisk &&) = default ;
    RunRCInstancesRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCInstancesRequestSystemDisk() = default ;
    RunRCInstancesRequestSystemDisk& operator=(const RunRCInstancesRequestSystemDisk &) = default ;
    RunRCInstancesRequestSystemDisk& operator=(RunRCInstancesRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->performanceLevel_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline RunRCInstancesRequestSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline RunRCInstancesRequestSystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline RunRCInstancesRequestSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The type of the system disk. Set the value to **cloud_essd**, which indicates ESSDs.
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB. Only performance level 1 (PL1) ESSDs are supported. Valid values: 20 to 2048.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
