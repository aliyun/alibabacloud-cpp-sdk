// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class DeleteIpSetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpSetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpSetIds, ipSetIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpSetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpSetIds, ipSetIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteIpSetsRequest() = default ;
    DeleteIpSetsRequest(const DeleteIpSetsRequest &) = default ;
    DeleteIpSetsRequest(DeleteIpSetsRequest &&) = default ;
    DeleteIpSetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpSetsRequest() = default ;
    DeleteIpSetsRequest& operator=(const DeleteIpSetsRequest &) = default ;
    DeleteIpSetsRequest& operator=(DeleteIpSetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipSetIds_ == nullptr
        && this->regionId_ == nullptr; };
    // ipSetIds Field Functions 
    bool hasIpSetIds() const { return this->ipSetIds_ != nullptr;};
    void deleteIpSetIds() { this->ipSetIds_ = nullptr;};
    inline const vector<string> & getIpSetIds() const { DARABONBA_PTR_GET_CONST(ipSetIds_, vector<string>) };
    inline vector<string> getIpSetIds() { DARABONBA_PTR_GET(ipSetIds_, vector<string>) };
    inline DeleteIpSetsRequest& setIpSetIds(const vector<string> & ipSetIds) { DARABONBA_PTR_SET_VALUE(ipSetIds_, ipSetIds) };
    inline DeleteIpSetsRequest& setIpSetIds(vector<string> && ipSetIds) { DARABONBA_PTR_SET_RVALUE(ipSetIds_, ipSetIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteIpSetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the acceleration regions that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> ipSetIds_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
