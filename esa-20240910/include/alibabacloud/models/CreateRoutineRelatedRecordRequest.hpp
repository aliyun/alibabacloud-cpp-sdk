// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINERELATEDRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINERELATEDRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineRelatedRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineRelatedRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineRelatedRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateRoutineRelatedRecordRequest() = default ;
    CreateRoutineRelatedRecordRequest(const CreateRoutineRelatedRecordRequest &) = default ;
    CreateRoutineRelatedRecordRequest(CreateRoutineRelatedRecordRequest &&) = default ;
    CreateRoutineRelatedRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineRelatedRecordRequest() = default ;
    CreateRoutineRelatedRecordRequest& operator=(const CreateRoutineRelatedRecordRequest &) = default ;
    CreateRoutineRelatedRecordRequest& operator=(CreateRoutineRelatedRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->recordName_ == nullptr && this->siteId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRoutineRelatedRecordRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateRoutineRelatedRecordRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateRoutineRelatedRecordRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The routine name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The record name.
    // 
    // This parameter is required.
    shared_ptr<string> recordName_ {};
    // The website ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
