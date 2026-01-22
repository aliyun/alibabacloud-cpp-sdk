// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEFAULTDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEFAULTDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetDefaultDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDefaultDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultDomainName, defaultDomainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDefaultDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultDomainName, defaultDomainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDefaultDomainResponseBody() = default ;
    GetDefaultDomainResponseBody(const GetDefaultDomainResponseBody &) = default ;
    GetDefaultDomainResponseBody(GetDefaultDomainResponseBody &&) = default ;
    GetDefaultDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDefaultDomainResponseBody() = default ;
    GetDefaultDomainResponseBody& operator=(const GetDefaultDomainResponseBody &) = default ;
    GetDefaultDomainResponseBody& operator=(GetDefaultDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultDomainName_ == nullptr
        && this->requestId_ == nullptr; };
    // defaultDomainName Field Functions 
    bool hasDefaultDomainName() const { return this->defaultDomainName_ != nullptr;};
    void deleteDefaultDomainName() { this->defaultDomainName_ = nullptr;};
    inline string getDefaultDomainName() const { DARABONBA_PTR_GET_DEFAULT(defaultDomainName_, "") };
    inline GetDefaultDomainResponseBody& setDefaultDomainName(string defaultDomainName) { DARABONBA_PTR_SET_VALUE(defaultDomainName_, defaultDomainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDefaultDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The default domain name.
    shared_ptr<string> defaultDomainName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
