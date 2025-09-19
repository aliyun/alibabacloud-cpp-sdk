// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRiskTypeResponseBodyRiskTypesSubTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskTypeResponseBodyRiskTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTypeResponseBodyRiskTypes& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_TO_JSON(SubTypes, subTypes_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTypeResponseBodyRiskTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AuthFlag, authFlag_);
      DARABONBA_PTR_FROM_JSON(SubTypes, subTypes_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    DescribeRiskTypeResponseBodyRiskTypes() = default ;
    DescribeRiskTypeResponseBodyRiskTypes(const DescribeRiskTypeResponseBodyRiskTypes &) = default ;
    DescribeRiskTypeResponseBodyRiskTypes(DescribeRiskTypeResponseBodyRiskTypes &&) = default ;
    DescribeRiskTypeResponseBodyRiskTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTypeResponseBodyRiskTypes() = default ;
    DescribeRiskTypeResponseBodyRiskTypes& operator=(const DescribeRiskTypeResponseBodyRiskTypes &) = default ;
    DescribeRiskTypeResponseBodyRiskTypes& operator=(DescribeRiskTypeResponseBodyRiskTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->authFlag_ != nullptr && this->subTypes_ != nullptr && this->typeName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypes& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // authFlag Field Functions 
    bool hasAuthFlag() const { return this->authFlag_ != nullptr;};
    void deleteAuthFlag() { this->authFlag_ = nullptr;};
    inline bool authFlag() const { DARABONBA_PTR_GET_DEFAULT(authFlag_, false) };
    inline DescribeRiskTypeResponseBodyRiskTypes& setAuthFlag(bool authFlag) { DARABONBA_PTR_SET_VALUE(authFlag_, authFlag) };


    // subTypes Field Functions 
    bool hasSubTypes() const { return this->subTypes_ != nullptr;};
    void deleteSubTypes() { this->subTypes_ = nullptr;};
    inline const vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes> & subTypes() const { DARABONBA_PTR_GET_CONST(subTypes_, vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes>) };
    inline vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes> subTypes() { DARABONBA_PTR_GET(subTypes_, vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes>) };
    inline DescribeRiskTypeResponseBodyRiskTypes& setSubTypes(const vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes> & subTypes) { DARABONBA_PTR_SET_VALUE(subTypes_, subTypes) };
    inline DescribeRiskTypeResponseBodyRiskTypes& setSubTypes(vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes> && subTypes) { DARABONBA_PTR_SET_RVALUE(subTypes_, subTypes) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypes& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    // The alias of the baseline type.
    std::shared_ptr<string> alias_ = nullptr;
    // The baseline type flag of the current user version. Valid values:
    // 
    // - **true**: Have access
    // - **false**: No permissions
    std::shared_ptr<bool> authFlag_ = nullptr;
    // An array that consists of the information about baseline subtypes.
    std::shared_ptr<vector<Models::DescribeRiskTypeResponseBodyRiskTypesSubTypes>> subTypes_ = nullptr;
    // The name of the baseline type.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
