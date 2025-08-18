// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROUTINERELATEDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROUTINERELATEDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteRoutineRelatedRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoutineRelatedRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoutineRelatedRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteRoutineRelatedRecordRequest() = default ;
    DeleteRoutineRelatedRecordRequest(const DeleteRoutineRelatedRecordRequest &) = default ;
    DeleteRoutineRelatedRecordRequest(DeleteRoutineRelatedRecordRequest &&) = default ;
    DeleteRoutineRelatedRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoutineRelatedRecordRequest() = default ;
    DeleteRoutineRelatedRecordRequest& operator=(const DeleteRoutineRelatedRecordRequest &) = default ;
    DeleteRoutineRelatedRecordRequest& operator=(DeleteRoutineRelatedRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->recordId_ != nullptr && this->recordName_ != nullptr && this->siteId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteRoutineRelatedRecordRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline DeleteRoutineRelatedRecordRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline DeleteRoutineRelatedRecordRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteRoutineRelatedRecordRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The routine name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The record ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The record name.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // The website ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
