// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDHYBRIDPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDHYBRIDPROXYREQUEST_HPP_
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
  class UnBindHybridProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnBindHybridProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(YundunUuids, yundunUuids_);
    };
    friend void from_json(const Darabonba::Json& j, UnBindHybridProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(YundunUuids, yundunUuids_);
    };
    UnBindHybridProxyRequest() = default ;
    UnBindHybridProxyRequest(const UnBindHybridProxyRequest &) = default ;
    UnBindHybridProxyRequest(UnBindHybridProxyRequest &&) = default ;
    UnBindHybridProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnBindHybridProxyRequest() = default ;
    UnBindHybridProxyRequest& operator=(const UnBindHybridProxyRequest &) = default ;
    UnBindHybridProxyRequest& operator=(UnBindHybridProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr
        && this->yundunUuids_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UnBindHybridProxyRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // yundunUuids Field Functions 
    bool hasYundunUuids() const { return this->yundunUuids_ != nullptr;};
    void deleteYundunUuids() { this->yundunUuids_ = nullptr;};
    inline const vector<string> & yundunUuids() const { DARABONBA_PTR_GET_CONST(yundunUuids_, vector<string>) };
    inline vector<string> yundunUuids() { DARABONBA_PTR_GET(yundunUuids_, vector<string>) };
    inline UnBindHybridProxyRequest& setYundunUuids(const vector<string> & yundunUuids) { DARABONBA_PTR_SET_VALUE(yundunUuids_, yundunUuids) };
    inline UnBindHybridProxyRequest& setYundunUuids(vector<string> && yundunUuids) { DARABONBA_PTR_SET_RVALUE(yundunUuids_, yundunUuids) };


  protected:
    // The name of the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The UUIDs of the servers that you want to remove from the proxy cluster.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> yundunUuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
