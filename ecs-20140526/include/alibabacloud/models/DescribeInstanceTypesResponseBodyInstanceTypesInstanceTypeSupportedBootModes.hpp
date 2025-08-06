// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPESUPPORTEDBOOTMODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPESUPPORTEDBOOTMODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes& obj) { 
      DARABONBA_PTR_TO_JSON(SupportedBootMode, supportedBootMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportedBootMode, supportedBootMode_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportedBootMode_ != nullptr; };
    // supportedBootMode Field Functions 
    bool hasSupportedBootMode() const { return this->supportedBootMode_ != nullptr;};
    void deleteSupportedBootMode() { this->supportedBootMode_ = nullptr;};
    inline const vector<string> & supportedBootMode() const { DARABONBA_PTR_GET_CONST(supportedBootMode_, vector<string>) };
    inline vector<string> supportedBootMode() { DARABONBA_PTR_GET(supportedBootMode_, vector<string>) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes& setSupportedBootMode(const vector<string> & supportedBootMode) { DARABONBA_PTR_SET_VALUE(supportedBootMode_, supportedBootMode) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes& setSupportedBootMode(vector<string> && supportedBootMode) { DARABONBA_PTR_SET_RVALUE(supportedBootMode_, supportedBootMode) };


  protected:
    std::shared_ptr<vector<string>> supportedBootMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
