// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MERGEROBOT_HPP_
#define ALIBABACLOUD_MODELS_MERGEROBOT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MergeRobotExtend.hpp>
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
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->extend_ != nullptr && this->gmtModified_ != nullptr && this->identifier_ != nullptr && this->lang_ != nullptr && this->name_ != nullptr
        && this->source_ != nullptr && this->type_ != nullptr && this->webhook_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MergeRobot& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline const MergeRobotExtend & extend() const { DARABONBA_PTR_GET_CONST(extend_, MergeRobotExtend) };
    inline MergeRobotExtend extend() { DARABONBA_PTR_GET(extend_, MergeRobotExtend) };
    inline MergeRobot& setExtend(const MergeRobotExtend & extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };
    inline MergeRobot& setExtend(MergeRobotExtend && extend) { DARABONBA_PTR_SET_RVALUE(extend_, extend) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MergeRobot& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline MergeRobot& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline MergeRobot& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MergeRobot& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline MergeRobot& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MergeRobot& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline MergeRobot& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<MergeRobotExtend> extend_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
