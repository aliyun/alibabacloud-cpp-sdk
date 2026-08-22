// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPENSEARCHACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPENSEARCHACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DeleteOpenSearchAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOpenSearchAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOpenSearchAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteOpenSearchAccountRequest() = default ;
    DeleteOpenSearchAccountRequest(const DeleteOpenSearchAccountRequest &) = default ;
    DeleteOpenSearchAccountRequest(DeleteOpenSearchAccountRequest &&) = default ;
    DeleteOpenSearchAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOpenSearchAccountRequest() = default ;
    DeleteOpenSearchAccountRequest& operator=(const DeleteOpenSearchAccountRequest &) = default ;
    DeleteOpenSearchAccountRequest& operator=(DeleteOpenSearchAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBInstanceName_ == nullptr && this->regionId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DeleteOpenSearchAccountRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline DeleteOpenSearchAccountRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteOpenSearchAccountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
