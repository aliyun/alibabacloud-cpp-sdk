// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSEMARKFIELD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODYSECURITYEVENTOPERATIONSRESPONSEMARKFIELD_HPP_
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
  class DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& obj) { 
      DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_TO_JSON(FiledName, filedName_);
      DARABONBA_PTR_TO_JSON(MarkMisType, markMisType_);
      DARABONBA_PTR_TO_JSON(MarkMisValue, markMisValue_);
      DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& obj) { 
      DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
      DARABONBA_PTR_FROM_JSON(MarkMisType, markMisType_);
      DARABONBA_PTR_FROM_JSON(MarkMisValue, markMisValue_);
      DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField &&) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField() = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& operator=(const DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField &) = default ;
    DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& operator=(DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filedAliasName_ == nullptr
        && return this->filedName_ == nullptr && return this->markMisType_ == nullptr && return this->markMisValue_ == nullptr && return this->supportedMisType_ == nullptr && return this->uuid_ == nullptr; };
    // filedAliasName Field Functions 
    bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
    void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
    inline string filedAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


    // filedName Field Functions 
    bool hasFiledName() const { return this->filedName_ != nullptr;};
    void deleteFiledName() { this->filedName_ = nullptr;};
    inline string filedName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


    // markMisType Field Functions 
    bool hasMarkMisType() const { return this->markMisType_ != nullptr;};
    void deleteMarkMisType() { this->markMisType_ = nullptr;};
    inline string markMisType() const { DARABONBA_PTR_GET_DEFAULT(markMisType_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setMarkMisType(string markMisType) { DARABONBA_PTR_SET_VALUE(markMisType_, markMisType) };


    // markMisValue Field Functions 
    bool hasMarkMisValue() const { return this->markMisValue_ != nullptr;};
    void deleteMarkMisValue() { this->markMisValue_ = nullptr;};
    inline string markMisValue() const { DARABONBA_PTR_GET_DEFAULT(markMisValue_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setMarkMisValue(string markMisValue) { DARABONBA_PTR_SET_VALUE(markMisValue_, markMisValue) };


    // supportedMisType Field Functions 
    bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
    void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
    inline const vector<string> & supportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
    inline vector<string> supportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSecurityEventOperationsResponseBodySecurityEventOperationsResponseMarkField& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The alias of the field that is used in the whitelist rule.
    std::shared_ptr<string> filedAliasName_ = nullptr;
    // The field that is used in the whitelist rule.
    std::shared_ptr<string> filedName_ = nullptr;
    // The operation that is used in the whitelist rule. Valid values:
    // 
    // *   **contains**: contains
    // *   **notContains**: does not contain
    // *   **regex**: regular expression
    // *   **strEqual**: equals
    // *   **strNotEqual**: does not equal
    std::shared_ptr<string> markMisType_ = nullptr;
    // The value of the field that is used in the whitelist rule.
    std::shared_ptr<string> markMisValue_ = nullptr;
    // An array consisting of the operations that are supported by the method to add the alert event to the whitelist.
    std::shared_ptr<vector<string>> supportedMisType_ = nullptr;
    // The UUID of the server on which the alert event is detected.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
