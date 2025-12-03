// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTRANETDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTRANETDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateIntranetDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntranetDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntranetDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIntranetDomainResponseBody() = default ;
    CreateIntranetDomainResponseBody(const CreateIntranetDomainResponseBody &) = default ;
    CreateIntranetDomainResponseBody(CreateIntranetDomainResponseBody &&) = default ;
    CreateIntranetDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntranetDomainResponseBody() = default ;
    CreateIntranetDomainResponseBody& operator=(const CreateIntranetDomainResponseBody &) = default ;
    CreateIntranetDomainResponseBody& operator=(CreateIntranetDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateIntranetDomainResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntranetDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> domainName_ = nullptr;
    // auditing
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
