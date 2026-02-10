// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSOVERALLCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspiciousOverallConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousOverallConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousOverallConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSuspiciousOverallConfigRequest() = default ;
    DescribeSuspiciousOverallConfigRequest(const DescribeSuspiciousOverallConfigRequest &) = default ;
    DescribeSuspiciousOverallConfigRequest(DescribeSuspiciousOverallConfigRequest &&) = default ;
    DescribeSuspiciousOverallConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousOverallConfigRequest() = default ;
    DescribeSuspiciousOverallConfigRequest& operator=(const DescribeSuspiciousOverallConfigRequest &) = default ;
    DescribeSuspiciousOverallConfigRequest& operator=(DescribeSuspiciousOverallConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceIp_ == nullptr
        && this->type_ == nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspiciousOverallConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSuspiciousOverallConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The type of the feature. Valid values:
    // 
    // *   **auto_breaking**: Anti-Virus
    // *   **ransomware_breaking**: Anti-ransomware (Bait Capture)
    // *   **webshell_cloud_breaking**: Webshell Protection
    // *   **alinet**: Behavior prevention
    // *   **k8s_log_analysis**: K8s Threat Detection
    // *   **alisecguard**: Defense mode for Client Protection
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
