// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_SYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class SystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    SystemDisk() = default ;
    SystemDisk(const SystemDisk &) = default ;
    SystemDisk(SystemDisk &&) = default ;
    SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SystemDisk() = default ;
    SystemDisk& operator=(const SystemDisk &) = default ;
    SystemDisk& operator=(SystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->count_ == nullptr && return this->performanceLevel_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline SystemDisk& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // 磁盘类型。
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // 每个节点系统盘数量，默认值为1。
    std::shared_ptr<int32_t> count_ = nullptr;
    // 创建ESSD云盘作为系统盘使用时，设置云盘的性能等级。取值范围：
    // - PL0：单盘最高随机读写IOPS 1万。
    // - PL1（默认）：单盘最高随机读写IOPS 5万。
    // - PL2：单盘最高随机读写IOPS 10万。
    // - PL3：单盘最高随机读写IOPS 100万。
    // 
    // 默认值：PL1。
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // 单位GB。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
