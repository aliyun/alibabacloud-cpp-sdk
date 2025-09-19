// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSUUIDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSUUIDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspiciousUUIDConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousUUIDConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousUUIDConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSuspiciousUUIDConfigRequest() = default ;
    DescribeSuspiciousUUIDConfigRequest(const DescribeSuspiciousUUIDConfigRequest &) = default ;
    DescribeSuspiciousUUIDConfigRequest(DescribeSuspiciousUUIDConfigRequest &&) = default ;
    DescribeSuspiciousUUIDConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousUUIDConfigRequest() = default ;
    DescribeSuspiciousUUIDConfigRequest& operator=(const DescribeSuspiciousUUIDConfigRequest &) = default ;
    DescribeSuspiciousUUIDConfigRequest& operator=(DescribeSuspiciousUUIDConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSuspiciousUUIDConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of proactive defense. Valid values:
    // 
    // *   **auto_breaking**: virus defense
    // *   **ransomware_breaking**: ransomware capture
    // *   **webshell_cloud_breaking**: webshell defense
    // *   **alinet**: malicious behavior defense
    // *   **alisecguard**: client protection
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
