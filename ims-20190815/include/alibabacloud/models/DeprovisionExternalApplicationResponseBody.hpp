// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPROVISIONEXTERNALAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEPROVISIONEXTERNALAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class DeprovisionExternalApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeprovisionExternalApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeprovisionExternalApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeprovisionExternalApplicationResponseBody() = default ;
    DeprovisionExternalApplicationResponseBody(const DeprovisionExternalApplicationResponseBody &) = default ;
    DeprovisionExternalApplicationResponseBody(DeprovisionExternalApplicationResponseBody &&) = default ;
    DeprovisionExternalApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeprovisionExternalApplicationResponseBody() = default ;
    DeprovisionExternalApplicationResponseBody& operator=(const DeprovisionExternalApplicationResponseBody &) = default ;
    DeprovisionExternalApplicationResponseBody& operator=(DeprovisionExternalApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeprovisionExternalApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
