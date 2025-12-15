// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLSOFTWARESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLSOFTWARESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UninstallSoftwaresRequestAdditionalPackages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UninstallSoftwaresRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallSoftwaresRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallSoftwaresRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackages_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UninstallSoftwaresRequest() = default ;
    UninstallSoftwaresRequest(const UninstallSoftwaresRequest &) = default ;
    UninstallSoftwaresRequest(UninstallSoftwaresRequest &&) = default ;
    UninstallSoftwaresRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallSoftwaresRequest() = default ;
    UninstallSoftwaresRequest& operator=(const UninstallSoftwaresRequest &) = default ;
    UninstallSoftwaresRequest& operator=(UninstallSoftwaresRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackages_ == nullptr
        && return this->clusterId_ == nullptr; };
    // additionalPackages Field Functions 
    bool hasAdditionalPackages() const { return this->additionalPackages_ != nullptr;};
    void deleteAdditionalPackages() { this->additionalPackages_ = nullptr;};
    inline const vector<UninstallSoftwaresRequestAdditionalPackages> & additionalPackages() const { DARABONBA_PTR_GET_CONST(additionalPackages_, vector<UninstallSoftwaresRequestAdditionalPackages>) };
    inline vector<UninstallSoftwaresRequestAdditionalPackages> additionalPackages() { DARABONBA_PTR_GET(additionalPackages_, vector<UninstallSoftwaresRequestAdditionalPackages>) };
    inline UninstallSoftwaresRequest& setAdditionalPackages(const vector<UninstallSoftwaresRequestAdditionalPackages> & additionalPackages) { DARABONBA_PTR_SET_VALUE(additionalPackages_, additionalPackages) };
    inline UninstallSoftwaresRequest& setAdditionalPackages(vector<UninstallSoftwaresRequestAdditionalPackages> && additionalPackages) { DARABONBA_PTR_SET_RVALUE(additionalPackages_, additionalPackages) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UninstallSoftwaresRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The information about the software systems that you want to uninstall.
    std::shared_ptr<vector<UninstallSoftwaresRequestAdditionalPackages>> additionalPackages_ = nullptr;
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
