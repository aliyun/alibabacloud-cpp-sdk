// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetTraceConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptLanguage, acceptLanguage_);
    };
    GetTraceConfigRequest() = default ;
    GetTraceConfigRequest(const GetTraceConfigRequest &) = default ;
    GetTraceConfigRequest(GetTraceConfigRequest &&) = default ;
    GetTraceConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceConfigRequest() = default ;
    GetTraceConfigRequest& operator=(const GetTraceConfigRequest &) = default ;
    GetTraceConfigRequest& operator=(GetTraceConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetTraceConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // Language Type:
    // zh: Chinese
    // en: English
    shared_ptr<string> acceptLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
