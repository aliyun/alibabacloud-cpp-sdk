// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVERIFYDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVERIFYDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainVerifyDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainVerifyDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainVerifyDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainVerifyDataResponseBody() = default ;
    DescribeDomainVerifyDataResponseBody(const DescribeDomainVerifyDataResponseBody &) = default ;
    DescribeDomainVerifyDataResponseBody(DescribeDomainVerifyDataResponseBody &&) = default ;
    DescribeDomainVerifyDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainVerifyDataResponseBody() = default ;
    DescribeDomainVerifyDataResponseBody& operator=(const DescribeDomainVerifyDataResponseBody &) = default ;
    DescribeDomainVerifyDataResponseBody& operator=(DescribeDomainVerifyDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(RootDomain, rootDomain_);
        DARABONBA_PTR_TO_JSON(verifyCode, verifyCode_);
        DARABONBA_PTR_TO_JSON(verifyKey, verifyKey_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(RootDomain, rootDomain_);
        DARABONBA_PTR_FROM_JSON(verifyCode, verifyCode_);
        DARABONBA_PTR_FROM_JSON(verifyKey, verifyKey_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->rootDomain_ == nullptr
        && this->verifyCode_ == nullptr && this->verifyKey_ == nullptr; };
      // rootDomain Field Functions 
      bool hasRootDomain() const { return this->rootDomain_ != nullptr;};
      void deleteRootDomain() { this->rootDomain_ = nullptr;};
      inline string getRootDomain() const { DARABONBA_PTR_GET_DEFAULT(rootDomain_, "") };
      inline Content& setRootDomain(string rootDomain) { DARABONBA_PTR_SET_VALUE(rootDomain_, rootDomain) };


      // verifyCode Field Functions 
      bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
      void deleteVerifyCode() { this->verifyCode_ = nullptr;};
      inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
      inline Content& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


      // verifyKey Field Functions 
      bool hasVerifyKey() const { return this->verifyKey_ != nullptr;};
      void deleteVerifyKey() { this->verifyKey_ = nullptr;};
      inline string getVerifyKey() const { DARABONBA_PTR_GET_DEFAULT(verifyKey_, "") };
      inline Content& setVerifyKey(string verifyKey) { DARABONBA_PTR_SET_VALUE(verifyKey_, verifyKey) };


    protected:
      shared_ptr<string> rootDomain_ {};
      shared_ptr<string> verifyCode_ {};
      shared_ptr<string> verifyKey_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const DescribeDomainVerifyDataResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, DescribeDomainVerifyDataResponseBody::Content) };
    inline DescribeDomainVerifyDataResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, DescribeDomainVerifyDataResponseBody::Content) };
    inline DescribeDomainVerifyDataResponseBody& setContent(const DescribeDomainVerifyDataResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDomainVerifyDataResponseBody& setContent(DescribeDomainVerifyDataResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainVerifyDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The verification content.
    shared_ptr<DescribeDomainVerifyDataResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
