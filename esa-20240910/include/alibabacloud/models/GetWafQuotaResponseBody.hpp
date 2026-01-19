// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAFQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafQuotaInteger.hpp>
#include <map>
#include <alibabacloud/models/QuotaPageContentTypesValue.hpp>
#include <alibabacloud/models/QuotaListItemsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWafQuotaResponseBody() = default ;
    GetWafQuotaResponseBody(const GetWafQuotaResponseBody &) = default ;
    GetWafQuotaResponseBody(GetWafQuotaResponseBody &&) = default ;
    GetWafQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafQuotaResponseBody() = default ;
    GetWafQuotaResponseBody& operator=(const GetWafQuotaResponseBody &) = default ;
    GetWafQuotaResponseBody& operator=(GetWafQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Quota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Quota& obj) { 
        DARABONBA_PTR_TO_JSON(Captcha, captcha_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(ManagedRulesGroup, managedRulesGroup_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(ScenePolicy, scenePolicy_);
      };
      friend void from_json(const Darabonba::Json& j, Quota& obj) { 
        DARABONBA_PTR_FROM_JSON(Captcha, captcha_);
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(ManagedRulesGroup, managedRulesGroup_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(ScenePolicy, scenePolicy_);
      };
      Quota() = default ;
      Quota(const Quota &) = default ;
      Quota(Quota &&) = default ;
      Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Quota() = default ;
      Quota& operator=(const Quota &) = default ;
      Quota& operator=(Quota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScenePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScenePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
        };
        friend void from_json(const Darabonba::Json& j, ScenePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
        };
        ScenePolicy() = default ;
        ScenePolicy(const ScenePolicy &) = default ;
        ScenePolicy(ScenePolicy &&) = default ;
        ScenePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScenePolicy() = default ;
        ScenePolicy& operator=(const ScenePolicy &) = default ;
        ScenePolicy& operator=(ScenePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->numberTotal_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline ScenePolicy& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // numberTotal Field Functions 
        bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
        void deleteNumberTotal() { this->numberTotal_ = nullptr;};
        inline const WafQuotaInteger & getNumberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberTotal() { DARABONBA_PTR_GET(numberTotal_, WafQuotaInteger) };
        inline ScenePolicy& setNumberTotal(const WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
        inline ScenePolicy& setNumberTotal(WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


      protected:
        // Indicates whether the scene protection feature is enabled.
        shared_ptr<bool> enable_ {};
        // The total number quota for scene protection rules.
        shared_ptr<WafQuotaInteger> numberTotal_ {};
      };

      class Page : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Page& obj) { 
          DARABONBA_PTR_TO_JSON(ContentTypes, contentTypes_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
        };
        friend void from_json(const Darabonba::Json& j, Page& obj) { 
          DARABONBA_PTR_FROM_JSON(ContentTypes, contentTypes_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
        };
        Page() = default ;
        Page(const Page &) = default ;
        Page(Page &&) = default ;
        Page(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Page() = default ;
        Page& operator=(const Page &) = default ;
        Page& operator=(Page &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contentTypes_ == nullptr
        && this->enable_ == nullptr && this->numberTotal_ == nullptr; };
        // contentTypes Field Functions 
        bool hasContentTypes() const { return this->contentTypes_ != nullptr;};
        void deleteContentTypes() { this->contentTypes_ = nullptr;};
        inline const map<string, QuotaPageContentTypesValue> & getContentTypes() const { DARABONBA_PTR_GET_CONST(contentTypes_, map<string, QuotaPageContentTypesValue>) };
        inline map<string, QuotaPageContentTypesValue> getContentTypes() { DARABONBA_PTR_GET(contentTypes_, map<string, QuotaPageContentTypesValue>) };
        inline Page& setContentTypes(const map<string, QuotaPageContentTypesValue> & contentTypes) { DARABONBA_PTR_SET_VALUE(contentTypes_, contentTypes) };
        inline Page& setContentTypes(map<string, QuotaPageContentTypesValue> && contentTypes) { DARABONBA_PTR_SET_RVALUE(contentTypes_, contentTypes) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Page& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // numberTotal Field Functions 
        bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
        void deleteNumberTotal() { this->numberTotal_ = nullptr;};
        inline const WafQuotaInteger & getNumberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberTotal() { DARABONBA_PTR_GET(numberTotal_, WafQuotaInteger) };
        inline Page& setNumberTotal(const WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
        inline Page& setNumberTotal(WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


      protected:
        // An object containing quota information for each Content-Type in custom response pages.
        shared_ptr<map<string, QuotaPageContentTypesValue>> contentTypes_ {};
        // Indicates whether the custom response page is enabled.
        shared_ptr<bool> enable_ {};
        // The total number quota allowed for custom response pages.
        shared_ptr<WafQuotaInteger> numberTotal_ {};
      };

      class ManagedRulesGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedRulesGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedRulesGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
        };
        ManagedRulesGroup() = default ;
        ManagedRulesGroup(const ManagedRulesGroup &) = default ;
        ManagedRulesGroup(ManagedRulesGroup &&) = default ;
        ManagedRulesGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedRulesGroup() = default ;
        ManagedRulesGroup& operator=(const ManagedRulesGroup &) = default ;
        ManagedRulesGroup& operator=(ManagedRulesGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->numberTotal_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline ManagedRulesGroup& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // numberTotal Field Functions 
        bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
        void deleteNumberTotal() { this->numberTotal_ = nullptr;};
        inline const WafQuotaInteger & getNumberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberTotal() { DARABONBA_PTR_GET(numberTotal_, WafQuotaInteger) };
        inline ManagedRulesGroup& setNumberTotal(const WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
        inline ManagedRulesGroup& setNumberTotal(WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


      protected:
        // Indicates whether the WAF managed rules group is enabled.
        shared_ptr<bool> enable_ {};
        // The total number quota allowed for the WAF managed rules group.
        shared_ptr<WafQuotaInteger> numberTotal_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(NumberItemsPerList, numberItemsPerList_);
          DARABONBA_PTR_TO_JSON(NumberItemsTotal, numberItemsTotal_);
          DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(NumberItemsPerList, numberItemsPerList_);
          DARABONBA_PTR_FROM_JSON(NumberItemsTotal, numberItemsTotal_);
          DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->items_ == nullptr && this->numberItemsPerList_ == nullptr && this->numberItemsTotal_ == nullptr && this->numberTotal_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline List& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const map<string, QuotaListItemsValue> & getItems() const { DARABONBA_PTR_GET_CONST(items_, map<string, QuotaListItemsValue>) };
        inline map<string, QuotaListItemsValue> getItems() { DARABONBA_PTR_GET(items_, map<string, QuotaListItemsValue>) };
        inline List& setItems(const map<string, QuotaListItemsValue> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline List& setItems(map<string, QuotaListItemsValue> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // numberItemsPerList Field Functions 
        bool hasNumberItemsPerList() const { return this->numberItemsPerList_ != nullptr;};
        void deleteNumberItemsPerList() { this->numberItemsPerList_ = nullptr;};
        inline const WafQuotaInteger & getNumberItemsPerList() const { DARABONBA_PTR_GET_CONST(numberItemsPerList_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberItemsPerList() { DARABONBA_PTR_GET(numberItemsPerList_, WafQuotaInteger) };
        inline List& setNumberItemsPerList(const WafQuotaInteger & numberItemsPerList) { DARABONBA_PTR_SET_VALUE(numberItemsPerList_, numberItemsPerList) };
        inline List& setNumberItemsPerList(WafQuotaInteger && numberItemsPerList) { DARABONBA_PTR_SET_RVALUE(numberItemsPerList_, numberItemsPerList) };


        // numberItemsTotal Field Functions 
        bool hasNumberItemsTotal() const { return this->numberItemsTotal_ != nullptr;};
        void deleteNumberItemsTotal() { this->numberItemsTotal_ = nullptr;};
        inline const WafQuotaInteger & getNumberItemsTotal() const { DARABONBA_PTR_GET_CONST(numberItemsTotal_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberItemsTotal() { DARABONBA_PTR_GET(numberItemsTotal_, WafQuotaInteger) };
        inline List& setNumberItemsTotal(const WafQuotaInteger & numberItemsTotal) { DARABONBA_PTR_SET_VALUE(numberItemsTotal_, numberItemsTotal) };
        inline List& setNumberItemsTotal(WafQuotaInteger && numberItemsTotal) { DARABONBA_PTR_SET_RVALUE(numberItemsTotal_, numberItemsTotal) };


        // numberTotal Field Functions 
        bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
        void deleteNumberTotal() { this->numberTotal_ = nullptr;};
        inline const WafQuotaInteger & getNumberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberTotal() { DARABONBA_PTR_GET(numberTotal_, WafQuotaInteger) };
        inline List& setNumberTotal(const WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
        inline List& setNumberTotal(WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


      protected:
        // Indicates whether the custom list is enabled.
        shared_ptr<bool> enable_ {};
        // An object containing quota information for each type of item in the custom list.
        shared_ptr<map<string, QuotaListItemsValue>> items_ {};
        // The number quota allowed per custom list.
        shared_ptr<WafQuotaInteger> numberItemsPerList_ {};
        // The total number quota allowed for items in all custom lists.
        shared_ptr<WafQuotaInteger> numberItemsTotal_ {};
        // The total number quota allowed for custom lists.
        shared_ptr<WafQuotaInteger> numberTotal_ {};
      };

      class Captcha : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Captcha& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(NumberTotal, numberTotal_);
        };
        friend void from_json(const Darabonba::Json& j, Captcha& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(NumberTotal, numberTotal_);
        };
        Captcha() = default ;
        Captcha(const Captcha &) = default ;
        Captcha(Captcha &&) = default ;
        Captcha(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Captcha() = default ;
        Captcha& operator=(const Captcha &) = default ;
        Captcha& operator=(Captcha &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr
        && this->numberTotal_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Captcha& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // numberTotal Field Functions 
        bool hasNumberTotal() const { return this->numberTotal_ != nullptr;};
        void deleteNumberTotal() { this->numberTotal_ = nullptr;};
        inline const WafQuotaInteger & getNumberTotal() const { DARABONBA_PTR_GET_CONST(numberTotal_, WafQuotaInteger) };
        inline WafQuotaInteger getNumberTotal() { DARABONBA_PTR_GET(numberTotal_, WafQuotaInteger) };
        inline Captcha& setNumberTotal(const WafQuotaInteger & numberTotal) { DARABONBA_PTR_SET_VALUE(numberTotal_, numberTotal) };
        inline Captcha& setNumberTotal(WafQuotaInteger && numberTotal) { DARABONBA_PTR_SET_RVALUE(numberTotal_, numberTotal) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<WafQuotaInteger> numberTotal_ {};
      };

      virtual bool empty() const override { return this->captcha_ == nullptr
        && this->list_ == nullptr && this->managedRulesGroup_ == nullptr && this->page_ == nullptr && this->scenePolicy_ == nullptr; };
      // captcha Field Functions 
      bool hasCaptcha() const { return this->captcha_ != nullptr;};
      void deleteCaptcha() { this->captcha_ = nullptr;};
      inline const Quota::Captcha & getCaptcha() const { DARABONBA_PTR_GET_CONST(captcha_, Quota::Captcha) };
      inline Quota::Captcha getCaptcha() { DARABONBA_PTR_GET(captcha_, Quota::Captcha) };
      inline Quota& setCaptcha(const Quota::Captcha & captcha) { DARABONBA_PTR_SET_VALUE(captcha_, captcha) };
      inline Quota& setCaptcha(Quota::Captcha && captcha) { DARABONBA_PTR_SET_RVALUE(captcha_, captcha) };


      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const Quota::List & getList() const { DARABONBA_PTR_GET_CONST(list_, Quota::List) };
      inline Quota::List getList() { DARABONBA_PTR_GET(list_, Quota::List) };
      inline Quota& setList(const Quota::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Quota& setList(Quota::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // managedRulesGroup Field Functions 
      bool hasManagedRulesGroup() const { return this->managedRulesGroup_ != nullptr;};
      void deleteManagedRulesGroup() { this->managedRulesGroup_ = nullptr;};
      inline const Quota::ManagedRulesGroup & getManagedRulesGroup() const { DARABONBA_PTR_GET_CONST(managedRulesGroup_, Quota::ManagedRulesGroup) };
      inline Quota::ManagedRulesGroup getManagedRulesGroup() { DARABONBA_PTR_GET(managedRulesGroup_, Quota::ManagedRulesGroup) };
      inline Quota& setManagedRulesGroup(const Quota::ManagedRulesGroup & managedRulesGroup) { DARABONBA_PTR_SET_VALUE(managedRulesGroup_, managedRulesGroup) };
      inline Quota& setManagedRulesGroup(Quota::ManagedRulesGroup && managedRulesGroup) { DARABONBA_PTR_SET_RVALUE(managedRulesGroup_, managedRulesGroup) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline const Quota::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, Quota::Page) };
      inline Quota::Page getPage() { DARABONBA_PTR_GET(page_, Quota::Page) };
      inline Quota& setPage(const Quota::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
      inline Quota& setPage(Quota::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


      // scenePolicy Field Functions 
      bool hasScenePolicy() const { return this->scenePolicy_ != nullptr;};
      void deleteScenePolicy() { this->scenePolicy_ = nullptr;};
      inline const Quota::ScenePolicy & getScenePolicy() const { DARABONBA_PTR_GET_CONST(scenePolicy_, Quota::ScenePolicy) };
      inline Quota::ScenePolicy getScenePolicy() { DARABONBA_PTR_GET(scenePolicy_, Quota::ScenePolicy) };
      inline Quota& setScenePolicy(const Quota::ScenePolicy & scenePolicy) { DARABONBA_PTR_SET_VALUE(scenePolicy_, scenePolicy) };
      inline Quota& setScenePolicy(Quota::ScenePolicy && scenePolicy) { DARABONBA_PTR_SET_RVALUE(scenePolicy_, scenePolicy) };


    protected:
      shared_ptr<Quota::Captcha> captcha_ {};
      // Quota information related to custom lists.
      shared_ptr<Quota::List> list_ {};
      // Quota information related to the WAF managed rules group.
      shared_ptr<Quota::ManagedRulesGroup> managedRulesGroup_ {};
      // Quota information related to custom response pages.
      shared_ptr<Quota::Page> page_ {};
      // Quota information related to scene protection.
      shared_ptr<Quota::ScenePolicy> scenePolicy_ {};
    };

    virtual bool empty() const override { return this->quota_ == nullptr
        && this->requestId_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const GetWafQuotaResponseBody::Quota & getQuota() const { DARABONBA_PTR_GET_CONST(quota_, GetWafQuotaResponseBody::Quota) };
    inline GetWafQuotaResponseBody::Quota getQuota() { DARABONBA_PTR_GET(quota_, GetWafQuotaResponseBody::Quota) };
    inline GetWafQuotaResponseBody& setQuota(const GetWafQuotaResponseBody::Quota & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline GetWafQuotaResponseBody& setQuota(GetWafQuotaResponseBody::Quota && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned quota information.
    shared_ptr<GetWafQuotaResponseBody::Quota> quota_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
