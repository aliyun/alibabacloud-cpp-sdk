// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANTCLOUDAUTHSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANTCLOUDAUTHSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateAntCloudAuthSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAntCloudAuthSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAntCloudAuthSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    CreateAntCloudAuthSceneResponseBody() = default ;
    CreateAntCloudAuthSceneResponseBody(const CreateAntCloudAuthSceneResponseBody &) = default ;
    CreateAntCloudAuthSceneResponseBody(CreateAntCloudAuthSceneResponseBody &&) = default ;
    CreateAntCloudAuthSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAntCloudAuthSceneResponseBody() = default ;
    CreateAntCloudAuthSceneResponseBody& operator=(const CreateAntCloudAuthSceneResponseBody &) = default ;
    CreateAntCloudAuthSceneResponseBody& operator=(CreateAntCloudAuthSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sceneId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAntCloudAuthSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline CreateAntCloudAuthSceneResponseBody& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Instance ID.
    shared_ptr<int64_t> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
