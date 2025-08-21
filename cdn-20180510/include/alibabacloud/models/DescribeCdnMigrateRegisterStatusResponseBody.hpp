// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNMIGRATEREGISTERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNMIGRATEREGISTERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnMigrateRegisterStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnMigrateRegisterStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnMigrateRegisterStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCdnMigrateRegisterStatusResponseBody() = default ;
    DescribeCdnMigrateRegisterStatusResponseBody(const DescribeCdnMigrateRegisterStatusResponseBody &) = default ;
    DescribeCdnMigrateRegisterStatusResponseBody(DescribeCdnMigrateRegisterStatusResponseBody &&) = default ;
    DescribeCdnMigrateRegisterStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnMigrateRegisterStatusResponseBody() = default ;
    DescribeCdnMigrateRegisterStatusResponseBody& operator=(const DescribeCdnMigrateRegisterStatusResponseBody &) = default ;
    DescribeCdnMigrateRegisterStatusResponseBody& operator=(DescribeCdnMigrateRegisterStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnMigrateRegisterStatusResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnMigrateRegisterStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdnMigrateRegisterStatusResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> requestId_ = nullptr;
    // The registration status. Valid values:
    // 
    // *   **not exist**
    // *   **running**
    // *   **succeed**
    // *   **failed**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
