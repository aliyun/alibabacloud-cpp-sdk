// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMETRICRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMETRICRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMetricRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMetricRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMetricRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteMetricRulesRequest() = default ;
    DeleteMetricRulesRequest(const DeleteMetricRulesRequest &) = default ;
    DeleteMetricRulesRequest(DeleteMetricRulesRequest &&) = default ;
    DeleteMetricRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMetricRulesRequest() = default ;
    DeleteMetricRulesRequest& operator=(const DeleteMetricRulesRequest &) = default ;
    DeleteMetricRulesRequest& operator=(DeleteMetricRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->id_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteMetricRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DeleteMetricRulesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<string> & getId() const { DARABONBA_PTR_GET_CONST(id_, vector<string>) };
    inline vector<string> getId() { DARABONBA_PTR_GET(id_, vector<string>) };
    inline DeleteMetricRulesRequest& setId(const vector<string> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline DeleteMetricRulesRequest& setId(vector<string> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteMetricRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // - **true**: A check request is sent, and no security group is bound to the instance. The system checks whether required parameters are specified, the request format is valid, and service limits are met. If the check fails, the corresponding error is returned. If the check succeeds, the `DryRunOperation` error code is returned.
    // - **false** (default): A normal request is sent. If the check succeeds, an HTTP 2xx status code is returned and the operation is directly performed.
    shared_ptr<bool> dryRun_ {};
    // The IDs of the alert rules to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> id_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
