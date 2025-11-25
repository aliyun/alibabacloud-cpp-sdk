// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDASSETSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCloudAssetSummaryRequestCloudAssetTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCloudAssetSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudAssetSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudAssetSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAssetTypes, cloudAssetTypes_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    GetCloudAssetSummaryRequest() = default ;
    GetCloudAssetSummaryRequest(const GetCloudAssetSummaryRequest &) = default ;
    GetCloudAssetSummaryRequest(GetCloudAssetSummaryRequest &&) = default ;
    GetCloudAssetSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudAssetSummaryRequest() = default ;
    GetCloudAssetSummaryRequest& operator=(const GetCloudAssetSummaryRequest &) = default ;
    GetCloudAssetSummaryRequest& operator=(GetCloudAssetSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAssetTypes_ == nullptr
        && return this->vendors_ == nullptr; };
    // cloudAssetTypes Field Functions 
    bool hasCloudAssetTypes() const { return this->cloudAssetTypes_ != nullptr;};
    void deleteCloudAssetTypes() { this->cloudAssetTypes_ = nullptr;};
    inline const vector<GetCloudAssetSummaryRequestCloudAssetTypes> & cloudAssetTypes() const { DARABONBA_PTR_GET_CONST(cloudAssetTypes_, vector<GetCloudAssetSummaryRequestCloudAssetTypes>) };
    inline vector<GetCloudAssetSummaryRequestCloudAssetTypes> cloudAssetTypes() { DARABONBA_PTR_GET(cloudAssetTypes_, vector<GetCloudAssetSummaryRequestCloudAssetTypes>) };
    inline GetCloudAssetSummaryRequest& setCloudAssetTypes(const vector<GetCloudAssetSummaryRequestCloudAssetTypes> & cloudAssetTypes) { DARABONBA_PTR_SET_VALUE(cloudAssetTypes_, cloudAssetTypes) };
    inline GetCloudAssetSummaryRequest& setCloudAssetTypes(vector<GetCloudAssetSummaryRequestCloudAssetTypes> && cloudAssetTypes) { DARABONBA_PTR_SET_RVALUE(cloudAssetTypes_, cloudAssetTypes) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<int32_t> & vendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<int32_t>) };
    inline vector<int32_t> vendors() { DARABONBA_PTR_GET(vendors_, vector<int32_t>) };
    inline GetCloudAssetSummaryRequest& setVendors(const vector<int32_t> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline GetCloudAssetSummaryRequest& setVendors(vector<int32_t> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // List of asset type information for cloud assets
    std::shared_ptr<vector<GetCloudAssetSummaryRequestCloudAssetTypes>> cloudAssetTypes_ = nullptr;
    // List of cloud vendors to be queried.
    std::shared_ptr<vector<int32_t>> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
