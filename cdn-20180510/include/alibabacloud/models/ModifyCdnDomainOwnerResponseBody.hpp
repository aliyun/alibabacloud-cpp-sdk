// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDNDOMAINOWNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDNDOMAINOWNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCdnDomainOwnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdnDomainOwnerResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdnDomainOwnerResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCdnDomainOwnerResponseBody() = default ;
    ModifyCdnDomainOwnerResponseBody(const ModifyCdnDomainOwnerResponseBody &) = default ;
    ModifyCdnDomainOwnerResponseBody(ModifyCdnDomainOwnerResponseBody &&) = default ;
    ModifyCdnDomainOwnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdnDomainOwnerResponseBody() = default ;
    ModifyCdnDomainOwnerResponseBody& operator=(const ModifyCdnDomainOwnerResponseBody &) = default ;
    ModifyCdnDomainOwnerResponseBody& operator=(ModifyCdnDomainOwnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->requestId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & content() const { DARABONBA_GET(content_) };
    Darabonba::Json & content() { DARABONBA_GET(content_) };
    inline ModifyCdnDomainOwnerResponseBody& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline ModifyCdnDomainOwnerResponseBody& setContent(Darabonba::Json & content) { DARABONBA_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCdnDomainOwnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The description of the domain name transfer.
    Darabonba::Json content_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
