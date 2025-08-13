// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMSEFEATURESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMSEFEATURESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetMseFeatureSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMseFeatureSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, GetMseFeatureSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
    };
    GetMseFeatureSwitchRequest() = default ;
    GetMseFeatureSwitchRequest(const GetMseFeatureSwitchRequest &) = default ;
    GetMseFeatureSwitchRequest(GetMseFeatureSwitchRequest &&) = default ;
    GetMseFeatureSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMseFeatureSwitchRequest() = default ;
    GetMseFeatureSwitchRequest& operator=(const GetMseFeatureSwitchRequest &) = default ;
    GetMseFeatureSwitchRequest& operator=(GetMseFeatureSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetMseFeatureSwitchRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
