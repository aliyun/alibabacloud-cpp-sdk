// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKREACHABLEANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkReachableAnalysisRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateNetworkReachableAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkReachableAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPathId, networkPathId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateNetworkReachableAnalysisRequest() = default ;
    CreateNetworkReachableAnalysisRequest(const CreateNetworkReachableAnalysisRequest &) = default ;
    CreateNetworkReachableAnalysisRequest(CreateNetworkReachableAnalysisRequest &&) = default ;
    CreateNetworkReachableAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkReachableAnalysisRequest() = default ;
    CreateNetworkReachableAnalysisRequest& operator=(const CreateNetworkReachableAnalysisRequest &) = default ;
    CreateNetworkReachableAnalysisRequest& operator=(CreateNetworkReachableAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkPathId_ == nullptr
        && return this->regionId_ == nullptr && return this->tag_ == nullptr; };
    // networkPathId Field Functions 
    bool hasNetworkPathId() const { return this->networkPathId_ != nullptr;};
    void deleteNetworkPathId() { this->networkPathId_ = nullptr;};
    inline string networkPathId() const { DARABONBA_PTR_GET_DEFAULT(networkPathId_, "") };
    inline CreateNetworkReachableAnalysisRequest& setNetworkPathId(string networkPathId) { DARABONBA_PTR_SET_VALUE(networkPathId_, networkPathId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkReachableAnalysisRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkReachableAnalysisRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkReachableAnalysisRequestTag>) };
    inline vector<CreateNetworkReachableAnalysisRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkReachableAnalysisRequestTag>) };
    inline CreateNetworkReachableAnalysisRequest& setTag(const vector<CreateNetworkReachableAnalysisRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkReachableAnalysisRequest& setTag(vector<CreateNetworkReachableAnalysisRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the network path. You can call the [CreateNetworkPath](https://help.aliyun.com/document_detail/2366522.html) operation to obtain the ID of the network path.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkPathId_ = nullptr;
    // The ID of the region for which you want to create a task for analyzing network reachability.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags to add to the resource.
    std::shared_ptr<vector<CreateNetworkReachableAnalysisRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
