// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUESTEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUESTEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitHtmlTranslateTaskRequestExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHtmlTranslateTaskRequestExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(skipCsiCheck, skipCsiCheck_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHtmlTranslateTaskRequestExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(skipCsiCheck, skipCsiCheck_);
    };
    SubmitHtmlTranslateTaskRequestExtConfig() = default ;
    SubmitHtmlTranslateTaskRequestExtConfig(const SubmitHtmlTranslateTaskRequestExtConfig &) = default ;
    SubmitHtmlTranslateTaskRequestExtConfig(SubmitHtmlTranslateTaskRequestExtConfig &&) = default ;
    SubmitHtmlTranslateTaskRequestExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHtmlTranslateTaskRequestExtConfig() = default ;
    SubmitHtmlTranslateTaskRequestExtConfig& operator=(const SubmitHtmlTranslateTaskRequestExtConfig &) = default ;
    SubmitHtmlTranslateTaskRequestExtConfig& operator=(SubmitHtmlTranslateTaskRequestExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skipCsiCheck_ != nullptr; };
    // skipCsiCheck Field Functions 
    bool hasSkipCsiCheck() const { return this->skipCsiCheck_ != nullptr;};
    void deleteSkipCsiCheck() { this->skipCsiCheck_ = nullptr;};
    inline bool skipCsiCheck() const { DARABONBA_PTR_GET_DEFAULT(skipCsiCheck_, false) };
    inline SubmitHtmlTranslateTaskRequestExtConfig& setSkipCsiCheck(bool skipCsiCheck) { DARABONBA_PTR_SET_VALUE(skipCsiCheck_, skipCsiCheck) };


  protected:
    std::shared_ptr<bool> skipCsiCheck_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
