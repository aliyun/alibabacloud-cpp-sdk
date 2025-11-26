// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYNACOSGRAYCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYNACOSGRAYCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryNacosGrayConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryNacosGrayConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(GrayRule, grayRule_);
      DARABONBA_PTR_TO_JSON(GrayRuleName, grayRuleName_);
      DARABONBA_PTR_TO_JSON(GrayRulePriority, grayRulePriority_);
      DARABONBA_PTR_TO_JSON(GrayType, grayType_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
    };
    friend void from_json(const Darabonba::Json& j, QueryNacosGrayConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(GrayRule, grayRule_);
      DARABONBA_PTR_FROM_JSON(GrayRuleName, grayRuleName_);
      DARABONBA_PTR_FROM_JSON(GrayRulePriority, grayRulePriority_);
      DARABONBA_PTR_FROM_JSON(GrayType, grayType_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
    };
    QueryNacosGrayConfigResponseBodyData() = default ;
    QueryNacosGrayConfigResponseBodyData(const QueryNacosGrayConfigResponseBodyData &) = default ;
    QueryNacosGrayConfigResponseBodyData(QueryNacosGrayConfigResponseBodyData &&) = default ;
    QueryNacosGrayConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryNacosGrayConfigResponseBodyData() = default ;
    QueryNacosGrayConfigResponseBodyData& operator=(const QueryNacosGrayConfigResponseBodyData &) = default ;
    QueryNacosGrayConfigResponseBodyData& operator=(QueryNacosGrayConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->content_ == nullptr && return this->dataId_ == nullptr && return this->grayRule_ == nullptr && return this->grayRuleName_ == nullptr && return this->grayRulePriority_ == nullptr
        && return this->grayType_ == nullptr && return this->group_ == nullptr && return this->lastModified_ == nullptr && return this->md5_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // grayRule Field Functions 
    bool hasGrayRule() const { return this->grayRule_ != nullptr;};
    void deleteGrayRule() { this->grayRule_ = nullptr;};
    inline string grayRule() const { DARABONBA_PTR_GET_DEFAULT(grayRule_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setGrayRule(string grayRule) { DARABONBA_PTR_SET_VALUE(grayRule_, grayRule) };


    // grayRuleName Field Functions 
    bool hasGrayRuleName() const { return this->grayRuleName_ != nullptr;};
    void deleteGrayRuleName() { this->grayRuleName_ = nullptr;};
    inline string grayRuleName() const { DARABONBA_PTR_GET_DEFAULT(grayRuleName_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setGrayRuleName(string grayRuleName) { DARABONBA_PTR_SET_VALUE(grayRuleName_, grayRuleName) };


    // grayRulePriority Field Functions 
    bool hasGrayRulePriority() const { return this->grayRulePriority_ != nullptr;};
    void deleteGrayRulePriority() { this->grayRulePriority_ = nullptr;};
    inline string grayRulePriority() const { DARABONBA_PTR_GET_DEFAULT(grayRulePriority_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setGrayRulePriority(string grayRulePriority) { DARABONBA_PTR_SET_VALUE(grayRulePriority_, grayRulePriority) };


    // grayType Field Functions 
    bool hasGrayType() const { return this->grayType_ != nullptr;};
    void deleteGrayType() { this->grayType_ = nullptr;};
    inline string grayType() const { DARABONBA_PTR_GET_DEFAULT(grayType_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setGrayType(string grayType) { DARABONBA_PTR_SET_VALUE(grayType_, grayType) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline QueryNacosGrayConfigResponseBodyData& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


  protected:
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<string> grayRule_ = nullptr;
    std::shared_ptr<string> grayRuleName_ = nullptr;
    std::shared_ptr<string> grayRulePriority_ = nullptr;
    std::shared_ptr<string> grayType_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> lastModified_ = nullptr;
    std::shared_ptr<string> md5_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
