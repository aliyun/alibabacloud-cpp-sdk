// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTANTCLOUDAUTHSCENESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListAntCloudAuthScenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListAntCloudAuthScenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListAntCloudAuthScenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DescribeListAntCloudAuthScenesRequest() = default ;
    DescribeListAntCloudAuthScenesRequest(const DescribeListAntCloudAuthScenesRequest &) = default ;
    DescribeListAntCloudAuthScenesRequest(DescribeListAntCloudAuthScenesRequest &&) = default ;
    DescribeListAntCloudAuthScenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListAntCloudAuthScenesRequest() = default ;
    DescribeListAntCloudAuthScenesRequest& operator=(const DescribeListAntCloudAuthScenesRequest &) = default ;
    DescribeListAntCloudAuthScenesRequest& operator=(DescribeListAntCloudAuthScenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeListAntCloudAuthScenesRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // Scenario ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
