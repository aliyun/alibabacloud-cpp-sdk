// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINCIDENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINCIDENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIncidentResponseBodyIncident.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetIncidentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIncidentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Incident, incident_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIncidentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Incident, incident_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIncidentResponseBody() = default ;
    GetIncidentResponseBody(const GetIncidentResponseBody &) = default ;
    GetIncidentResponseBody(GetIncidentResponseBody &&) = default ;
    GetIncidentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIncidentResponseBody() = default ;
    GetIncidentResponseBody& operator=(const GetIncidentResponseBody &) = default ;
    GetIncidentResponseBody& operator=(GetIncidentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->incident_ == nullptr
        && return this->requestId_ == nullptr; };
    // incident Field Functions 
    bool hasIncident() const { return this->incident_ != nullptr;};
    void deleteIncident() { this->incident_ = nullptr;};
    inline const GetIncidentResponseBodyIncident & incident() const { DARABONBA_PTR_GET_CONST(incident_, GetIncidentResponseBodyIncident) };
    inline GetIncidentResponseBodyIncident incident() { DARABONBA_PTR_GET(incident_, GetIncidentResponseBodyIncident) };
    inline GetIncidentResponseBody& setIncident(const GetIncidentResponseBodyIncident & incident) { DARABONBA_PTR_SET_VALUE(incident_, incident) };
    inline GetIncidentResponseBody& setIncident(GetIncidentResponseBodyIncident && incident) { DARABONBA_PTR_SET_RVALUE(incident_, incident) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIncidentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetIncidentResponseBodyIncident> incident_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
