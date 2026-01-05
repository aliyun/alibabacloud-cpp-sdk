// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPOLARFSFILEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELPOLARFSFILEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CancelPolarFsFileQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPolarFsFileQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FilePathIds, filePathIds_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPolarFsFileQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FilePathIds, filePathIds_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
    };
    CancelPolarFsFileQuotaRequest() = default ;
    CancelPolarFsFileQuotaRequest(const CancelPolarFsFileQuotaRequest &) = default ;
    CancelPolarFsFileQuotaRequest(CancelPolarFsFileQuotaRequest &&) = default ;
    CancelPolarFsFileQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPolarFsFileQuotaRequest() = default ;
    CancelPolarFsFileQuotaRequest& operator=(const CancelPolarFsFileQuotaRequest &) = default ;
    CancelPolarFsFileQuotaRequest& operator=(CancelPolarFsFileQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->filePathIds_ == nullptr && this->polarFsInstanceId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CancelPolarFsFileQuotaRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // filePathIds Field Functions 
    bool hasFilePathIds() const { return this->filePathIds_ != nullptr;};
    void deleteFilePathIds() { this->filePathIds_ = nullptr;};
    inline string getFilePathIds() const { DARABONBA_PTR_GET_DEFAULT(filePathIds_, "") };
    inline CancelPolarFsFileQuotaRequest& setFilePathIds(string filePathIds) { DARABONBA_PTR_SET_VALUE(filePathIds_, filePathIds) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CancelPolarFsFileQuotaRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    // This parameter is required.
    shared_ptr<string> filePathIds_ {};
    // This parameter is required.
    shared_ptr<string> polarFsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
