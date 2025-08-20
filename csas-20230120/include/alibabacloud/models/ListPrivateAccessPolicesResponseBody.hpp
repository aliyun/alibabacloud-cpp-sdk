// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSPOLICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessPolicesResponseBodyPolices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessPolicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessPolicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Polices, polices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessPolicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Polices, polices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListPrivateAccessPolicesResponseBody() = default ;
    ListPrivateAccessPolicesResponseBody(const ListPrivateAccessPolicesResponseBody &) = default ;
    ListPrivateAccessPolicesResponseBody(ListPrivateAccessPolicesResponseBody &&) = default ;
    ListPrivateAccessPolicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessPolicesResponseBody() = default ;
    ListPrivateAccessPolicesResponseBody& operator=(const ListPrivateAccessPolicesResponseBody &) = default ;
    ListPrivateAccessPolicesResponseBody& operator=(ListPrivateAccessPolicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->polices_ != nullptr
        && this->requestId_ != nullptr && this->totalNum_ != nullptr; };
    // polices Field Functions 
    bool hasPolices() const { return this->polices_ != nullptr;};
    void deletePolices() { this->polices_ = nullptr;};
    inline const vector<ListPrivateAccessPolicesResponseBodyPolices> & polices() const { DARABONBA_PTR_GET_CONST(polices_, vector<ListPrivateAccessPolicesResponseBodyPolices>) };
    inline vector<ListPrivateAccessPolicesResponseBodyPolices> polices() { DARABONBA_PTR_GET(polices_, vector<ListPrivateAccessPolicesResponseBodyPolices>) };
    inline ListPrivateAccessPolicesResponseBody& setPolices(const vector<ListPrivateAccessPolicesResponseBodyPolices> & polices) { DARABONBA_PTR_SET_VALUE(polices_, polices) };
    inline ListPrivateAccessPolicesResponseBody& setPolices(vector<ListPrivateAccessPolicesResponseBodyPolices> && polices) { DARABONBA_PTR_SET_RVALUE(polices_, polices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessPolicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListPrivateAccessPolicesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The private access policies.
    std::shared_ptr<vector<ListPrivateAccessPolicesResponseBodyPolices>> polices_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of private access policies.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
