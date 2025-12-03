// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETWILDCARDDOMAINPATTERNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETWILDCARDDOMAINPATTERNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetWildcardDomainPatternsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetWildcardDomainPatternsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetWildcardDomainPatternsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetWildcardDomainPatternsResponseBody() = default ;
    SetWildcardDomainPatternsResponseBody(const SetWildcardDomainPatternsResponseBody &) = default ;
    SetWildcardDomainPatternsResponseBody(SetWildcardDomainPatternsResponseBody &&) = default ;
    SetWildcardDomainPatternsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetWildcardDomainPatternsResponseBody() = default ;
    SetWildcardDomainPatternsResponseBody& operator=(const SetWildcardDomainPatternsResponseBody &) = default ;
    SetWildcardDomainPatternsResponseBody& operator=(SetWildcardDomainPatternsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetWildcardDomainPatternsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
