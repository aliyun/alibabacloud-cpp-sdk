// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BALANCEPOOLSUMMARYDTO_HPP_
#define ALIBABACLOUD_MODELS_BALANCEPOOLSUMMARYDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BalancePoolSummaryDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BalancePoolSummaryDTO& obj) { 
      DARABONBA_PTR_TO_JSON(allocated, allocated_);
      DARABONBA_PTR_TO_JSON(available, available_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, BalancePoolSummaryDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(allocated, allocated_);
      DARABONBA_PTR_FROM_JSON(available, available_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    BalancePoolSummaryDTO() = default ;
    BalancePoolSummaryDTO(const BalancePoolSummaryDTO &) = default ;
    BalancePoolSummaryDTO(BalancePoolSummaryDTO &&) = default ;
    BalancePoolSummaryDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BalancePoolSummaryDTO() = default ;
    BalancePoolSummaryDTO& operator=(const BalancePoolSummaryDTO &) = default ;
    BalancePoolSummaryDTO& operator=(BalancePoolSummaryDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocated_ == nullptr
        && this->available_ == nullptr && this->total_ == nullptr; };
    // allocated Field Functions 
    bool hasAllocated() const { return this->allocated_ != nullptr;};
    void deleteAllocated() { this->allocated_ = nullptr;};
    inline double getAllocated() const { DARABONBA_PTR_GET_DEFAULT(allocated_, 0.0) };
    inline BalancePoolSummaryDTO& setAllocated(double allocated) { DARABONBA_PTR_SET_VALUE(allocated_, allocated) };


    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline double getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, 0.0) };
    inline BalancePoolSummaryDTO& setAvailable(double available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline double getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0.0) };
    inline BalancePoolSummaryDTO& setTotal(double total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<double> allocated_ {};
    shared_ptr<double> available_ {};
    shared_ptr<double> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
