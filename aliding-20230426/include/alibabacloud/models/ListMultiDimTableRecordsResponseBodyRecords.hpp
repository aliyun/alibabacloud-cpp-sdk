// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMultiDimTableRecordsResponseBodyRecordsCreatedBy.hpp>
#include <alibabacloud/models/ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMultiDimTableRecordsResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiDimTableRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_ANY_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedBy, lastModifiedBy_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiDimTableRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_ANY_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedBy, lastModifiedBy_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
    };
    ListMultiDimTableRecordsResponseBodyRecords() = default ;
    ListMultiDimTableRecordsResponseBodyRecords(const ListMultiDimTableRecordsResponseBodyRecords &) = default ;
    ListMultiDimTableRecordsResponseBodyRecords(ListMultiDimTableRecordsResponseBodyRecords &&) = default ;
    ListMultiDimTableRecordsResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiDimTableRecordsResponseBodyRecords() = default ;
    ListMultiDimTableRecordsResponseBodyRecords& operator=(const ListMultiDimTableRecordsResponseBodyRecords &) = default ;
    ListMultiDimTableRecordsResponseBodyRecords& operator=(ListMultiDimTableRecordsResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdBy_ == nullptr
        && return this->createdTime_ == nullptr && return this->fields_ == nullptr && return this->id_ == nullptr && return this->lastModifiedBy_ == nullptr && return this->lastModifiedTime_ == nullptr; };
    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline const Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy & createdBy() const { DARABONBA_PTR_GET_CONST(createdBy_, Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy) };
    inline Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy createdBy() { DARABONBA_PTR_GET(createdBy_, Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setCreatedBy(const Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy & createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setCreatedBy(Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy && createdBy) { DARABONBA_PTR_SET_RVALUE(createdBy_, createdBy) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline     const Darabonba::Json & fields() const { DARABONBA_GET(fields_) };
    Darabonba::Json & fields() { DARABONBA_GET(fields_) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setFields(Darabonba::Json & fields) { DARABONBA_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListMultiDimTableRecordsResponseBodyRecords& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedBy Field Functions 
    bool hasLastModifiedBy() const { return this->lastModifiedBy_ != nullptr;};
    void deleteLastModifiedBy() { this->lastModifiedBy_ = nullptr;};
    inline const Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy & lastModifiedBy() const { DARABONBA_PTR_GET_CONST(lastModifiedBy_, Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy) };
    inline Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy lastModifiedBy() { DARABONBA_PTR_GET(lastModifiedBy_, Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setLastModifiedBy(const Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy & lastModifiedBy) { DARABONBA_PTR_SET_VALUE(lastModifiedBy_, lastModifiedBy) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setLastModifiedBy(Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy && lastModifiedBy) { DARABONBA_PTR_SET_RVALUE(lastModifiedBy_, lastModifiedBy) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline ListMultiDimTableRecordsResponseBodyRecords& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


  protected:
    std::shared_ptr<Models::ListMultiDimTableRecordsResponseBodyRecordsCreatedBy> createdBy_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    Darabonba::Json fields_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<Models::ListMultiDimTableRecordsResponseBodyRecordsLastModifiedBy> lastModifiedBy_ = nullptr;
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
