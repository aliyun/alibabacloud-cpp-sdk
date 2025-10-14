// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTDATADISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTDATADISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceRequestDataDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequestDataDisks& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequestDataDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribePriceRequestDataDisks() = default ;
    DescribePriceRequestDataDisks(const DescribePriceRequestDataDisks &) = default ;
    DescribePriceRequestDataDisks(DescribePriceRequestDataDisks &&) = default ;
    DescribePriceRequestDataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequestDataDisks() = default ;
    DescribePriceRequestDataDisks& operator=(const DescribePriceRequestDataDisks &) = default ;
    DescribePriceRequestDataDisks& operator=(DescribePriceRequestDataDisks &&) = default ;
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
    inline DescribePriceRequestDataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribePriceRequestDataDisks& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The category of the disk.
    std::shared_ptr<string> category_ = nullptr;
    // The size of the data disk. Unit: GB.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
