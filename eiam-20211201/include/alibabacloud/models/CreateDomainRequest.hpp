// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Filing, filing_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Filing, filing_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateDomainRequest() = default ;
    CreateDomainRequest(const CreateDomainRequest &) = default ;
    CreateDomainRequest(CreateDomainRequest &&) = default ;
    CreateDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequest() = default ;
    CreateDomainRequest& operator=(const CreateDomainRequest &) = default ;
    CreateDomainRequest& operator=(CreateDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filing : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filing& obj) { 
        DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Filing& obj) { 
        DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
      };
      Filing() = default ;
      Filing(const Filing &) = default ;
      Filing(Filing &&) = default ;
      Filing(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filing() = default ;
      Filing& operator=(const Filing &) = default ;
      Filing& operator=(Filing &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->icpNumber_ == nullptr; };
      // icpNumber Field Functions 
      bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
      void deleteIcpNumber() { this->icpNumber_ = nullptr;};
      inline string getIcpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
      inline Filing& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


    protected:
      // Record number associated with the domain name.
      shared_ptr<string> icpNumber_ {};
    };

    virtual bool empty() const override { return this->domain_ == nullptr
        && this->filing_ == nullptr && this->instanceId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // filing Field Functions 
    bool hasFiling() const { return this->filing_ != nullptr;};
    void deleteFiling() { this->filing_ = nullptr;};
    inline const CreateDomainRequest::Filing & getFiling() const { DARABONBA_PTR_GET_CONST(filing_, CreateDomainRequest::Filing) };
    inline CreateDomainRequest::Filing getFiling() { DARABONBA_PTR_GET(filing_, CreateDomainRequest::Filing) };
    inline CreateDomainRequest& setFiling(const CreateDomainRequest::Filing & filing) { DARABONBA_PTR_SET_VALUE(filing_, filing) };
    inline CreateDomainRequest& setFiling(CreateDomainRequest::Filing && filing) { DARABONBA_PTR_SET_RVALUE(filing_, filing) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The domain name of the website.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // Registration information parameters.
    shared_ptr<CreateDomainRequest::Filing> filing_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
