// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONCURRENCYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CONCURRENCYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ConcurrencyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConcurrencyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(functionArn, functionArn_);
      DARABONBA_PTR_TO_JSON(reservedConcurrency, reservedConcurrency_);
    };
    friend void from_json(const Darabonba::Json& j, ConcurrencyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(functionArn, functionArn_);
      DARABONBA_PTR_FROM_JSON(reservedConcurrency, reservedConcurrency_);
    };
    ConcurrencyConfig() = default ;
    ConcurrencyConfig(const ConcurrencyConfig &) = default ;
    ConcurrencyConfig(ConcurrencyConfig &&) = default ;
    ConcurrencyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConcurrencyConfig() = default ;
    ConcurrencyConfig& operator=(const ConcurrencyConfig &) = default ;
    ConcurrencyConfig& operator=(ConcurrencyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionArn_ == nullptr
        && this->reservedConcurrency_ == nullptr; };
    // functionArn Field Functions 
    bool hasFunctionArn() const { return this->functionArn_ != nullptr;};
    void deleteFunctionArn() { this->functionArn_ = nullptr;};
    inline string getFunctionArn() const { DARABONBA_PTR_GET_DEFAULT(functionArn_, "") };
    inline ConcurrencyConfig& setFunctionArn(string functionArn) { DARABONBA_PTR_SET_VALUE(functionArn_, functionArn) };


    // reservedConcurrency Field Functions 
    bool hasReservedConcurrency() const { return this->reservedConcurrency_ != nullptr;};
    void deleteReservedConcurrency() { this->reservedConcurrency_ = nullptr;};
    inline int64_t getReservedConcurrency() const { DARABONBA_PTR_GET_DEFAULT(reservedConcurrency_, 0L) };
    inline ConcurrencyConfig& setReservedConcurrency(int64_t reservedConcurrency) { DARABONBA_PTR_SET_VALUE(reservedConcurrency_, reservedConcurrency) };


  protected:
    shared_ptr<string> functionArn_ {};
    shared_ptr<int64_t> reservedConcurrency_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
