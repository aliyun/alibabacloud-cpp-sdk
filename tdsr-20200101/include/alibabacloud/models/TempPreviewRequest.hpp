// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPPREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEMPPREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class TempPreviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempPreviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, TempPreviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    TempPreviewRequest() = default ;
    TempPreviewRequest(const TempPreviewRequest &) = default ;
    TempPreviewRequest(TempPreviewRequest &&) = default ;
    TempPreviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempPreviewRequest() = default ;
    TempPreviewRequest& operator=(const TempPreviewRequest &) = default ;
    TempPreviewRequest& operator=(TempPreviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline TempPreviewRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
