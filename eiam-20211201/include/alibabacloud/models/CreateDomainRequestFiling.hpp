// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINREQUESTFILING_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINREQUESTFILING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateDomainRequestFiling : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainRequestFiling& obj) { 
      DARABONBA_PTR_TO_JSON(IcpNumber, icpNumber_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainRequestFiling& obj) { 
      DARABONBA_PTR_FROM_JSON(IcpNumber, icpNumber_);
    };
    CreateDomainRequestFiling() = default ;
    CreateDomainRequestFiling(const CreateDomainRequestFiling &) = default ;
    CreateDomainRequestFiling(CreateDomainRequestFiling &&) = default ;
    CreateDomainRequestFiling(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainRequestFiling() = default ;
    CreateDomainRequestFiling& operator=(const CreateDomainRequestFiling &) = default ;
    CreateDomainRequestFiling& operator=(CreateDomainRequestFiling &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->icpNumber_ != nullptr; };
    // icpNumber Field Functions 
    bool hasIcpNumber() const { return this->icpNumber_ != nullptr;};
    void deleteIcpNumber() { this->icpNumber_ = nullptr;};
    inline string icpNumber() const { DARABONBA_PTR_GET_DEFAULT(icpNumber_, "") };
    inline CreateDomainRequestFiling& setIcpNumber(string icpNumber) { DARABONBA_PTR_SET_VALUE(icpNumber_, icpNumber) };


  protected:
    // Record number associated with the domain name.
    std::shared_ptr<string> icpNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
