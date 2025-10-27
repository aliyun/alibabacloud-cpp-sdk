// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDHYBRIDPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDHYBRIDPROXYREQUEST_HPP_
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
  class BindHybridProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindHybridProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(YundunUuids, yundunUuids_);
    };
    friend void from_json(const Darabonba::Json& j, BindHybridProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(YundunUuids, yundunUuids_);
    };
    BindHybridProxyRequest() = default ;
    BindHybridProxyRequest(const BindHybridProxyRequest &) = default ;
    BindHybridProxyRequest(BindHybridProxyRequest &&) = default ;
    BindHybridProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindHybridProxyRequest() = default ;
    BindHybridProxyRequest& operator=(const BindHybridProxyRequest &) = default ;
    BindHybridProxyRequest& operator=(BindHybridProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterName_ == nullptr
        && return this->yundunUuids_ == nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline BindHybridProxyRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // yundunUuids Field Functions 
    bool hasYundunUuids() const { return this->yundunUuids_ != nullptr;};
    void deleteYundunUuids() { this->yundunUuids_ = nullptr;};
    inline const vector<string> & yundunUuids() const { DARABONBA_PTR_GET_CONST(yundunUuids_, vector<string>) };
    inline vector<string> yundunUuids() { DARABONBA_PTR_GET(yundunUuids_, vector<string>) };
    inline BindHybridProxyRequest& setYundunUuids(const vector<string> & yundunUuids) { DARABONBA_PTR_SET_VALUE(yundunUuids_, yundunUuids) };
    inline BindHybridProxyRequest& setYundunUuids(vector<string> && yundunUuids) { DARABONBA_PTR_SET_RVALUE(yundunUuids_, yundunUuids) };


  protected:
    // The name of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The UUIDs of servers that you want to add to Security Center over the proxy server.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> yundunUuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
