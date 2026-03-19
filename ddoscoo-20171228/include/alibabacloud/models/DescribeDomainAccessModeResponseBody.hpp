// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINACCESSMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainAccessModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAccessModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainModeList, domainModeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAccessModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainModeList, domainModeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainAccessModeResponseBody() = default ;
    DescribeDomainAccessModeResponseBody(const DescribeDomainAccessModeResponseBody &) = default ;
    DescribeDomainAccessModeResponseBody(DescribeDomainAccessModeResponseBody &&) = default ;
    DescribeDomainAccessModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAccessModeResponseBody() = default ;
    DescribeDomainAccessModeResponseBody& operator=(const DescribeDomainAccessModeResponseBody &) = default ;
    DescribeDomainAccessModeResponseBody& operator=(DescribeDomainAccessModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainModeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainModeList& obj) { 
        DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, DomainModeList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
      };
      DomainModeList() = default ;
      DomainModeList(const DomainModeList &) = default ;
      DomainModeList(DomainModeList &&) = default ;
      DomainModeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainModeList() = default ;
      DomainModeList& operator=(const DomainModeList &) = default ;
      DomainModeList& operator=(DomainModeList &&) = default ;
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
      inline DomainModeList& setAccessMode(int32_t accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainModeList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    protected:
      shared_ptr<int32_t> accessMode_ {};
      shared_ptr<string> domain_ {};
    };

    virtual bool empty() const override { return this->domainModeList_ == nullptr
        && this->requestId_ == nullptr; };
    // domainModeList Field Functions 
    bool hasDomainModeList() const { return this->domainModeList_ != nullptr;};
    void deleteDomainModeList() { this->domainModeList_ = nullptr;};
    inline const vector<DescribeDomainAccessModeResponseBody::DomainModeList> & getDomainModeList() const { DARABONBA_PTR_GET_CONST(domainModeList_, vector<DescribeDomainAccessModeResponseBody::DomainModeList>) };
    inline vector<DescribeDomainAccessModeResponseBody::DomainModeList> getDomainModeList() { DARABONBA_PTR_GET(domainModeList_, vector<DescribeDomainAccessModeResponseBody::DomainModeList>) };
    inline DescribeDomainAccessModeResponseBody& setDomainModeList(const vector<DescribeDomainAccessModeResponseBody::DomainModeList> & domainModeList) { DARABONBA_PTR_SET_VALUE(domainModeList_, domainModeList) };
    inline DescribeDomainAccessModeResponseBody& setDomainModeList(vector<DescribeDomainAccessModeResponseBody::DomainModeList> && domainModeList) { DARABONBA_PTR_SET_RVALUE(domainModeList_, domainModeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainAccessModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDomainAccessModeResponseBody::DomainModeList>> domainModeList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
