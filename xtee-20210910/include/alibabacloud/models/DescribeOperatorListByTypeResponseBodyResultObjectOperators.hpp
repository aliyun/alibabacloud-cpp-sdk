// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYTYPERESPONSEBODYRESULTOBJECTOPERATORS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATORLISTBYTYPERESPONSEBODYRESULTOBJECTOPERATORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperatorListByTypeResponseBodyResultObjectOperators : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperatorListByTypeResponseBodyResultObjectOperators& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasRightVariable, hasRightVariable_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperatorListByTypeResponseBodyResultObjectOperators& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasRightVariable, hasRightVariable_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeOperatorListByTypeResponseBodyResultObjectOperators() = default ;
    DescribeOperatorListByTypeResponseBodyResultObjectOperators(const DescribeOperatorListByTypeResponseBodyResultObjectOperators &) = default ;
    DescribeOperatorListByTypeResponseBodyResultObjectOperators(DescribeOperatorListByTypeResponseBodyResultObjectOperators &&) = default ;
    DescribeOperatorListByTypeResponseBodyResultObjectOperators(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperatorListByTypeResponseBodyResultObjectOperators() = default ;
    DescribeOperatorListByTypeResponseBodyResultObjectOperators& operator=(const DescribeOperatorListByTypeResponseBodyResultObjectOperators &) = default ;
    DescribeOperatorListByTypeResponseBodyResultObjectOperators& operator=(DescribeOperatorListByTypeResponseBodyResultObjectOperators &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->hasRightVariable_ != nullptr && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeOperatorListByTypeResponseBodyResultObjectOperators& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasRightVariable Field Functions 
    bool hasHasRightVariable() const { return this->hasRightVariable_ != nullptr;};
    void deleteHasRightVariable() { this->hasRightVariable_ = nullptr;};
    inline bool hasRightVariable() const { DARABONBA_PTR_GET_DEFAULT(hasRightVariable_, false) };
    inline DescribeOperatorListByTypeResponseBodyResultObjectOperators& setHasRightVariable(bool hasRightVariable) { DARABONBA_PTR_SET_VALUE(hasRightVariable_, hasRightVariable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOperatorListByTypeResponseBodyResultObjectOperators& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Operator code
    std::shared_ptr<string> code_ = nullptr;
    // Whether it contains a right variable
    std::shared_ptr<bool> hasRightVariable_ = nullptr;
    // Operator name
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
