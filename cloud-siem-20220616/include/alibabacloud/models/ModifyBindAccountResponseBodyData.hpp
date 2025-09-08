// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBINDACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBINDACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ModifyBindAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBindAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBindAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    ModifyBindAccountResponseBodyData() = default ;
    ModifyBindAccountResponseBodyData(const ModifyBindAccountResponseBodyData &) = default ;
    ModifyBindAccountResponseBodyData(ModifyBindAccountResponseBodyData &&) = default ;
    ModifyBindAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBindAccountResponseBodyData() = default ;
    ModifyBindAccountResponseBodyData& operator=(const ModifyBindAccountResponseBodyData &) = default ;
    ModifyBindAccountResponseBodyData& operator=(ModifyBindAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ModifyBindAccountResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The number of the accounts that are modified. The value 1 indicates that the modification is successful, and a value less than or equal to 0 indicates that the modification failed.
    std::shared_ptr<int32_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
