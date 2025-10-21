// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKACCOUNTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKACCOUNTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CheckAccountResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAccountResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CheckResult, checkResult_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAccountResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckResult, checkResult_);
    };
    CheckAccountResponseBodyData() = default ;
    CheckAccountResponseBodyData(const CheckAccountResponseBodyData &) = default ;
    CheckAccountResponseBodyData(CheckAccountResponseBodyData &&) = default ;
    CheckAccountResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAccountResponseBodyData() = default ;
    CheckAccountResponseBodyData& operator=(const CheckAccountResponseBodyData &) = default ;
    CheckAccountResponseBodyData& operator=(CheckAccountResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkResult_ == nullptr; };
    // checkResult Field Functions 
    bool hasCheckResult() const { return this->checkResult_ != nullptr;};
    void deleteCheckResult() { this->checkResult_ = nullptr;};
    inline int32_t checkResult() const { DARABONBA_PTR_GET_DEFAULT(checkResult_, 0) };
    inline CheckAccountResponseBodyData& setCheckResult(int32_t checkResult) { DARABONBA_PTR_SET_VALUE(checkResult_, checkResult) };


  protected:
    std::shared_ptr<int32_t> checkResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
