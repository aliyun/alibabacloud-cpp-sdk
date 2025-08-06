// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTELLIGENTSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINTELLIGENTSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntelligentStrategyResponseBodyIntelligentStrategyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListIntelligentStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntelligentStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IntelligentStrategyList, intelligentStrategyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntelligentStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IntelligentStrategyList, intelligentStrategyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListIntelligentStrategyResponseBody() = default ;
    ListIntelligentStrategyResponseBody(const ListIntelligentStrategyResponseBody &) = default ;
    ListIntelligentStrategyResponseBody(ListIntelligentStrategyResponseBody &&) = default ;
    ListIntelligentStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntelligentStrategyResponseBody() = default ;
    ListIntelligentStrategyResponseBody& operator=(const ListIntelligentStrategyResponseBody &) = default ;
    ListIntelligentStrategyResponseBody& operator=(ListIntelligentStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->intelligentStrategyList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // intelligentStrategyList Field Functions 
    bool hasIntelligentStrategyList() const { return this->intelligentStrategyList_ != nullptr;};
    void deleteIntelligentStrategyList() { this->intelligentStrategyList_ = nullptr;};
    inline const vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList> & intelligentStrategyList() const { DARABONBA_PTR_GET_CONST(intelligentStrategyList_, vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList>) };
    inline vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList> intelligentStrategyList() { DARABONBA_PTR_GET(intelligentStrategyList_, vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList>) };
    inline ListIntelligentStrategyResponseBody& setIntelligentStrategyList(const vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList> & intelligentStrategyList) { DARABONBA_PTR_SET_VALUE(intelligentStrategyList_, intelligentStrategyList) };
    inline ListIntelligentStrategyResponseBody& setIntelligentStrategyList(vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList> && intelligentStrategyList) { DARABONBA_PTR_SET_RVALUE(intelligentStrategyList_, intelligentStrategyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIntelligentStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListIntelligentStrategyResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListIntelligentStrategyResponseBodyIntelligentStrategyList>> intelligentStrategyList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
