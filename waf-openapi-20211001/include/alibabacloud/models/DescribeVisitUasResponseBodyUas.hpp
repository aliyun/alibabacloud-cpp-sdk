// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVISITUASRESPONSEBODYUAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVISITUASRESPONSEBODYUAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVisitUasResponseBodyUas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVisitUasResponseBodyUas& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ua, ua_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVisitUasResponseBodyUas& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ua, ua_);
    };
    DescribeVisitUasResponseBodyUas() = default ;
    DescribeVisitUasResponseBodyUas(const DescribeVisitUasResponseBodyUas &) = default ;
    DescribeVisitUasResponseBodyUas(DescribeVisitUasResponseBodyUas &&) = default ;
    DescribeVisitUasResponseBodyUas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVisitUasResponseBodyUas() = default ;
    DescribeVisitUasResponseBodyUas& operator=(const DescribeVisitUasResponseBodyUas &) = default ;
    DescribeVisitUasResponseBodyUas& operator=(DescribeVisitUasResponseBodyUas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ua_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeVisitUasResponseBodyUas& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ua Field Functions 
    bool hasUa() const { return this->ua_ != nullptr;};
    void deleteUa() { this->ua_ = nullptr;};
    inline string ua() const { DARABONBA_PTR_GET_DEFAULT(ua_, "") };
    inline DescribeVisitUasResponseBodyUas& setUa(string ua) { DARABONBA_PTR_SET_VALUE(ua_, ua) };


  protected:
    // The number of requests that use the user agent.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The user agent.
    std::shared_ptr<string> ua_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
