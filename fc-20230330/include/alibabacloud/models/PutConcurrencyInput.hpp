// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCONCURRENCYINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUTCONCURRENCYINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PutConcurrencyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutConcurrencyInput& obj) { 
      DARABONBA_PTR_TO_JSON(reservedConcurrency, reservedConcurrency_);
    };
    friend void from_json(const Darabonba::Json& j, PutConcurrencyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(reservedConcurrency, reservedConcurrency_);
    };
    PutConcurrencyInput() = default ;
    PutConcurrencyInput(const PutConcurrencyInput &) = default ;
    PutConcurrencyInput(PutConcurrencyInput &&) = default ;
    PutConcurrencyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutConcurrencyInput() = default ;
    PutConcurrencyInput& operator=(const PutConcurrencyInput &) = default ;
    PutConcurrencyInput& operator=(PutConcurrencyInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->reservedConcurrency_ == nullptr; };
    // reservedConcurrency Field Functions 
    bool hasReservedConcurrency() const { return this->reservedConcurrency_ != nullptr;};
    void deleteReservedConcurrency() { this->reservedConcurrency_ = nullptr;};
    inline int64_t getReservedConcurrency() const { DARABONBA_PTR_GET_DEFAULT(reservedConcurrency_, 0L) };
    inline PutConcurrencyInput& setReservedConcurrency(int64_t reservedConcurrency) { DARABONBA_PTR_SET_VALUE(reservedConcurrency_, reservedConcurrency) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> reservedConcurrency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
