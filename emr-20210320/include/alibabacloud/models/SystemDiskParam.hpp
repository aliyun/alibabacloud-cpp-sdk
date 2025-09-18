// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYSTEMDISKPARAM_HPP_
#define ALIBABACLOUD_MODELS_SYSTEMDISKPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class SystemDiskParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SystemDiskParam& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, SystemDiskParam& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    SystemDiskParam() = default ;
    SystemDiskParam(const SystemDiskParam &) = default ;
    SystemDiskParam(SystemDiskParam &&) = default ;
    SystemDiskParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SystemDiskParam() = default ;
    SystemDiskParam& operator=(const SystemDiskParam &) = default ;
    SystemDiskParam& operator=(SystemDiskParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->performanceLevel_ != nullptr && this->size_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SystemDiskParam& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline SystemDiskParam& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline SystemDiskParam& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
