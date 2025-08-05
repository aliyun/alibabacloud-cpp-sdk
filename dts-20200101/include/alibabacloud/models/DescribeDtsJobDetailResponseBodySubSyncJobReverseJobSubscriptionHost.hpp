// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOBREVERSEJOBSUBSCRIPTIONHOST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSJOBDETAILRESPONSEBODYSUBSYNCJOBREVERSEJOBSUBSCRIPTIONHOST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_TO_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_TO_JSON(VpcHost, vpcHost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateHost, privateHost_);
      DARABONBA_PTR_FROM_JSON(PublicHost, publicHost_);
      DARABONBA_PTR_FROM_JSON(VpcHost, vpcHost_);
    };
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost(const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost(DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost &&) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost() = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& operator=(const DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost &) = default ;
    DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& operator=(DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->privateHost_ != nullptr
        && this->publicHost_ != nullptr && this->vpcHost_ != nullptr; };
    // privateHost Field Functions 
    bool hasPrivateHost() const { return this->privateHost_ != nullptr;};
    void deletePrivateHost() { this->privateHost_ = nullptr;};
    inline string privateHost() const { DARABONBA_PTR_GET_DEFAULT(privateHost_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& setPrivateHost(string privateHost) { DARABONBA_PTR_SET_VALUE(privateHost_, privateHost) };


    // publicHost Field Functions 
    bool hasPublicHost() const { return this->publicHost_ != nullptr;};
    void deletePublicHost() { this->publicHost_ = nullptr;};
    inline string publicHost() const { DARABONBA_PTR_GET_DEFAULT(publicHost_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& setPublicHost(string publicHost) { DARABONBA_PTR_SET_VALUE(publicHost_, publicHost) };


    // vpcHost Field Functions 
    bool hasVpcHost() const { return this->vpcHost_ != nullptr;};
    void deleteVpcHost() { this->vpcHost_ = nullptr;};
    inline string vpcHost() const { DARABONBA_PTR_GET_DEFAULT(vpcHost_, "") };
    inline DescribeDtsJobDetailResponseBodySubSyncJobReverseJobSubscriptionHost& setVpcHost(string vpcHost) { DARABONBA_PTR_SET_VALUE(vpcHost_, vpcHost) };


  protected:
    // The private endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
    std::shared_ptr<string> privateHost_ = nullptr;
    // The public endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
    std::shared_ptr<string> publicHost_ = nullptr;
    // The VPC endpoint of the change tracking instance. The format is `<Address>:<Port number>`.
    std::shared_ptr<string> vpcHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
