// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSRESPONSEBODYRELATEDRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTINERELATEDRECORDSRESPONSEBODYRELATEDRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRoutineRelatedRecordsResponseBodyRelatedRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoutineRelatedRecordsResponseBodyRelatedRecords& obj) { 
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoutineRelatedRecordsResponseBodyRelatedRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    ListRoutineRelatedRecordsResponseBodyRelatedRecords() = default ;
    ListRoutineRelatedRecordsResponseBodyRelatedRecords(const ListRoutineRelatedRecordsResponseBodyRelatedRecords &) = default ;
    ListRoutineRelatedRecordsResponseBodyRelatedRecords(ListRoutineRelatedRecordsResponseBodyRelatedRecords &&) = default ;
    ListRoutineRelatedRecordsResponseBodyRelatedRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoutineRelatedRecordsResponseBodyRelatedRecords() = default ;
    ListRoutineRelatedRecordsResponseBodyRelatedRecords& operator=(const ListRoutineRelatedRecordsResponseBodyRelatedRecords &) = default ;
    ListRoutineRelatedRecordsResponseBodyRelatedRecords& operator=(ListRoutineRelatedRecordsResponseBodyRelatedRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordId_ == nullptr
        && return this->recordName_ == nullptr && return this->siteId_ == nullptr && return this->siteName_ == nullptr; };
    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline ListRoutineRelatedRecordsResponseBodyRelatedRecords& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListRoutineRelatedRecordsResponseBodyRelatedRecords& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListRoutineRelatedRecordsResponseBodyRelatedRecords& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListRoutineRelatedRecordsResponseBodyRelatedRecords& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // The record ID of the domain name.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The name of the record.
    std::shared_ptr<string> recordName_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
