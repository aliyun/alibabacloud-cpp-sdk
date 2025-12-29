// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKERNELRELEASENOTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKERNELRELEASENOTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeKernelReleaseNotesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKernelReleaseNotesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKernelReleaseNotesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KernelVersion, kernelVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeKernelReleaseNotesRequest() = default ;
    DescribeKernelReleaseNotesRequest(const DescribeKernelReleaseNotesRequest &) = default ;
    DescribeKernelReleaseNotesRequest(DescribeKernelReleaseNotesRequest &&) = default ;
    DescribeKernelReleaseNotesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKernelReleaseNotesRequest() = default ;
    DescribeKernelReleaseNotesRequest& operator=(const DescribeKernelReleaseNotesRequest &) = default ;
    DescribeKernelReleaseNotesRequest& operator=(DescribeKernelReleaseNotesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kernelVersion_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // kernelVersion Field Functions 
    bool hasKernelVersion() const { return this->kernelVersion_ != nullptr;};
    void deleteKernelVersion() { this->kernelVersion_ = nullptr;};
    inline string getKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(kernelVersion_, "") };
    inline DescribeKernelReleaseNotesRequest& setKernelVersion(string kernelVersion) { DARABONBA_PTR_SET_VALUE(kernelVersion_, kernelVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeKernelReleaseNotesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeKernelReleaseNotesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeKernelReleaseNotesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeKernelReleaseNotesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The minor version number of the instance. Example: **mongodb_20180522_0.4.8**.
    // 
    // *   This parameter is required. After you specify a version number for this parameter in a request, the release notes of the versions later than this version are returned.
    shared_ptr<string> kernelVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
