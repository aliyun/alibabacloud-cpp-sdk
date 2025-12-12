// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTMETAINFORESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTMETAINFORESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeEventMetaInfoResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventMetaInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(SourceCode, sourceCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventMetaInfoResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(SourceCode, sourceCode_);
    };
    DescribeEventMetaInfoResponseBodyItems() = default ;
    DescribeEventMetaInfoResponseBodyItems(const DescribeEventMetaInfoResponseBodyItems &) = default ;
    DescribeEventMetaInfoResponseBodyItems(DescribeEventMetaInfoResponseBodyItems &&) = default ;
    DescribeEventMetaInfoResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventMetaInfoResponseBodyItems() = default ;
    DescribeEventMetaInfoResponseBodyItems& operator=(const DescribeEventMetaInfoResponseBodyItems &) = default ;
    DescribeEventMetaInfoResponseBodyItems& operator=(DescribeEventMetaInfoResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->sourceCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventMetaInfoResponseBodyItems& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // sourceCode Field Functions 
    bool hasSourceCode() const { return this->sourceCode_ != nullptr;};
    void deleteSourceCode() { this->sourceCode_ = nullptr;};
    inline string sourceCode() const { DARABONBA_PTR_GET_DEFAULT(sourceCode_, "") };
    inline DescribeEventMetaInfoResponseBodyItems& setSourceCode(string sourceCode) { DARABONBA_PTR_SET_VALUE(sourceCode_, sourceCode) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> sourceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
