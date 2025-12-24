// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPLAYBOOKRESPONSEBODYPLAYBOOKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTPLAYBOOKRESPONSEBODYPLAYBOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeComponentPlaybookResponseBodyPlaybooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentPlaybookResponseBodyPlaybooks& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentPlaybookResponseBodyPlaybooks& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    DescribeComponentPlaybookResponseBodyPlaybooks() = default ;
    DescribeComponentPlaybookResponseBodyPlaybooks(const DescribeComponentPlaybookResponseBodyPlaybooks &) = default ;
    DescribeComponentPlaybookResponseBodyPlaybooks(DescribeComponentPlaybookResponseBodyPlaybooks &&) = default ;
    DescribeComponentPlaybookResponseBodyPlaybooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentPlaybookResponseBodyPlaybooks() = default ;
    DescribeComponentPlaybookResponseBodyPlaybooks& operator=(const DescribeComponentPlaybookResponseBodyPlaybooks &) = default ;
    DescribeComponentPlaybookResponseBodyPlaybooks& operator=(DescribeComponentPlaybookResponseBodyPlaybooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->inputParams_ == nullptr && return this->paramType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeComponentPlaybookResponseBodyPlaybooks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeComponentPlaybookResponseBodyPlaybooks& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline DescribeComponentPlaybookResponseBodyPlaybooks& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeComponentPlaybookResponseBodyPlaybooks& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    // The description of the predefined component.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the predefined component.
    std::shared_ptr<string> displayName_ = nullptr;
    // The input parameter configuration of the playbook. The value is a JSON array.
    // 
    // >  For more information, see [DescribePlaybookInputOutput](~~DescribePlaybookInputOutput~~).
    std::shared_ptr<string> inputParams_ = nullptr;
    std::shared_ptr<string> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
