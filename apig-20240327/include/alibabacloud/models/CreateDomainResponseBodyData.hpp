// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateDomainResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(domainId, domainId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(domainId, domainId_);
    };
    CreateDomainResponseBodyData() = default ;
    CreateDomainResponseBodyData(const CreateDomainResponseBodyData &) = default ;
    CreateDomainResponseBodyData(CreateDomainResponseBodyData &&) = default ;
    CreateDomainResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainResponseBodyData() = default ;
    CreateDomainResponseBodyData& operator=(const CreateDomainResponseBodyData &) = default ;
    CreateDomainResponseBodyData& operator=(CreateDomainResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainId_ != nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline CreateDomainResponseBodyData& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


  protected:
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
