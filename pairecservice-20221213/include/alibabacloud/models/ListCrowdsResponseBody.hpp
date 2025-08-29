// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROWDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCROWDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCrowdsResponseBodyCrowds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListCrowdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrowdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Crowds, crowds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrowdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Crowds, crowds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCrowdsResponseBody() = default ;
    ListCrowdsResponseBody(const ListCrowdsResponseBody &) = default ;
    ListCrowdsResponseBody(ListCrowdsResponseBody &&) = default ;
    ListCrowdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrowdsResponseBody() = default ;
    ListCrowdsResponseBody& operator=(const ListCrowdsResponseBody &) = default ;
    ListCrowdsResponseBody& operator=(ListCrowdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crowds_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // crowds Field Functions 
    bool hasCrowds() const { return this->crowds_ != nullptr;};
    void deleteCrowds() { this->crowds_ = nullptr;};
    inline const vector<ListCrowdsResponseBodyCrowds> & crowds() const { DARABONBA_PTR_GET_CONST(crowds_, vector<ListCrowdsResponseBodyCrowds>) };
    inline vector<ListCrowdsResponseBodyCrowds> crowds() { DARABONBA_PTR_GET(crowds_, vector<ListCrowdsResponseBodyCrowds>) };
    inline ListCrowdsResponseBody& setCrowds(const vector<ListCrowdsResponseBodyCrowds> & crowds) { DARABONBA_PTR_SET_VALUE(crowds_, crowds) };
    inline ListCrowdsResponseBody& setCrowds(vector<ListCrowdsResponseBodyCrowds> && crowds) { DARABONBA_PTR_SET_RVALUE(crowds_, crowds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrowdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCrowdsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListCrowdsResponseBodyCrowds>> crowds_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
