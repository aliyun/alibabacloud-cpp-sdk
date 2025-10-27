// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeRiskCheckSummaryRequest() = default ;
    DescribeRiskCheckSummaryRequest(const DescribeRiskCheckSummaryRequest &) = default ;
    DescribeRiskCheckSummaryRequest(DescribeRiskCheckSummaryRequest &&) = default ;
    DescribeRiskCheckSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryRequest() = default ;
    DescribeRiskCheckSummaryRequest& operator=(const DescribeRiskCheckSummaryRequest &) = default ;
    DescribeRiskCheckSummaryRequest& operator=(DescribeRiskCheckSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sourceIp_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRiskCheckSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline string resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, "") };
    inline DescribeRiskCheckSummaryRequest& setResourceDirectoryAccountId(string resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRiskCheckSummaryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeRiskCheckSummaryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the Alibaba Cloud account that is added as a member by using the multi-account control feature.
    std::shared_ptr<string> resourceDirectoryAccountId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
