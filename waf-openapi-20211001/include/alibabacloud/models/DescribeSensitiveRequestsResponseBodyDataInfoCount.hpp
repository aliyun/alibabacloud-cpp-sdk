// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTSRESPONSEBODYDATAINFOCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTSRESPONSEBODYDATAINFOCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveRequestsResponseBodyDataInfoCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveRequestsResponseBodyDataInfoCount& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveRequestsResponseBodyDataInfoCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
    };
    DescribeSensitiveRequestsResponseBodyDataInfoCount() = default ;
    DescribeSensitiveRequestsResponseBodyDataInfoCount(const DescribeSensitiveRequestsResponseBodyDataInfoCount &) = default ;
    DescribeSensitiveRequestsResponseBodyDataInfoCount(DescribeSensitiveRequestsResponseBodyDataInfoCount &&) = default ;
    DescribeSensitiveRequestsResponseBodyDataInfoCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveRequestsResponseBodyDataInfoCount() = default ;
    DescribeSensitiveRequestsResponseBodyDataInfoCount& operator=(const DescribeSensitiveRequestsResponseBodyDataInfoCount &) = default ;
    DescribeSensitiveRequestsResponseBodyDataInfoCount& operator=(DescribeSensitiveRequestsResponseBodyDataInfoCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->count_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSensitiveRequestsResponseBodyDataInfoCount& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeSensitiveRequestsResponseBodyDataInfoCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


  protected:
    // The type of the sensitive data.
    std::shared_ptr<string> code_ = nullptr;
    // The number of sensitive data entries.
    std::shared_ptr<int64_t> count_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
