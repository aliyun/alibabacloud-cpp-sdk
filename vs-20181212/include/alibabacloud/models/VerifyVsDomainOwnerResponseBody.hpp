// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYVSDOMAINOWNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYVSDOMAINOWNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class VerifyVsDomainOwnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyVsDomainOwnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyVsDomainOwnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyVsDomainOwnerResponseBody() = default ;
    VerifyVsDomainOwnerResponseBody(const VerifyVsDomainOwnerResponseBody &) = default ;
    VerifyVsDomainOwnerResponseBody(VerifyVsDomainOwnerResponseBody &&) = default ;
    VerifyVsDomainOwnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyVsDomainOwnerResponseBody() = default ;
    VerifyVsDomainOwnerResponseBody& operator=(const VerifyVsDomainOwnerResponseBody &) = default ;
    VerifyVsDomainOwnerResponseBody& operator=(VerifyVsDomainOwnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline VerifyVsDomainOwnerResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyVsDomainOwnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
