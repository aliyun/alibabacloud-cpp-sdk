// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECYCLEBINATTRIBUTERESPONSEBODYRECYCLEBINATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_GETRECYCLEBINATTRIBUTERESPONSEBODYRECYCLEBINATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class GetRecycleBinAttributeResponseBodyRecycleBinAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecycleBinAttributeResponseBodyRecycleBinAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveSize, archiveSize_);
      DARABONBA_PTR_TO_JSON(EnableTime, enableTime_);
      DARABONBA_PTR_TO_JSON(ReservedDays, reservedDays_);
      DARABONBA_PTR_TO_JSON(SecondarySize, secondarySize_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecycleBinAttributeResponseBodyRecycleBinAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveSize, archiveSize_);
      DARABONBA_PTR_FROM_JSON(EnableTime, enableTime_);
      DARABONBA_PTR_FROM_JSON(ReservedDays, reservedDays_);
      DARABONBA_PTR_FROM_JSON(SecondarySize, secondarySize_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetRecycleBinAttributeResponseBodyRecycleBinAttribute() = default ;
    GetRecycleBinAttributeResponseBodyRecycleBinAttribute(const GetRecycleBinAttributeResponseBodyRecycleBinAttribute &) = default ;
    GetRecycleBinAttributeResponseBodyRecycleBinAttribute(GetRecycleBinAttributeResponseBodyRecycleBinAttribute &&) = default ;
    GetRecycleBinAttributeResponseBodyRecycleBinAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecycleBinAttributeResponseBodyRecycleBinAttribute() = default ;
    GetRecycleBinAttributeResponseBodyRecycleBinAttribute& operator=(const GetRecycleBinAttributeResponseBodyRecycleBinAttribute &) = default ;
    GetRecycleBinAttributeResponseBodyRecycleBinAttribute& operator=(GetRecycleBinAttributeResponseBodyRecycleBinAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archiveSize_ != nullptr
        && this->enableTime_ != nullptr && this->reservedDays_ != nullptr && this->secondarySize_ != nullptr && this->size_ != nullptr && this->status_ != nullptr; };
    // archiveSize Field Functions 
    bool hasArchiveSize() const { return this->archiveSize_ != nullptr;};
    void deleteArchiveSize() { this->archiveSize_ = nullptr;};
    inline int64_t archiveSize() const { DARABONBA_PTR_GET_DEFAULT(archiveSize_, 0L) };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute& setArchiveSize(int64_t archiveSize) { DARABONBA_PTR_SET_VALUE(archiveSize_, archiveSize) };


    // enableTime Field Functions 
    bool hasEnableTime() const { return this->enableTime_ != nullptr;};
    void deleteEnableTime() { this->enableTime_ = nullptr;};
    inline string enableTime() const { DARABONBA_PTR_GET_DEFAULT(enableTime_, "") };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute& setEnableTime(string enableTime) { DARABONBA_PTR_SET_VALUE(enableTime_, enableTime) };


    // reservedDays Field Functions 
    bool hasReservedDays() const { return this->reservedDays_ != nullptr;};
    void deleteReservedDays() { this->reservedDays_ = nullptr;};
    inline int64_t reservedDays() const { DARABONBA_PTR_GET_DEFAULT(reservedDays_, 0L) };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute& setReservedDays(int64_t reservedDays) { DARABONBA_PTR_SET_VALUE(reservedDays_, reservedDays) };


    // secondarySize Field Functions 
    bool hasSecondarySize() const { return this->secondarySize_ != nullptr;};
    void deleteSecondarySize() { this->secondarySize_ = nullptr;};
    inline int64_t secondarySize() const { DARABONBA_PTR_GET_DEFAULT(secondarySize_, 0L) };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute& setSecondarySize(int64_t secondarySize) { DARABONBA_PTR_SET_VALUE(secondarySize_, secondarySize) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetRecycleBinAttributeResponseBodyRecycleBinAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The size of the archived data that is dumped to the recycle bin. Unit: bytes.
    std::shared_ptr<int64_t> archiveSize_ = nullptr;
    // The time at which the recycle bin was enabled.
    std::shared_ptr<string> enableTime_ = nullptr;
    // The retention period of the files in the recycle bin. Unit: days.
    // 
    // If the recycle bin is disabled, 0 is returned for this parameter.
    std::shared_ptr<int64_t> reservedDays_ = nullptr;
    // The size of the Infrequent Access (IA) data that is dumped to the recycle bin. Unit: bytes.
    std::shared_ptr<int64_t> secondarySize_ = nullptr;
    // The size of the files that are dumped to the recycle bin. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The status of the recycle bin.
    // 
    // Valid values:
    // 
    // *   Enable: The recycle bin is enabled.
    // *   Disable: The recycle bin is disabled.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
