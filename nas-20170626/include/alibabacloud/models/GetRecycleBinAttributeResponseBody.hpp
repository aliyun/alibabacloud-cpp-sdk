// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECYCLEBINATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRECYCLEBINATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetRecycleBinAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecycleBinAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecycleBinAttribute, recycleBinAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecycleBinAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecycleBinAttribute, recycleBinAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRecycleBinAttributeResponseBody() = default ;
    GetRecycleBinAttributeResponseBody(const GetRecycleBinAttributeResponseBody &) = default ;
    GetRecycleBinAttributeResponseBody(GetRecycleBinAttributeResponseBody &&) = default ;
    GetRecycleBinAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecycleBinAttributeResponseBody() = default ;
    GetRecycleBinAttributeResponseBody& operator=(const GetRecycleBinAttributeResponseBody &) = default ;
    GetRecycleBinAttributeResponseBody& operator=(GetRecycleBinAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RecycleBinAttribute : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecycleBinAttribute& obj) { 
        DARABONBA_PTR_TO_JSON(ArchiveSize, archiveSize_);
        DARABONBA_PTR_TO_JSON(EnableTime, enableTime_);
        DARABONBA_PTR_TO_JSON(ReservedDays, reservedDays_);
        DARABONBA_PTR_TO_JSON(SecondarySize, secondarySize_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RecycleBinAttribute& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchiveSize, archiveSize_);
        DARABONBA_PTR_FROM_JSON(EnableTime, enableTime_);
        DARABONBA_PTR_FROM_JSON(ReservedDays, reservedDays_);
        DARABONBA_PTR_FROM_JSON(SecondarySize, secondarySize_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      RecycleBinAttribute() = default ;
      RecycleBinAttribute(const RecycleBinAttribute &) = default ;
      RecycleBinAttribute(RecycleBinAttribute &&) = default ;
      RecycleBinAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecycleBinAttribute() = default ;
      RecycleBinAttribute& operator=(const RecycleBinAttribute &) = default ;
      RecycleBinAttribute& operator=(RecycleBinAttribute &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->archiveSize_ == nullptr
        && this->enableTime_ == nullptr && this->reservedDays_ == nullptr && this->secondarySize_ == nullptr && this->size_ == nullptr && this->status_ == nullptr; };
      // archiveSize Field Functions 
      bool hasArchiveSize() const { return this->archiveSize_ != nullptr;};
      void deleteArchiveSize() { this->archiveSize_ = nullptr;};
      inline int64_t getArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(archiveSize_, 0L) };
      inline RecycleBinAttribute& setArchiveSize(int64_t archiveSize) { DARABONBA_PTR_SET_VALUE(archiveSize_, archiveSize) };


      // enableTime Field Functions 
      bool hasEnableTime() const { return this->enableTime_ != nullptr;};
      void deleteEnableTime() { this->enableTime_ = nullptr;};
      inline string getEnableTime() const { DARABONBA_PTR_GET_DEFAULT(enableTime_, "") };
      inline RecycleBinAttribute& setEnableTime(string enableTime) { DARABONBA_PTR_SET_VALUE(enableTime_, enableTime) };


      // reservedDays Field Functions 
      bool hasReservedDays() const { return this->reservedDays_ != nullptr;};
      void deleteReservedDays() { this->reservedDays_ = nullptr;};
      inline int64_t getReservedDays() const { DARABONBA_PTR_GET_DEFAULT(reservedDays_, 0L) };
      inline RecycleBinAttribute& setReservedDays(int64_t reservedDays) { DARABONBA_PTR_SET_VALUE(reservedDays_, reservedDays) };


      // secondarySize Field Functions 
      bool hasSecondarySize() const { return this->secondarySize_ != nullptr;};
      void deleteSecondarySize() { this->secondarySize_ = nullptr;};
      inline int64_t getSecondarySize() const { DARABONBA_PTR_GET_DEFAULT(secondarySize_, 0L) };
      inline RecycleBinAttribute& setSecondarySize(int64_t secondarySize) { DARABONBA_PTR_SET_VALUE(secondarySize_, secondarySize) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline RecycleBinAttribute& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RecycleBinAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The size of the archived data that is dumped to the recycle bin. Unit: bytes.
      shared_ptr<int64_t> archiveSize_ {};
      // The time at which the recycle bin was enabled.
      shared_ptr<string> enableTime_ {};
      // The retention period of the files in the recycle bin. Unit: days.
      // 
      // If the recycle bin is disabled, 0 is returned for this parameter.
      shared_ptr<int64_t> reservedDays_ {};
      // The size of the Infrequent Access (IA) data that is dumped to the recycle bin. Unit: bytes.
      shared_ptr<int64_t> secondarySize_ {};
      // The size of the files that are dumped to the recycle bin. Unit: bytes.
      shared_ptr<int64_t> size_ {};
      // The status of the recycle bin.
      // 
      // Valid values:
      // 
      // *   Enable: The recycle bin is enabled.
      // *   Disable: The recycle bin is disabled.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->recycleBinAttribute_ == nullptr
        && this->requestId_ == nullptr; };
    // recycleBinAttribute Field Functions 
    bool hasRecycleBinAttribute() const { return this->recycleBinAttribute_ != nullptr;};
    void deleteRecycleBinAttribute() { this->recycleBinAttribute_ = nullptr;};
    inline const GetRecycleBinAttributeResponseBody::RecycleBinAttribute & getRecycleBinAttribute() const { DARABONBA_PTR_GET_CONST(recycleBinAttribute_, GetRecycleBinAttributeResponseBody::RecycleBinAttribute) };
    inline GetRecycleBinAttributeResponseBody::RecycleBinAttribute getRecycleBinAttribute() { DARABONBA_PTR_GET(recycleBinAttribute_, GetRecycleBinAttributeResponseBody::RecycleBinAttribute) };
    inline GetRecycleBinAttributeResponseBody& setRecycleBinAttribute(const GetRecycleBinAttributeResponseBody::RecycleBinAttribute & recycleBinAttribute) { DARABONBA_PTR_SET_VALUE(recycleBinAttribute_, recycleBinAttribute) };
    inline GetRecycleBinAttributeResponseBody& setRecycleBinAttribute(GetRecycleBinAttributeResponseBody::RecycleBinAttribute && recycleBinAttribute) { DARABONBA_PTR_SET_RVALUE(recycleBinAttribute_, recycleBinAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRecycleBinAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The description of the recycle bin.
    shared_ptr<GetRecycleBinAttributeResponseBody::RecycleBinAttribute> recycleBinAttribute_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
