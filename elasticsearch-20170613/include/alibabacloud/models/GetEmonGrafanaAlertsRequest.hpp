// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMONGRAFANAALERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETEMONGRAFANAALERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetEmonGrafanaAlertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmonGrafanaAlertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmonGrafanaAlertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetEmonGrafanaAlertsRequest() = default ;
    GetEmonGrafanaAlertsRequest(const GetEmonGrafanaAlertsRequest &) = default ;
    GetEmonGrafanaAlertsRequest(GetEmonGrafanaAlertsRequest &&) = default ;
    GetEmonGrafanaAlertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmonGrafanaAlertsRequest() = default ;
    GetEmonGrafanaAlertsRequest& operator=(const GetEmonGrafanaAlertsRequest &) = default ;
    GetEmonGrafanaAlertsRequest& operator=(GetEmonGrafanaAlertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline GetEmonGrafanaAlertsRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
