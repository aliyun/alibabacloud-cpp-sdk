// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDETECTIONOPTIONSITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEDETECTIONOPTIONSITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem() = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem(const DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem &) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem(DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem &&) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem() = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& operator=(const DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem &) = default ;
    DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& operator=(DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->riskCode_ == nullptr && return this->riskLevel_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string riskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeImagesResponseBodyImagesImageDetectionOptionsItemsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the check item.
    std::shared_ptr<string> name_ = nullptr;
    // The risk that the check item may have.
    std::shared_ptr<string> riskCode_ = nullptr;
    // The severity of the risk that the check item of the imported custom image has. If the check item is at risk, this parameter is returned. If the check item is not at risk, this parameter is not returned.
    // 
    // Valid values:
    // 
    // *   High: The check item is a high-risk item that may affect the startup of the instance. We recommend that you handle the risk.
    // *   Medium: The check item is a medium-risk item that may affect the startup performance or configurations of the instance. We recommend that you handle the risk.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The result of the check item.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
