// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLSOFTWARESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLSOFTWARESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class InstallSoftwaresShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallSoftwaresShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPackages, additionalPackagesShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallSoftwaresShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPackages, additionalPackagesShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    InstallSoftwaresShrinkRequest() = default ;
    InstallSoftwaresShrinkRequest(const InstallSoftwaresShrinkRequest &) = default ;
    InstallSoftwaresShrinkRequest(InstallSoftwaresShrinkRequest &&) = default ;
    InstallSoftwaresShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallSoftwaresShrinkRequest() = default ;
    InstallSoftwaresShrinkRequest& operator=(const InstallSoftwaresShrinkRequest &) = default ;
    InstallSoftwaresShrinkRequest& operator=(InstallSoftwaresShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPackagesShrink_ == nullptr
        && return this->clusterId_ == nullptr; };
    // additionalPackagesShrink Field Functions 
    bool hasAdditionalPackagesShrink() const { return this->additionalPackagesShrink_ != nullptr;};
    void deleteAdditionalPackagesShrink() { this->additionalPackagesShrink_ = nullptr;};
    inline string additionalPackagesShrink() const { DARABONBA_PTR_GET_DEFAULT(additionalPackagesShrink_, "") };
    inline InstallSoftwaresShrinkRequest& setAdditionalPackagesShrink(string additionalPackagesShrink) { DARABONBA_PTR_SET_VALUE(additionalPackagesShrink_, additionalPackagesShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline InstallSoftwaresShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // The information about the software systems that you want to install.
    std::shared_ptr<string> additionalPackagesShrink_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
