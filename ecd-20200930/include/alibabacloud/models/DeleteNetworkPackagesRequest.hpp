// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKPACKAGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DeleteNetworkPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    DeleteNetworkPackagesRequest() = default ;
    DeleteNetworkPackagesRequest(const DeleteNetworkPackagesRequest &) = default ;
    DeleteNetworkPackagesRequest(DeleteNetworkPackagesRequest &&) = default ;
    DeleteNetworkPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkPackagesRequest() = default ;
    DeleteNetworkPackagesRequest& operator=(const DeleteNetworkPackagesRequest &) = default ;
    DeleteNetworkPackagesRequest& operator=(DeleteNetworkPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkPackageId_ != nullptr
        && this->regionId_ != nullptr && this->resellerOwnerUid_ != nullptr; };
    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline const vector<string> & networkPackageId() const { DARABONBA_PTR_GET_CONST(networkPackageId_, vector<string>) };
    inline vector<string> networkPackageId() { DARABONBA_PTR_GET(networkPackageId_, vector<string>) };
    inline DeleteNetworkPackagesRequest& setNetworkPackageId(const vector<string> & networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };
    inline DeleteNetworkPackagesRequest& setNetworkPackageId(vector<string> && networkPackageId) { DARABONBA_PTR_SET_RVALUE(networkPackageId_, networkPackageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNetworkPackagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline DeleteNetworkPackagesRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    // The IDs of premium bandwidth plans. You can specify one or more IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> networkPackageId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
