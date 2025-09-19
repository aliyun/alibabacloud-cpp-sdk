// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERSIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVersionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVersionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVersionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeVersionConfigRequest() = default ;
    DescribeVersionConfigRequest(const DescribeVersionConfigRequest &) = default ;
    DescribeVersionConfigRequest(DescribeVersionConfigRequest &&) = default ;
    DescribeVersionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVersionConfigRequest() = default ;
    DescribeVersionConfigRequest& operator=(const DescribeVersionConfigRequest &) = default ;
    DescribeVersionConfigRequest& operator=(DescribeVersionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceDirectoryAccountId_ != nullptr
        && this->sourceIp_ != nullptr; };
    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline string resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, "") };
    inline DescribeVersionConfigRequest& setResourceDirectoryAccountId(string resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeVersionConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The ID of the Alibaba Cloud account that uses Security Center.
    // 
    // >  You can call the [GetUser](https://help.aliyun.com/document_detail/28681.html) operation to query the IDs of Alibaba Cloud accounts.
    std::shared_ptr<string> resourceDirectoryAccountId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
