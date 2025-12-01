// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPGATEWAYLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackupGatewayListResponseBodyItemsBackupGateway.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupGatewayListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupGatewayListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGateway, backupGateway_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupGatewayListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGateway, backupGateway_);
    };
    DescribeBackupGatewayListResponseBodyItems() = default ;
    DescribeBackupGatewayListResponseBodyItems(const DescribeBackupGatewayListResponseBodyItems &) = default ;
    DescribeBackupGatewayListResponseBodyItems(DescribeBackupGatewayListResponseBodyItems &&) = default ;
    DescribeBackupGatewayListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupGatewayListResponseBodyItems() = default ;
    DescribeBackupGatewayListResponseBodyItems& operator=(const DescribeBackupGatewayListResponseBodyItems &) = default ;
    DescribeBackupGatewayListResponseBodyItems& operator=(DescribeBackupGatewayListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGateway_ == nullptr; };
    // backupGateway Field Functions 
    bool hasBackupGateway() const { return this->backupGateway_ != nullptr;};
    void deleteBackupGateway() { this->backupGateway_ = nullptr;};
    inline const vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway> & backupGateway() const { DARABONBA_PTR_GET_CONST(backupGateway_, vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway>) };
    inline vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway> backupGateway() { DARABONBA_PTR_GET(backupGateway_, vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway>) };
    inline DescribeBackupGatewayListResponseBodyItems& setBackupGateway(const vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway> & backupGateway) { DARABONBA_PTR_SET_VALUE(backupGateway_, backupGateway) };
    inline DescribeBackupGatewayListResponseBodyItems& setBackupGateway(vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway> && backupGateway) { DARABONBA_PTR_SET_RVALUE(backupGateway_, backupGateway) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackupGatewayListResponseBodyItemsBackupGateway>> backupGateway_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
