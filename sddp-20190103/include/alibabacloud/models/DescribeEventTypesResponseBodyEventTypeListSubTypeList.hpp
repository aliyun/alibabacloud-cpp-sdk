// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODYEVENTTYPELISTSUBTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTYPESRESPONSEBODYEVENTTYPELISTSUBTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventTypesResponseBodyEventTypeListSubTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTypesResponseBodyEventTypeListSubTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(AdaptedProduct, adaptedProduct_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConfigCode, configCode_);
      DARABONBA_PTR_TO_JSON(ConfigContentType, configContentType_);
      DARABONBA_PTR_TO_JSON(ConfigDescription, configDescription_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventHitCount, eventHitCount_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTypesResponseBodyEventTypeListSubTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdaptedProduct, adaptedProduct_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConfigCode, configCode_);
      DARABONBA_PTR_FROM_JSON(ConfigContentType, configContentType_);
      DARABONBA_PTR_FROM_JSON(ConfigDescription, configDescription_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventHitCount, eventHitCount_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEventTypesResponseBodyEventTypeListSubTypeList() = default ;
    DescribeEventTypesResponseBodyEventTypeListSubTypeList(const DescribeEventTypesResponseBodyEventTypeListSubTypeList &) = default ;
    DescribeEventTypesResponseBodyEventTypeListSubTypeList(DescribeEventTypesResponseBodyEventTypeListSubTypeList &&) = default ;
    DescribeEventTypesResponseBodyEventTypeListSubTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTypesResponseBodyEventTypeListSubTypeList() = default ;
    DescribeEventTypesResponseBodyEventTypeListSubTypeList& operator=(const DescribeEventTypesResponseBodyEventTypeListSubTypeList &) = default ;
    DescribeEventTypesResponseBodyEventTypeListSubTypeList& operator=(DescribeEventTypesResponseBodyEventTypeListSubTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptedProduct_ == nullptr
        && return this->code_ == nullptr && return this->configCode_ == nullptr && return this->configContentType_ == nullptr && return this->configDescription_ == nullptr && return this->configValue_ == nullptr
        && return this->description_ == nullptr && return this->eventHitCount_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr; };
    // adaptedProduct Field Functions 
    bool hasAdaptedProduct() const { return this->adaptedProduct_ != nullptr;};
    void deleteAdaptedProduct() { this->adaptedProduct_ = nullptr;};
    inline string adaptedProduct() const { DARABONBA_PTR_GET_DEFAULT(adaptedProduct_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setAdaptedProduct(string adaptedProduct) { DARABONBA_PTR_SET_VALUE(adaptedProduct_, adaptedProduct) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // configCode Field Functions 
    bool hasConfigCode() const { return this->configCode_ != nullptr;};
    void deleteConfigCode() { this->configCode_ = nullptr;};
    inline string configCode() const { DARABONBA_PTR_GET_DEFAULT(configCode_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setConfigCode(string configCode) { DARABONBA_PTR_SET_VALUE(configCode_, configCode) };


    // configContentType Field Functions 
    bool hasConfigContentType() const { return this->configContentType_ != nullptr;};
    void deleteConfigContentType() { this->configContentType_ = nullptr;};
    inline int32_t configContentType() const { DARABONBA_PTR_GET_DEFAULT(configContentType_, 0) };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setConfigContentType(int32_t configContentType) { DARABONBA_PTR_SET_VALUE(configContentType_, configContentType) };


    // configDescription Field Functions 
    bool hasConfigDescription() const { return this->configDescription_ != nullptr;};
    void deleteConfigDescription() { this->configDescription_ = nullptr;};
    inline string configDescription() const { DARABONBA_PTR_GET_DEFAULT(configDescription_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setConfigDescription(string configDescription) { DARABONBA_PTR_SET_VALUE(configDescription_, configDescription) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventHitCount Field Functions 
    bool hasEventHitCount() const { return this->eventHitCount_ != nullptr;};
    void deleteEventHitCount() { this->eventHitCount_ = nullptr;};
    inline int32_t eventHitCount() const { DARABONBA_PTR_GET_DEFAULT(eventHitCount_, 0) };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setEventHitCount(int32_t eventHitCount) { DARABONBA_PTR_SET_VALUE(eventHitCount_, eventHitCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeEventTypesResponseBodyEventTypeListSubTypeList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The service to which the anomalous event detection rule applies. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> adaptedProduct_ = nullptr;
    // The code of the anomalous event subtype.
    std::shared_ptr<string> code_ = nullptr;
    // The code of the configuration.
    std::shared_ptr<string> configCode_ = nullptr;
    // The content format of anomalous event detection rule. Valid values:
    // 
    // *   **0**: numeric values such as thresholds
    // *   **1**: text such as IP addresses
    std::shared_ptr<int32_t> configContentType_ = nullptr;
    // The description of the configuration.
    std::shared_ptr<string> configDescription_ = nullptr;
    // The value of the configuration.
    std::shared_ptr<string> configValue_ = nullptr;
    // The description of the anomalous event subtype.
    std::shared_ptr<string> description_ = nullptr;
    // The number of times that the anomalous event hits the anomalous event detection rule.
    std::shared_ptr<int32_t> eventHitCount_ = nullptr;
    // The ID of the anomalous event subtype.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the anomalous event subtype.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether detection is enabled for the anomalous event subtype. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
