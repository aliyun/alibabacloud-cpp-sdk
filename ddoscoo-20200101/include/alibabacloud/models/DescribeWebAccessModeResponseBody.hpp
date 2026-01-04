// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainModes, domainModes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainModes, domainModes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeWebAccessModeResponseBody() = default ;
    DescribeWebAccessModeResponseBody(const DescribeWebAccessModeResponseBody &) = default ;
    DescribeWebAccessModeResponseBody(DescribeWebAccessModeResponseBody &&) = default ;
    DescribeWebAccessModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessModeResponseBody() = default ;
    DescribeWebAccessModeResponseBody& operator=(const DescribeWebAccessModeResponseBody &) = default ;
    DescribeWebAccessModeResponseBody& operator=(DescribeWebAccessModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainModes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainModes& obj) { 
        DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, DomainModes& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
      };
      DomainModes() = default ;
      DomainModes(const DomainModes &) = default ;
      DomainModes(DomainModes &&) = default ;
      DomainModes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainModes() = default ;
      DomainModes& operator=(const DomainModes &) = default ;
      DomainModes& operator=(DomainModes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->domain_ == nullptr; };
      // accessMode Field Functions 
      bool hasAccessMode() const { return this->accessMode_ != nullptr;};
      void deleteAccessMode() { this->accessMode_ = nullptr;};
      inline int32_t getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, 0) };
      inline DomainModes& setAccessMode(int32_t accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainModes& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    protected:
      // The mode in which the website service is added. Valid values:
      // 
      // *   **0**: A record
      // *   **1**: anti-DDoS mode
      // *   **2**: origin redundancy mode
      shared_ptr<int32_t> accessMode_ {};
      // The domain name of the website.
      shared_ptr<string> domain_ {};
    };

    virtual bool empty() const override { return this->domainModes_ == nullptr
        && this->requestId_ == nullptr; };
    // domainModes Field Functions 
    bool hasDomainModes() const { return this->domainModes_ != nullptr;};
    void deleteDomainModes() { this->domainModes_ = nullptr;};
    inline const vector<DescribeWebAccessModeResponseBody::DomainModes> & getDomainModes() const { DARABONBA_PTR_GET_CONST(domainModes_, vector<DescribeWebAccessModeResponseBody::DomainModes>) };
    inline vector<DescribeWebAccessModeResponseBody::DomainModes> getDomainModes() { DARABONBA_PTR_GET(domainModes_, vector<DescribeWebAccessModeResponseBody::DomainModes>) };
    inline DescribeWebAccessModeResponseBody& setDomainModes(const vector<DescribeWebAccessModeResponseBody::DomainModes> & domainModes) { DARABONBA_PTR_SET_VALUE(domainModes_, domainModes) };
    inline DescribeWebAccessModeResponseBody& setDomainModes(vector<DescribeWebAccessModeResponseBody::DomainModes> && domainModes) { DARABONBA_PTR_SET_RVALUE(domainModes_, domainModes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAccessModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the modes in which the website service is added.
    shared_ptr<vector<DescribeWebAccessModeResponseBody::DomainModes>> domainModes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
