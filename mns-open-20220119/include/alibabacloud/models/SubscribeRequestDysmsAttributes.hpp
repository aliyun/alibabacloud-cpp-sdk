// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEREQUESTDYSMSATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEREQUESTDYSMSATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SubscribeRequestDysmsAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeRequestDysmsAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeRequestDysmsAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    SubscribeRequestDysmsAttributes() = default ;
    SubscribeRequestDysmsAttributes(const SubscribeRequestDysmsAttributes &) = default ;
    SubscribeRequestDysmsAttributes(SubscribeRequestDysmsAttributes &&) = default ;
    SubscribeRequestDysmsAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeRequestDysmsAttributes() = default ;
    SubscribeRequestDysmsAttributes& operator=(const SubscribeRequestDysmsAttributes &) = default ;
    SubscribeRequestDysmsAttributes& operator=(SubscribeRequestDysmsAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->signName_ != nullptr
        && this->templateCode_ != nullptr; };
    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline SubscribeRequestDysmsAttributes& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline SubscribeRequestDysmsAttributes& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    std::shared_ptr<string> signName_ = nullptr;
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
