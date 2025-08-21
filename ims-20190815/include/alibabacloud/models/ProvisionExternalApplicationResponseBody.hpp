// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROVISIONEXTERNALAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PROVISIONEXTERNALAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProvisionExternalApplicationResponseBodyExternalApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ProvisionExternalApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProvisionExternalApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalApplication, externalApplication_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ProvisionExternalApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalApplication, externalApplication_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ProvisionExternalApplicationResponseBody() = default ;
    ProvisionExternalApplicationResponseBody(const ProvisionExternalApplicationResponseBody &) = default ;
    ProvisionExternalApplicationResponseBody(ProvisionExternalApplicationResponseBody &&) = default ;
    ProvisionExternalApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProvisionExternalApplicationResponseBody() = default ;
    ProvisionExternalApplicationResponseBody& operator=(const ProvisionExternalApplicationResponseBody &) = default ;
    ProvisionExternalApplicationResponseBody& operator=(ProvisionExternalApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalApplication_ != nullptr
        && this->requestId_ != nullptr; };
    // externalApplication Field Functions 
    bool hasExternalApplication() const { return this->externalApplication_ != nullptr;};
    void deleteExternalApplication() { this->externalApplication_ = nullptr;};
    inline const ProvisionExternalApplicationResponseBodyExternalApplication & externalApplication() const { DARABONBA_PTR_GET_CONST(externalApplication_, ProvisionExternalApplicationResponseBodyExternalApplication) };
    inline ProvisionExternalApplicationResponseBodyExternalApplication externalApplication() { DARABONBA_PTR_GET(externalApplication_, ProvisionExternalApplicationResponseBodyExternalApplication) };
    inline ProvisionExternalApplicationResponseBody& setExternalApplication(const ProvisionExternalApplicationResponseBodyExternalApplication & externalApplication) { DARABONBA_PTR_SET_VALUE(externalApplication_, externalApplication) };
    inline ProvisionExternalApplicationResponseBody& setExternalApplication(ProvisionExternalApplicationResponseBodyExternalApplication && externalApplication) { DARABONBA_PTR_SET_RVALUE(externalApplication_, externalApplication) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProvisionExternalApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the external application.
    std::shared_ptr<ProvisionExternalApplicationResponseBodyExternalApplication> externalApplication_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
