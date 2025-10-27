// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATASCOPES_HPP_
#define ALIBABACLOUD_MODELS_GETOPASTRATEGYDETAILNEWRESPONSEBODYDATASCOPES_HPP_
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
  class GetOpaStrategyDetailNewResponseBodyDataScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpaStrategyDetailNewResponseBodyDataScopes& obj) { 
      DARABONBA_PTR_TO_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
      DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpaStrategyDetailNewResponseBodyDataScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
      DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
    };
    GetOpaStrategyDetailNewResponseBodyDataScopes() = default ;
    GetOpaStrategyDetailNewResponseBodyDataScopes(const GetOpaStrategyDetailNewResponseBodyDataScopes &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataScopes(GetOpaStrategyDetailNewResponseBodyDataScopes &&) = default ;
    GetOpaStrategyDetailNewResponseBodyDataScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpaStrategyDetailNewResponseBodyDataScopes() = default ;
    GetOpaStrategyDetailNewResponseBodyDataScopes& operator=(const GetOpaStrategyDetailNewResponseBodyDataScopes &) = default ;
    GetOpaStrategyDetailNewResponseBodyDataScopes& operator=(GetOpaStrategyDetailNewResponseBodyDataScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackPolicyInstanceId_ == nullptr
        && return this->allNamespace_ == nullptr && return this->clusterId_ == nullptr && return this->namespaceList_ == nullptr; };
    // ackPolicyInstanceId Field Functions 
    bool hasAckPolicyInstanceId() const { return this->ackPolicyInstanceId_ != nullptr;};
    void deleteAckPolicyInstanceId() { this->ackPolicyInstanceId_ = nullptr;};
    inline string ackPolicyInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ackPolicyInstanceId_, "") };
    inline GetOpaStrategyDetailNewResponseBodyDataScopes& setAckPolicyInstanceId(string ackPolicyInstanceId) { DARABONBA_PTR_SET_VALUE(ackPolicyInstanceId_, ackPolicyInstanceId) };


    // allNamespace Field Functions 
    bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
    void deleteAllNamespace() { this->allNamespace_ = nullptr;};
    inline int32_t allNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
    inline GetOpaStrategyDetailNewResponseBodyDataScopes& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetOpaStrategyDetailNewResponseBodyDataScopes& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<string> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
    inline vector<string> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
    inline GetOpaStrategyDetailNewResponseBodyDataScopes& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline GetOpaStrategyDetailNewResponseBodyDataScopes& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


  protected:
    // The rule instance ID of the cluster.
    std::shared_ptr<string> ackPolicyInstanceId_ = nullptr;
    // Indicates whether all namespaces are included. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> allNamespace_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespaces.
    std::shared_ptr<vector<string>> namespaceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
