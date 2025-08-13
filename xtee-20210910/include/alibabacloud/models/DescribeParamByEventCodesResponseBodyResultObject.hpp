// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMBYEVENTCODESRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMBYEVENTCODESRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeParamByEventCodesResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParamByEventCodesResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParamByEventCodesResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    DescribeParamByEventCodesResponseBodyResultObject() = default ;
    DescribeParamByEventCodesResponseBodyResultObject(const DescribeParamByEventCodesResponseBodyResultObject &) = default ;
    DescribeParamByEventCodesResponseBodyResultObject(DescribeParamByEventCodesResponseBodyResultObject &&) = default ;
    DescribeParamByEventCodesResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParamByEventCodesResponseBodyResultObject() = default ;
    DescribeParamByEventCodesResponseBodyResultObject& operator=(const DescribeParamByEventCodesResponseBodyResultObject &) = default ;
    DescribeParamByEventCodesResponseBodyResultObject& operator=(DescribeParamByEventCodesResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeParamByEventCodesResponseBodyResultObject& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeParamByEventCodesResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Return code.
    std::shared_ptr<string> code_ = nullptr;
    // Name
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
