// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DeleteNetworkPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPathIds, networkPathIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPathIds, networkPathIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteNetworkPathRequest() = default ;
    DeleteNetworkPathRequest(const DeleteNetworkPathRequest &) = default ;
    DeleteNetworkPathRequest(DeleteNetworkPathRequest &&) = default ;
    DeleteNetworkPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkPathRequest() = default ;
    DeleteNetworkPathRequest& operator=(const DeleteNetworkPathRequest &) = default ;
    DeleteNetworkPathRequest& operator=(DeleteNetworkPathRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPathIds_ == nullptr
        && this->regionId_ == nullptr; };
    // networkPathIds Field Functions 
    bool hasNetworkPathIds() const { return this->networkPathIds_ != nullptr;};
    void deleteNetworkPathIds() { this->networkPathIds_ = nullptr;};
    inline const vector<string> & getNetworkPathIds() const { DARABONBA_PTR_GET_CONST(networkPathIds_, vector<string>) };
    inline vector<string> getNetworkPathIds() { DARABONBA_PTR_GET(networkPathIds_, vector<string>) };
    inline DeleteNetworkPathRequest& setNetworkPathIds(const vector<string> & networkPathIds) { DARABONBA_PTR_SET_VALUE(networkPathIds_, networkPathIds) };
    inline DeleteNetworkPathRequest& setNetworkPathIds(vector<string> && networkPathIds) { DARABONBA_PTR_SET_RVALUE(networkPathIds_, networkPathIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNetworkPathRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of network paths.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> networkPathIds_ {};
    // The region ID of the network path that you want to delete.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
