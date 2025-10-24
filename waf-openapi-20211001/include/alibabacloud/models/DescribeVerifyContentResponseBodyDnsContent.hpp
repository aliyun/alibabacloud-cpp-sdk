// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODYDNSCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTRESPONSEBODYDNSCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVerifyContentResponseBodyDnsContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyContentResponseBodyDnsContent& obj) { 
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyContentResponseBodyDnsContent& obj) { 
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeVerifyContentResponseBodyDnsContent() = default ;
    DescribeVerifyContentResponseBodyDnsContent(const DescribeVerifyContentResponseBodyDnsContent &) = default ;
    DescribeVerifyContentResponseBodyDnsContent(DescribeVerifyContentResponseBodyDnsContent &&) = default ;
    DescribeVerifyContentResponseBodyDnsContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyContentResponseBodyDnsContent() = default ;
    DescribeVerifyContentResponseBodyDnsContent& operator=(const DescribeVerifyContentResponseBodyDnsContent &) = default ;
    DescribeVerifyContentResponseBodyDnsContent& operator=(DescribeVerifyContentResponseBodyDnsContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RR_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string RR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline DescribeVerifyContentResponseBodyDnsContent& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVerifyContentResponseBodyDnsContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeVerifyContentResponseBodyDnsContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> RR_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
