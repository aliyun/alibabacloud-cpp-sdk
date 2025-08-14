// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARLISTRESPONSEBODYDATALISTSUPPORTEDRESOLUTIONS_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARLISTRESPONSEBODYDATALISTSUPPORTEDRESOLUTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAvatarListResponseBodyDataListSupportedResolutionsOffline.hpp>
#include <alibabacloud/models/QueryAvatarListResponseBodyDataListSupportedResolutionsOnline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class QueryAvatarListResponseBodyDataListSupportedResolutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarListResponseBodyDataListSupportedResolutions& obj) { 
      DARABONBA_PTR_TO_JSON(Offline, offline_);
      DARABONBA_PTR_TO_JSON(Online, online_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarListResponseBodyDataListSupportedResolutions& obj) { 
      DARABONBA_PTR_FROM_JSON(Offline, offline_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
    };
    QueryAvatarListResponseBodyDataListSupportedResolutions() = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutions(const QueryAvatarListResponseBodyDataListSupportedResolutions &) = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutions(QueryAvatarListResponseBodyDataListSupportedResolutions &&) = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarListResponseBodyDataListSupportedResolutions() = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutions& operator=(const QueryAvatarListResponseBodyDataListSupportedResolutions &) = default ;
    QueryAvatarListResponseBodyDataListSupportedResolutions& operator=(QueryAvatarListResponseBodyDataListSupportedResolutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offline_ != nullptr
        && this->online_ != nullptr; };
    // offline Field Functions 
    bool hasOffline() const { return this->offline_ != nullptr;};
    void deleteOffline() { this->offline_ = nullptr;};
    inline const vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline> & offline() const { DARABONBA_PTR_GET_CONST(offline_, vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline>) };
    inline vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline> offline() { DARABONBA_PTR_GET(offline_, vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline>) };
    inline QueryAvatarListResponseBodyDataListSupportedResolutions& setOffline(const vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline> & offline) { DARABONBA_PTR_SET_VALUE(offline_, offline) };
    inline QueryAvatarListResponseBodyDataListSupportedResolutions& setOffline(vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline> && offline) { DARABONBA_PTR_SET_RVALUE(offline_, offline) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline const vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline> & online() const { DARABONBA_PTR_GET_CONST(online_, vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline>) };
    inline vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline> online() { DARABONBA_PTR_GET(online_, vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline>) };
    inline QueryAvatarListResponseBodyDataListSupportedResolutions& setOnline(const vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline> & online) { DARABONBA_PTR_SET_VALUE(online_, online) };
    inline QueryAvatarListResponseBodyDataListSupportedResolutions& setOnline(vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline> && online) { DARABONBA_PTR_SET_RVALUE(online_, online) };


  protected:
    std::shared_ptr<vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOffline>> offline_ = nullptr;
    std::shared_ptr<vector<Models::QueryAvatarListResponseBodyDataListSupportedResolutionsOnline>> online_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
