// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICESHRINKREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceShrinkRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceShrinkRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceShrinkRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribePriceShrinkRequestDataDisk() = default ;
    DescribePriceShrinkRequestDataDisk(const DescribePriceShrinkRequestDataDisk &) = default ;
    DescribePriceShrinkRequestDataDisk(DescribePriceShrinkRequestDataDisk &&) = default ;
    DescribePriceShrinkRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceShrinkRequestDataDisk() = default ;
    DescribePriceShrinkRequestDataDisk& operator=(const DescribePriceShrinkRequestDataDisk &) = default ;
    DescribePriceShrinkRequestDataDisk& operator=(DescribePriceShrinkRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribePriceShrinkRequestDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The size of the data disk. Unit: GB. If you specify this parameter, this parameter takes precedence over the Size property in DataDisks.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
