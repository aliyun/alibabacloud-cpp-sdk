// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBUNDLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBUNDLESREQUEST_HPP_
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
  class DeleteBundlesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBundlesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBundlesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteBundlesRequest() = default ;
    DeleteBundlesRequest(const DeleteBundlesRequest &) = default ;
    DeleteBundlesRequest(DeleteBundlesRequest &&) = default ;
    DeleteBundlesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBundlesRequest() = default ;
    DeleteBundlesRequest& operator=(const DeleteBundlesRequest &) = default ;
    DeleteBundlesRequest& operator=(DeleteBundlesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bundleId_ != nullptr
        && this->regionId_ != nullptr; };
    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline const vector<string> & bundleId() const { DARABONBA_PTR_GET_CONST(bundleId_, vector<string>) };
    inline vector<string> bundleId() { DARABONBA_PTR_GET(bundleId_, vector<string>) };
    inline DeleteBundlesRequest& setBundleId(const vector<string> & bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };
    inline DeleteBundlesRequest& setBundleId(vector<string> && bundleId) { DARABONBA_PTR_SET_RVALUE(bundleId_, bundleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteBundlesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the cloud computer templates. You can specify 1 to 100 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> bundleId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
