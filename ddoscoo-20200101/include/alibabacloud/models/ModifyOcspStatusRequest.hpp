// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOCSPSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOCSPSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyOcspStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOcspStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOcspStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    ModifyOcspStatusRequest() = default ;
    ModifyOcspStatusRequest(const ModifyOcspStatusRequest &) = default ;
    ModifyOcspStatusRequest(ModifyOcspStatusRequest &&) = default ;
    ModifyOcspStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOcspStatusRequest() = default ;
    ModifyOcspStatusRequest& operator=(const ModifyOcspStatusRequest &) = default ;
    ModifyOcspStatusRequest& operator=(ModifyOcspStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->enable_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyOcspStatusRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline ModifyOcspStatusRequest& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // The domain name for which you want to configure the Static Page Caching policy.
    // 
    // > You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all the domain names that are added to Anti-DDoS Pro or Anti-DDoS Premium.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // Specifies whether to enable the OCSP feature. Valid values:
    // 
    // *   **1**: yes.
    // *   **0**: no.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
