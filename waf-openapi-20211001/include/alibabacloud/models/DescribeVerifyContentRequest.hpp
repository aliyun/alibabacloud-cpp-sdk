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
        && return this->domainName_ == nullptr && return this->instanceId_ == nullptr; };
    // accessOrigin Field Functions 
    bool hasAccessOrigin() const { return this->accessOrigin_ != nullptr;};
    void deleteAccessOrigin() { this->accessOrigin_ = nullptr;};
    inline string accessOrigin() const { DARABONBA_PTR_GET_DEFAULT(accessOrigin_, "") };
    inline DescribeVerifyContentRequest& setAccessOrigin(string accessOrigin) { DARABONBA_PTR_SET_VALUE(accessOrigin_, accessOrigin) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVerifyContentRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVerifyContentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> accessOrigin_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
