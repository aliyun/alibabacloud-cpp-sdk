// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVerifyContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessOrigin, accessOrigin_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessOrigin, accessOrigin_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DescribeVerifyContentRequest() = default ;
    DescribeVerifyContentRequest(const DescribeVerifyContentRequest &) = default ;
    DescribeVerifyContentRequest(DescribeVerifyContentRequest &&) = default ;
    DescribeVerifyContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyContentRequest() = default ;
    DescribeVerifyContentRequest& operator=(const DescribeVerifyContentRequest &) = default ;
    DescribeVerifyContentRequest& operator=(DescribeVerifyContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessOrigin_ == nullptr
        && this->domainName_ == nullptr && this->instanceId_ == nullptr; };
    // accessOrigin Field Functions 
    bool hasAccessOrigin() const { return this->accessOrigin_ != nullptr;};
    void deleteAccessOrigin() { this->accessOrigin_ = nullptr;};
    inline string getAccessOrigin() const { DARABONBA_PTR_GET_DEFAULT(accessOrigin_, "") };
    inline DescribeVerifyContentRequest& setAccessOrigin(string accessOrigin) { DARABONBA_PTR_SET_VALUE(accessOrigin_, accessOrigin) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVerifyContentRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVerifyContentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The source of the domain name. Valid values:
    // 
    // - **share**: The domain name is added to WAF in CNAME record mode.
    // 
    // - **asset**: The domain name is added to WAF as a custom asset.
    // 
    // - **hybrid_cloud_cname**: The domain name is added to WAF in hybrid cloud CNAME record mode.
    // 
    // - **tgw**: The domain name is added to WAF in cloud native mode.
    // 
    // This parameter is required.
    shared_ptr<string> accessOrigin_ {};
    // The domain name that you want to query for ownership verification content.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The ID of the WAF instance.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
