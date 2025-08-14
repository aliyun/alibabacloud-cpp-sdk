// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARRESPONSEBODYDATASUPPORTEDRESOLUTIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARRESPONSEBODYDATASUPPORTEDRESOLUTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAvatarResponseBodyDataSupportedResolutionsOffline.hpp>
#include <alibabacloud/models/QueryAvatarResponseBodyDataSupportedResolutionsOnline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryAvatarResponseBodyDataSupportedResolutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarResponseBodyDataSupportedResolutions& obj) { 
      DARABONBA_PTR_TO_JSON(Offline, offline_);
      DARABONBA_PTR_TO_JSON(Online, online_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarResponseBodyDataSupportedResolutions& obj) { 
      DARABONBA_PTR_FROM_JSON(Offline, offline_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
    };
    QueryAvatarResponseBodyDataSupportedResolutions() = default ;
    QueryAvatarResponseBodyDataSupportedResolutions(const QueryAvatarResponseBodyDataSupportedResolutions &) = default ;
    QueryAvatarResponseBodyDataSupportedResolutions(QueryAvatarResponseBodyDataSupportedResolutions &&) = default ;
    QueryAvatarResponseBodyDataSupportedResolutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarResponseBodyDataSupportedResolutions() = default ;
    QueryAvatarResponseBodyDataSupportedResolutions& operator=(const QueryAvatarResponseBodyDataSupportedResolutions &) = default ;
    QueryAvatarResponseBodyDataSupportedResolutions& operator=(QueryAvatarResponseBodyDataSupportedResolutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offline_ != nullptr
        && this->online_ != nullptr; };
    // offline Field Functions 
    bool hasOffline() const { return this->offline_ != nullptr;};
    void deleteOffline() { this->offline_ = nullptr;};
    inline const vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline> & offline() const { DARABONBA_PTR_GET_CONST(offline_, vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline>) };
    inline vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline> offline() { DARABONBA_PTR_GET(offline_, vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline>) };
    inline QueryAvatarResponseBodyDataSupportedResolutions& setOffline(const vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline> & offline) { DARABONBA_PTR_SET_VALUE(offline_, offline) };
    inline QueryAvatarResponseBodyDataSupportedResolutions& setOffline(vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline> && offline) { DARABONBA_PTR_SET_RVALUE(offline_, offline) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline const vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline> & online() const { DARABONBA_PTR_GET_CONST(online_, vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline>) };
    inline vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline> online() { DARABONBA_PTR_GET(online_, vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline>) };
    inline QueryAvatarResponseBodyDataSupportedResolutions& setOnline(const vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline> & online) { DARABONBA_PTR_SET_VALUE(online_, online) };
    inline QueryAvatarResponseBodyDataSupportedResolutions& setOnline(vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline> && online) { DARABONBA_PTR_SET_RVALUE(online_, online) };


  protected:
    std::shared_ptr<vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOffline>> offline_ = nullptr;
    std::shared_ptr<vector<Models::QueryAvatarResponseBodyDataSupportedResolutionsOnline>> online_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
