// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class UpdateConnDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnData, connData_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnData, connData_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    UpdateConnDataRequest() = default ;
    UpdateConnDataRequest(const UpdateConnDataRequest &) = default ;
    UpdateConnDataRequest(UpdateConnDataRequest &&) = default ;
    UpdateConnDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnDataRequest() = default ;
    UpdateConnDataRequest& operator=(const UpdateConnDataRequest &) = default ;
    UpdateConnDataRequest& operator=(UpdateConnDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connData_ == nullptr
        && return this->sceneId_ == nullptr; };
    // connData Field Functions 
    bool hasConnData() const { return this->connData_ != nullptr;};
    void deleteConnData() { this->connData_ = nullptr;};
    inline string connData() const { DARABONBA_PTR_GET_DEFAULT(connData_, "") };
    inline UpdateConnDataRequest& setConnData(string connData) { DARABONBA_PTR_SET_VALUE(connData_, connData) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateConnDataRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> connData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
