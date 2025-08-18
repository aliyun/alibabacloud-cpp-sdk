// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPRECORDSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPRECORDSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppRecordsResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SchemdId, schemdId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SchemdId, schemdId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListEdgeContainerAppRecordsResponseBodyRecords() = default ;
    ListEdgeContainerAppRecordsResponseBodyRecords(const ListEdgeContainerAppRecordsResponseBodyRecords &) = default ;
    ListEdgeContainerAppRecordsResponseBodyRecords(ListEdgeContainerAppRecordsResponseBodyRecords &&) = default ;
    ListEdgeContainerAppRecordsResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppRecordsResponseBodyRecords() = default ;
    ListEdgeContainerAppRecordsResponseBodyRecords& operator=(const ListEdgeContainerAppRecordsResponseBodyRecords &) = default ;
    ListEdgeContainerAppRecordsResponseBodyRecords& operator=(ListEdgeContainerAppRecordsResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->cname_ != nullptr && this->configId_ != nullptr && this->createTime_ != nullptr && this->recordId_ != nullptr && this->recordName_ != nullptr
        && this->schemdId_ != nullptr && this->siteId_ != nullptr && this->updateTime_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // schemdId Field Functions 
    bool hasSchemdId() const { return this->schemdId_ != nullptr;};
    void deleteSchemdId() { this->schemdId_ = nullptr;};
    inline int32_t schemdId() const { DARABONBA_PTR_GET_DEFAULT(schemdId_, 0) };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setSchemdId(int32_t schemdId) { DARABONBA_PTR_SET_VALUE(schemdId_, schemdId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListEdgeContainerAppRecordsResponseBodyRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The CNAME of the associated domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The configuration ID of the associated domain name.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The time when the domain name was added. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The record ID of the associated domain name.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The associated domain name.
    std::shared_ptr<string> recordName_ = nullptr;
    // The scheduling domain ID of the associated domain name.
    std::shared_ptr<int32_t> schemdId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The time when the scheduling domain ID or CNAME was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
