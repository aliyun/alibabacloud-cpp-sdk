// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSVERIFYSTATISTICRECORDSEXPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSVERIFYSTATISTICRECORDSEXPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateSmsVerifyStatisticRecordsExportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsVerifyStatisticRecordsExportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromDate, fromDate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_TO_JSON(ToDate, toDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsVerifyStatisticRecordsExportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromDate, fromDate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SchemeName, schemeName_);
      DARABONBA_PTR_FROM_JSON(ToDate, toDate_);
    };
    CreateSmsVerifyStatisticRecordsExportTaskRequest() = default ;
    CreateSmsVerifyStatisticRecordsExportTaskRequest(const CreateSmsVerifyStatisticRecordsExportTaskRequest &) = default ;
    CreateSmsVerifyStatisticRecordsExportTaskRequest(CreateSmsVerifyStatisticRecordsExportTaskRequest &&) = default ;
    CreateSmsVerifyStatisticRecordsExportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsVerifyStatisticRecordsExportTaskRequest() = default ;
    CreateSmsVerifyStatisticRecordsExportTaskRequest& operator=(const CreateSmsVerifyStatisticRecordsExportTaskRequest &) = default ;
    CreateSmsVerifyStatisticRecordsExportTaskRequest& operator=(CreateSmsVerifyStatisticRecordsExportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromDate_ == nullptr
        && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->schemeName_ == nullptr && this->toDate_ == nullptr; };
    // fromDate Field Functions 
    bool hasFromDate() const { return this->fromDate_ != nullptr;};
    void deleteFromDate() { this->fromDate_ = nullptr;};
    inline int64_t getFromDate() const { DARABONBA_PTR_GET_DEFAULT(fromDate_, 0L) };
    inline CreateSmsVerifyStatisticRecordsExportTaskRequest& setFromDate(int64_t fromDate) { DARABONBA_PTR_SET_VALUE(fromDate_, fromDate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsVerifyStatisticRecordsExportTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsVerifyStatisticRecordsExportTaskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsVerifyStatisticRecordsExportTaskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // schemeName Field Functions 
    bool hasSchemeName() const { return this->schemeName_ != nullptr;};
    void deleteSchemeName() { this->schemeName_ = nullptr;};
    inline string getSchemeName() const { DARABONBA_PTR_GET_DEFAULT(schemeName_, "") };
    inline CreateSmsVerifyStatisticRecordsExportTaskRequest& setSchemeName(string schemeName) { DARABONBA_PTR_SET_VALUE(schemeName_, schemeName) };


    // toDate Field Functions 
    bool hasToDate() const { return this->toDate_ != nullptr;};
    void deleteToDate() { this->toDate_ = nullptr;};
    inline int64_t getToDate() const { DARABONBA_PTR_GET_DEFAULT(toDate_, 0L) };
    inline CreateSmsVerifyStatisticRecordsExportTaskRequest& setToDate(int64_t toDate) { DARABONBA_PTR_SET_VALUE(toDate_, toDate) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> fromDate_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> schemeName_ {};
    // This parameter is required.
    shared_ptr<int64_t> toDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
