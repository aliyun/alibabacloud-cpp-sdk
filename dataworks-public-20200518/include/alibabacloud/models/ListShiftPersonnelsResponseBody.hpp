// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListShiftPersonnelsResponseBodyPaging.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftPersonnelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftPersonnelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Paging, paging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftPersonnelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Paging, paging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListShiftPersonnelsResponseBody() = default ;
    ListShiftPersonnelsResponseBody(const ListShiftPersonnelsResponseBody &) = default ;
    ListShiftPersonnelsResponseBody(ListShiftPersonnelsResponseBody &&) = default ;
    ListShiftPersonnelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftPersonnelsResponseBody() = default ;
    ListShiftPersonnelsResponseBody& operator=(const ListShiftPersonnelsResponseBody &) = default ;
    ListShiftPersonnelsResponseBody& operator=(ListShiftPersonnelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paging_ != nullptr
        && this->requestId_ != nullptr; };
    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline const ListShiftPersonnelsResponseBodyPaging & paging() const { DARABONBA_PTR_GET_CONST(paging_, ListShiftPersonnelsResponseBodyPaging) };
    inline ListShiftPersonnelsResponseBodyPaging paging() { DARABONBA_PTR_GET(paging_, ListShiftPersonnelsResponseBodyPaging) };
    inline ListShiftPersonnelsResponseBody& setPaging(const ListShiftPersonnelsResponseBodyPaging & paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };
    inline ListShiftPersonnelsResponseBody& setPaging(ListShiftPersonnelsResponseBodyPaging && paging) { DARABONBA_PTR_SET_RVALUE(paging_, paging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListShiftPersonnelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListShiftPersonnelsResponseBodyPaging> paging_ = nullptr;
    // The request ID. You can use the ID to troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
