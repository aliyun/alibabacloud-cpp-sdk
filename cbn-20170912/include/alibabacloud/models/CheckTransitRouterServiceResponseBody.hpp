// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRANSITROUTERSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRANSITROUTERSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CheckTransitRouterServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTransitRouterServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTransitRouterServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckTransitRouterServiceResponseBody() = default ;
    CheckTransitRouterServiceResponseBody(const CheckTransitRouterServiceResponseBody &) = default ;
    CheckTransitRouterServiceResponseBody(CheckTransitRouterServiceResponseBody &&) = default ;
    CheckTransitRouterServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTransitRouterServiceResponseBody() = default ;
    CheckTransitRouterServiceResponseBody& operator=(const CheckTransitRouterServiceResponseBody &) = default ;
    CheckTransitRouterServiceResponseBody& operator=(CheckTransitRouterServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->requestId_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline CheckTransitRouterServiceResponseBody& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckTransitRouterServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the transit router feature is activated.
    // 
    // *   **true**: activated
    // *   If this value is not returned, the system prompts that the current account does not have the transit router feature activated.
    std::shared_ptr<string> enabled_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
