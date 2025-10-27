// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSuspEventDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SuspiciousEventId, suspiciousEventId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SuspiciousEventId, suspiciousEventId_);
    };
    DescribeSuspEventDetailRequest() = default ;
    DescribeSuspEventDetailRequest(const DescribeSuspEventDetailRequest &) = default ;
    DescribeSuspEventDetailRequest(DescribeSuspEventDetailRequest &&) = default ;
    DescribeSuspEventDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventDetailRequest() = default ;
    DescribeSuspEventDetailRequest& operator=(const DescribeSuspEventDetailRequest &) = default ;
    DescribeSuspEventDetailRequest& operator=(DescribeSuspEventDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->lang_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->sourceIp_ == nullptr && return this->suspiciousEventId_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeSuspEventDetailRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSuspEventDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeSuspEventDetailRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspEventDetailRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // suspiciousEventId Field Functions 
    bool hasSuspiciousEventId() const { return this->suspiciousEventId_ != nullptr;};
    void deleteSuspiciousEventId() { this->suspiciousEventId_ = nullptr;};
    inline int32_t suspiciousEventId() const { DARABONBA_PTR_GET_DEFAULT(suspiciousEventId_, 0) };
    inline DescribeSuspEventDetailRequest& setSuspiciousEventId(int32_t suspiciousEventId) { DARABONBA_PTR_SET_VALUE(suspiciousEventId_, suspiciousEventId) };


  protected:
    // The data source of the exception. Set the value to sas.
    // 
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the ID.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the exception.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> suspiciousEventId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
