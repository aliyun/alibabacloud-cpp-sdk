// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTAINERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTAINERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateContainerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContainerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BuildPackId, buildPackId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContainerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BuildPackId, buildPackId_);
    };
    UpdateContainerRequest() = default ;
    UpdateContainerRequest(const UpdateContainerRequest &) = default ;
    UpdateContainerRequest(UpdateContainerRequest &&) = default ;
    UpdateContainerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContainerRequest() = default ;
    UpdateContainerRequest& operator=(const UpdateContainerRequest &) = default ;
    UpdateContainerRequest& operator=(UpdateContainerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->buildPackId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateContainerRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // buildPackId Field Functions 
    bool hasBuildPackId() const { return this->buildPackId_ != nullptr;};
    void deleteBuildPackId() { this->buildPackId_ = nullptr;};
    inline int32_t buildPackId() const { DARABONBA_PTR_GET_DEFAULT(buildPackId_, 0) };
    inline UpdateContainerRequest& setBuildPackId(int32_t buildPackId) { DARABONBA_PTR_SET_VALUE(buildPackId_, buildPackId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The build package number of EDAS Container. You can obtain the build package number in the Build package number column in the EDAS Container release notes table. For more information, see [Release notes for EDAS Container](https://help.aliyun.com/document_detail/92614.html).
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> buildPackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
