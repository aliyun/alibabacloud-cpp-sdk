// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPLATEVIEW_HPP_
#define ALIBABACLOUD_MODELS_TEMPLATEVIEW_HPP_
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
  class TemplateView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TemplateView& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, TemplateView& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    TemplateView() = default ;
    TemplateView(const TemplateView &) = default ;
    TemplateView(TemplateView &&) = default ;
    TemplateView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TemplateView() = default ;
    TemplateView& operator=(const TemplateView &) = default ;
    TemplateView& operator=(TemplateView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayOriImg, displayOriImg_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VisitInfo, visitInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayOriImg, displayOriImg_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VisitInfo, visitInfo_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VisitInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VisitInfo& obj) { 
          DARABONBA_ANY_TO_JSON(AftsConf, aftsConf_);
          DARABONBA_ANY_TO_JSON(OssConf, ossConf_);
        };
        friend void from_json(const Darabonba::Json& j, VisitInfo& obj) { 
          DARABONBA_ANY_FROM_JSON(AftsConf, aftsConf_);
          DARABONBA_ANY_FROM_JSON(OssConf, ossConf_);
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
        inline         const Darabonba::Json & getAftsConf() const { DARABONBA_GET(aftsConf_) };
        Darabonba::Json & getAftsConf() { DARABONBA_GET(aftsConf_) };
        inline VisitInfo& setAftsConf(const Darabonba::Json & aftsConf) { DARABONBA_SET_VALUE(aftsConf_, aftsConf) };
        inline VisitInfo& setAftsConf(Darabonba::Json && aftsConf) { DARABONBA_SET_RVALUE(aftsConf_, aftsConf) };


        // ossConf Field Functions 
        bool hasOssConf() const { return this->ossConf_ != nullptr;};
        void deleteOssConf() { this->ossConf_ = nullptr;};
        inline         const Darabonba::Json & getOssConf() const { DARABONBA_GET(ossConf_) };
        Darabonba::Json & getOssConf() { DARABONBA_GET(ossConf_) };
        inline VisitInfo& setOssConf(const Darabonba::Json & ossConf) { DARABONBA_SET_VALUE(ossConf_, ossConf) };
        inline VisitInfo& setOssConf(Darabonba::Json && ossConf) { DARABONBA_SET_RVALUE(ossConf_, ossConf) };


      protected:
        // Afts Configuration
        Darabonba::Json aftsConf_ {};
        // OSS Configuration
        Darabonba::Json ossConf_ {};
      };

      virtual bool empty() const override { return this->displayOriImg_ == nullptr
        && this->fieldName_ == nullptr && this->type_ == nullptr && this->visitInfo_ == nullptr; };
      // displayOriImg Field Functions 
      bool hasDisplayOriImg() const { return this->displayOriImg_ != nullptr;};
      void deleteDisplayOriImg() { this->displayOriImg_ = nullptr;};
      inline bool getDisplayOriImg() const { DARABONBA_PTR_GET_DEFAULT(displayOriImg_, false) };
      inline Fields& setDisplayOriImg(bool displayOriImg) { DARABONBA_PTR_SET_VALUE(displayOriImg_, displayOriImg) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Fields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // visitInfo Field Functions 
      bool hasVisitInfo() const { return this->visitInfo_ != nullptr;};
      void deleteVisitInfo() { this->visitInfo_ = nullptr;};
      inline const Fields::VisitInfo & getVisitInfo() const { DARABONBA_PTR_GET_CONST(visitInfo_, Fields::VisitInfo) };
      inline Fields::VisitInfo getVisitInfo() { DARABONBA_PTR_GET(visitInfo_, Fields::VisitInfo) };
      inline Fields& setVisitInfo(const Fields::VisitInfo & visitInfo) { DARABONBA_PTR_SET_VALUE(visitInfo_, visitInfo) };
      inline Fields& setVisitInfo(Fields::VisitInfo && visitInfo) { DARABONBA_PTR_SET_RVALUE(visitInfo_, visitInfo) };


    protected:
      // Whether to Display Original Image
      shared_ptr<bool> displayOriImg_ {};
      // Associated Column Name
      shared_ptr<string> fieldName_ {};
      // View Type
      shared_ptr<string> type_ {};
      // Access Information
      shared_ptr<Fields::VisitInfo> visitInfo_ {};
    };

    virtual bool empty() const override { return this->fields_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<TemplateView::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<TemplateView::Fields>) };
    inline vector<TemplateView::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<TemplateView::Fields>) };
    inline TemplateView& setFields(const vector<TemplateView::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline TemplateView& setFields(vector<TemplateView::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    // View List
    shared_ptr<vector<TemplateView::Fields>> fields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
