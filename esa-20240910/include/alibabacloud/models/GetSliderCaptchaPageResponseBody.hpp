// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSLIDERCAPTCHAPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSLIDERCAPTCHAPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetSliderCaptchaPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSliderCaptchaPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(ForceLanguage, forceLanguage_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetSliderCaptchaPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(ForceLanguage, forceLanguage_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIds_);
    };
    GetSliderCaptchaPageResponseBody() = default ;
    GetSliderCaptchaPageResponseBody(const GetSliderCaptchaPageResponseBody &) = default ;
    GetSliderCaptchaPageResponseBody(GetSliderCaptchaPageResponseBody &&) = default ;
    GetSliderCaptchaPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSliderCaptchaPageResponseBody() = default ;
    GetSliderCaptchaPageResponseBody& operator=(const GetSliderCaptchaPageResponseBody &) = default ;
    GetSliderCaptchaPageResponseBody& operator=(GetSliderCaptchaPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(En, en_);
        DARABONBA_PTR_TO_JSON(Zh, zh_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(En, en_);
        DARABONBA_PTR_FROM_JSON(Zh, zh_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zh : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zh& obj) { 
          DARABONBA_PTR_TO_JSON(ShowFooter, showFooter_);
          DARABONBA_PTR_TO_JSON(ShowRequestId, showRequestId_);
          DARABONBA_PTR_TO_JSON(SliderColor, sliderColor_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Zh& obj) { 
          DARABONBA_PTR_FROM_JSON(ShowFooter, showFooter_);
          DARABONBA_PTR_FROM_JSON(ShowRequestId, showRequestId_);
          DARABONBA_PTR_FROM_JSON(SliderColor, sliderColor_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Zh() = default ;
        Zh(const Zh &) = default ;
        Zh(Zh &&) = default ;
        Zh(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zh() = default ;
        Zh& operator=(const Zh &) = default ;
        Zh& operator=(Zh &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->showFooter_ == nullptr
        && this->showRequestId_ == nullptr && this->sliderColor_ == nullptr && this->title_ == nullptr; };
        // showFooter Field Functions 
        bool hasShowFooter() const { return this->showFooter_ != nullptr;};
        void deleteShowFooter() { this->showFooter_ = nullptr;};
        inline bool getShowFooter() const { DARABONBA_PTR_GET_DEFAULT(showFooter_, false) };
        inline Zh& setShowFooter(bool showFooter) { DARABONBA_PTR_SET_VALUE(showFooter_, showFooter) };


        // showRequestId Field Functions 
        bool hasShowRequestId() const { return this->showRequestId_ != nullptr;};
        void deleteShowRequestId() { this->showRequestId_ = nullptr;};
        inline bool getShowRequestId() const { DARABONBA_PTR_GET_DEFAULT(showRequestId_, false) };
        inline Zh& setShowRequestId(bool showRequestId) { DARABONBA_PTR_SET_VALUE(showRequestId_, showRequestId) };


        // sliderColor Field Functions 
        bool hasSliderColor() const { return this->sliderColor_ != nullptr;};
        void deleteSliderColor() { this->sliderColor_ = nullptr;};
        inline string getSliderColor() const { DARABONBA_PTR_GET_DEFAULT(sliderColor_, "") };
        inline Zh& setSliderColor(string sliderColor) { DARABONBA_PTR_SET_VALUE(sliderColor_, sliderColor) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Zh& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Specifies whether to display the footer.
        shared_ptr<bool> showFooter_ {};
        // Specifies whether to display the request ID.
        shared_ptr<bool> showRequestId_ {};
        // The slider color.
        shared_ptr<string> sliderColor_ {};
        // The title.
        shared_ptr<string> title_ {};
      };

      class En : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const En& obj) { 
          DARABONBA_PTR_TO_JSON(ShowFooter, showFooter_);
          DARABONBA_PTR_TO_JSON(ShowRequestId, showRequestId_);
          DARABONBA_PTR_TO_JSON(SliderColor, sliderColor_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, En& obj) { 
          DARABONBA_PTR_FROM_JSON(ShowFooter, showFooter_);
          DARABONBA_PTR_FROM_JSON(ShowRequestId, showRequestId_);
          DARABONBA_PTR_FROM_JSON(SliderColor, sliderColor_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        En() = default ;
        En(const En &) = default ;
        En(En &&) = default ;
        En(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~En() = default ;
        En& operator=(const En &) = default ;
        En& operator=(En &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->showFooter_ == nullptr
        && this->showRequestId_ == nullptr && this->sliderColor_ == nullptr && this->title_ == nullptr; };
        // showFooter Field Functions 
        bool hasShowFooter() const { return this->showFooter_ != nullptr;};
        void deleteShowFooter() { this->showFooter_ = nullptr;};
        inline bool getShowFooter() const { DARABONBA_PTR_GET_DEFAULT(showFooter_, false) };
        inline En& setShowFooter(bool showFooter) { DARABONBA_PTR_SET_VALUE(showFooter_, showFooter) };


        // showRequestId Field Functions 
        bool hasShowRequestId() const { return this->showRequestId_ != nullptr;};
        void deleteShowRequestId() { this->showRequestId_ = nullptr;};
        inline bool getShowRequestId() const { DARABONBA_PTR_GET_DEFAULT(showRequestId_, false) };
        inline En& setShowRequestId(bool showRequestId) { DARABONBA_PTR_SET_VALUE(showRequestId_, showRequestId) };


        // sliderColor Field Functions 
        bool hasSliderColor() const { return this->sliderColor_ != nullptr;};
        void deleteSliderColor() { this->sliderColor_ = nullptr;};
        inline string getSliderColor() const { DARABONBA_PTR_GET_DEFAULT(sliderColor_, "") };
        inline En& setSliderColor(string sliderColor) { DARABONBA_PTR_SET_VALUE(sliderColor_, sliderColor) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline En& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        // Specifies whether to display the footer.
        shared_ptr<bool> showFooter_ {};
        // Specifies whether to display the request ID.
        shared_ptr<bool> showRequestId_ {};
        // The slider color.
        shared_ptr<string> sliderColor_ {};
        // The title.
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->en_ == nullptr
        && this->zh_ == nullptr; };
      // en Field Functions 
      bool hasEn() const { return this->en_ != nullptr;};
      void deleteEn() { this->en_ = nullptr;};
      inline const Configs::En & getEn() const { DARABONBA_PTR_GET_CONST(en_, Configs::En) };
      inline Configs::En getEn() { DARABONBA_PTR_GET(en_, Configs::En) };
      inline Configs& setEn(const Configs::En & en) { DARABONBA_PTR_SET_VALUE(en_, en) };
      inline Configs& setEn(Configs::En && en) { DARABONBA_PTR_SET_RVALUE(en_, en) };


      // zh Field Functions 
      bool hasZh() const { return this->zh_ != nullptr;};
      void deleteZh() { this->zh_ = nullptr;};
      inline const Configs::Zh & getZh() const { DARABONBA_PTR_GET_CONST(zh_, Configs::Zh) };
      inline Configs::Zh getZh() { DARABONBA_PTR_GET(zh_, Configs::Zh) };
      inline Configs& setZh(const Configs::Zh & zh) { DARABONBA_PTR_SET_VALUE(zh_, zh) };
      inline Configs& setZh(Configs::Zh && zh) { DARABONBA_PTR_SET_RVALUE(zh_, zh) };


    protected:
      // The predefined English style.
      shared_ptr<Configs::En> en_ {};
      // The predefined Chinese style.
      shared_ptr<Configs::Zh> zh_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->customContent_ == nullptr && this->forceLanguage_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->siteIds_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const GetSliderCaptchaPageResponseBody::Configs & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, GetSliderCaptchaPageResponseBody::Configs) };
    inline GetSliderCaptchaPageResponseBody::Configs getConfigs() { DARABONBA_PTR_GET(configs_, GetSliderCaptchaPageResponseBody::Configs) };
    inline GetSliderCaptchaPageResponseBody& setConfigs(const GetSliderCaptchaPageResponseBody::Configs & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline GetSliderCaptchaPageResponseBody& setConfigs(GetSliderCaptchaPageResponseBody::Configs && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline GetSliderCaptchaPageResponseBody& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // forceLanguage Field Functions 
    bool hasForceLanguage() const { return this->forceLanguage_ != nullptr;};
    void deleteForceLanguage() { this->forceLanguage_ = nullptr;};
    inline string getForceLanguage() const { DARABONBA_PTR_GET_DEFAULT(forceLanguage_, "") };
    inline GetSliderCaptchaPageResponseBody& setForceLanguage(string forceLanguage) { DARABONBA_PTR_SET_VALUE(forceLanguage_, forceLanguage) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSliderCaptchaPageResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSliderCaptchaPageResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSliderCaptchaPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteIds Field Functions 
    bool hasSiteIds() const { return this->siteIds_ != nullptr;};
    void deleteSiteIds() { this->siteIds_ = nullptr;};
    inline const vector<int64_t> & getSiteIds() const { DARABONBA_PTR_GET_CONST(siteIds_, vector<int64_t>) };
    inline vector<int64_t> getSiteIds() { DARABONBA_PTR_GET(siteIds_, vector<int64_t>) };
    inline GetSliderCaptchaPageResponseBody& setSiteIds(const vector<int64_t> & siteIds) { DARABONBA_PTR_SET_VALUE(siteIds_, siteIds) };
    inline GetSliderCaptchaPageResponseBody& setSiteIds(vector<int64_t> && siteIds) { DARABONBA_PTR_SET_RVALUE(siteIds_, siteIds) };


  protected:
    // The predefined configurations for the custom slider page.
    shared_ptr<GetSliderCaptchaPageResponseBody::Configs> configs_ {};
    // The custom slider configurations.
    shared_ptr<string> customContent_ {};
    // The forced language.
    shared_ptr<string> forceLanguage_ {};
    // The ID of the custom slider page.
    shared_ptr<int64_t> id_ {};
    // The name of the custom slider page.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of bound site IDs.
    shared_ptr<vector<int64_t>> siteIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
