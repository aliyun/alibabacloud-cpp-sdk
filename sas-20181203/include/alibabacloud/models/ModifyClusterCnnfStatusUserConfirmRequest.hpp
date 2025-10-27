// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERCNNFSTATUSUSERCONFIRMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERCNNFSTATUSUSERCONFIRMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyClusterCnnfStatusUserConfirmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterCnnfStatusUserConfirmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(UserConfirm, userConfirm_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterCnnfStatusUserConfirmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(UserConfirm, userConfirm_);
    };
    ModifyClusterCnnfStatusUserConfirmRequest() = default ;
    ModifyClusterCnnfStatusUserConfirmRequest(const ModifyClusterCnnfStatusUserConfirmRequest &) = default ;
    ModifyClusterCnnfStatusUserConfirmRequest(ModifyClusterCnnfStatusUserConfirmRequest &&) = default ;
    ModifyClusterCnnfStatusUserConfirmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterCnnfStatusUserConfirmRequest() = default ;
    ModifyClusterCnnfStatusUserConfirmRequest& operator=(const ModifyClusterCnnfStatusUserConfirmRequest &) = default ;
    ModifyClusterCnnfStatusUserConfirmRequest& operator=(ModifyClusterCnnfStatusUserConfirmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && return this->userConfirm_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & clusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> clusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline ModifyClusterCnnfStatusUserConfirmRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline ModifyClusterCnnfStatusUserConfirmRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


    // userConfirm Field Functions 
    bool hasUserConfirm() const { return this->userConfirm_ != nullptr;};
    void deleteUserConfirm() { this->userConfirm_ = nullptr;};
    inline bool userConfirm() const { DARABONBA_PTR_GET_DEFAULT(userConfirm_, false) };
    inline ModifyClusterCnnfStatusUserConfirmRequest& setUserConfirm(bool userConfirm) { DARABONBA_PTR_SET_VALUE(userConfirm_, userConfirm) };


  protected:
    // The cluster IDs.
    std::shared_ptr<vector<string>> clusterIds_ = nullptr;
    // Specifies whether to fix the blocking status of the cluster. Valid values:
    // 
    // *   true: yes
    // *   false: no
    std::shared_ptr<bool> userConfirm_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
