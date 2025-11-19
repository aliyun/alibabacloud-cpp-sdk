// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERVIPSBYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERVIPSBYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserVipsByDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserVipsByDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserVipsByDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeVodUserVipsByDomainRequest() = default ;
    DescribeVodUserVipsByDomainRequest(const DescribeVodUserVipsByDomainRequest &) = default ;
    DescribeVodUserVipsByDomainRequest(DescribeVodUserVipsByDomainRequest &&) = default ;
    DescribeVodUserVipsByDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserVipsByDomainRequest() = default ;
    DescribeVodUserVipsByDomainRequest& operator=(const DescribeVodUserVipsByDomainRequest &) = default ;
    DescribeVodUserVipsByDomainRequest& operator=(DescribeVodUserVipsByDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->domainName_ == nullptr && return this->ownerId_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline string available() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
    inline DescribeVodUserVipsByDomainRequest& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodUserVipsByDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodUserVipsByDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    std::shared_ptr<string> available_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
