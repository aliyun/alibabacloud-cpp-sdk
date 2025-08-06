// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListApplicationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(ApplicationStatus, applicationStatus_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Icon, icon_);
      DARABONBA_PTR_TO_JSON(Inexistence, inexistence_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SubCorpId, subCorpId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(ApplicationStatus, applicationStatus_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(CreatorUserId, creatorUserId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Icon, icon_);
      DARABONBA_PTR_FROM_JSON(Inexistence, inexistence_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SubCorpId, subCorpId_);
    };
    ListApplicationResponseBodyData() = default ;
    ListApplicationResponseBodyData(const ListApplicationResponseBodyData &) = default ;
    ListApplicationResponseBodyData(ListApplicationResponseBodyData &&) = default ;
    ListApplicationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationResponseBodyData() = default ;
    ListApplicationResponseBodyData& operator=(const ListApplicationResponseBodyData &) = default ;
    ListApplicationResponseBodyData& operator=(ListApplicationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appConfig_ != nullptr
        && this->appType_ != nullptr && this->applicationStatus_ != nullptr && this->corpId_ != nullptr && this->creatorUserId_ != nullptr && this->description_ != nullptr
        && this->icon_ != nullptr && this->inexistence_ != nullptr && this->name_ != nullptr && this->subCorpId_ != nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline string appConfig() const { DARABONBA_PTR_GET_DEFAULT(appConfig_, "") };
    inline ListApplicationResponseBodyData& setAppConfig(string appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListApplicationResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // applicationStatus Field Functions 
    bool hasApplicationStatus() const { return this->applicationStatus_ != nullptr;};
    void deleteApplicationStatus() { this->applicationStatus_ = nullptr;};
    inline string applicationStatus() const { DARABONBA_PTR_GET_DEFAULT(applicationStatus_, "") };
    inline ListApplicationResponseBodyData& setApplicationStatus(string applicationStatus) { DARABONBA_PTR_SET_VALUE(applicationStatus_, applicationStatus) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline ListApplicationResponseBodyData& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline ListApplicationResponseBodyData& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // icon Field Functions 
    bool hasIcon() const { return this->icon_ != nullptr;};
    void deleteIcon() { this->icon_ = nullptr;};
    inline string icon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
    inline ListApplicationResponseBodyData& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


    // inexistence Field Functions 
    bool hasInexistence() const { return this->inexistence_ != nullptr;};
    void deleteInexistence() { this->inexistence_ = nullptr;};
    inline string inexistence() const { DARABONBA_PTR_GET_DEFAULT(inexistence_, "") };
    inline ListApplicationResponseBodyData& setInexistence(string inexistence) { DARABONBA_PTR_SET_VALUE(inexistence_, inexistence) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ListApplicationResponseBodyData& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


  protected:
    std::shared_ptr<string> appConfig_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> applicationStatus_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> creatorUserId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> icon_ = nullptr;
    std::shared_ptr<string> inexistence_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
