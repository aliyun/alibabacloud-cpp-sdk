// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGFILTERFILTERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGFILTERFILTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SLSKeyName, SLSKeyName_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SLSKeyName, SLSKeyName_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters() = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters(const CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters &) = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters(CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters &&) = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters() = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& operator=(const CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters &) = default ;
    CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& operator=(CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operator_ == nullptr
        && return this->SLSKeyName_ == nullptr && return this->value_ == nullptr; };
    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // SLSKeyName Field Functions 
    bool hasSLSKeyName() const { return this->SLSKeyName_ != nullptr;};
    void deleteSLSKeyName() { this->SLSKeyName_ = nullptr;};
    inline string SLSKeyName() const { DARABONBA_PTR_GET_DEFAULT(SLSKeyName_, "") };
    inline CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& setSLSKeyName(string SLSKeyName) { DARABONBA_PTR_SET_VALUE(SLSKeyName_, SLSKeyName) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateHybridMonitorTaskRequestSLSProcessConfigFilterFilters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method that is used to filter logs imported from Simple Log Service. Valid values:
    // 
    // *   `contain`: contains
    // *   `notContain`: does not contain
    // *   `>`: greater than
    // *   `<`: less than
    // *   `=`: equal to
    // *   `! =`: not equal to
    // *   `>=`: greater than or equal to
    // *   `<=`: less than or equal to
    std::shared_ptr<string> operator_ = nullptr;
    // The name of the key that is used to filter logs imported from Simple Log Service.
    std::shared_ptr<string> SLSKeyName_ = nullptr;
    // The value of the key that is used to filter logs imported from Simple Log Service.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
