// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEMETADATAOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEMETADATAOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class InstanceMetadataOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceMetadataOptions& obj) { 
      DARABONBA_PTR_TO_JSON(http_tokens, httpTokens_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceMetadataOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(http_tokens, httpTokens_);
    };
    InstanceMetadataOptions() = default ;
    InstanceMetadataOptions(const InstanceMetadataOptions &) = default ;
    InstanceMetadataOptions(InstanceMetadataOptions &&) = default ;
    InstanceMetadataOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceMetadataOptions() = default ;
    InstanceMetadataOptions& operator=(const InstanceMetadataOptions &) = default ;
    InstanceMetadataOptions& operator=(InstanceMetadataOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->httpTokens_ == nullptr; };
    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline InstanceMetadataOptions& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


  protected:
    // Configuration of the ECS instance metadata access mode. Valid values:  
    // 
    // * `optional`: Compatible with both NAT mode and hardened mode.  
    // * `required`: Enables hardened mode only (IMDSv2). After this mode is enabled, applications within edge zones cannot access ECS instance metadata through NAT mode.  
    // 
    // Default Value: `optional`.  
    // 
    // >Notice:   
    // 
    // * This parameter is currently available only to users on the whitelist. To use it, submit a ticket to request access.  
    // * This parameter is supported only in ACK managed clusters of version 1.28 or later.  
    // 
    //   
    // 
    // > For more information about instance metadata access modes, see [Instance Metadata Access Mode](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpTokens_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
