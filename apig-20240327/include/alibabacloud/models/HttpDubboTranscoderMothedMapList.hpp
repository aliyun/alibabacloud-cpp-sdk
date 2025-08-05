// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODERMOTHEDMAPLIST_HPP_
#define ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODERMOTHEDMAPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpDubboTranscoderMothedMapListParamMapsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpDubboTranscoderMothedMapList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpDubboTranscoderMothedMapList& obj) { 
      DARABONBA_PTR_TO_JSON(dubboMothedName, dubboMothedName_);
      DARABONBA_PTR_TO_JSON(httpMothed, httpMothed_);
      DARABONBA_PTR_TO_JSON(mothedpath, mothedpath_);
      DARABONBA_PTR_TO_JSON(paramMapsList, paramMapsList_);
      DARABONBA_PTR_TO_JSON(passThroughAllHeaders, passThroughAllHeaders_);
      DARABONBA_PTR_TO_JSON(passThroughList, passThroughList_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDubboTranscoderMothedMapList& obj) { 
      DARABONBA_PTR_FROM_JSON(dubboMothedName, dubboMothedName_);
      DARABONBA_PTR_FROM_JSON(httpMothed, httpMothed_);
      DARABONBA_PTR_FROM_JSON(mothedpath, mothedpath_);
      DARABONBA_PTR_FROM_JSON(paramMapsList, paramMapsList_);
      DARABONBA_PTR_FROM_JSON(passThroughAllHeaders, passThroughAllHeaders_);
      DARABONBA_PTR_FROM_JSON(passThroughList, passThroughList_);
    };
    HttpDubboTranscoderMothedMapList() = default ;
    HttpDubboTranscoderMothedMapList(const HttpDubboTranscoderMothedMapList &) = default ;
    HttpDubboTranscoderMothedMapList(HttpDubboTranscoderMothedMapList &&) = default ;
    HttpDubboTranscoderMothedMapList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpDubboTranscoderMothedMapList() = default ;
    HttpDubboTranscoderMothedMapList& operator=(const HttpDubboTranscoderMothedMapList &) = default ;
    HttpDubboTranscoderMothedMapList& operator=(HttpDubboTranscoderMothedMapList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dubboMothedName_ != nullptr
        && this->httpMothed_ != nullptr && this->mothedpath_ != nullptr && this->paramMapsList_ != nullptr && this->passThroughAllHeaders_ != nullptr && this->passThroughList_ != nullptr; };
    // dubboMothedName Field Functions 
    bool hasDubboMothedName() const { return this->dubboMothedName_ != nullptr;};
    void deleteDubboMothedName() { this->dubboMothedName_ = nullptr;};
    inline string dubboMothedName() const { DARABONBA_PTR_GET_DEFAULT(dubboMothedName_, "") };
    inline HttpDubboTranscoderMothedMapList& setDubboMothedName(string dubboMothedName) { DARABONBA_PTR_SET_VALUE(dubboMothedName_, dubboMothedName) };


    // httpMothed Field Functions 
    bool hasHttpMothed() const { return this->httpMothed_ != nullptr;};
    void deleteHttpMothed() { this->httpMothed_ = nullptr;};
    inline string httpMothed() const { DARABONBA_PTR_GET_DEFAULT(httpMothed_, "") };
    inline HttpDubboTranscoderMothedMapList& setHttpMothed(string httpMothed) { DARABONBA_PTR_SET_VALUE(httpMothed_, httpMothed) };


    // mothedpath Field Functions 
    bool hasMothedpath() const { return this->mothedpath_ != nullptr;};
    void deleteMothedpath() { this->mothedpath_ = nullptr;};
    inline string mothedpath() const { DARABONBA_PTR_GET_DEFAULT(mothedpath_, "") };
    inline HttpDubboTranscoderMothedMapList& setMothedpath(string mothedpath) { DARABONBA_PTR_SET_VALUE(mothedpath_, mothedpath) };


    // paramMapsList Field Functions 
    bool hasParamMapsList() const { return this->paramMapsList_ != nullptr;};
    void deleteParamMapsList() { this->paramMapsList_ = nullptr;};
    inline const vector<Models::HttpDubboTranscoderMothedMapListParamMapsList> & paramMapsList() const { DARABONBA_PTR_GET_CONST(paramMapsList_, vector<Models::HttpDubboTranscoderMothedMapListParamMapsList>) };
    inline vector<Models::HttpDubboTranscoderMothedMapListParamMapsList> paramMapsList() { DARABONBA_PTR_GET(paramMapsList_, vector<Models::HttpDubboTranscoderMothedMapListParamMapsList>) };
    inline HttpDubboTranscoderMothedMapList& setParamMapsList(const vector<Models::HttpDubboTranscoderMothedMapListParamMapsList> & paramMapsList) { DARABONBA_PTR_SET_VALUE(paramMapsList_, paramMapsList) };
    inline HttpDubboTranscoderMothedMapList& setParamMapsList(vector<Models::HttpDubboTranscoderMothedMapListParamMapsList> && paramMapsList) { DARABONBA_PTR_SET_RVALUE(paramMapsList_, paramMapsList) };


    // passThroughAllHeaders Field Functions 
    bool hasPassThroughAllHeaders() const { return this->passThroughAllHeaders_ != nullptr;};
    void deletePassThroughAllHeaders() { this->passThroughAllHeaders_ = nullptr;};
    inline string passThroughAllHeaders() const { DARABONBA_PTR_GET_DEFAULT(passThroughAllHeaders_, "") };
    inline HttpDubboTranscoderMothedMapList& setPassThroughAllHeaders(string passThroughAllHeaders) { DARABONBA_PTR_SET_VALUE(passThroughAllHeaders_, passThroughAllHeaders) };


    // passThroughList Field Functions 
    bool hasPassThroughList() const { return this->passThroughList_ != nullptr;};
    void deletePassThroughList() { this->passThroughList_ = nullptr;};
    inline const vector<string> & passThroughList() const { DARABONBA_PTR_GET_CONST(passThroughList_, vector<string>) };
    inline vector<string> passThroughList() { DARABONBA_PTR_GET(passThroughList_, vector<string>) };
    inline HttpDubboTranscoderMothedMapList& setPassThroughList(const vector<string> & passThroughList) { DARABONBA_PTR_SET_VALUE(passThroughList_, passThroughList) };
    inline HttpDubboTranscoderMothedMapList& setPassThroughList(vector<string> && passThroughList) { DARABONBA_PTR_SET_RVALUE(passThroughList_, passThroughList) };


  protected:
    std::shared_ptr<string> dubboMothedName_ = nullptr;
    std::shared_ptr<string> httpMothed_ = nullptr;
    std::shared_ptr<string> mothedpath_ = nullptr;
    std::shared_ptr<vector<Models::HttpDubboTranscoderMothedMapListParamMapsList>> paramMapsList_ = nullptr;
    std::shared_ptr<string> passThroughAllHeaders_ = nullptr;
    std::shared_ptr<vector<string>> passThroughList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
