// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWPLUGIN_HPP_
#define ALIBABACLOUD_MODELS_VIEWPLUGIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class ViewPlugin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewPlugin& obj) { 
      DARABONBA_PTR_TO_JSON(BindField, bindField_);
      DARABONBA_PTR_TO_JSON(Convertor, convertor_);
      DARABONBA_PTR_TO_JSON(CorsProxy, corsProxy_);
      DARABONBA_PTR_TO_JSON(DisplayOriImg, displayOriImg_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(Hide, hide_);
      DARABONBA_ANY_TO_JSON(Plugins, plugins_);
      DARABONBA_PTR_TO_JSON(RelationQuestionIds, relationQuestionIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VisitInfo, visitInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ViewPlugin& obj) { 
      DARABONBA_PTR_FROM_JSON(BindField, bindField_);
      DARABONBA_PTR_FROM_JSON(Convertor, convertor_);
      DARABONBA_PTR_FROM_JSON(CorsProxy, corsProxy_);
      DARABONBA_PTR_FROM_JSON(DisplayOriImg, displayOriImg_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(Hide, hide_);
      DARABONBA_ANY_FROM_JSON(Plugins, plugins_);
      DARABONBA_PTR_FROM_JSON(RelationQuestionIds, relationQuestionIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VisitInfo, visitInfo_);
    };
    ViewPlugin() = default ;
    ViewPlugin(const ViewPlugin &) = default ;
    ViewPlugin(ViewPlugin &&) = default ;
    ViewPlugin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewPlugin() = default ;
    ViewPlugin& operator=(const ViewPlugin &) = default ;
    ViewPlugin& operator=(ViewPlugin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VisitInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisitInfo& obj) { 
        DARABONBA_ANY_TO_JSON(aftsConf, aftsConf_);
        DARABONBA_ANY_TO_JSON(ossConf, ossConf_);
      };
      friend void from_json(const Darabonba::Json& j, VisitInfo& obj) { 
        DARABONBA_ANY_FROM_JSON(aftsConf, aftsConf_);
        DARABONBA_ANY_FROM_JSON(ossConf, ossConf_);
      };
      VisitInfo() = default ;
      VisitInfo(const VisitInfo &) = default ;
      VisitInfo(VisitInfo &&) = default ;
      VisitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisitInfo() = default ;
      VisitInfo& operator=(const VisitInfo &) = default ;
      VisitInfo& operator=(VisitInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aftsConf_ == nullptr
        && this->ossConf_ == nullptr; };
      // aftsConf Field Functions 
      bool hasAftsConf() const { return this->aftsConf_ != nullptr;};
      void deleteAftsConf() { this->aftsConf_ = nullptr;};
      inline       const Darabonba::Json & getAftsConf() const { DARABONBA_GET(aftsConf_) };
      Darabonba::Json & getAftsConf() { DARABONBA_GET(aftsConf_) };
      inline VisitInfo& setAftsConf(const Darabonba::Json & aftsConf) { DARABONBA_SET_VALUE(aftsConf_, aftsConf) };
      inline VisitInfo& setAftsConf(Darabonba::Json && aftsConf) { DARABONBA_SET_RVALUE(aftsConf_, aftsConf) };


      // ossConf Field Functions 
      bool hasOssConf() const { return this->ossConf_ != nullptr;};
      void deleteOssConf() { this->ossConf_ = nullptr;};
      inline       const Darabonba::Json & getOssConf() const { DARABONBA_GET(ossConf_) };
      Darabonba::Json & getOssConf() { DARABONBA_GET(ossConf_) };
      inline VisitInfo& setOssConf(const Darabonba::Json & ossConf) { DARABONBA_SET_VALUE(ossConf_, ossConf) };
      inline VisitInfo& setOssConf(Darabonba::Json && ossConf) { DARABONBA_SET_RVALUE(ossConf_, ossConf) };


    protected:
      // AFTS configuration.
      Darabonba::Json aftsConf_ {};
      // OSS configuration.
      Darabonba::Json ossConf_ {};
    };

    virtual bool empty() const override { return this->bindField_ == nullptr
        && this->convertor_ == nullptr && this->corsProxy_ == nullptr && this->displayOriImg_ == nullptr && this->exif_ == nullptr && this->hide_ == nullptr
        && this->plugins_ == nullptr && this->relationQuestionIds_ == nullptr && this->type_ == nullptr && this->visitInfo_ == nullptr; };
    // bindField Field Functions 
    bool hasBindField() const { return this->bindField_ != nullptr;};
    void deleteBindField() { this->bindField_ = nullptr;};
    inline string getBindField() const { DARABONBA_PTR_GET_DEFAULT(bindField_, "") };
    inline ViewPlugin& setBindField(string bindField) { DARABONBA_PTR_SET_VALUE(bindField_, bindField) };


    // convertor Field Functions 
    bool hasConvertor() const { return this->convertor_ != nullptr;};
    void deleteConvertor() { this->convertor_ = nullptr;};
    inline string getConvertor() const { DARABONBA_PTR_GET_DEFAULT(convertor_, "") };
    inline ViewPlugin& setConvertor(string convertor) { DARABONBA_PTR_SET_VALUE(convertor_, convertor) };


    // corsProxy Field Functions 
    bool hasCorsProxy() const { return this->corsProxy_ != nullptr;};
    void deleteCorsProxy() { this->corsProxy_ = nullptr;};
    inline bool getCorsProxy() const { DARABONBA_PTR_GET_DEFAULT(corsProxy_, false) };
    inline ViewPlugin& setCorsProxy(bool corsProxy) { DARABONBA_PTR_SET_VALUE(corsProxy_, corsProxy) };


    // displayOriImg Field Functions 
    bool hasDisplayOriImg() const { return this->displayOriImg_ != nullptr;};
    void deleteDisplayOriImg() { this->displayOriImg_ = nullptr;};
    inline bool getDisplayOriImg() const { DARABONBA_PTR_GET_DEFAULT(displayOriImg_, false) };
    inline ViewPlugin& setDisplayOriImg(bool displayOriImg) { DARABONBA_PTR_SET_VALUE(displayOriImg_, displayOriImg) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline ViewPlugin& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline ViewPlugin& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // hide Field Functions 
    bool hasHide() const { return this->hide_ != nullptr;};
    void deleteHide() { this->hide_ = nullptr;};
    inline bool getHide() const { DARABONBA_PTR_GET_DEFAULT(hide_, false) };
    inline ViewPlugin& setHide(bool hide) { DARABONBA_PTR_SET_VALUE(hide_, hide) };


    // plugins Field Functions 
    bool hasPlugins() const { return this->plugins_ != nullptr;};
    void deletePlugins() { this->plugins_ = nullptr;};
    inline     const Darabonba::Json & getPlugins() const { DARABONBA_GET(plugins_) };
    Darabonba::Json & getPlugins() { DARABONBA_GET(plugins_) };
    inline ViewPlugin& setPlugins(const Darabonba::Json & plugins) { DARABONBA_SET_VALUE(plugins_, plugins) };
    inline ViewPlugin& setPlugins(Darabonba::Json && plugins) { DARABONBA_SET_RVALUE(plugins_, plugins) };


    // relationQuestionIds Field Functions 
    bool hasRelationQuestionIds() const { return this->relationQuestionIds_ != nullptr;};
    void deleteRelationQuestionIds() { this->relationQuestionIds_ = nullptr;};
    inline const vector<string> & getRelationQuestionIds() const { DARABONBA_PTR_GET_CONST(relationQuestionIds_, vector<string>) };
    inline vector<string> getRelationQuestionIds() { DARABONBA_PTR_GET(relationQuestionIds_, vector<string>) };
    inline ViewPlugin& setRelationQuestionIds(const vector<string> & relationQuestionIds) { DARABONBA_PTR_SET_VALUE(relationQuestionIds_, relationQuestionIds) };
    inline ViewPlugin& setRelationQuestionIds(vector<string> && relationQuestionIds) { DARABONBA_PTR_SET_RVALUE(relationQuestionIds_, relationQuestionIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ViewPlugin& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // visitInfo Field Functions 
    bool hasVisitInfo() const { return this->visitInfo_ != nullptr;};
    void deleteVisitInfo() { this->visitInfo_ = nullptr;};
    inline const ViewPlugin::VisitInfo & getVisitInfo() const { DARABONBA_PTR_GET_CONST(visitInfo_, ViewPlugin::VisitInfo) };
    inline ViewPlugin::VisitInfo getVisitInfo() { DARABONBA_PTR_GET(visitInfo_, ViewPlugin::VisitInfo) };
    inline ViewPlugin& setVisitInfo(const ViewPlugin::VisitInfo & visitInfo) { DARABONBA_PTR_SET_VALUE(visitInfo_, visitInfo) };
    inline ViewPlugin& setVisitInfo(ViewPlugin::VisitInfo && visitInfo) { DARABONBA_PTR_SET_RVALUE(visitInfo_, visitInfo) };


  protected:
    // Field mapping to a field in the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> bindField_ {};
    // Array transformation UDF.
    shared_ptr<string> convertor_ {};
    // Whether to handle cross-domain requests.
    // 
    // This parameter is required.
    shared_ptr<bool> corsProxy_ {};
    // Whether to display the original image.
    // 
    // This parameter is required.
    shared_ptr<bool> displayOriImg_ {};
    // Extra information.
    Darabonba::Json exif_ {};
    // Whether to hide.
    shared_ptr<bool> hide_ {};
    // Nested widgets.
    Darabonba::Json plugins_ {};
    // List of associated questions.
    shared_ptr<vector<string>> relationQuestionIds_ {};
    // Widget type. Valid values:
    // - Image: Image.
    // - Text: Text.
    // - Video: Video.
    // - Audio: Audio.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // Access information.
    shared_ptr<ViewPlugin::VisitInfo> visitInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
