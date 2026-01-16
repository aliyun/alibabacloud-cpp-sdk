// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPTRIGGER_HPP_
#define ALIBABACLOUD_MODELS_HTTPTRIGGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class HTTPTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HTTPTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(urlInternet, urlInternet_);
      DARABONBA_PTR_TO_JSON(urlIntranet, urlIntranet_);
    };
    friend void from_json(const Darabonba::Json& j, HTTPTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(urlInternet, urlInternet_);
      DARABONBA_PTR_FROM_JSON(urlIntranet, urlIntranet_);
    };
    HTTPTrigger() = default ;
    HTTPTrigger(const HTTPTrigger &) = default ;
    HTTPTrigger(HTTPTrigger &&) = default ;
    HTTPTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HTTPTrigger() = default ;
    HTTPTrigger& operator=(const HTTPTrigger &) = default ;
    HTTPTrigger& operator=(HTTPTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->urlInternet_ == nullptr
        && this->urlIntranet_ == nullptr; };
    // urlInternet Field Functions 
    bool hasUrlInternet() const { return this->urlInternet_ != nullptr;};
    void deleteUrlInternet() { this->urlInternet_ = nullptr;};
    inline string getUrlInternet() const { DARABONBA_PTR_GET_DEFAULT(urlInternet_, "") };
    inline HTTPTrigger& setUrlInternet(string urlInternet) { DARABONBA_PTR_SET_VALUE(urlInternet_, urlInternet) };


    // urlIntranet Field Functions 
    bool hasUrlIntranet() const { return this->urlIntranet_ != nullptr;};
    void deleteUrlIntranet() { this->urlIntranet_ = nullptr;};
    inline string getUrlIntranet() const { DARABONBA_PTR_GET_DEFAULT(urlIntranet_, "") };
    inline HTTPTrigger& setUrlIntranet(string urlIntranet) { DARABONBA_PTR_SET_VALUE(urlIntranet_, urlIntranet) };


  protected:
    shared_ptr<string> urlInternet_ {};
    shared_ptr<string> urlIntranet_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
