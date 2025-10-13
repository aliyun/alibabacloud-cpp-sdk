// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMDOMAINOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMDOMAINOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CustomDomain.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListCustomDomainOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomDomainOutput& obj) { 
      DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomDomainOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListCustomDomainOutput() = default ;
    ListCustomDomainOutput(const ListCustomDomainOutput &) = default ;
    ListCustomDomainOutput(ListCustomDomainOutput &&) = default ;
    ListCustomDomainOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomDomainOutput() = default ;
    ListCustomDomainOutput& operator=(const ListCustomDomainOutput &) = default ;
    ListCustomDomainOutput& operator=(ListCustomDomainOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customDomains_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<CustomDomain> & customDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<CustomDomain>) };
    inline vector<CustomDomain> customDomains() { DARABONBA_PTR_GET(customDomains_, vector<CustomDomain>) };
    inline ListCustomDomainOutput& setCustomDomains(const vector<CustomDomain> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline ListCustomDomainOutput& setCustomDomains(vector<CustomDomain> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomDomainOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomDomainOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<CustomDomain>> customDomains_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
