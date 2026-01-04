// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBACCESSMODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBACCESSMODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ModifyWebAccessModeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebAccessModeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebAccessModeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    ModifyWebAccessModeRequest() = default ;
    ModifyWebAccessModeRequest(const ModifyWebAccessModeRequest &) = default ;
    ModifyWebAccessModeRequest(ModifyWebAccessModeRequest &&) = default ;
    ModifyWebAccessModeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebAccessModeRequest() = default ;
    ModifyWebAccessModeRequest& operator=(const ModifyWebAccessModeRequest &) = default ;
    ModifyWebAccessModeRequest& operator=(ModifyWebAccessModeRequest &&) = default ;
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
    inline ModifyWebAccessModeRequest& setAccessMode(int32_t accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyWebAccessModeRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The mode in which a website service is added to Anti-DDoS Pro or Anti-DDoS Premium. Valid values:
    // 
    // *   **0**: A record mode
    // *   **1**: anti-DDoS mode
    // *   **2**: origin redundancy mode
    // 
    // This parameter is required.
    shared_ptr<int32_t> accessMode_ {};
    // The domain name of the website.
    // 
    // > A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
