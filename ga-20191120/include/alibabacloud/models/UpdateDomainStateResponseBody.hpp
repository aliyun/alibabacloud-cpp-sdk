// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOMAINSTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOMAINSTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class UpdateDomainStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDomainStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDomainStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    UpdateDomainStateResponseBody() = default ;
    UpdateDomainStateResponseBody(const UpdateDomainStateResponseBody &) = default ;
    UpdateDomainStateResponseBody(UpdateDomainStateResponseBody &&) = default ;
    UpdateDomainStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDomainStateResponseBody() = default ;
    UpdateDomainStateResponseBody& operator=(const UpdateDomainStateResponseBody &) = default ;
    UpdateDomainStateResponseBody& operator=(UpdateDomainStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->requestId_ == nullptr && this->state_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateDomainStateResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateDomainStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateDomainStateResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The accelerated domain name.
    shared_ptr<string> domain_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ICP filing status of the accelerated domain name. Valid values:
    // 
    // *   **illegal:** The domain name is illegal.
    // *   **inactive:** The domain name has not completed ICP filing.
    // *   **active:** The domain name has a valid ICP number.
    // *   **unknown:** The ICP filing status is unknown.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
