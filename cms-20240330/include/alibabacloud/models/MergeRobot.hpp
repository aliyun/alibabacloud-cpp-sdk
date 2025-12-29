// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEROBOT_HPP_
#define ALIBABACLOUD_MODELS_MERGEROBOT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class MergeRobot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MergeRobot& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(extend, extend_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, MergeRobot& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(extend, extend_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(webhook, webhook_);
    };
    MergeRobot() = default ;
    MergeRobot(const MergeRobot &) = default ;
    MergeRobot(MergeRobot &&) = default ;
    MergeRobot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MergeRobot() = default ;
    MergeRobot& operator=(const MergeRobot &) = default ;
    MergeRobot& operator=(MergeRobot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Extend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Extend& obj) { 
        DARABONBA_PTR_TO_JSON(cardTemplate, cardTemplate_);
        DARABONBA_PTR_TO_JSON(dailyNoc, dailyNoc_);
        DARABONBA_PTR_TO_JSON(dailyNocTime, dailyNocTime_);
        DARABONBA_PTR_TO_JSON(dingSignKey, dingSignKey_);
        DARABONBA_PTR_TO_JSON(enableOutgoing, enableOutgoing_);
        DARABONBA_PTR_TO_JSON(token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Extend& obj) { 
        DARABONBA_PTR_FROM_JSON(cardTemplate, cardTemplate_);
        DARABONBA_PTR_FROM_JSON(dailyNoc, dailyNoc_);
        DARABONBA_PTR_FROM_JSON(dailyNocTime, dailyNocTime_);
        DARABONBA_PTR_FROM_JSON(dingSignKey, dingSignKey_);
        DARABONBA_PTR_FROM_JSON(enableOutgoing, enableOutgoing_);
        DARABONBA_PTR_FROM_JSON(token, token_);
      };
      Extend() = default ;
      Extend(const Extend &) = default ;
      Extend(Extend &&) = default ;
      Extend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Extend() = default ;
      Extend& operator=(const Extend &) = default ;
      Extend& operator=(Extend &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cardTemplate_ == nullptr
        && this->dailyNoc_ == nullptr && this->dailyNocTime_ == nullptr && this->dingSignKey_ == nullptr && this->enableOutgoing_ == nullptr && this->token_ == nullptr; };
      // cardTemplate Field Functions 
      bool hasCardTemplate() const { return this->cardTemplate_ != nullptr;};
      void deleteCardTemplate() { this->cardTemplate_ = nullptr;};
      inline string getCardTemplate() const { DARABONBA_PTR_GET_DEFAULT(cardTemplate_, "") };
      inline Extend& setCardTemplate(string cardTemplate) { DARABONBA_PTR_SET_VALUE(cardTemplate_, cardTemplate) };


      // dailyNoc Field Functions 
      bool hasDailyNoc() const { return this->dailyNoc_ != nullptr;};
      void deleteDailyNoc() { this->dailyNoc_ = nullptr;};
      inline bool getDailyNoc() const { DARABONBA_PTR_GET_DEFAULT(dailyNoc_, false) };
      inline Extend& setDailyNoc(bool dailyNoc) { DARABONBA_PTR_SET_VALUE(dailyNoc_, dailyNoc) };


      // dailyNocTime Field Functions 
      bool hasDailyNocTime() const { return this->dailyNocTime_ != nullptr;};
      void deleteDailyNocTime() { this->dailyNocTime_ = nullptr;};
      inline string getDailyNocTime() const { DARABONBA_PTR_GET_DEFAULT(dailyNocTime_, "") };
      inline Extend& setDailyNocTime(string dailyNocTime) { DARABONBA_PTR_SET_VALUE(dailyNocTime_, dailyNocTime) };


      // dingSignKey Field Functions 
      bool hasDingSignKey() const { return this->dingSignKey_ != nullptr;};
      void deleteDingSignKey() { this->dingSignKey_ = nullptr;};
      inline string getDingSignKey() const { DARABONBA_PTR_GET_DEFAULT(dingSignKey_, "") };
      inline Extend& setDingSignKey(string dingSignKey) { DARABONBA_PTR_SET_VALUE(dingSignKey_, dingSignKey) };


      // enableOutgoing Field Functions 
      bool hasEnableOutgoing() const { return this->enableOutgoing_ != nullptr;};
      void deleteEnableOutgoing() { this->enableOutgoing_ = nullptr;};
      inline bool getEnableOutgoing() const { DARABONBA_PTR_GET_DEFAULT(enableOutgoing_, false) };
      inline Extend& setEnableOutgoing(bool enableOutgoing) { DARABONBA_PTR_SET_VALUE(enableOutgoing_, enableOutgoing) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Extend& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      shared_ptr<string> cardTemplate_ {};
      shared_ptr<bool> dailyNoc_ {};
      shared_ptr<string> dailyNocTime_ {};
      shared_ptr<string> dingSignKey_ {};
      shared_ptr<bool> enableOutgoing_ {};
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->extend_ == nullptr && this->gmtModified_ == nullptr && this->identifier_ == nullptr && this->lang_ == nullptr && this->name_ == nullptr
        && this->source_ == nullptr && this->type_ == nullptr && this->webhook_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MergeRobot& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const MergeRobot::Extend & getExtend() const { DARABONBA_PTR_GET_CONST(extend_, MergeRobot::Extend) };
    inline MergeRobot::Extend getExtend() { DARABONBA_PTR_GET(extend_, MergeRobot::Extend) };
    inline MergeRobot& setExtend(const MergeRobot::Extend & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline MergeRobot& setExtend(MergeRobot::Extend && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MergeRobot& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeRobot& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MergeRobot& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeRobot& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeRobot& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MergeRobot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline MergeRobot& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<MergeRobot::Extend> extend_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> identifier_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> webhook_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
