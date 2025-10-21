// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELINSTANCEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMODELINSTANCEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetModelInstanceInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelInstanceInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_TO_JSON(SceneType, sceneType_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelInstanceInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelInstanceId, modelInstanceId_);
      DARABONBA_PTR_FROM_JSON(SceneType, sceneType_);
    };
    GetModelInstanceInfoRequest() = default ;
    GetModelInstanceInfoRequest(const GetModelInstanceInfoRequest &) = default ;
    GetModelInstanceInfoRequest(GetModelInstanceInfoRequest &&) = default ;
    GetModelInstanceInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelInstanceInfoRequest() = default ;
    GetModelInstanceInfoRequest& operator=(const GetModelInstanceInfoRequest &) = default ;
    GetModelInstanceInfoRequest& operator=(GetModelInstanceInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelInstanceId_ == nullptr
        && return this->sceneType_ == nullptr; };
    // modelInstanceId Field Functions 
    bool hasModelInstanceId() const { return this->modelInstanceId_ != nullptr;};
    void deleteModelInstanceId() { this->modelInstanceId_ = nullptr;};
    inline int64_t modelInstanceId() const { DARABONBA_PTR_GET_DEFAULT(modelInstanceId_, 0L) };
    inline GetModelInstanceInfoRequest& setModelInstanceId(int64_t modelInstanceId) { DARABONBA_PTR_SET_VALUE(modelInstanceId_, modelInstanceId) };


    // sceneType Field Functions 
    bool hasSceneType() const { return this->sceneType_ != nullptr;};
    void deleteSceneType() { this->sceneType_ = nullptr;};
    inline int32_t sceneType() const { DARABONBA_PTR_GET_DEFAULT(sceneType_, 0) };
    inline GetModelInstanceInfoRequest& setSceneType(int32_t sceneType) { DARABONBA_PTR_SET_VALUE(sceneType_, sceneType) };


  protected:
    std::shared_ptr<int64_t> modelInstanceId_ = nullptr;
    std::shared_ptr<int32_t> sceneType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
