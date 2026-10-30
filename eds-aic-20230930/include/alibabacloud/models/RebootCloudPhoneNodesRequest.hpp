// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBOOTCLOUDPHONENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REBOOTCLOUDPHONENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RebootCloudPhoneNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebootCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, RebootCloudPhoneNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    RebootCloudPhoneNodesRequest() = default ;
    RebootCloudPhoneNodesRequest(const RebootCloudPhoneNodesRequest &) = default ;
    RebootCloudPhoneNodesRequest(RebootCloudPhoneNodesRequest &&) = default ;
    RebootCloudPhoneNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebootCloudPhoneNodesRequest() = default ;
    RebootCloudPhoneNodesRequest& operator=(const RebootCloudPhoneNodesRequest &) = default ;
    RebootCloudPhoneNodesRequest& operator=(RebootCloudPhoneNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && this->nodeIds_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline RebootCloudPhoneNodesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline RebootCloudPhoneNodesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline RebootCloudPhoneNodesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // Specifies whether to force a restart. Valid values:
    // - true: Forces a restart without waiting for the instances to gracefully exit.
    // - false: Performs a graceful restart.
    // Default value: false.
    shared_ptr<bool> force_ {};
    // The IDs of the cloud phone matrices. Valid values of N: 1 to 100.
    shared_ptr<vector<string>> nodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
