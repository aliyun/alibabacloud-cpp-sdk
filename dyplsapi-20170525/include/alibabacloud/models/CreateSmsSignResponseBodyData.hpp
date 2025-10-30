// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSSIGNRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSSIGNRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class CreateSmsSignResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsSignResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNoSign, calledNoSign_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsSignResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNoSign, calledNoSign_);
    };
    CreateSmsSignResponseBodyData() = default ;
    CreateSmsSignResponseBodyData(const CreateSmsSignResponseBodyData &) = default ;
    CreateSmsSignResponseBodyData(CreateSmsSignResponseBodyData &&) = default ;
    CreateSmsSignResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsSignResponseBodyData() = default ;
    CreateSmsSignResponseBodyData& operator=(const CreateSmsSignResponseBodyData &) = default ;
    CreateSmsSignResponseBodyData& operator=(CreateSmsSignResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNoSign_ == nullptr; };
    // calledNoSign Field Functions 
    bool hasCalledNoSign() const { return this->calledNoSign_ != nullptr;};
    void deleteCalledNoSign() { this->calledNoSign_ = nullptr;};
    inline string calledNoSign() const { DARABONBA_PTR_GET_DEFAULT(calledNoSign_, "") };
    inline CreateSmsSignResponseBodyData& setCalledNoSign(string calledNoSign) { DARABONBA_PTR_SET_VALUE(calledNoSign_, calledNoSign) };


  protected:
    // 短信接收者号码签名串(加到短信内容中供解析真实被叫号码)
    std::shared_ptr<string> calledNoSign_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
