// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISKSIZE_HPP_
#define ALIBABACLOUD_MODELS_DISKSIZE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DiskSize : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiskSize& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DiskSize& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DiskSize() = default ;
    DiskSize(const DiskSize &) = default ;
    DiskSize(DiskSize &&) = default ;
    DiskSize(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiskSize() = default ;
    DiskSize& operator=(const DiskSize &) = default ;
    DiskSize& operator=(DiskSize &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DiskSize& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DiskSize& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // 磁盘类型。
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // 单位GB。
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
