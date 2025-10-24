// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOCFUNCTIONSRESPONSEBODYFUNCTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOCFUNCTIONSRESPONSEBODYFUNCTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribePocFunctionsResponseBodyFunctions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePocFunctionsResponseBodyFunctions& obj) { 
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePocFunctionsResponseBodyFunctions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePocFunctionsResponseBodyFunctions() = default ;
    DescribePocFunctionsResponseBodyFunctions(const DescribePocFunctionsResponseBodyFunctions &) = default ;
    DescribePocFunctionsResponseBodyFunctions(DescribePocFunctionsResponseBodyFunctions &&) = default ;
    DescribePocFunctionsResponseBodyFunctions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePocFunctionsResponseBodyFunctions() = default ;
    DescribePocFunctionsResponseBodyFunctions& operator=(const DescribePocFunctionsResponseBodyFunctions &) = default ;
    DescribePocFunctionsResponseBodyFunctions& operator=(DescribePocFunctionsResponseBodyFunctions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireTime_ == nullptr
        && return this->type_ == nullptr; };
    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribePocFunctionsResponseBodyFunctions& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePocFunctionsResponseBodyFunctions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
