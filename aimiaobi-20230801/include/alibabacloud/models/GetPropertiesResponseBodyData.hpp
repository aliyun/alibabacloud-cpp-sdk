// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataConsoleConfig.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataIntelligentSearchConfig.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataMiaosouConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetPropertiesResponseBodyDataSearchSourceList.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataSearchSources.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataUserInfo.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataWanxiangImageSizeConfig.hpp>
#include <alibabacloud/models/GetPropertiesResponseBodyDataWanxiangImageStyleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyData& obj) { 
      DARABONBA_ANY_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(ConsoleConfig, consoleConfig_);
      DARABONBA_ANY_TO_JSON(GeneralConfigMap, generalConfigMap_);
      DARABONBA_PTR_TO_JSON(IntelligentSearchConfig, intelligentSearchConfig_);
      DARABONBA_PTR_TO_JSON(MiaosouConfig, miaosouConfig_);
      DARABONBA_PTR_TO_JSON(SearchSourceList, searchSourceList_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_TO_JSON(SlrAuthorized, slrAuthorized_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(WanxiangImageSizeConfig, wanxiangImageSizeConfig_);
      DARABONBA_PTR_TO_JSON(WanxiangImageStyleConfig, wanxiangImageStyleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyData& obj) { 
      DARABONBA_ANY_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(ConsoleConfig, consoleConfig_);
      DARABONBA_ANY_FROM_JSON(GeneralConfigMap, generalConfigMap_);
      DARABONBA_PTR_FROM_JSON(IntelligentSearchConfig, intelligentSearchConfig_);
      DARABONBA_PTR_FROM_JSON(MiaosouConfig, miaosouConfig_);
      DARABONBA_PTR_FROM_JSON(SearchSourceList, searchSourceList_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_FROM_JSON(SlrAuthorized, slrAuthorized_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(WanxiangImageSizeConfig, wanxiangImageSizeConfig_);
      DARABONBA_PTR_FROM_JSON(WanxiangImageStyleConfig, wanxiangImageStyleConfig_);
    };
    GetPropertiesResponseBodyData() = default ;
    GetPropertiesResponseBodyData(const GetPropertiesResponseBodyData &) = default ;
    GetPropertiesResponseBodyData(GetPropertiesResponseBodyData &&) = default ;
    GetPropertiesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyData() = default ;
    GetPropertiesResponseBodyData& operator=(const GetPropertiesResponseBodyData &) = default ;
    GetPropertiesResponseBodyData& operator=(GetPropertiesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatConfig_ == nullptr
        && return this->consoleConfig_ == nullptr && return this->generalConfigMap_ == nullptr && return this->intelligentSearchConfig_ == nullptr && return this->miaosouConfig_ == nullptr && return this->searchSourceList_ == nullptr
        && return this->searchSources_ == nullptr && return this->slrAuthorized_ == nullptr && return this->userInfo_ == nullptr && return this->wanxiangImageSizeConfig_ == nullptr && return this->wanxiangImageStyleConfig_ == nullptr; };
    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline     const Darabonba::Json & chatConfig() const { DARABONBA_GET(chatConfig_) };
    Darabonba::Json & chatConfig() { DARABONBA_GET(chatConfig_) };
    inline GetPropertiesResponseBodyData& setChatConfig(const Darabonba::Json & chatConfig) { DARABONBA_SET_VALUE(chatConfig_, chatConfig) };
    inline GetPropertiesResponseBodyData& setChatConfig(Darabonba::Json & chatConfig) { DARABONBA_SET_RVALUE(chatConfig_, chatConfig) };


    // consoleConfig Field Functions 
    bool hasConsoleConfig() const { return this->consoleConfig_ != nullptr;};
    void deleteConsoleConfig() { this->consoleConfig_ = nullptr;};
    inline const Models::GetPropertiesResponseBodyDataConsoleConfig & consoleConfig() const { DARABONBA_PTR_GET_CONST(consoleConfig_, Models::GetPropertiesResponseBodyDataConsoleConfig) };
    inline Models::GetPropertiesResponseBodyDataConsoleConfig consoleConfig() { DARABONBA_PTR_GET(consoleConfig_, Models::GetPropertiesResponseBodyDataConsoleConfig) };
    inline GetPropertiesResponseBodyData& setConsoleConfig(const Models::GetPropertiesResponseBodyDataConsoleConfig & consoleConfig) { DARABONBA_PTR_SET_VALUE(consoleConfig_, consoleConfig) };
    inline GetPropertiesResponseBodyData& setConsoleConfig(Models::GetPropertiesResponseBodyDataConsoleConfig && consoleConfig) { DARABONBA_PTR_SET_RVALUE(consoleConfig_, consoleConfig) };


    // generalConfigMap Field Functions 
    bool hasGeneralConfigMap() const { return this->generalConfigMap_ != nullptr;};
    void deleteGeneralConfigMap() { this->generalConfigMap_ = nullptr;};
    inline     const Darabonba::Json & generalConfigMap() const { DARABONBA_GET(generalConfigMap_) };
    Darabonba::Json & generalConfigMap() { DARABONBA_GET(generalConfigMap_) };
    inline GetPropertiesResponseBodyData& setGeneralConfigMap(const Darabonba::Json & generalConfigMap) { DARABONBA_SET_VALUE(generalConfigMap_, generalConfigMap) };
    inline GetPropertiesResponseBodyData& setGeneralConfigMap(Darabonba::Json & generalConfigMap) { DARABONBA_SET_RVALUE(generalConfigMap_, generalConfigMap) };


    // intelligentSearchConfig Field Functions 
    bool hasIntelligentSearchConfig() const { return this->intelligentSearchConfig_ != nullptr;};
    void deleteIntelligentSearchConfig() { this->intelligentSearchConfig_ = nullptr;};
    inline const Models::GetPropertiesResponseBodyDataIntelligentSearchConfig & intelligentSearchConfig() const { DARABONBA_PTR_GET_CONST(intelligentSearchConfig_, Models::GetPropertiesResponseBodyDataIntelligentSearchConfig) };
    inline Models::GetPropertiesResponseBodyDataIntelligentSearchConfig intelligentSearchConfig() { DARABONBA_PTR_GET(intelligentSearchConfig_, Models::GetPropertiesResponseBodyDataIntelligentSearchConfig) };
    inline GetPropertiesResponseBodyData& setIntelligentSearchConfig(const Models::GetPropertiesResponseBodyDataIntelligentSearchConfig & intelligentSearchConfig) { DARABONBA_PTR_SET_VALUE(intelligentSearchConfig_, intelligentSearchConfig) };
    inline GetPropertiesResponseBodyData& setIntelligentSearchConfig(Models::GetPropertiesResponseBodyDataIntelligentSearchConfig && intelligentSearchConfig) { DARABONBA_PTR_SET_RVALUE(intelligentSearchConfig_, intelligentSearchConfig) };


    // miaosouConfig Field Functions 
    bool hasMiaosouConfig() const { return this->miaosouConfig_ != nullptr;};
    void deleteMiaosouConfig() { this->miaosouConfig_ = nullptr;};
    inline const Models::GetPropertiesResponseBodyDataMiaosouConfig & miaosouConfig() const { DARABONBA_PTR_GET_CONST(miaosouConfig_, Models::GetPropertiesResponseBodyDataMiaosouConfig) };
    inline Models::GetPropertiesResponseBodyDataMiaosouConfig miaosouConfig() { DARABONBA_PTR_GET(miaosouConfig_, Models::GetPropertiesResponseBodyDataMiaosouConfig) };
    inline GetPropertiesResponseBodyData& setMiaosouConfig(const Models::GetPropertiesResponseBodyDataMiaosouConfig & miaosouConfig) { DARABONBA_PTR_SET_VALUE(miaosouConfig_, miaosouConfig) };
    inline GetPropertiesResponseBodyData& setMiaosouConfig(Models::GetPropertiesResponseBodyDataMiaosouConfig && miaosouConfig) { DARABONBA_PTR_SET_RVALUE(miaosouConfig_, miaosouConfig) };


    // searchSourceList Field Functions 
    bool hasSearchSourceList() const { return this->searchSourceList_ != nullptr;};
    void deleteSearchSourceList() { this->searchSourceList_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataSearchSourceList> & searchSourceList() const { DARABONBA_PTR_GET_CONST(searchSourceList_, vector<Models::GetPropertiesResponseBodyDataSearchSourceList>) };
    inline vector<Models::GetPropertiesResponseBodyDataSearchSourceList> searchSourceList() { DARABONBA_PTR_GET(searchSourceList_, vector<Models::GetPropertiesResponseBodyDataSearchSourceList>) };
    inline GetPropertiesResponseBodyData& setSearchSourceList(const vector<Models::GetPropertiesResponseBodyDataSearchSourceList> & searchSourceList) { DARABONBA_PTR_SET_VALUE(searchSourceList_, searchSourceList) };
    inline GetPropertiesResponseBodyData& setSearchSourceList(vector<Models::GetPropertiesResponseBodyDataSearchSourceList> && searchSourceList) { DARABONBA_PTR_SET_RVALUE(searchSourceList_, searchSourceList) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<Models::GetPropertiesResponseBodyDataSearchSources>) };
    inline vector<Models::GetPropertiesResponseBodyDataSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<Models::GetPropertiesResponseBodyDataSearchSources>) };
    inline GetPropertiesResponseBodyData& setSearchSources(const vector<Models::GetPropertiesResponseBodyDataSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline GetPropertiesResponseBodyData& setSearchSources(vector<Models::GetPropertiesResponseBodyDataSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // slrAuthorized Field Functions 
    bool hasSlrAuthorized() const { return this->slrAuthorized_ != nullptr;};
    void deleteSlrAuthorized() { this->slrAuthorized_ = nullptr;};
    inline bool slrAuthorized() const { DARABONBA_PTR_GET_DEFAULT(slrAuthorized_, false) };
    inline GetPropertiesResponseBodyData& setSlrAuthorized(bool slrAuthorized) { DARABONBA_PTR_SET_VALUE(slrAuthorized_, slrAuthorized) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const Models::GetPropertiesResponseBodyDataUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Models::GetPropertiesResponseBodyDataUserInfo) };
    inline Models::GetPropertiesResponseBodyDataUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, Models::GetPropertiesResponseBodyDataUserInfo) };
    inline GetPropertiesResponseBodyData& setUserInfo(const Models::GetPropertiesResponseBodyDataUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetPropertiesResponseBodyData& setUserInfo(Models::GetPropertiesResponseBodyDataUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // wanxiangImageSizeConfig Field Functions 
    bool hasWanxiangImageSizeConfig() const { return this->wanxiangImageSizeConfig_ != nullptr;};
    void deleteWanxiangImageSizeConfig() { this->wanxiangImageSizeConfig_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig> & wanxiangImageSizeConfig() const { DARABONBA_PTR_GET_CONST(wanxiangImageSizeConfig_, vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig>) };
    inline vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig> wanxiangImageSizeConfig() { DARABONBA_PTR_GET(wanxiangImageSizeConfig_, vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig>) };
    inline GetPropertiesResponseBodyData& setWanxiangImageSizeConfig(const vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig> & wanxiangImageSizeConfig) { DARABONBA_PTR_SET_VALUE(wanxiangImageSizeConfig_, wanxiangImageSizeConfig) };
    inline GetPropertiesResponseBodyData& setWanxiangImageSizeConfig(vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig> && wanxiangImageSizeConfig) { DARABONBA_PTR_SET_RVALUE(wanxiangImageSizeConfig_, wanxiangImageSizeConfig) };


    // wanxiangImageStyleConfig Field Functions 
    bool hasWanxiangImageStyleConfig() const { return this->wanxiangImageStyleConfig_ != nullptr;};
    void deleteWanxiangImageStyleConfig() { this->wanxiangImageStyleConfig_ = nullptr;};
    inline const vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig> & wanxiangImageStyleConfig() const { DARABONBA_PTR_GET_CONST(wanxiangImageStyleConfig_, vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig>) };
    inline vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig> wanxiangImageStyleConfig() { DARABONBA_PTR_GET(wanxiangImageStyleConfig_, vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig>) };
    inline GetPropertiesResponseBodyData& setWanxiangImageStyleConfig(const vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig> & wanxiangImageStyleConfig) { DARABONBA_PTR_SET_VALUE(wanxiangImageStyleConfig_, wanxiangImageStyleConfig) };
    inline GetPropertiesResponseBodyData& setWanxiangImageStyleConfig(vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig> && wanxiangImageStyleConfig) { DARABONBA_PTR_SET_RVALUE(wanxiangImageStyleConfig_, wanxiangImageStyleConfig) };


  protected:
    Darabonba::Json chatConfig_ = nullptr;
    std::shared_ptr<Models::GetPropertiesResponseBodyDataConsoleConfig> consoleConfig_ = nullptr;
    Darabonba::Json generalConfigMap_ = nullptr;
    std::shared_ptr<Models::GetPropertiesResponseBodyDataIntelligentSearchConfig> intelligentSearchConfig_ = nullptr;
    std::shared_ptr<Models::GetPropertiesResponseBodyDataMiaosouConfig> miaosouConfig_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataSearchSourceList>> searchSourceList_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataSearchSources>> searchSources_ = nullptr;
    std::shared_ptr<bool> slrAuthorized_ = nullptr;
    std::shared_ptr<Models::GetPropertiesResponseBodyDataUserInfo> userInfo_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataWanxiangImageSizeConfig>> wanxiangImageSizeConfig_ = nullptr;
    std::shared_ptr<vector<Models::GetPropertiesResponseBodyDataWanxiangImageStyleConfig>> wanxiangImageStyleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
