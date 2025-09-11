// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLERECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class EnableRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(ReservedDays, reservedDays_);
    };
    friend void from_json(const Darabonba::Json& j, EnableRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(ReservedDays, reservedDays_);
    };
    EnableRecycleBinRequest() = default ;
    EnableRecycleBinRequest(const EnableRecycleBinRequest &) = default ;
    EnableRecycleBinRequest(EnableRecycleBinRequest &&) = default ;
    EnableRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableRecycleBinRequest() = default ;
    EnableRecycleBinRequest& operator=(const EnableRecycleBinRequest &) = default ;
    EnableRecycleBinRequest& operator=(EnableRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr
        && this->reservedDays_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline EnableRecycleBinRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // reservedDays Field Functions 
    bool hasReservedDays() const { return this->reservedDays_ != nullptr;};
    void deleteReservedDays() { this->reservedDays_ = nullptr;};
    inline int64_t reservedDays() const { DARABONBA_PTR_GET_DEFAULT(reservedDays_, 0L) };
    inline EnableRecycleBinRequest& setReservedDays(int64_t reservedDays) { DARABONBA_PTR_SET_VALUE(reservedDays_, reservedDays) };


  protected:
    // The ID of the file system for which you want to enable the recycle bin feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The retention period of the files in the recycle bin. Unit: days.
    // 
    // Valid values: 1 to 180.
    // 
    // Default value: 3.
    std::shared_ptr<int64_t> reservedDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
