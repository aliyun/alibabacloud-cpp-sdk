// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELDEPLOYMENTPROFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELDEPLOYMENTPROFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class ListModelDeploymentProfilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelDeploymentProfilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizKey, bizKey_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelDeploymentProfilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizKey, bizKey_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
    };
    ListModelDeploymentProfilesRequest() = default ;
    ListModelDeploymentProfilesRequest(const ListModelDeploymentProfilesRequest &) = default ;
    ListModelDeploymentProfilesRequest(ListModelDeploymentProfilesRequest &&) = default ;
    ListModelDeploymentProfilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelDeploymentProfilesRequest() = default ;
    ListModelDeploymentProfilesRequest& operator=(const ListModelDeploymentProfilesRequest &) = default ;
    ListModelDeploymentProfilesRequest& operator=(ListModelDeploymentProfilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizKey_ == nullptr
        && this->modelVersion_ == nullptr; };
    // bizKey Field Functions 
    bool hasBizKey() const { return this->bizKey_ != nullptr;};
    void deleteBizKey() { this->bizKey_ = nullptr;};
    inline string getBizKey() const { DARABONBA_PTR_GET_DEFAULT(bizKey_, "") };
    inline ListModelDeploymentProfilesRequest& setBizKey(string bizKey) { DARABONBA_PTR_SET_VALUE(bizKey_, bizKey) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline ListModelDeploymentProfilesRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


  protected:
    shared_ptr<string> bizKey_ {};
    shared_ptr<string> modelVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
