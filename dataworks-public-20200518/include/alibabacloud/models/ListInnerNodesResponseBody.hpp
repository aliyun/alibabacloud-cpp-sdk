// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINNERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINNERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInnerNodesResponseBodyPaging.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListInnerNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInnerNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Paging, paging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInnerNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Paging, paging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInnerNodesResponseBody() = default ;
    ListInnerNodesResponseBody(const ListInnerNodesResponseBody &) = default ;
    ListInnerNodesResponseBody(ListInnerNodesResponseBody &&) = default ;
    ListInnerNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInnerNodesResponseBody() = default ;
    ListInnerNodesResponseBody& operator=(const ListInnerNodesResponseBody &) = default ;
    ListInnerNodesResponseBody& operator=(ListInnerNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paging_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline const ListInnerNodesResponseBodyPaging & paging() const { DARABONBA_PTR_GET_CONST(paging_, ListInnerNodesResponseBodyPaging) };
    inline ListInnerNodesResponseBodyPaging paging() { DARABONBA_PTR_GET(paging_, ListInnerNodesResponseBodyPaging) };
    inline ListInnerNodesResponseBody& setPaging(const ListInnerNodesResponseBodyPaging & paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };
    inline ListInnerNodesResponseBody& setPaging(ListInnerNodesResponseBodyPaging && paging) { DARABONBA_PTR_SET_RVALUE(paging_, paging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInnerNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInnerNodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The pagination information.
    std::shared_ptr<ListInnerNodesResponseBodyPaging> paging_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
