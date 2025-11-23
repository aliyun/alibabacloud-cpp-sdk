// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAILKEYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAILKEYINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AuditDate, auditDate_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DownloadURL, downloadURL_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditDate, auditDate_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DownloadURL, downloadURL_);
    };
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo &&) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& operator=(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& operator=(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditDate_ == nullptr
        && return this->config_ == nullptr && return this->dbId_ == nullptr && return this->downloadURL_ == nullptr; };
    // auditDate Field Functions 
    bool hasAuditDate() const { return this->auditDate_ != nullptr;};
    void deleteAuditDate() { this->auditDate_ = nullptr;};
    inline string auditDate() const { DARABONBA_PTR_GET_DEFAULT(auditDate_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& setAuditDate(string auditDate) { DARABONBA_PTR_SET_VALUE(auditDate_, auditDate) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig) };
    inline Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig config() { DARABONBA_PTR_GET(config_, Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& setConfig(const Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& setConfig(Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // downloadURL Field Functions 
    bool hasDownloadURL() const { return this->downloadURL_ != nullptr;};
    void deleteDownloadURL() { this->downloadURL_ = nullptr;};
    inline string downloadURL() const { DARABONBA_PTR_GET_DEFAULT(downloadURL_, "") };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfo& setDownloadURL(string downloadURL) { DARABONBA_PTR_SET_VALUE(downloadURL_, downloadURL) };


  protected:
    // The time when the ticket was submitted.
    std::shared_ptr<string> auditDate_ = nullptr;
    // The configuration information about the ticket.
    std::shared_ptr<Models::GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfig> config_ = nullptr;
    // The database ID.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The URL that is used to download the export result.
    std::shared_ptr<string> downloadURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
