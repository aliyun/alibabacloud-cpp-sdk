// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESYSTEMDISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REPLACESYSTEMDISKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReplaceSystemDiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceSystemDiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceSystemDiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ReplaceSystemDiskResponseBody() = default ;
    ReplaceSystemDiskResponseBody(const ReplaceSystemDiskResponseBody &) = default ;
    ReplaceSystemDiskResponseBody(ReplaceSystemDiskResponseBody &&) = default ;
    ReplaceSystemDiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceSystemDiskResponseBody() = default ;
    ReplaceSystemDiskResponseBody& operator=(const ReplaceSystemDiskResponseBody &) = default ;
    ReplaceSystemDiskResponseBody& operator=(ReplaceSystemDiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskId_ != nullptr
        && this->requestId_ != nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline ReplaceSystemDiskResponseBody& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReplaceSystemDiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the new system disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
