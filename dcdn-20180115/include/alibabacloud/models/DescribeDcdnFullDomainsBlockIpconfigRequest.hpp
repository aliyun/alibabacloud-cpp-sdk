// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNFULLDOMAINSBLOCKIPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNFULLDOMAINSBLOCKIPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnFullDomainsBlockIPConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnFullDomainsBlockIPConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IPList, IPList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnFullDomainsBlockIPConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IPList, IPList_);
    };
    DescribeDcdnFullDomainsBlockIPConfigRequest() = default ;
    DescribeDcdnFullDomainsBlockIPConfigRequest(const DescribeDcdnFullDomainsBlockIPConfigRequest &) = default ;
    DescribeDcdnFullDomainsBlockIPConfigRequest(DescribeDcdnFullDomainsBlockIPConfigRequest &&) = default ;
    DescribeDcdnFullDomainsBlockIPConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnFullDomainsBlockIPConfigRequest() = default ;
    DescribeDcdnFullDomainsBlockIPConfigRequest& operator=(const DescribeDcdnFullDomainsBlockIPConfigRequest &) = default ;
    DescribeDcdnFullDomainsBlockIPConfigRequest& operator=(DescribeDcdnFullDomainsBlockIPConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->IPList_ != nullptr; };
    // IPList Field Functions 
    bool hasIPList() const { return this->IPList_ != nullptr;};
    void deleteIPList() { this->IPList_ = nullptr;};
    inline string IPList() const { DARABONBA_PTR_GET_DEFAULT(IPList_, "") };
    inline DescribeDcdnFullDomainsBlockIPConfigRequest& setIPList(string IPList) { DARABONBA_PTR_SET_VALUE(IPList_, IPList) };


  protected:
    // The IP address or CIDR block to query. Separate multiple values with commas (,). You can specify up to 50 IP addresses or CIDR blocks.
    std::shared_ptr<string> IPList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
