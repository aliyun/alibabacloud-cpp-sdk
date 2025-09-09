// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSRESPONSEBODYDOMAINTRANSFERSDOMAINTRANSFER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSRESPONSEBODYDOMAINTRANSFERSDOMAINTRANSFER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FromUserId, fromUserId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FromUserId, fromUserId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer() = default ;
    DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer(const DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer &) = default ;
    DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer(DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer &&) = default ;
    DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer() = default ;
    DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& operator=(const DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer &) = default ;
    DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& operator=(DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->domainName_ != nullptr && this->fromUserId_ != nullptr && this->id_ != nullptr && this->targetUserId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // fromUserId Field Functions 
    bool hasFromUserId() const { return this->fromUserId_ != nullptr;};
    void deleteFromUserId() { this->fromUserId_ = nullptr;};
    inline int64_t fromUserId() const { DARABONBA_PTR_GET_DEFAULT(fromUserId_, 0L) };
    inline DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& setFromUserId(int64_t fromUserId) { DARABONBA_PTR_SET_VALUE(fromUserId_, fromUserId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline DescribeTransferDomainsResponseBodyDomainTransfersDomainTransfer& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // The time when the domain name was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the domain name was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The user ID from which the domain name was transferred.
    std::shared_ptr<int64_t> fromUserId_ = nullptr;
    // The ID of the domain name that was transferred.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The user ID to which the domain name was transferred.
    std::shared_ptr<int64_t> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
