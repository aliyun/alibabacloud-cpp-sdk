// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINVALIDDOMAINCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINVALIDDOMAINCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetInvalidDomainCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInvalidDomainCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvalidDomainCount, invalidDomainCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInvalidDomainCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvalidDomainCount, invalidDomainCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInvalidDomainCountResponseBody() = default ;
    GetInvalidDomainCountResponseBody(const GetInvalidDomainCountResponseBody &) = default ;
    GetInvalidDomainCountResponseBody(GetInvalidDomainCountResponseBody &&) = default ;
    GetInvalidDomainCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInvalidDomainCountResponseBody() = default ;
    GetInvalidDomainCountResponseBody& operator=(const GetInvalidDomainCountResponseBody &) = default ;
    GetInvalidDomainCountResponseBody& operator=(GetInvalidDomainCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invalidDomainCount_ == nullptr
        && this->requestId_ == nullptr; };
    // invalidDomainCount Field Functions 
    bool hasInvalidDomainCount() const { return this->invalidDomainCount_ != nullptr;};
    void deleteInvalidDomainCount() { this->invalidDomainCount_ = nullptr;};
    inline string getInvalidDomainCount() const { DARABONBA_PTR_GET_DEFAULT(invalidDomainCount_, "") };
    inline GetInvalidDomainCountResponseBody& setInvalidDomainCount(string invalidDomainCount) { DARABONBA_PTR_SET_VALUE(invalidDomainCount_, invalidDomainCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInvalidDomainCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of invalid domain names.
    shared_ptr<string> invalidDomainCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
