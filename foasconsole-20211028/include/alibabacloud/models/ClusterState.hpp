// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERSTATE_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERSTATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ClusterStage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ClusterState : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterState& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterStage, clusterStage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterState& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterStage, clusterStage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
    };
    ClusterState() = default ;
    ClusterState(const ClusterState &) = default ;
    ClusterState(ClusterState &&) = default ;
    ClusterState(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterState() = default ;
    ClusterState& operator=(const ClusterState &) = default ;
    ClusterState& operator=(ClusterState &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterStage_ == nullptr
        && this->status_ == nullptr && this->subStatus_ == nullptr; };
    // clusterStage Field Functions 
    bool hasClusterStage() const { return this->clusterStage_ != nullptr;};
    void deleteClusterStage() { this->clusterStage_ = nullptr;};
    inline const ClusterStage & getClusterStage() const { DARABONBA_PTR_GET_CONST(clusterStage_, ClusterStage) };
    inline ClusterStage getClusterStage() { DARABONBA_PTR_GET(clusterStage_, ClusterStage) };
    inline ClusterState& setClusterStage(const ClusterStage & clusterStage) { DARABONBA_PTR_SET_VALUE(clusterStage_, clusterStage) };
    inline ClusterState& setClusterStage(ClusterStage && clusterStage) { DARABONBA_PTR_SET_RVALUE(clusterStage_, clusterStage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ClusterState& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline ClusterState& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


  protected:
    shared_ptr<ClusterStage> clusterStage_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> subStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
