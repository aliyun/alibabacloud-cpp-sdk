// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERVIPSBYDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERVIPSBYDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserVipsByDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserVipsByDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserVipsByDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    DescribeUserVipsByDomainRequest() = default ;
    DescribeUserVipsByDomainRequest(const DescribeUserVipsByDomainRequest &) = default ;
    DescribeUserVipsByDomainRequest(DescribeUserVipsByDomainRequest &&) = default ;
    DescribeUserVipsByDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserVipsByDomainRequest() = default ;
    DescribeUserVipsByDomainRequest& operator=(const DescribeUserVipsByDomainRequest &) = default ;
    DescribeUserVipsByDomainRequest& operator=(DescribeUserVipsByDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->available_ == nullptr
        && return this->domainName_ == nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline string available() const { DARABONBA_PTR_GET_DEFAULT(available_, "") };
    inline DescribeUserVipsByDomainRequest& setAvailable(string available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeUserVipsByDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    // Specifies whether to query the virtual IP addresses of only healthy CDN POPs. Valid values:
    // 
    // *   **on**: healthy CDN edge nodes.
    // *   **off**: all CDN edge nodes.
    std::shared_ptr<string> available_ = nullptr;
    // The accelerated domain name. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
