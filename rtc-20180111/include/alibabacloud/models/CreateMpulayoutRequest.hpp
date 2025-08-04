// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMPULAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMPULAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMPULayoutRequestPanes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateMPULayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMPULayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AudioMixCount, audioMixCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMPULayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AudioMixCount, audioMixCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    CreateMPULayoutRequest() = default ;
    CreateMPULayoutRequest(const CreateMPULayoutRequest &) = default ;
    CreateMPULayoutRequest(CreateMPULayoutRequest &&) = default ;
    CreateMPULayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMPULayoutRequest() = default ;
    CreateMPULayoutRequest& operator=(const CreateMPULayoutRequest &) = default ;
    CreateMPULayoutRequest& operator=(CreateMPULayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->audioMixCount_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr && this->panes_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMPULayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // audioMixCount Field Functions 
    bool hasAudioMixCount() const { return this->audioMixCount_ != nullptr;};
    void deleteAudioMixCount() { this->audioMixCount_ = nullptr;};
    inline int32_t audioMixCount() const { DARABONBA_PTR_GET_DEFAULT(audioMixCount_, 0) };
    inline CreateMPULayoutRequest& setAudioMixCount(int32_t audioMixCount) { DARABONBA_PTR_SET_VALUE(audioMixCount_, audioMixCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMPULayoutRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMPULayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<CreateMPULayoutRequestPanes> & panes() const { DARABONBA_PTR_GET_CONST(panes_, vector<CreateMPULayoutRequestPanes>) };
    inline vector<CreateMPULayoutRequestPanes> panes() { DARABONBA_PTR_GET(panes_, vector<CreateMPULayoutRequestPanes>) };
    inline CreateMPULayoutRequest& setPanes(const vector<CreateMPULayoutRequestPanes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline CreateMPULayoutRequest& setPanes(vector<CreateMPULayoutRequestPanes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> audioMixCount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateMPULayoutRequestPanes>> panes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
