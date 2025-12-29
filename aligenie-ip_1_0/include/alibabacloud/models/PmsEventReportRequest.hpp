// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PMSEVENTREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PMSEVENTREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PmsEventReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PmsEventReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, PmsEventReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
    };
    PmsEventReportRequest() = default ;
    PmsEventReportRequest(const PmsEventReportRequest &) = default ;
    PmsEventReportRequest(PmsEventReportRequest &&) = default ;
    PmsEventReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PmsEventReportRequest() = default ;
    PmsEventReportRequest& operator=(const PmsEventReportRequest &) = default ;
    PmsEventReportRequest& operator=(PmsEventReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payload_ == nullptr; };
    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline PmsEventReportRequest& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


  protected:
    // This parameter is required.
    shared_ptr<string> payload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
