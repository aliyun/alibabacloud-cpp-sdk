// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEMINIMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEMINIMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class SaveMinimapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveMinimapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveMinimapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    SaveMinimapRequest() = default ;
    SaveMinimapRequest(const SaveMinimapRequest &) = default ;
    SaveMinimapRequest(SaveMinimapRequest &&) = default ;
    SaveMinimapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveMinimapRequest() = default ;
    SaveMinimapRequest& operator=(const SaveMinimapRequest &) = default ;
    SaveMinimapRequest& operator=(SaveMinimapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->sceneId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline SaveMinimapRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline SaveMinimapRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
