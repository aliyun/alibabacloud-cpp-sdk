// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTCONCURRENCYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTCONCURRENCYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployVllmModelInputConcurrencyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployVllmModelInputConcurrencyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(reservedConcurrency, reservedConcurrency_);
    };
    friend void from_json(const Darabonba::Json& j, DeployVllmModelInputConcurrencyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(reservedConcurrency, reservedConcurrency_);
    };
    DeployVllmModelInputConcurrencyConfig() = default ;
    DeployVllmModelInputConcurrencyConfig(const DeployVllmModelInputConcurrencyConfig &) = default ;
    DeployVllmModelInputConcurrencyConfig(DeployVllmModelInputConcurrencyConfig &&) = default ;
    DeployVllmModelInputConcurrencyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployVllmModelInputConcurrencyConfig() = default ;
    DeployVllmModelInputConcurrencyConfig& operator=(const DeployVllmModelInputConcurrencyConfig &) = default ;
    DeployVllmModelInputConcurrencyConfig& operator=(DeployVllmModelInputConcurrencyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reservedConcurrency_ != nullptr; };
    // reservedConcurrency Field Functions 
    bool hasReservedConcurrency() const { return this->reservedConcurrency_ != nullptr;};
    void deleteReservedConcurrency() { this->reservedConcurrency_ = nullptr;};
    inline int32_t reservedConcurrency() const { DARABONBA_PTR_GET_DEFAULT(reservedConcurrency_, 0) };
    inline DeployVllmModelInputConcurrencyConfig& setReservedConcurrency(int32_t reservedConcurrency) { DARABONBA_PTR_SET_VALUE(reservedConcurrency_, reservedConcurrency) };


  protected:
    std::shared_ptr<int32_t> reservedConcurrency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
