// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESETREQUESTQUOTA_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESETREQUESTQUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateFilesetRequestQuota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFilesetRequestQuota& obj) { 
      DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFilesetRequestQuota& obj) { 
      DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
      DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
    };
    CreateFilesetRequestQuota() = default ;
    CreateFilesetRequestQuota(const CreateFilesetRequestQuota &) = default ;
    CreateFilesetRequestQuota(CreateFilesetRequestQuota &&) = default ;
    CreateFilesetRequestQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFilesetRequestQuota() = default ;
    CreateFilesetRequestQuota& operator=(const CreateFilesetRequestQuota &) = default ;
    CreateFilesetRequestQuota& operator=(CreateFilesetRequestQuota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileCountLimit_ == nullptr
        && return this->sizeLimit_ == nullptr; };
    // fileCountLimit Field Functions 
    bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
    void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
    inline int64_t fileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
    inline CreateFilesetRequestQuota& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


    // sizeLimit Field Functions 
    bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
    void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
    inline int64_t sizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
    inline CreateFilesetRequestQuota& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


  protected:
    // The file quantity quota. Valid values:
    // 
    // *   Minimum value: 100000.
    // *   Maximum value: 10000000000.
    std::shared_ptr<int64_t> fileCountLimit_ = nullptr;
    // The total quota capacity limit. Unit: bytes.
    // 
    // Valid values:
    // 
    // *   Minimum value: 10,737,418,240 (10 GiB).
    // *   Step size: 1073741824 (1 GiB).
    std::shared_ptr<int64_t> sizeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
