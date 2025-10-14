// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODYSYSTEMLINESSYSTEMLINE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODYSYSTEMLINESSYSTEMLINE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentCode, parentCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentCode, parentCode_);
    };
    DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine() = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine(const DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine &) = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine(DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine &&) = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine() = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& operator=(const DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine &) = default ;
    DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& operator=(DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->displayName_ == nullptr && return this->isAvailable_ == nullptr && return this->name_ == nullptr && return this->parentCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline bool isAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentCode Field Functions 
    bool hasParentCode() const { return this->parentCode_ != nullptr;};
    void deleteParentCode() { this->parentCode_ = nullptr;};
    inline string parentCode() const { DARABONBA_PTR_GET_DEFAULT(parentCode_, "") };
    inline DescribeCloudGtmSystemLinesResponseBodySystemLinesSystemLine& setParentCode(string parentCode) { DARABONBA_PTR_SET_VALUE(parentCode_, parentCode) };


  protected:
    // The line code.
    std::shared_ptr<string> code_ = nullptr;
    // The display name of the line.
    std::shared_ptr<string> displayName_ = nullptr;
    // Indicates whether the line can be selected as the source of a Domain Name System (DNS) request. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isAvailable_ = nullptr;
    // The name of the line.
    std::shared_ptr<string> name_ = nullptr;
    // The code of the parent line.
    std::shared_ptr<string> parentCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
