// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPCLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupClientsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SupportRegionId, supportRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupClientsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SupportRegionId, supportRegionId_);
    };
    DescribeBackupClientsRequest() = default ;
    DescribeBackupClientsRequest(const DescribeBackupClientsRequest &) = default ;
    DescribeBackupClientsRequest(DescribeBackupClientsRequest &&) = default ;
    DescribeBackupClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupClientsRequest() = default ;
    DescribeBackupClientsRequest& operator=(const DescribeBackupClientsRequest &) = default ;
    DescribeBackupClientsRequest& operator=(DescribeBackupClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->supportRegionId_ != nullptr; };
    // supportRegionId Field Functions 
    bool hasSupportRegionId() const { return this->supportRegionId_ != nullptr;};
    void deleteSupportRegionId() { this->supportRegionId_ = nullptr;};
    inline string supportRegionId() const { DARABONBA_PTR_GET_DEFAULT(supportRegionId_, "") };
    inline DescribeBackupClientsRequest& setSupportRegionId(string supportRegionId) { DARABONBA_PTR_SET_VALUE(supportRegionId_, supportRegionId) };


  protected:
    // The region in which the anti-ransomware feature is supported.
    // > You can call the [DescribeSupportRegion](~~DescribeSupportRegion~~) operation to query the regions in which the anti-ransomware feature is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> supportRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
