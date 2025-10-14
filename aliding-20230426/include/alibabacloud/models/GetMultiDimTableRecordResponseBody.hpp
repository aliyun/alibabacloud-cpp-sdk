// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIDIMTABLERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultiDimTableRecordResponseBodyCreatedBy.hpp>
#include <alibabacloud/models/GetMultiDimTableRecordResponseBodyLastModifiedBy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultiDimTableRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultiDimTableRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_ANY_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedBy, lastModifiedBy_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultiDimTableRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_ANY_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedBy, lastModifiedBy_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetMultiDimTableRecordResponseBody() = default ;
    GetMultiDimTableRecordResponseBody(const GetMultiDimTableRecordResponseBody &) = default ;
    GetMultiDimTableRecordResponseBody(GetMultiDimTableRecordResponseBody &&) = default ;
    GetMultiDimTableRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultiDimTableRecordResponseBody() = default ;
    GetMultiDimTableRecordResponseBody& operator=(const GetMultiDimTableRecordResponseBody &) = default ;
    GetMultiDimTableRecordResponseBody& operator=(GetMultiDimTableRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdBy_ == nullptr
        && return this->createdTime_ == nullptr && return this->fields_ == nullptr && return this->id_ == nullptr && return this->lastModifiedBy_ == nullptr && return this->lastModifiedTime_ == nullptr
        && return this->requestId_ == nullptr && return this->vendorRequestId_ == nullptr && return this->vendorType_ == nullptr; };
    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline const GetMultiDimTableRecordResponseBodyCreatedBy & createdBy() const { DARABONBA_PTR_GET_CONST(createdBy_, GetMultiDimTableRecordResponseBodyCreatedBy) };
    inline GetMultiDimTableRecordResponseBodyCreatedBy createdBy() { DARABONBA_PTR_GET(createdBy_, GetMultiDimTableRecordResponseBodyCreatedBy) };
    inline GetMultiDimTableRecordResponseBody& setCreatedBy(const GetMultiDimTableRecordResponseBodyCreatedBy & createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };
    inline GetMultiDimTableRecordResponseBody& setCreatedBy(GetMultiDimTableRecordResponseBodyCreatedBy && createdBy) { DARABONBA_PTR_SET_RVALUE(createdBy_, createdBy) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetMultiDimTableRecordResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline     const Darabonba::Json & fields() const { DARABONBA_GET(fields_) };
    Darabonba::Json & fields() { DARABONBA_GET(fields_) };
    inline GetMultiDimTableRecordResponseBody& setFields(const Darabonba::Json & fields) { DARABONBA_SET_VALUE(fields_, fields) };
    inline GetMultiDimTableRecordResponseBody& setFields(Darabonba::Json & fields) { DARABONBA_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetMultiDimTableRecordResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedBy Field Functions 
    bool hasLastModifiedBy() const { return this->lastModifiedBy_ != nullptr;};
    void deleteLastModifiedBy() { this->lastModifiedBy_ = nullptr;};
    inline const GetMultiDimTableRecordResponseBodyLastModifiedBy & lastModifiedBy() const { DARABONBA_PTR_GET_CONST(lastModifiedBy_, GetMultiDimTableRecordResponseBodyLastModifiedBy) };
    inline GetMultiDimTableRecordResponseBodyLastModifiedBy lastModifiedBy() { DARABONBA_PTR_GET(lastModifiedBy_, GetMultiDimTableRecordResponseBodyLastModifiedBy) };
    inline GetMultiDimTableRecordResponseBody& setLastModifiedBy(const GetMultiDimTableRecordResponseBodyLastModifiedBy & lastModifiedBy) { DARABONBA_PTR_SET_VALUE(lastModifiedBy_, lastModifiedBy) };
    inline GetMultiDimTableRecordResponseBody& setLastModifiedBy(GetMultiDimTableRecordResponseBodyLastModifiedBy && lastModifiedBy) { DARABONBA_PTR_SET_RVALUE(lastModifiedBy_, lastModifiedBy) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline GetMultiDimTableRecordResponseBody& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMultiDimTableRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetMultiDimTableRecordResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetMultiDimTableRecordResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<GetMultiDimTableRecordResponseBodyCreatedBy> createdBy_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    Darabonba::Json fields_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<GetMultiDimTableRecordResponseBodyLastModifiedBy> lastModifiedBy_ = nullptr;
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
