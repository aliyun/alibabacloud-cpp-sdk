// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOFFICESITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOFFICESITESREQUEST_HPP_
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
  class DeleteOfficeSitesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOfficeSitesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOfficeSitesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteOfficeSitesRequest() = default ;
    DeleteOfficeSitesRequest(const DeleteOfficeSitesRequest &) = default ;
    DeleteOfficeSitesRequest(DeleteOfficeSitesRequest &&) = default ;
    DeleteOfficeSitesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOfficeSitesRequest() = default ;
    DeleteOfficeSitesRequest& operator=(const DeleteOfficeSitesRequest &) = default ;
    DeleteOfficeSitesRequest& operator=(DeleteOfficeSitesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->officeSiteId_ == nullptr
        && return this->regionId_ == nullptr; };
    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline const vector<string> & officeSiteId() const { DARABONBA_PTR_GET_CONST(officeSiteId_, vector<string>) };
    inline vector<string> officeSiteId() { DARABONBA_PTR_GET(officeSiteId_, vector<string>) };
    inline DeleteOfficeSitesRequest& setOfficeSiteId(const vector<string> & officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };
    inline DeleteOfficeSitesRequest& setOfficeSiteId(vector<string> && officeSiteId) { DARABONBA_PTR_SET_RVALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteOfficeSitesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the office networks. You can specify 1 to 100 office networks.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> officeSiteId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
