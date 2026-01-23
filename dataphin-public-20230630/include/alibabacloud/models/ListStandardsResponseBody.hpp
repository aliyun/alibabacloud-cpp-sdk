// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTANDARDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTANDARDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListStandardsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStandardsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListStandardsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListStandardsResponseBody() = default ;
    ListStandardsResponseBody(const ListStandardsResponseBody &) = default ;
    ListStandardsResponseBody(ListStandardsResponseBody &&) = default ;
    ListStandardsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStandardsResponseBody() = default ;
    ListStandardsResponseBody& operator=(const ListStandardsResponseBody &) = default ;
    ListStandardsResponseBody& operator=(ListStandardsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(StandardList, standardList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(StandardList, standardList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StandardList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StandardList& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeWithValueList, attributeWithValueList_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EffectiveTimeConfig, effectiveTimeConfig_);
          DARABONBA_PTR_TO_JSON(EnglishName, englishName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Stage, stage_);
          DARABONBA_PTR_TO_JSON(StandardSet, standardSet_);
          DARABONBA_PTR_TO_JSON(StandardTemplate, standardTemplate_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, StandardList& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeWithValueList, attributeWithValueList_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EffectiveTimeConfig, effectiveTimeConfig_);
          DARABONBA_PTR_FROM_JSON(EnglishName, englishName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Stage, stage_);
          DARABONBA_PTR_FROM_JSON(StandardSet, standardSet_);
          DARABONBA_PTR_FROM_JSON(StandardTemplate, standardTemplate_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        StandardList() = default ;
        StandardList(const StandardList &) = default ;
        StandardList(StandardList &&) = default ;
        StandardList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StandardList() = default ;
        StandardList& operator=(const StandardList &) = default ;
        StandardList& operator=(StandardList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StandardTemplate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StandardTemplate& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(TemplateFrom, templateFrom_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, StandardTemplate& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(TemplateFrom, templateFrom_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          StandardTemplate() = default ;
          StandardTemplate(const StandardTemplate &) = default ;
          StandardTemplate(StandardTemplate &&) = default ;
          StandardTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StandardTemplate() = default ;
          StandardTemplate& operator=(const StandardTemplate &) = default ;
          StandardTemplate& operator=(StandardTemplate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->templateFrom_ == nullptr && this->version_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline StandardTemplate& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline StandardTemplate& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline StandardTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // templateFrom Field Functions 
          bool hasTemplateFrom() const { return this->templateFrom_ != nullptr;};
          void deleteTemplateFrom() { this->templateFrom_ = nullptr;};
          inline string getTemplateFrom() const { DARABONBA_PTR_GET_DEFAULT(templateFrom_, "") };
          inline StandardTemplate& setTemplateFrom(string templateFrom) { DARABONBA_PTR_SET_VALUE(templateFrom_, templateFrom) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
          inline StandardTemplate& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> templateFrom_ {};
          shared_ptr<int32_t> version_ {};
        };

        class StandardSet : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StandardSet& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Directory, directory_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, StandardSet& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Directory, directory_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          StandardSet() = default ;
          StandardSet(const StandardSet &) = default ;
          StandardSet(StandardSet &&) = default ;
          StandardSet(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StandardSet() = default ;
          StandardSet& operator=(const StandardSet &) = default ;
          StandardSet& operator=(StandardSet &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->directory_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline StandardSet& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // directory Field Functions 
          bool hasDirectory() const { return this->directory_ != nullptr;};
          void deleteDirectory() { this->directory_ = nullptr;};
          inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
          inline StandardSet& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline StandardSet& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline StandardSet& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> directory_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
        };

        class Owner : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Owner& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Owner& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Owner() = default ;
          Owner(const Owner &) = default ;
          Owner(Owner &&) = default ;
          Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Owner() = default ;
          Owner& operator=(const Owner &) = default ;
          Owner& operator=(Owner &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Owner& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Owner& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        class LastModifier : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LastModifier& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, LastModifier& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          LastModifier() = default ;
          LastModifier(const LastModifier &) = default ;
          LastModifier(LastModifier &&) = default ;
          LastModifier(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LastModifier() = default ;
          LastModifier& operator=(const LastModifier &) = default ;
          LastModifier& operator=(LastModifier &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline LastModifier& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LastModifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        class EffectiveTimeConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EffectiveTimeConfig& obj) { 
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, EffectiveTimeConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          EffectiveTimeConfig() = default ;
          EffectiveTimeConfig(const EffectiveTimeConfig &) = default ;
          EffectiveTimeConfig(EffectiveTimeConfig &&) = default ;
          EffectiveTimeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EffectiveTimeConfig() = default ;
          EffectiveTimeConfig& operator=(const EffectiveTimeConfig &) = default ;
          EffectiveTimeConfig& operator=(EffectiveTimeConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr; };
          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline EffectiveTimeConfig& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline EffectiveTimeConfig& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline EffectiveTimeConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> endTime_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> type_ {};
        };

        class Creator : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Creator& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Creator& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Creator() = default ;
          Creator(const Creator &) = default ;
          Creator(Creator &&) = default ;
          Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Creator() = default ;
          Creator& operator=(const Creator &) = default ;
          Creator& operator=(Creator &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        class AttributeWithValueList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeWithValueList& obj) { 
            DARABONBA_PTR_TO_JSON(Attribute, attribute_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeWithValueList& obj) { 
            DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AttributeWithValueList() = default ;
          AttributeWithValueList(const AttributeWithValueList &) = default ;
          AttributeWithValueList(AttributeWithValueList &&) = default ;
          AttributeWithValueList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeWithValueList() = default ;
          AttributeWithValueList& operator=(const AttributeWithValueList &) = default ;
          AttributeWithValueList& operator=(AttributeWithValueList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Attribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Attribute& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(EnableMonitorConfig, enableMonitorConfig_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(RefAttribute, refAttribute_);
              DARABONBA_PTR_TO_JSON(Required, required_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(ValueConfig, valueConfig_);
            };
            friend void from_json(const Darabonba::Json& j, Attribute& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(EnableMonitorConfig, enableMonitorConfig_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(RefAttribute, refAttribute_);
              DARABONBA_PTR_FROM_JSON(Required, required_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(ValueConfig, valueConfig_);
            };
            Attribute() = default ;
            Attribute(const Attribute &) = default ;
            Attribute(Attribute &&) = default ;
            Attribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Attribute() = default ;
            Attribute& operator=(const Attribute &) = default ;
            Attribute& operator=(Attribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ValueConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ValueConfig& obj) { 
                DARABONBA_PTR_TO_JSON(DataType, dataType_);
                DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
                DARABONBA_PTR_TO_JSON(Length, length_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(ValueRange, valueRange_);
              };
              friend void from_json(const Darabonba::Json& j, ValueConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(DataType, dataType_);
                DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
                DARABONBA_PTR_FROM_JSON(Length, length_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(ValueRange, valueRange_);
              };
              ValueConfig() = default ;
              ValueConfig(const ValueConfig &) = default ;
              ValueConfig(ValueConfig &&) = default ;
              ValueConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ValueConfig() = default ;
              ValueConfig& operator=(const ValueConfig &) = default ;
              ValueConfig& operator=(ValueConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ValueRange : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ValueRange& obj) { 
                  DARABONBA_PTR_TO_JSON(DataphinAttributeType, dataphinAttributeType_);
                  DARABONBA_PTR_TO_JSON(LookupTableReference, lookupTableReference_);
                  DARABONBA_PTR_TO_JSON(MinMaxValueConfig, minMaxValueConfig_);
                  DARABONBA_PTR_TO_JSON(ValueConstraint, valueConstraint_);
                  DARABONBA_PTR_TO_JSON(ValueList, valueList_);
                };
                friend void from_json(const Darabonba::Json& j, ValueRange& obj) { 
                  DARABONBA_PTR_FROM_JSON(DataphinAttributeType, dataphinAttributeType_);
                  DARABONBA_PTR_FROM_JSON(LookupTableReference, lookupTableReference_);
                  DARABONBA_PTR_FROM_JSON(MinMaxValueConfig, minMaxValueConfig_);
                  DARABONBA_PTR_FROM_JSON(ValueConstraint, valueConstraint_);
                  DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
                };
                ValueRange() = default ;
                ValueRange(const ValueRange &) = default ;
                ValueRange(ValueRange &&) = default ;
                ValueRange(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ValueRange() = default ;
                ValueRange& operator=(const ValueRange &) = default ;
                ValueRange& operator=(ValueRange &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class MinMaxValueConfig : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const MinMaxValueConfig& obj) { 
                    DARABONBA_PTR_TO_JSON(IncludeMaxValue, includeMaxValue_);
                    DARABONBA_PTR_TO_JSON(IncludeMinValue, includeMinValue_);
                    DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
                    DARABONBA_PTR_TO_JSON(MinValue, minValue_);
                  };
                  friend void from_json(const Darabonba::Json& j, MinMaxValueConfig& obj) { 
                    DARABONBA_PTR_FROM_JSON(IncludeMaxValue, includeMaxValue_);
                    DARABONBA_PTR_FROM_JSON(IncludeMinValue, includeMinValue_);
                    DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
                    DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
                  };
                  MinMaxValueConfig() = default ;
                  MinMaxValueConfig(const MinMaxValueConfig &) = default ;
                  MinMaxValueConfig(MinMaxValueConfig &&) = default ;
                  MinMaxValueConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~MinMaxValueConfig() = default ;
                  MinMaxValueConfig& operator=(const MinMaxValueConfig &) = default ;
                  MinMaxValueConfig& operator=(MinMaxValueConfig &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->includeMaxValue_ == nullptr
        && this->includeMinValue_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr; };
                  // includeMaxValue Field Functions 
                  bool hasIncludeMaxValue() const { return this->includeMaxValue_ != nullptr;};
                  void deleteIncludeMaxValue() { this->includeMaxValue_ = nullptr;};
                  inline bool getIncludeMaxValue() const { DARABONBA_PTR_GET_DEFAULT(includeMaxValue_, false) };
                  inline MinMaxValueConfig& setIncludeMaxValue(bool includeMaxValue) { DARABONBA_PTR_SET_VALUE(includeMaxValue_, includeMaxValue) };


                  // includeMinValue Field Functions 
                  bool hasIncludeMinValue() const { return this->includeMinValue_ != nullptr;};
                  void deleteIncludeMinValue() { this->includeMinValue_ = nullptr;};
                  inline bool getIncludeMinValue() const { DARABONBA_PTR_GET_DEFAULT(includeMinValue_, false) };
                  inline MinMaxValueConfig& setIncludeMinValue(bool includeMinValue) { DARABONBA_PTR_SET_VALUE(includeMinValue_, includeMinValue) };


                  // maxValue Field Functions 
                  bool hasMaxValue() const { return this->maxValue_ != nullptr;};
                  void deleteMaxValue() { this->maxValue_ = nullptr;};
                  inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
                  inline MinMaxValueConfig& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


                  // minValue Field Functions 
                  bool hasMinValue() const { return this->minValue_ != nullptr;};
                  void deleteMinValue() { this->minValue_ = nullptr;};
                  inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
                  inline MinMaxValueConfig& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


                protected:
                  shared_ptr<bool> includeMaxValue_ {};
                  shared_ptr<bool> includeMinValue_ {};
                  shared_ptr<string> maxValue_ {};
                  shared_ptr<string> minValue_ {};
                };

                class LookupTableReference : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const LookupTableReference& obj) { 
                    DARABONBA_PTR_TO_JSON(Column, column_);
                    DARABONBA_PTR_TO_JSON(LookupTableId, lookupTableId_);
                  };
                  friend void from_json(const Darabonba::Json& j, LookupTableReference& obj) { 
                    DARABONBA_PTR_FROM_JSON(Column, column_);
                    DARABONBA_PTR_FROM_JSON(LookupTableId, lookupTableId_);
                  };
                  LookupTableReference() = default ;
                  LookupTableReference(const LookupTableReference &) = default ;
                  LookupTableReference(LookupTableReference &&) = default ;
                  LookupTableReference(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~LookupTableReference() = default ;
                  LookupTableReference& operator=(const LookupTableReference &) = default ;
                  LookupTableReference& operator=(LookupTableReference &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->column_ == nullptr
        && this->lookupTableId_ == nullptr; };
                  // column Field Functions 
                  bool hasColumn() const { return this->column_ != nullptr;};
                  void deleteColumn() { this->column_ = nullptr;};
                  inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
                  inline LookupTableReference& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


                  // lookupTableId Field Functions 
                  bool hasLookupTableId() const { return this->lookupTableId_ != nullptr;};
                  void deleteLookupTableId() { this->lookupTableId_ = nullptr;};
                  inline int64_t getLookupTableId() const { DARABONBA_PTR_GET_DEFAULT(lookupTableId_, 0L) };
                  inline LookupTableReference& setLookupTableId(int64_t lookupTableId) { DARABONBA_PTR_SET_VALUE(lookupTableId_, lookupTableId) };


                protected:
                  shared_ptr<string> column_ {};
                  shared_ptr<int64_t> lookupTableId_ {};
                };

                virtual bool empty() const override { return this->dataphinAttributeType_ == nullptr
        && this->lookupTableReference_ == nullptr && this->minMaxValueConfig_ == nullptr && this->valueConstraint_ == nullptr && this->valueList_ == nullptr; };
                // dataphinAttributeType Field Functions 
                bool hasDataphinAttributeType() const { return this->dataphinAttributeType_ != nullptr;};
                void deleteDataphinAttributeType() { this->dataphinAttributeType_ = nullptr;};
                inline string getDataphinAttributeType() const { DARABONBA_PTR_GET_DEFAULT(dataphinAttributeType_, "") };
                inline ValueRange& setDataphinAttributeType(string dataphinAttributeType) { DARABONBA_PTR_SET_VALUE(dataphinAttributeType_, dataphinAttributeType) };


                // lookupTableReference Field Functions 
                bool hasLookupTableReference() const { return this->lookupTableReference_ != nullptr;};
                void deleteLookupTableReference() { this->lookupTableReference_ = nullptr;};
                inline const ValueRange::LookupTableReference & getLookupTableReference() const { DARABONBA_PTR_GET_CONST(lookupTableReference_, ValueRange::LookupTableReference) };
                inline ValueRange::LookupTableReference getLookupTableReference() { DARABONBA_PTR_GET(lookupTableReference_, ValueRange::LookupTableReference) };
                inline ValueRange& setLookupTableReference(const ValueRange::LookupTableReference & lookupTableReference) { DARABONBA_PTR_SET_VALUE(lookupTableReference_, lookupTableReference) };
                inline ValueRange& setLookupTableReference(ValueRange::LookupTableReference && lookupTableReference) { DARABONBA_PTR_SET_RVALUE(lookupTableReference_, lookupTableReference) };


                // minMaxValueConfig Field Functions 
                bool hasMinMaxValueConfig() const { return this->minMaxValueConfig_ != nullptr;};
                void deleteMinMaxValueConfig() { this->minMaxValueConfig_ = nullptr;};
                inline const ValueRange::MinMaxValueConfig & getMinMaxValueConfig() const { DARABONBA_PTR_GET_CONST(minMaxValueConfig_, ValueRange::MinMaxValueConfig) };
                inline ValueRange::MinMaxValueConfig getMinMaxValueConfig() { DARABONBA_PTR_GET(minMaxValueConfig_, ValueRange::MinMaxValueConfig) };
                inline ValueRange& setMinMaxValueConfig(const ValueRange::MinMaxValueConfig & minMaxValueConfig) { DARABONBA_PTR_SET_VALUE(minMaxValueConfig_, minMaxValueConfig) };
                inline ValueRange& setMinMaxValueConfig(ValueRange::MinMaxValueConfig && minMaxValueConfig) { DARABONBA_PTR_SET_RVALUE(minMaxValueConfig_, minMaxValueConfig) };


                // valueConstraint Field Functions 
                bool hasValueConstraint() const { return this->valueConstraint_ != nullptr;};
                void deleteValueConstraint() { this->valueConstraint_ = nullptr;};
                inline string getValueConstraint() const { DARABONBA_PTR_GET_DEFAULT(valueConstraint_, "") };
                inline ValueRange& setValueConstraint(string valueConstraint) { DARABONBA_PTR_SET_VALUE(valueConstraint_, valueConstraint) };


                // valueList Field Functions 
                bool hasValueList() const { return this->valueList_ != nullptr;};
                void deleteValueList() { this->valueList_ = nullptr;};
                inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
                inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
                inline ValueRange& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
                inline ValueRange& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


              protected:
                shared_ptr<string> dataphinAttributeType_ {};
                shared_ptr<ValueRange::LookupTableReference> lookupTableReference_ {};
                shared_ptr<ValueRange::MinMaxValueConfig> minMaxValueConfig_ {};
                shared_ptr<string> valueConstraint_ {};
                shared_ptr<vector<string>> valueList_ {};
              };

              virtual bool empty() const override { return this->dataType_ == nullptr
        && this->defaultValue_ == nullptr && this->length_ == nullptr && this->type_ == nullptr && this->valueRange_ == nullptr; };
              // dataType Field Functions 
              bool hasDataType() const { return this->dataType_ != nullptr;};
              void deleteDataType() { this->dataType_ = nullptr;};
              inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
              inline ValueConfig& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


              // defaultValue Field Functions 
              bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
              void deleteDefaultValue() { this->defaultValue_ = nullptr;};
              inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
              inline ValueConfig& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


              // length Field Functions 
              bool hasLength() const { return this->length_ != nullptr;};
              void deleteLength() { this->length_ = nullptr;};
              inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
              inline ValueConfig& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline ValueConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // valueRange Field Functions 
              bool hasValueRange() const { return this->valueRange_ != nullptr;};
              void deleteValueRange() { this->valueRange_ = nullptr;};
              inline const ValueConfig::ValueRange & getValueRange() const { DARABONBA_PTR_GET_CONST(valueRange_, ValueConfig::ValueRange) };
              inline ValueConfig::ValueRange getValueRange() { DARABONBA_PTR_GET(valueRange_, ValueConfig::ValueRange) };
              inline ValueConfig& setValueRange(const ValueConfig::ValueRange & valueRange) { DARABONBA_PTR_SET_VALUE(valueRange_, valueRange) };
              inline ValueConfig& setValueRange(ValueConfig::ValueRange && valueRange) { DARABONBA_PTR_SET_RVALUE(valueRange_, valueRange) };


            protected:
              shared_ptr<string> dataType_ {};
              shared_ptr<string> defaultValue_ {};
              shared_ptr<int32_t> length_ {};
              shared_ptr<string> type_ {};
              shared_ptr<ValueConfig::ValueRange> valueRange_ {};
            };

            class RefAttribute : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RefAttribute& obj) { 
                DARABONBA_PTR_TO_JSON(AttributeFromInfo, attributeFromInfo_);
                DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
              };
              friend void from_json(const Darabonba::Json& j, RefAttribute& obj) { 
                DARABONBA_PTR_FROM_JSON(AttributeFromInfo, attributeFromInfo_);
                DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
              };
              RefAttribute() = default ;
              RefAttribute(const RefAttribute &) = default ;
              RefAttribute(RefAttribute &&) = default ;
              RefAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RefAttribute() = default ;
              RefAttribute& operator=(const RefAttribute &) = default ;
              RefAttribute& operator=(RefAttribute &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class AttributeFromInfo : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const AttributeFromInfo& obj) { 
                  DARABONBA_PTR_TO_JSON(AttributeFrom, attributeFrom_);
                  DARABONBA_PTR_TO_JSON(StandardReference, standardReference_);
                };
                friend void from_json(const Darabonba::Json& j, AttributeFromInfo& obj) { 
                  DARABONBA_PTR_FROM_JSON(AttributeFrom, attributeFrom_);
                  DARABONBA_PTR_FROM_JSON(StandardReference, standardReference_);
                };
                AttributeFromInfo() = default ;
                AttributeFromInfo(const AttributeFromInfo &) = default ;
                AttributeFromInfo(AttributeFromInfo &&) = default ;
                AttributeFromInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~AttributeFromInfo() = default ;
                AttributeFromInfo& operator=(const AttributeFromInfo &) = default ;
                AttributeFromInfo& operator=(AttributeFromInfo &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class StandardReference : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const StandardReference& obj) { 
                    DARABONBA_PTR_TO_JSON(StandardId, standardId_);
                    DARABONBA_PTR_TO_JSON(Version, version_);
                  };
                  friend void from_json(const Darabonba::Json& j, StandardReference& obj) { 
                    DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
                    DARABONBA_PTR_FROM_JSON(Version, version_);
                  };
                  StandardReference() = default ;
                  StandardReference(const StandardReference &) = default ;
                  StandardReference(StandardReference &&) = default ;
                  StandardReference(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~StandardReference() = default ;
                  StandardReference& operator=(const StandardReference &) = default ;
                  StandardReference& operator=(StandardReference &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->standardId_ == nullptr
        && this->version_ == nullptr; };
                  // standardId Field Functions 
                  bool hasStandardId() const { return this->standardId_ != nullptr;};
                  void deleteStandardId() { this->standardId_ = nullptr;};
                  inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
                  inline StandardReference& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


                  // version Field Functions 
                  bool hasVersion() const { return this->version_ != nullptr;};
                  void deleteVersion() { this->version_ = nullptr;};
                  inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
                  inline StandardReference& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


                protected:
                  shared_ptr<int64_t> standardId_ {};
                  shared_ptr<int32_t> version_ {};
                };

                virtual bool empty() const override { return this->attributeFrom_ == nullptr
        && this->standardReference_ == nullptr; };
                // attributeFrom Field Functions 
                bool hasAttributeFrom() const { return this->attributeFrom_ != nullptr;};
                void deleteAttributeFrom() { this->attributeFrom_ = nullptr;};
                inline string getAttributeFrom() const { DARABONBA_PTR_GET_DEFAULT(attributeFrom_, "") };
                inline AttributeFromInfo& setAttributeFrom(string attributeFrom) { DARABONBA_PTR_SET_VALUE(attributeFrom_, attributeFrom) };


                // standardReference Field Functions 
                bool hasStandardReference() const { return this->standardReference_ != nullptr;};
                void deleteStandardReference() { this->standardReference_ = nullptr;};
                inline const AttributeFromInfo::StandardReference & getStandardReference() const { DARABONBA_PTR_GET_CONST(standardReference_, AttributeFromInfo::StandardReference) };
                inline AttributeFromInfo::StandardReference getStandardReference() { DARABONBA_PTR_GET(standardReference_, AttributeFromInfo::StandardReference) };
                inline AttributeFromInfo& setStandardReference(const AttributeFromInfo::StandardReference & standardReference) { DARABONBA_PTR_SET_VALUE(standardReference_, standardReference) };
                inline AttributeFromInfo& setStandardReference(AttributeFromInfo::StandardReference && standardReference) { DARABONBA_PTR_SET_RVALUE(standardReference_, standardReference) };


              protected:
                shared_ptr<string> attributeFrom_ {};
                shared_ptr<AttributeFromInfo::StandardReference> standardReference_ {};
              };

              virtual bool empty() const override { return this->attributeFromInfo_ == nullptr
        && this->attributeId_ == nullptr; };
              // attributeFromInfo Field Functions 
              bool hasAttributeFromInfo() const { return this->attributeFromInfo_ != nullptr;};
              void deleteAttributeFromInfo() { this->attributeFromInfo_ = nullptr;};
              inline const RefAttribute::AttributeFromInfo & getAttributeFromInfo() const { DARABONBA_PTR_GET_CONST(attributeFromInfo_, RefAttribute::AttributeFromInfo) };
              inline RefAttribute::AttributeFromInfo getAttributeFromInfo() { DARABONBA_PTR_GET(attributeFromInfo_, RefAttribute::AttributeFromInfo) };
              inline RefAttribute& setAttributeFromInfo(const RefAttribute::AttributeFromInfo & attributeFromInfo) { DARABONBA_PTR_SET_VALUE(attributeFromInfo_, attributeFromInfo) };
              inline RefAttribute& setAttributeFromInfo(RefAttribute::AttributeFromInfo && attributeFromInfo) { DARABONBA_PTR_SET_RVALUE(attributeFromInfo_, attributeFromInfo) };


              // attributeId Field Functions 
              bool hasAttributeId() const { return this->attributeId_ != nullptr;};
              void deleteAttributeId() { this->attributeId_ = nullptr;};
              inline int64_t getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, 0L) };
              inline RefAttribute& setAttributeId(int64_t attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


            protected:
              shared_ptr<RefAttribute::AttributeFromInfo> attributeFromInfo_ {};
              shared_ptr<int64_t> attributeId_ {};
            };

            class MonitorConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MonitorConfig& obj) { 
                DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
                DARABONBA_PTR_TO_JSON(IsCaseSensitive, isCaseSensitive_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, MonitorConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
                DARABONBA_PTR_FROM_JSON(IsCaseSensitive, isCaseSensitive_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              MonitorConfig() = default ;
              MonitorConfig(const MonitorConfig &) = default ;
              MonitorConfig(MonitorConfig &&) = default ;
              MonitorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~MonitorConfig() = default ;
              MonitorConfig& operator=(const MonitorConfig &) = default ;
              MonitorConfig& operator=(MonitorConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->columnName_ == nullptr
        && this->isCaseSensitive_ == nullptr && this->type_ == nullptr; };
              // columnName Field Functions 
              bool hasColumnName() const { return this->columnName_ != nullptr;};
              void deleteColumnName() { this->columnName_ = nullptr;};
              inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
              inline MonitorConfig& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


              // isCaseSensitive Field Functions 
              bool hasIsCaseSensitive() const { return this->isCaseSensitive_ != nullptr;};
              void deleteIsCaseSensitive() { this->isCaseSensitive_ = nullptr;};
              inline bool getIsCaseSensitive() const { DARABONBA_PTR_GET_DEFAULT(isCaseSensitive_, false) };
              inline MonitorConfig& setIsCaseSensitive(bool isCaseSensitive) { DARABONBA_PTR_SET_VALUE(isCaseSensitive_, isCaseSensitive) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline MonitorConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<string> columnName_ {};
              shared_ptr<bool> isCaseSensitive_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->enableMonitorConfig_ == nullptr && this->id_ == nullptr && this->monitorConfig_ == nullptr && this->name_ == nullptr
        && this->refAttribute_ == nullptr && this->required_ == nullptr && this->type_ == nullptr && this->valueConfig_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline Attribute& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Attribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // enableMonitorConfig Field Functions 
            bool hasEnableMonitorConfig() const { return this->enableMonitorConfig_ != nullptr;};
            void deleteEnableMonitorConfig() { this->enableMonitorConfig_ = nullptr;};
            inline bool getEnableMonitorConfig() const { DARABONBA_PTR_GET_DEFAULT(enableMonitorConfig_, false) };
            inline Attribute& setEnableMonitorConfig(bool enableMonitorConfig) { DARABONBA_PTR_SET_VALUE(enableMonitorConfig_, enableMonitorConfig) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline Attribute& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // monitorConfig Field Functions 
            bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
            void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
            inline const Attribute::MonitorConfig & getMonitorConfig() const { DARABONBA_PTR_GET_CONST(monitorConfig_, Attribute::MonitorConfig) };
            inline Attribute::MonitorConfig getMonitorConfig() { DARABONBA_PTR_GET(monitorConfig_, Attribute::MonitorConfig) };
            inline Attribute& setMonitorConfig(const Attribute::MonitorConfig & monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };
            inline Attribute& setMonitorConfig(Attribute::MonitorConfig && monitorConfig) { DARABONBA_PTR_SET_RVALUE(monitorConfig_, monitorConfig) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Attribute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // refAttribute Field Functions 
            bool hasRefAttribute() const { return this->refAttribute_ != nullptr;};
            void deleteRefAttribute() { this->refAttribute_ = nullptr;};
            inline const Attribute::RefAttribute & getRefAttribute() const { DARABONBA_PTR_GET_CONST(refAttribute_, Attribute::RefAttribute) };
            inline Attribute::RefAttribute getRefAttribute() { DARABONBA_PTR_GET(refAttribute_, Attribute::RefAttribute) };
            inline Attribute& setRefAttribute(const Attribute::RefAttribute & refAttribute) { DARABONBA_PTR_SET_VALUE(refAttribute_, refAttribute) };
            inline Attribute& setRefAttribute(Attribute::RefAttribute && refAttribute) { DARABONBA_PTR_SET_RVALUE(refAttribute_, refAttribute) };


            // required Field Functions 
            bool hasRequired() const { return this->required_ != nullptr;};
            void deleteRequired() { this->required_ = nullptr;};
            inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
            inline Attribute& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Attribute& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // valueConfig Field Functions 
            bool hasValueConfig() const { return this->valueConfig_ != nullptr;};
            void deleteValueConfig() { this->valueConfig_ = nullptr;};
            inline const Attribute::ValueConfig & getValueConfig() const { DARABONBA_PTR_GET_CONST(valueConfig_, Attribute::ValueConfig) };
            inline Attribute::ValueConfig getValueConfig() { DARABONBA_PTR_GET(valueConfig_, Attribute::ValueConfig) };
            inline Attribute& setValueConfig(const Attribute::ValueConfig & valueConfig) { DARABONBA_PTR_SET_VALUE(valueConfig_, valueConfig) };
            inline Attribute& setValueConfig(Attribute::ValueConfig && valueConfig) { DARABONBA_PTR_SET_RVALUE(valueConfig_, valueConfig) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> description_ {};
            shared_ptr<bool> enableMonitorConfig_ {};
            shared_ptr<int64_t> id_ {};
            shared_ptr<Attribute::MonitorConfig> monitorConfig_ {};
            shared_ptr<string> name_ {};
            shared_ptr<Attribute::RefAttribute> refAttribute_ {};
            shared_ptr<bool> required_ {};
            shared_ptr<string> type_ {};
            shared_ptr<Attribute::ValueConfig> valueConfig_ {};
          };

          virtual bool empty() const override { return this->attribute_ == nullptr
        && this->value_ == nullptr; };
          // attribute Field Functions 
          bool hasAttribute() const { return this->attribute_ != nullptr;};
          void deleteAttribute() { this->attribute_ = nullptr;};
          inline const AttributeWithValueList::Attribute & getAttribute() const { DARABONBA_PTR_GET_CONST(attribute_, AttributeWithValueList::Attribute) };
          inline AttributeWithValueList::Attribute getAttribute() { DARABONBA_PTR_GET(attribute_, AttributeWithValueList::Attribute) };
          inline AttributeWithValueList& setAttribute(const AttributeWithValueList::Attribute & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
          inline AttributeWithValueList& setAttribute(AttributeWithValueList::Attribute && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AttributeWithValueList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<AttributeWithValueList::Attribute> attribute_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->attributeWithValueList_ == nullptr
        && this->code_ == nullptr && this->creator_ == nullptr && this->description_ == nullptr && this->effectiveTimeConfig_ == nullptr && this->englishName_ == nullptr
        && this->id_ == nullptr && this->lastModifier_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->stage_ == nullptr && this->standardSet_ == nullptr && this->standardTemplate_ == nullptr && this->status_ == nullptr && this->type_ == nullptr
        && this->version_ == nullptr; };
        // attributeWithValueList Field Functions 
        bool hasAttributeWithValueList() const { return this->attributeWithValueList_ != nullptr;};
        void deleteAttributeWithValueList() { this->attributeWithValueList_ = nullptr;};
        inline const vector<StandardList::AttributeWithValueList> & getAttributeWithValueList() const { DARABONBA_PTR_GET_CONST(attributeWithValueList_, vector<StandardList::AttributeWithValueList>) };
        inline vector<StandardList::AttributeWithValueList> getAttributeWithValueList() { DARABONBA_PTR_GET(attributeWithValueList_, vector<StandardList::AttributeWithValueList>) };
        inline StandardList& setAttributeWithValueList(const vector<StandardList::AttributeWithValueList> & attributeWithValueList) { DARABONBA_PTR_SET_VALUE(attributeWithValueList_, attributeWithValueList) };
        inline StandardList& setAttributeWithValueList(vector<StandardList::AttributeWithValueList> && attributeWithValueList) { DARABONBA_PTR_SET_RVALUE(attributeWithValueList_, attributeWithValueList) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline StandardList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline const StandardList::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, StandardList::Creator) };
        inline StandardList::Creator getCreator() { DARABONBA_PTR_GET(creator_, StandardList::Creator) };
        inline StandardList& setCreator(const StandardList::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
        inline StandardList& setCreator(StandardList::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline StandardList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectiveTimeConfig Field Functions 
        bool hasEffectiveTimeConfig() const { return this->effectiveTimeConfig_ != nullptr;};
        void deleteEffectiveTimeConfig() { this->effectiveTimeConfig_ = nullptr;};
        inline const StandardList::EffectiveTimeConfig & getEffectiveTimeConfig() const { DARABONBA_PTR_GET_CONST(effectiveTimeConfig_, StandardList::EffectiveTimeConfig) };
        inline StandardList::EffectiveTimeConfig getEffectiveTimeConfig() { DARABONBA_PTR_GET(effectiveTimeConfig_, StandardList::EffectiveTimeConfig) };
        inline StandardList& setEffectiveTimeConfig(const StandardList::EffectiveTimeConfig & effectiveTimeConfig) { DARABONBA_PTR_SET_VALUE(effectiveTimeConfig_, effectiveTimeConfig) };
        inline StandardList& setEffectiveTimeConfig(StandardList::EffectiveTimeConfig && effectiveTimeConfig) { DARABONBA_PTR_SET_RVALUE(effectiveTimeConfig_, effectiveTimeConfig) };


        // englishName Field Functions 
        bool hasEnglishName() const { return this->englishName_ != nullptr;};
        void deleteEnglishName() { this->englishName_ = nullptr;};
        inline string getEnglishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
        inline StandardList& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline StandardList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline const StandardList::LastModifier & getLastModifier() const { DARABONBA_PTR_GET_CONST(lastModifier_, StandardList::LastModifier) };
        inline StandardList::LastModifier getLastModifier() { DARABONBA_PTR_GET(lastModifier_, StandardList::LastModifier) };
        inline StandardList& setLastModifier(const StandardList::LastModifier & lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };
        inline StandardList& setLastModifier(StandardList::LastModifier && lastModifier) { DARABONBA_PTR_SET_RVALUE(lastModifier_, lastModifier) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline StandardList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline StandardList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline const StandardList::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, StandardList::Owner) };
        inline StandardList::Owner getOwner() { DARABONBA_PTR_GET(owner_, StandardList::Owner) };
        inline StandardList& setOwner(const StandardList::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
        inline StandardList& setOwner(StandardList::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


        // stage Field Functions 
        bool hasStage() const { return this->stage_ != nullptr;};
        void deleteStage() { this->stage_ = nullptr;};
        inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
        inline StandardList& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


        // standardSet Field Functions 
        bool hasStandardSet() const { return this->standardSet_ != nullptr;};
        void deleteStandardSet() { this->standardSet_ = nullptr;};
        inline const StandardList::StandardSet & getStandardSet() const { DARABONBA_PTR_GET_CONST(standardSet_, StandardList::StandardSet) };
        inline StandardList::StandardSet getStandardSet() { DARABONBA_PTR_GET(standardSet_, StandardList::StandardSet) };
        inline StandardList& setStandardSet(const StandardList::StandardSet & standardSet) { DARABONBA_PTR_SET_VALUE(standardSet_, standardSet) };
        inline StandardList& setStandardSet(StandardList::StandardSet && standardSet) { DARABONBA_PTR_SET_RVALUE(standardSet_, standardSet) };


        // standardTemplate Field Functions 
        bool hasStandardTemplate() const { return this->standardTemplate_ != nullptr;};
        void deleteStandardTemplate() { this->standardTemplate_ = nullptr;};
        inline const StandardList::StandardTemplate & getStandardTemplate() const { DARABONBA_PTR_GET_CONST(standardTemplate_, StandardList::StandardTemplate) };
        inline StandardList::StandardTemplate getStandardTemplate() { DARABONBA_PTR_GET(standardTemplate_, StandardList::StandardTemplate) };
        inline StandardList& setStandardTemplate(const StandardList::StandardTemplate & standardTemplate) { DARABONBA_PTR_SET_VALUE(standardTemplate_, standardTemplate) };
        inline StandardList& setStandardTemplate(StandardList::StandardTemplate && standardTemplate) { DARABONBA_PTR_SET_RVALUE(standardTemplate_, standardTemplate) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StandardList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline StandardList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline StandardList& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<vector<StandardList::AttributeWithValueList>> attributeWithValueList_ {};
        shared_ptr<string> code_ {};
        shared_ptr<StandardList::Creator> creator_ {};
        shared_ptr<string> description_ {};
        shared_ptr<StandardList::EffectiveTimeConfig> effectiveTimeConfig_ {};
        shared_ptr<string> englishName_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<StandardList::LastModifier> lastModifier_ {};
        shared_ptr<string> modifyTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<StandardList::Owner> owner_ {};
        shared_ptr<string> stage_ {};
        shared_ptr<StandardList::StandardSet> standardSet_ {};
        shared_ptr<StandardList::StandardTemplate> standardTemplate_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> version_ {};
      };

      virtual bool empty() const override { return this->standardList_ == nullptr
        && this->totalCount_ == nullptr; };
      // standardList Field Functions 
      bool hasStandardList() const { return this->standardList_ != nullptr;};
      void deleteStandardList() { this->standardList_ = nullptr;};
      inline const vector<PageResult::StandardList> & getStandardList() const { DARABONBA_PTR_GET_CONST(standardList_, vector<PageResult::StandardList>) };
      inline vector<PageResult::StandardList> getStandardList() { DARABONBA_PTR_GET(standardList_, vector<PageResult::StandardList>) };
      inline PageResult& setStandardList(const vector<PageResult::StandardList> & standardList) { DARABONBA_PTR_SET_VALUE(standardList_, standardList) };
      inline PageResult& setStandardList(vector<PageResult::StandardList> && standardList) { DARABONBA_PTR_SET_RVALUE(standardList_, standardList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline PageResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::StandardList>> standardList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListStandardsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListStandardsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListStandardsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListStandardsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListStandardsResponseBody::PageResult) };
    inline ListStandardsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListStandardsResponseBody::PageResult) };
    inline ListStandardsResponseBody& setPageResult(const ListStandardsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListStandardsResponseBody& setPageResult(ListStandardsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStandardsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListStandardsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListStandardsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
