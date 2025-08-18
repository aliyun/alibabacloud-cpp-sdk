// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYPAGERESULTAPILISTAPPINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYPAGERESULTAPILISTAPPINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList() = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList(const ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList &) = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList(ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList &&) = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList() = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& operator=(const ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList &) = default ;
    ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& operator=(ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appKey_ != nullptr && this->appName_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int32_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListDataServicePublishedApisResponseBodyPageResultApiListAppInfoList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    std::shared_ptr<int32_t> appId_ = nullptr;
    // appKey
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
