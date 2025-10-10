// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppsResponseBodyAppInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(UbsmsStatus, ubsmsStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(UbsmsStatus, ubsmsStatus_);
    };
    ListAppsResponseBody() = default ;
    ListAppsResponseBody(const ListAppsResponseBody &) = default ;
    ListAppsResponseBody(ListAppsResponseBody &&) = default ;
    ListAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBody() = default ;
    ListAppsResponseBody& operator=(const ListAppsResponseBody &) = default ;
    ListAppsResponseBody& operator=(ListAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInfos_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr && this->ubsmsStatus_ != nullptr; };
    // appInfos Field Functions 
    bool hasAppInfos() const { return this->appInfos_ != nullptr;};
    void deleteAppInfos() { this->appInfos_ = nullptr;};
    inline const ListAppsResponseBodyAppInfos & appInfos() const { DARABONBA_PTR_GET_CONST(appInfos_, ListAppsResponseBodyAppInfos) };
    inline ListAppsResponseBodyAppInfos appInfos() { DARABONBA_PTR_GET(appInfos_, ListAppsResponseBodyAppInfos) };
    inline ListAppsResponseBody& setAppInfos(const ListAppsResponseBodyAppInfos & appInfos) { DARABONBA_PTR_SET_VALUE(appInfos_, appInfos) };
    inline ListAppsResponseBody& setAppInfos(ListAppsResponseBodyAppInfos && appInfos) { DARABONBA_PTR_SET_RVALUE(appInfos_, appInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAppsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // ubsmsStatus Field Functions 
    bool hasUbsmsStatus() const { return this->ubsmsStatus_ != nullptr;};
    void deleteUbsmsStatus() { this->ubsmsStatus_ = nullptr;};
    inline string ubsmsStatus() const { DARABONBA_PTR_GET_DEFAULT(ubsmsStatus_, "") };
    inline ListAppsResponseBody& setUbsmsStatus(string ubsmsStatus) { DARABONBA_PTR_SET_VALUE(ubsmsStatus_, ubsmsStatus) };


  protected:
    std::shared_ptr<ListAppsResponseBodyAppInfos> appInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
    std::shared_ptr<string> ubsmsStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
