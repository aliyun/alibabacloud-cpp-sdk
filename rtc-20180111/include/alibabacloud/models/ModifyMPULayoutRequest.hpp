// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMPULAYOUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMPULAYOUTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyMPULayoutRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMPULayoutRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AudioMixCount, audioMixCount_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Panes, panes_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMPULayoutRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AudioMixCount, audioMixCount_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Panes, panes_);
    };
    ModifyMPULayoutRequest() = default ;
    ModifyMPULayoutRequest(const ModifyMPULayoutRequest &) = default ;
    ModifyMPULayoutRequest(ModifyMPULayoutRequest &&) = default ;
    ModifyMPULayoutRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMPULayoutRequest() = default ;
    ModifyMPULayoutRequest& operator=(const ModifyMPULayoutRequest &) = default ;
    ModifyMPULayoutRequest& operator=(ModifyMPULayoutRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Panes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Panes& obj) { 
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(MajorPane, majorPane_);
        DARABONBA_PTR_TO_JSON(PaneId, paneId_);
        DARABONBA_PTR_TO_JSON(Width, width_);
        DARABONBA_PTR_TO_JSON(X, x_);
        DARABONBA_PTR_TO_JSON(Y, y_);
        DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
      };
      friend void from_json(const Darabonba::Json& j, Panes& obj) { 
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(MajorPane, majorPane_);
        DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
        DARABONBA_PTR_FROM_JSON(X, x_);
        DARABONBA_PTR_FROM_JSON(Y, y_);
        DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
      };
      Panes() = default ;
      Panes(const Panes &) = default ;
      Panes(Panes &&) = default ;
      Panes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Panes() = default ;
      Panes& operator=(const Panes &) = default ;
      Panes& operator=(Panes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->height_ == nullptr
        && this->majorPane_ == nullptr && this->paneId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
      inline Panes& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // majorPane Field Functions 
      bool hasMajorPane() const { return this->majorPane_ != nullptr;};
      void deleteMajorPane() { this->majorPane_ = nullptr;};
      inline int32_t getMajorPane() const { DARABONBA_PTR_GET_DEFAULT(majorPane_, 0) };
      inline Panes& setMajorPane(int32_t majorPane) { DARABONBA_PTR_SET_VALUE(majorPane_, majorPane) };


      // paneId Field Functions 
      bool hasPaneId() const { return this->paneId_ != nullptr;};
      void deletePaneId() { this->paneId_ = nullptr;};
      inline int32_t getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
      inline Panes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
      inline Panes& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      // x Field Functions 
      bool hasX() const { return this->x_ != nullptr;};
      void deleteX() { this->x_ = nullptr;};
      inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
      inline Panes& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


      // y Field Functions 
      bool hasY() const { return this->y_ != nullptr;};
      void deleteY() { this->y_ = nullptr;};
      inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
      inline Panes& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


      // ZOrder Field Functions 
      bool hasZOrder() const { return this->ZOrder_ != nullptr;};
      void deleteZOrder() { this->ZOrder_ = nullptr;};
      inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
      inline Panes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


    protected:
      shared_ptr<float> height_ {};
      shared_ptr<int32_t> majorPane_ {};
      shared_ptr<int32_t> paneId_ {};
      shared_ptr<float> width_ {};
      shared_ptr<float> x_ {};
      shared_ptr<float> y_ {};
      shared_ptr<int32_t> ZOrder_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->audioMixCount_ == nullptr && this->layoutId_ == nullptr && this->name_ == nullptr && this->ownerId_ == nullptr && this->panes_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyMPULayoutRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // audioMixCount Field Functions 
    bool hasAudioMixCount() const { return this->audioMixCount_ != nullptr;};
    void deleteAudioMixCount() { this->audioMixCount_ = nullptr;};
    inline int32_t getAudioMixCount() const { DARABONBA_PTR_GET_DEFAULT(audioMixCount_, 0) };
    inline ModifyMPULayoutRequest& setAudioMixCount(int32_t audioMixCount) { DARABONBA_PTR_SET_VALUE(audioMixCount_, audioMixCount) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline int64_t getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, 0L) };
    inline ModifyMPULayoutRequest& setLayoutId(int64_t layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyMPULayoutRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyMPULayoutRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // panes Field Functions 
    bool hasPanes() const { return this->panes_ != nullptr;};
    void deletePanes() { this->panes_ = nullptr;};
    inline const vector<ModifyMPULayoutRequest::Panes> & getPanes() const { DARABONBA_PTR_GET_CONST(panes_, vector<ModifyMPULayoutRequest::Panes>) };
    inline vector<ModifyMPULayoutRequest::Panes> getPanes() { DARABONBA_PTR_GET(panes_, vector<ModifyMPULayoutRequest::Panes>) };
    inline ModifyMPULayoutRequest& setPanes(const vector<ModifyMPULayoutRequest::Panes> & panes) { DARABONBA_PTR_SET_VALUE(panes_, panes) };
    inline ModifyMPULayoutRequest& setPanes(vector<ModifyMPULayoutRequest::Panes> && panes) { DARABONBA_PTR_SET_RVALUE(panes_, panes) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<int32_t> audioMixCount_ {};
    // This parameter is required.
    shared_ptr<int64_t> layoutId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<vector<ModifyMPULayoutRequest::Panes>> panes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
