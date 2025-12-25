// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRELATIVEPOSITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRELATIVEPOSITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class AddRelativePositionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRelativePositionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RelativePosition, relativePosition_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRelativePositionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RelativePosition, relativePosition_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    AddRelativePositionRequest() = default ;
    AddRelativePositionRequest(const AddRelativePositionRequest &) = default ;
    AddRelativePositionRequest(AddRelativePositionRequest &&) = default ;
    AddRelativePositionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRelativePositionRequest() = default ;
    AddRelativePositionRequest& operator=(const AddRelativePositionRequest &) = default ;
    AddRelativePositionRequest& operator=(AddRelativePositionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relativePosition_ == nullptr
        && return this->sceneId_ == nullptr; };
    // relativePosition Field Functions 
    bool hasRelativePosition() const { return this->relativePosition_ != nullptr;};
    void deleteRelativePosition() { this->relativePosition_ = nullptr;};
    inline string relativePosition() const { DARABONBA_PTR_GET_DEFAULT(relativePosition_, "") };
    inline AddRelativePositionRequest& setRelativePosition(string relativePosition) { DARABONBA_PTR_SET_VALUE(relativePosition_, relativePosition) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline AddRelativePositionRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> relativePosition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
