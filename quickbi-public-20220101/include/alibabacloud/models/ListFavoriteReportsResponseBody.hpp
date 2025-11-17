// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFAVORITEREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFAVORITEREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFavoriteReportsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListFavoriteReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFavoriteReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFavoriteReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFavoriteReportsResponseBody() = default ;
    ListFavoriteReportsResponseBody(const ListFavoriteReportsResponseBody &) = default ;
    ListFavoriteReportsResponseBody(ListFavoriteReportsResponseBody &&) = default ;
    ListFavoriteReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFavoriteReportsResponseBody() = default ;
    ListFavoriteReportsResponseBody& operator=(const ListFavoriteReportsResponseBody &) = default ;
    ListFavoriteReportsResponseBody& operator=(ListFavoriteReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFavoriteReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListFavoriteReportsResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ListFavoriteReportsResponseBodyResult) };
    inline ListFavoriteReportsResponseBodyResult result() { DARABONBA_PTR_GET(result_, ListFavoriteReportsResponseBodyResult) };
    inline ListFavoriteReportsResponseBody& setResult(const ListFavoriteReportsResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListFavoriteReportsResponseBody& setResult(ListFavoriteReportsResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFavoriteReportsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returns the query result.
    std::shared_ptr<ListFavoriteReportsResponseBodyResult> result_ = nullptr;
    // Indicates whether the request was successful. Possible values:
    // - true: The request was successful.
    // - false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
