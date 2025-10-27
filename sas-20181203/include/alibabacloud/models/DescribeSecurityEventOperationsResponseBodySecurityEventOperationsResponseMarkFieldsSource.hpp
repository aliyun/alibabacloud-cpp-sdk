// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSEMARKFIELDSSOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSEMARKFIELDSSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& obj) { 
      DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_TO_JSON(FiledName, filedName_);
      DARABONBA_PTR_TO_JSON(MarkMisValue, markMisValue_);
      DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& obj) { 
      DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
      DARABONBA_PTR_FROM_JSON(MarkMisValue, markMisValue_);
      DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
    };
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource &&) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& operator=(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& operator=(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filedAliasName_ == nullptr
        && return this->filedName_ == nullptr && return this->markMisValue_ == nullptr && return this->supportedMisType_ == nullptr; };
    // filedAliasName Field Functions 
    bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
    void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
    inline string filedAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


    // filedName Field Functions 
    bool hasFiledName() const { return this->filedName_ != nullptr;};
    void deleteFiledName() { this->filedName_ = nullptr;};
    inline string filedName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


    // markMisValue Field Functions 
    bool hasMarkMisValue() const { return this->markMisValue_ != nullptr;};
    void deleteMarkMisValue() { this->markMisValue_ = nullptr;};
    inline string markMisValue() const { DARABONBA_PTR_GET_DEFAULT(markMisValue_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& setMarkMisValue(string markMisValue) { DARABONBA_PTR_SET_VALUE(markMisValue_, markMisValue) };


    // supportedMisType Field Functions 
    bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
    void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
    inline const vector<string> & supportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
    inline vector<string> supportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkFieldsSource& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


  protected:
    // The alias of the field that can be used in the whitelist rule.
    std::shared_ptr<string> filedAliasName_ = nullptr;
    // The field that can be used in the whitelist rule.
    std::shared_ptr<string> filedName_ = nullptr;
    // The value of the field that can be used in the whitelist rule.
    std::shared_ptr<string> markMisValue_ = nullptr;
    // An array consisting of the operations that are supported by the method to add the alert event to the whitelist.
    std::shared_ptr<vector<string>> supportedMisType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
