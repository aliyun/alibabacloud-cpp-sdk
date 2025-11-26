// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONDATA_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class OperationData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationData& obj) { 
      DARABONBA_PTR_TO_JSON(actualDeliveredAmounts, actualDeliveredAmounts_);
      DARABONBA_PTR_TO_JSON(toBeDeliveredAmounts, toBeDeliveredAmounts_);
    };
    friend void from_json(const Darabonba::Json& j, OperationData& obj) { 
      DARABONBA_PTR_FROM_JSON(actualDeliveredAmounts, actualDeliveredAmounts_);
      DARABONBA_PTR_FROM_JSON(toBeDeliveredAmounts, toBeDeliveredAmounts_);
    };
    OperationData() = default ;
    OperationData(const OperationData &) = default ;
    OperationData(OperationData &&) = default ;
    OperationData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationData() = default ;
    OperationData& operator=(const OperationData &) = default ;
    OperationData& operator=(OperationData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualDeliveredAmounts_ == nullptr
        && return this->toBeDeliveredAmounts_ == nullptr; };
    // actualDeliveredAmounts Field Functions 
    bool hasActualDeliveredAmounts() const { return this->actualDeliveredAmounts_ != nullptr;};
    void deleteActualDeliveredAmounts() { this->actualDeliveredAmounts_ = nullptr;};
    inline int32_t actualDeliveredAmounts() const { DARABONBA_PTR_GET_DEFAULT(actualDeliveredAmounts_, 0) };
    inline OperationData& setActualDeliveredAmounts(int32_t actualDeliveredAmounts) { DARABONBA_PTR_SET_VALUE(actualDeliveredAmounts_, actualDeliveredAmounts) };


    // toBeDeliveredAmounts Field Functions 
    bool hasToBeDeliveredAmounts() const { return this->toBeDeliveredAmounts_ != nullptr;};
    void deleteToBeDeliveredAmounts() { this->toBeDeliveredAmounts_ = nullptr;};
    inline int32_t toBeDeliveredAmounts() const { DARABONBA_PTR_GET_DEFAULT(toBeDeliveredAmounts_, 0) };
    inline OperationData& setToBeDeliveredAmounts(int32_t toBeDeliveredAmounts) { DARABONBA_PTR_SET_VALUE(toBeDeliveredAmounts_, toBeDeliveredAmounts) };


  protected:
    std::shared_ptr<int32_t> actualDeliveredAmounts_ = nullptr;
    std::shared_ptr<int32_t> toBeDeliveredAmounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
