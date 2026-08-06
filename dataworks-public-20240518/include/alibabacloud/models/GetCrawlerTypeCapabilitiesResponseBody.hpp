// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCRAWLERTYPECAPABILITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCRAWLERTYPECAPABILITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCrawlerTypeCapabilitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrawlerTypeCapabilitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CrawlerTypes, crawlerTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrawlerTypeCapabilitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CrawlerTypes, crawlerTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCrawlerTypeCapabilitiesResponseBody() = default ;
    GetCrawlerTypeCapabilitiesResponseBody(const GetCrawlerTypeCapabilitiesResponseBody &) = default ;
    GetCrawlerTypeCapabilitiesResponseBody(GetCrawlerTypeCapabilitiesResponseBody &&) = default ;
    GetCrawlerTypeCapabilitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrawlerTypeCapabilitiesResponseBody() = default ;
    GetCrawlerTypeCapabilitiesResponseBody& operator=(const GetCrawlerTypeCapabilitiesResponseBody &) = default ;
    GetCrawlerTypeCapabilitiesResponseBody& operator=(GetCrawlerTypeCapabilitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CrawlerTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrawlerTypes& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultScopeUnit, defaultScopeUnit_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(RequireResourceGroup, requireResourceGroup_);
        DARABONBA_PTR_TO_JSON(SupportAiComment, supportAiComment_);
        DARABONBA_PTR_TO_JSON(SupportExcludeRegex, supportExcludeRegex_);
        DARABONBA_PTR_TO_JSON(SupportSchedule, supportSchedule_);
        DARABONBA_PTR_TO_JSON(SupportedDatasourceTypes, supportedDatasourceTypes_);
        DARABONBA_PTR_TO_JSON(SupportedEntityTypes, supportedEntityTypes_);
        DARABONBA_PTR_TO_JSON(SupportedOptionKeys, supportedOptionKeys_);
        DARABONBA_PTR_TO_JSON(SupportedScopeUnits, supportedScopeUnits_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, CrawlerTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultScopeUnit, defaultScopeUnit_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(RequireResourceGroup, requireResourceGroup_);
        DARABONBA_PTR_FROM_JSON(SupportAiComment, supportAiComment_);
        DARABONBA_PTR_FROM_JSON(SupportExcludeRegex, supportExcludeRegex_);
        DARABONBA_PTR_FROM_JSON(SupportSchedule, supportSchedule_);
        DARABONBA_PTR_FROM_JSON(SupportedDatasourceTypes, supportedDatasourceTypes_);
        DARABONBA_PTR_FROM_JSON(SupportedEntityTypes, supportedEntityTypes_);
        DARABONBA_PTR_FROM_JSON(SupportedOptionKeys, supportedOptionKeys_);
        DARABONBA_PTR_FROM_JSON(SupportedScopeUnits, supportedScopeUnits_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      CrawlerTypes() = default ;
      CrawlerTypes(const CrawlerTypes &) = default ;
      CrawlerTypes(CrawlerTypes &&) = default ;
      CrawlerTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrawlerTypes() = default ;
      CrawlerTypes& operator=(const CrawlerTypes &) = default ;
      CrawlerTypes& operator=(CrawlerTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SupportedOptionKeys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedOptionKeys& obj) { 
          DARABONBA_PTR_TO_JSON(AllowedValues, allowedValues_);
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Required, required_);
          DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedOptionKeys& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedValues, allowedValues_);
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
          DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        };
        SupportedOptionKeys() = default ;
        SupportedOptionKeys(const SupportedOptionKeys &) = default ;
        SupportedOptionKeys(SupportedOptionKeys &&) = default ;
        SupportedOptionKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedOptionKeys() = default ;
        SupportedOptionKeys& operator=(const SupportedOptionKeys &) = default ;
        SupportedOptionKeys& operator=(SupportedOptionKeys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedValues_ == nullptr
        && this->defaultValue_ == nullptr && this->key_ == nullptr && this->required_ == nullptr && this->valueType_ == nullptr; };
        // allowedValues Field Functions 
        bool hasAllowedValues() const { return this->allowedValues_ != nullptr;};
        void deleteAllowedValues() { this->allowedValues_ = nullptr;};
        inline const vector<string> & getAllowedValues() const { DARABONBA_PTR_GET_CONST(allowedValues_, vector<string>) };
        inline vector<string> getAllowedValues() { DARABONBA_PTR_GET(allowedValues_, vector<string>) };
        inline SupportedOptionKeys& setAllowedValues(const vector<string> & allowedValues) { DARABONBA_PTR_SET_VALUE(allowedValues_, allowedValues) };
        inline SupportedOptionKeys& setAllowedValues(vector<string> && allowedValues) { DARABONBA_PTR_SET_RVALUE(allowedValues_, allowedValues) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline SupportedOptionKeys& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline SupportedOptionKeys& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline SupportedOptionKeys& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // valueType Field Functions 
        bool hasValueType() const { return this->valueType_ != nullptr;};
        void deleteValueType() { this->valueType_ = nullptr;};
        inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
        inline SupportedOptionKeys& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      protected:
        shared_ptr<vector<string>> allowedValues_ {};
        shared_ptr<string> defaultValue_ {};
        shared_ptr<string> key_ {};
        shared_ptr<bool> required_ {};
        shared_ptr<string> valueType_ {};
      };

      class SupportedEntityTypes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportedEntityTypes& obj) { 
          DARABONBA_PTR_TO_JSON(Optional, optional_);
          DARABONBA_PTR_TO_JSON(ParentSubType, parentSubType_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SupportedEntityTypes& obj) { 
          DARABONBA_PTR_FROM_JSON(Optional, optional_);
          DARABONBA_PTR_FROM_JSON(ParentSubType, parentSubType_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SupportedEntityTypes() = default ;
        SupportedEntityTypes(const SupportedEntityTypes &) = default ;
        SupportedEntityTypes(SupportedEntityTypes &&) = default ;
        SupportedEntityTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportedEntityTypes() = default ;
        SupportedEntityTypes& operator=(const SupportedEntityTypes &) = default ;
        SupportedEntityTypes& operator=(SupportedEntityTypes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->optional_ == nullptr
        && this->parentSubType_ == nullptr && this->subType_ == nullptr && this->type_ == nullptr; };
        // optional Field Functions 
        bool hasOptional() const { return this->optional_ != nullptr;};
        void deleteOptional() { this->optional_ = nullptr;};
        inline bool getOptional() const { DARABONBA_PTR_GET_DEFAULT(optional_, false) };
        inline SupportedEntityTypes& setOptional(bool optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


        // parentSubType Field Functions 
        bool hasParentSubType() const { return this->parentSubType_ != nullptr;};
        void deleteParentSubType() { this->parentSubType_ = nullptr;};
        inline string getParentSubType() const { DARABONBA_PTR_GET_DEFAULT(parentSubType_, "") };
        inline SupportedEntityTypes& setParentSubType(string parentSubType) { DARABONBA_PTR_SET_VALUE(parentSubType_, parentSubType) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline SupportedEntityTypes& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SupportedEntityTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<bool> optional_ {};
        shared_ptr<string> parentSubType_ {};
        shared_ptr<string> subType_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->defaultScopeUnit_ == nullptr
        && this->displayName_ == nullptr && this->requireResourceGroup_ == nullptr && this->supportAiComment_ == nullptr && this->supportExcludeRegex_ == nullptr && this->supportSchedule_ == nullptr
        && this->supportedDatasourceTypes_ == nullptr && this->supportedEntityTypes_ == nullptr && this->supportedOptionKeys_ == nullptr && this->supportedScopeUnits_ == nullptr && this->type_ == nullptr; };
      // defaultScopeUnit Field Functions 
      bool hasDefaultScopeUnit() const { return this->defaultScopeUnit_ != nullptr;};
      void deleteDefaultScopeUnit() { this->defaultScopeUnit_ = nullptr;};
      inline string getDefaultScopeUnit() const { DARABONBA_PTR_GET_DEFAULT(defaultScopeUnit_, "") };
      inline CrawlerTypes& setDefaultScopeUnit(string defaultScopeUnit) { DARABONBA_PTR_SET_VALUE(defaultScopeUnit_, defaultScopeUnit) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline CrawlerTypes& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // requireResourceGroup Field Functions 
      bool hasRequireResourceGroup() const { return this->requireResourceGroup_ != nullptr;};
      void deleteRequireResourceGroup() { this->requireResourceGroup_ = nullptr;};
      inline bool getRequireResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(requireResourceGroup_, false) };
      inline CrawlerTypes& setRequireResourceGroup(bool requireResourceGroup) { DARABONBA_PTR_SET_VALUE(requireResourceGroup_, requireResourceGroup) };


      // supportAiComment Field Functions 
      bool hasSupportAiComment() const { return this->supportAiComment_ != nullptr;};
      void deleteSupportAiComment() { this->supportAiComment_ = nullptr;};
      inline bool getSupportAiComment() const { DARABONBA_PTR_GET_DEFAULT(supportAiComment_, false) };
      inline CrawlerTypes& setSupportAiComment(bool supportAiComment) { DARABONBA_PTR_SET_VALUE(supportAiComment_, supportAiComment) };


      // supportExcludeRegex Field Functions 
      bool hasSupportExcludeRegex() const { return this->supportExcludeRegex_ != nullptr;};
      void deleteSupportExcludeRegex() { this->supportExcludeRegex_ = nullptr;};
      inline bool getSupportExcludeRegex() const { DARABONBA_PTR_GET_DEFAULT(supportExcludeRegex_, false) };
      inline CrawlerTypes& setSupportExcludeRegex(bool supportExcludeRegex) { DARABONBA_PTR_SET_VALUE(supportExcludeRegex_, supportExcludeRegex) };


      // supportSchedule Field Functions 
      bool hasSupportSchedule() const { return this->supportSchedule_ != nullptr;};
      void deleteSupportSchedule() { this->supportSchedule_ = nullptr;};
      inline bool getSupportSchedule() const { DARABONBA_PTR_GET_DEFAULT(supportSchedule_, false) };
      inline CrawlerTypes& setSupportSchedule(bool supportSchedule) { DARABONBA_PTR_SET_VALUE(supportSchedule_, supportSchedule) };


      // supportedDatasourceTypes Field Functions 
      bool hasSupportedDatasourceTypes() const { return this->supportedDatasourceTypes_ != nullptr;};
      void deleteSupportedDatasourceTypes() { this->supportedDatasourceTypes_ = nullptr;};
      inline const vector<string> & getSupportedDatasourceTypes() const { DARABONBA_PTR_GET_CONST(supportedDatasourceTypes_, vector<string>) };
      inline vector<string> getSupportedDatasourceTypes() { DARABONBA_PTR_GET(supportedDatasourceTypes_, vector<string>) };
      inline CrawlerTypes& setSupportedDatasourceTypes(const vector<string> & supportedDatasourceTypes) { DARABONBA_PTR_SET_VALUE(supportedDatasourceTypes_, supportedDatasourceTypes) };
      inline CrawlerTypes& setSupportedDatasourceTypes(vector<string> && supportedDatasourceTypes) { DARABONBA_PTR_SET_RVALUE(supportedDatasourceTypes_, supportedDatasourceTypes) };


      // supportedEntityTypes Field Functions 
      bool hasSupportedEntityTypes() const { return this->supportedEntityTypes_ != nullptr;};
      void deleteSupportedEntityTypes() { this->supportedEntityTypes_ = nullptr;};
      inline const vector<CrawlerTypes::SupportedEntityTypes> & getSupportedEntityTypes() const { DARABONBA_PTR_GET_CONST(supportedEntityTypes_, vector<CrawlerTypes::SupportedEntityTypes>) };
      inline vector<CrawlerTypes::SupportedEntityTypes> getSupportedEntityTypes() { DARABONBA_PTR_GET(supportedEntityTypes_, vector<CrawlerTypes::SupportedEntityTypes>) };
      inline CrawlerTypes& setSupportedEntityTypes(const vector<CrawlerTypes::SupportedEntityTypes> & supportedEntityTypes) { DARABONBA_PTR_SET_VALUE(supportedEntityTypes_, supportedEntityTypes) };
      inline CrawlerTypes& setSupportedEntityTypes(vector<CrawlerTypes::SupportedEntityTypes> && supportedEntityTypes) { DARABONBA_PTR_SET_RVALUE(supportedEntityTypes_, supportedEntityTypes) };


      // supportedOptionKeys Field Functions 
      bool hasSupportedOptionKeys() const { return this->supportedOptionKeys_ != nullptr;};
      void deleteSupportedOptionKeys() { this->supportedOptionKeys_ = nullptr;};
      inline const vector<CrawlerTypes::SupportedOptionKeys> & getSupportedOptionKeys() const { DARABONBA_PTR_GET_CONST(supportedOptionKeys_, vector<CrawlerTypes::SupportedOptionKeys>) };
      inline vector<CrawlerTypes::SupportedOptionKeys> getSupportedOptionKeys() { DARABONBA_PTR_GET(supportedOptionKeys_, vector<CrawlerTypes::SupportedOptionKeys>) };
      inline CrawlerTypes& setSupportedOptionKeys(const vector<CrawlerTypes::SupportedOptionKeys> & supportedOptionKeys) { DARABONBA_PTR_SET_VALUE(supportedOptionKeys_, supportedOptionKeys) };
      inline CrawlerTypes& setSupportedOptionKeys(vector<CrawlerTypes::SupportedOptionKeys> && supportedOptionKeys) { DARABONBA_PTR_SET_RVALUE(supportedOptionKeys_, supportedOptionKeys) };


      // supportedScopeUnits Field Functions 
      bool hasSupportedScopeUnits() const { return this->supportedScopeUnits_ != nullptr;};
      void deleteSupportedScopeUnits() { this->supportedScopeUnits_ = nullptr;};
      inline const vector<string> & getSupportedScopeUnits() const { DARABONBA_PTR_GET_CONST(supportedScopeUnits_, vector<string>) };
      inline vector<string> getSupportedScopeUnits() { DARABONBA_PTR_GET(supportedScopeUnits_, vector<string>) };
      inline CrawlerTypes& setSupportedScopeUnits(const vector<string> & supportedScopeUnits) { DARABONBA_PTR_SET_VALUE(supportedScopeUnits_, supportedScopeUnits) };
      inline CrawlerTypes& setSupportedScopeUnits(vector<string> && supportedScopeUnits) { DARABONBA_PTR_SET_RVALUE(supportedScopeUnits_, supportedScopeUnits) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline CrawlerTypes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> defaultScopeUnit_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<bool> requireResourceGroup_ {};
      shared_ptr<bool> supportAiComment_ {};
      shared_ptr<bool> supportExcludeRegex_ {};
      shared_ptr<bool> supportSchedule_ {};
      shared_ptr<vector<string>> supportedDatasourceTypes_ {};
      shared_ptr<vector<CrawlerTypes::SupportedEntityTypes>> supportedEntityTypes_ {};
      shared_ptr<vector<CrawlerTypes::SupportedOptionKeys>> supportedOptionKeys_ {};
      shared_ptr<vector<string>> supportedScopeUnits_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->crawlerTypes_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // crawlerTypes Field Functions 
    bool hasCrawlerTypes() const { return this->crawlerTypes_ != nullptr;};
    void deleteCrawlerTypes() { this->crawlerTypes_ = nullptr;};
    inline const vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes> & getCrawlerTypes() const { DARABONBA_PTR_GET_CONST(crawlerTypes_, vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes>) };
    inline vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes> getCrawlerTypes() { DARABONBA_PTR_GET(crawlerTypes_, vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes>) };
    inline GetCrawlerTypeCapabilitiesResponseBody& setCrawlerTypes(const vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes> & crawlerTypes) { DARABONBA_PTR_SET_VALUE(crawlerTypes_, crawlerTypes) };
    inline GetCrawlerTypeCapabilitiesResponseBody& setCrawlerTypes(vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes> && crawlerTypes) { DARABONBA_PTR_SET_RVALUE(crawlerTypes_, crawlerTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCrawlerTypeCapabilitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCrawlerTypeCapabilitiesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<GetCrawlerTypeCapabilitiesResponseBody::CrawlerTypes>> crawlerTypes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
