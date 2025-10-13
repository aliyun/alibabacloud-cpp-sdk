// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALGORITHMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALGORITHMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlgorithmsResponseBodyAlgorithms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListAlgorithmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlgorithmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithms, algorithms_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlgorithmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithms, algorithms_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlgorithmsResponseBody() = default ;
    ListAlgorithmsResponseBody(const ListAlgorithmsResponseBody &) = default ;
    ListAlgorithmsResponseBody(ListAlgorithmsResponseBody &&) = default ;
    ListAlgorithmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlgorithmsResponseBody() = default ;
    ListAlgorithmsResponseBody& operator=(const ListAlgorithmsResponseBody &) = default ;
    ListAlgorithmsResponseBody& operator=(ListAlgorithmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithms_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // algorithms Field Functions 
    bool hasAlgorithms() const { return this->algorithms_ != nullptr;};
    void deleteAlgorithms() { this->algorithms_ = nullptr;};
    inline const vector<ListAlgorithmsResponseBodyAlgorithms> & algorithms() const { DARABONBA_PTR_GET_CONST(algorithms_, vector<ListAlgorithmsResponseBodyAlgorithms>) };
    inline vector<ListAlgorithmsResponseBodyAlgorithms> algorithms() { DARABONBA_PTR_GET(algorithms_, vector<ListAlgorithmsResponseBodyAlgorithms>) };
    inline ListAlgorithmsResponseBody& setAlgorithms(const vector<ListAlgorithmsResponseBodyAlgorithms> & algorithms) { DARABONBA_PTR_SET_VALUE(algorithms_, algorithms) };
    inline ListAlgorithmsResponseBody& setAlgorithms(vector<ListAlgorithmsResponseBodyAlgorithms> && algorithms) { DARABONBA_PTR_SET_RVALUE(algorithms_, algorithms) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlgorithmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAlgorithmsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListAlgorithmsResponseBodyAlgorithms>> algorithms_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
