// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBSNBYRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBSNBYRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bsn20150512
{
namespace Models
{
  class GetBsnByResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBsnByResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliuid, aliuid_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBsnByResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliuid, aliuid_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    GetBsnByResourceRequest() = default ;
    GetBsnByResourceRequest(const GetBsnByResourceRequest &) = default ;
    GetBsnByResourceRequest(GetBsnByResourceRequest &&) = default ;
    GetBsnByResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBsnByResourceRequest() = default ;
    GetBsnByResourceRequest& operator=(const GetBsnByResourceRequest &) = default ;
    GetBsnByResourceRequest& operator=(GetBsnByResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliuid_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // aliuid Field Functions 
    bool hasAliuid() const { return this->aliuid_ != nullptr;};
    void deleteAliuid() { this->aliuid_ = nullptr;};
    inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
    inline GetBsnByResourceRequest& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetBsnByResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int32_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0) };
    inline GetBsnByResourceRequest& setResourceType(int32_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> aliuid_ {};
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bsn20150512
#endif
