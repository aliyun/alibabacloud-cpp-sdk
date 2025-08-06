// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppPolicyResponseBodyAppPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAppPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicyList, appPolicyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicyList, appPolicyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAppPolicyResponseBody() = default ;
    ListAppPolicyResponseBody(const ListAppPolicyResponseBody &) = default ;
    ListAppPolicyResponseBody(ListAppPolicyResponseBody &&) = default ;
    ListAppPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPolicyResponseBody() = default ;
    ListAppPolicyResponseBody& operator=(const ListAppPolicyResponseBody &) = default ;
    ListAppPolicyResponseBody& operator=(ListAppPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPolicyList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // appPolicyList Field Functions 
    bool hasAppPolicyList() const { return this->appPolicyList_ != nullptr;};
    void deleteAppPolicyList() { this->appPolicyList_ = nullptr;};
    inline const vector<ListAppPolicyResponseBodyAppPolicyList> & appPolicyList() const { DARABONBA_PTR_GET_CONST(appPolicyList_, vector<ListAppPolicyResponseBodyAppPolicyList>) };
    inline vector<ListAppPolicyResponseBodyAppPolicyList> appPolicyList() { DARABONBA_PTR_GET(appPolicyList_, vector<ListAppPolicyResponseBodyAppPolicyList>) };
    inline ListAppPolicyResponseBody& setAppPolicyList(const vector<ListAppPolicyResponseBodyAppPolicyList> & appPolicyList) { DARABONBA_PTR_SET_VALUE(appPolicyList_, appPolicyList) };
    inline ListAppPolicyResponseBody& setAppPolicyList(vector<ListAppPolicyResponseBodyAppPolicyList> && appPolicyList) { DARABONBA_PTR_SET_RVALUE(appPolicyList_, appPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAppPolicyResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListAppPolicyResponseBodyAppPolicyList>> appPolicyList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
