// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppInfoResponseBodyAppInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAppInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInfoList, appInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAppInfoResponseBody() = default ;
    ListAppInfoResponseBody(const ListAppInfoResponseBody &) = default ;
    ListAppInfoResponseBody(ListAppInfoResponseBody &&) = default ;
    ListAppInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInfoResponseBody() = default ;
    ListAppInfoResponseBody& operator=(const ListAppInfoResponseBody &) = default ;
    ListAppInfoResponseBody& operator=(ListAppInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInfoList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // appInfoList Field Functions 
    bool hasAppInfoList() const { return this->appInfoList_ != nullptr;};
    void deleteAppInfoList() { this->appInfoList_ = nullptr;};
    inline const vector<ListAppInfoResponseBodyAppInfoList> & appInfoList() const { DARABONBA_PTR_GET_CONST(appInfoList_, vector<ListAppInfoResponseBodyAppInfoList>) };
    inline vector<ListAppInfoResponseBodyAppInfoList> appInfoList() { DARABONBA_PTR_GET(appInfoList_, vector<ListAppInfoResponseBodyAppInfoList>) };
    inline ListAppInfoResponseBody& setAppInfoList(const vector<ListAppInfoResponseBodyAppInfoList> & appInfoList) { DARABONBA_PTR_SET_VALUE(appInfoList_, appInfoList) };
    inline ListAppInfoResponseBody& setAppInfoList(vector<ListAppInfoResponseBodyAppInfoList> && appInfoList) { DARABONBA_PTR_SET_RVALUE(appInfoList_, appInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAppInfoResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details of applications.
    std::shared_ptr<vector<ListAppInfoResponseBodyAppInfoList>> appInfoList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
