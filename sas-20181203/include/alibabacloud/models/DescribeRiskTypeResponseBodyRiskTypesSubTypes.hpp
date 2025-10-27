// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPESSUBTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPESSUBTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskTypeResponseBodyRiskTypesSubTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTypeResponseBodyRiskTypesSubTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_TO_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_TO_JSON(SupportedOs, supportedOs_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTypeResponseBodyRiskTypesSubTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_FROM_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_FROM_JSON(SupportedOs, supportedOs_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    DescribeRiskTypeResponseBodyRiskTypesSubTypes() = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypes(const DescribeRiskTypeResponseBodyRiskTypesSubTypes &) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypes(DescribeRiskTypeResponseBodyRiskTypesSubTypes &&) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTypeResponseBodyRiskTypesSubTypes() = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypes& operator=(const DescribeRiskTypeResponseBodyRiskTypesSubTypes &) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypes& operator=(DescribeRiskTypeResponseBodyRiskTypesSubTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->authFlag_ == nullptr && return this->checkDetails_ == nullptr && return this->supportedOs_ == nullptr && return this->typeName_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypes& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // authFlag Field Functions 
    bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
    void deleteAuthFlag() { this->authFlag_ = nullptr;};
    inline bool authFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, false) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypes& setAuthFlag(bool authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


    // checkDetails Field Functions 
    bool hasCheckDetails() const { return this->checkDetails_ != nullptr;};
    void deleteCheckDetails() { this->checkDetails_ = nullptr;};
    inline const vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails> & checkDetails() const { DARABONBA_PTR_GET_CONST(checkDetails_, vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails>) };
    inline vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails> checkDetails() { DARABONBA_PTR_GET(checkDetails_, vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails>) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypes& setCheckDetails(const vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails> & checkDetails) { DARABONBA_PTR_SET_VALUE(checkDetails_, checkDetails) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypes& setCheckDetails(vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails> && checkDetails) { DARABONBA_PTR_SET_RVALUE(checkDetails_, checkDetails) };


    // supportedOs Field Functions 
    bool hasSupportedOs() const { return this->supportedOs_ != nullptr;};
    void deleteSupportedOs() { this->supportedOs_ = nullptr;};
    inline string supportedOs() const { DARABONBA_PTR_GET_DEFAULT(supportedOs_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypes& setSupportedOs(string supportedOs) { DARABONBA_PTR_SET_VALUE(supportedOs_, supportedOs) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypes& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    // The alias of the baseline subtype.
    std::shared_ptr<string> alias_ = nullptr;
    // The baseline subtype permission flag of the current user version. Valid values:
    // 
    // - **true**: Have access
    // - **false**: No permissions
    std::shared_ptr<bool> authFlag_ = nullptr;
    // An array that consists of the check details about the baseline subtype.
    std::shared_ptr<vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetails>> checkDetails_ = nullptr;
    // The operating system type of the server. Valid values:
    // 
    // - **windows**
    // - **linux**
    std::shared_ptr<string> supportedOs_ = nullptr;
    // The name of the baseline subtype.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
