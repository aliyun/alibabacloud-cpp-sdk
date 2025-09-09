// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONTICKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONTICKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationTicketsResponseBodyOperationTickets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationTicketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationTicketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTickets, operationTickets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationTicketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTickets, operationTickets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListOperationTicketsResponseBody() = default ;
    ListOperationTicketsResponseBody(const ListOperationTicketsResponseBody &) = default ;
    ListOperationTicketsResponseBody(ListOperationTicketsResponseBody &&) = default ;
    ListOperationTicketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationTicketsResponseBody() = default ;
    ListOperationTicketsResponseBody& operator=(const ListOperationTicketsResponseBody &) = default ;
    ListOperationTicketsResponseBody& operator=(ListOperationTicketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->operationTickets_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // operationTickets Field Functions 
    bool hasOperationTickets() const { return this->operationTickets_ != nullptr;};
    void deleteOperationTickets() { this->operationTickets_ = nullptr;};
    inline const vector<ListOperationTicketsResponseBodyOperationTickets> & operationTickets() const { DARABONBA_PTR_GET_CONST(operationTickets_, vector<ListOperationTicketsResponseBodyOperationTickets>) };
    inline vector<ListOperationTicketsResponseBodyOperationTickets> operationTickets() { DARABONBA_PTR_GET(operationTickets_, vector<ListOperationTicketsResponseBodyOperationTickets>) };
    inline ListOperationTicketsResponseBody& setOperationTickets(const vector<ListOperationTicketsResponseBodyOperationTickets> & operationTickets) { DARABONBA_PTR_SET_VALUE(operationTickets_, operationTickets) };
    inline ListOperationTicketsResponseBody& setOperationTickets(vector<ListOperationTicketsResponseBodyOperationTickets> && operationTickets) { DARABONBA_PTR_SET_RVALUE(operationTickets_, operationTickets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationTicketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListOperationTicketsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The O\\&M applications to be reviewed.
    std::shared_ptr<vector<ListOperationTicketsResponseBodyOperationTickets>> operationTickets_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of O\\&M applications to be reviewed.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
