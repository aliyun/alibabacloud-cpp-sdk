// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNINSTALLSOFTWARESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNINSTALLSOFTWARESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UninstallSoftwaresShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UninstallSoftwaresShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackagesShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, UninstallSoftwaresShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackagesShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    UninstallSoftwaresShrinkRequest() = default ;
    UninstallSoftwaresShrinkRequest(const UninstallSoftwaresShrinkRequest &) = default ;
    UninstallSoftwaresShrinkRequest(UninstallSoftwaresShrinkRequest &&) = default ;
    UninstallSoftwaresShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UninstallSoftwaresShrinkRequest() = default ;
    UninstallSoftwaresShrinkRequest& operator=(const UninstallSoftwaresShrinkRequest &) = default ;
    UninstallSoftwaresShrinkRequest& operator=(UninstallSoftwaresShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackagesShrink_ == nullptr
        && this->clusterId_ == nullptr; };
    // additionalPackagesShrink Field Functions 
    bool hasAdditionalPackagesShrink() const { return this->additionalPackagesShrink_ != nullptr;};
    void deleteAdditionalPackagesShrink() { this->additionalPackagesShrink_ = nullptr;};
    inline string getAdditionalPackagesShrink() const { DARABONBA_PTR_GET_DEFAULT(additionalPackagesShrink_, "") };
    inline UninstallSoftwaresShrinkRequest& setAdditionalPackagesShrink(string additionalPackagesShrink) { DARABONBA_PTR_SET_VALUE(additionalPackagesShrink_, additionalPackagesShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UninstallSoftwaresShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The information about the software systems that you want to uninstall.
    shared_ptr<string> additionalPackagesShrink_ {};
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
