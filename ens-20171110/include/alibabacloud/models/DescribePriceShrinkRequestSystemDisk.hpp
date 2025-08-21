// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceShrinkRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceShrinkRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceShrinkRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribePriceShrinkRequestSystemDisk() = default ;
    DescribePriceShrinkRequestSystemDisk(const DescribePriceShrinkRequestSystemDisk &) = default ;
    DescribePriceShrinkRequestSystemDisk(DescribePriceShrinkRequestSystemDisk &&) = default ;
    DescribePriceShrinkRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceShrinkRequestSystemDisk() = default ;
    DescribePriceShrinkRequestSystemDisk& operator=(const DescribePriceShrinkRequestSystemDisk &) = default ;
    DescribePriceShrinkRequestSystemDisk& operator=(DescribePriceShrinkRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribePriceShrinkRequestSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The size of the system disk. Unit: GB.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
