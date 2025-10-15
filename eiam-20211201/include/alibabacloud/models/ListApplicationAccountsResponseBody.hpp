// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationAccountsResponseBodyApplicationAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListApplicationAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationAccounts, applicationAccounts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationAccounts, applicationAccounts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationAccountsResponseBody() = default ;
    ListApplicationAccountsResponseBody(const ListApplicationAccountsResponseBody &) = default ;
    ListApplicationAccountsResponseBody(ListApplicationAccountsResponseBody &&) = default ;
    ListApplicationAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationAccountsResponseBody() = default ;
    ListApplicationAccountsResponseBody& operator=(const ListApplicationAccountsResponseBody &) = default ;
    ListApplicationAccountsResponseBody& operator=(ListApplicationAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationAccounts_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // applicationAccounts Field Functions 
    bool hasApplicationAccounts() const { return this->applicationAccounts_ != nullptr;};
    void deleteApplicationAccounts() { this->applicationAccounts_ = nullptr;};
    inline const vector<ListApplicationAccountsResponseBodyApplicationAccounts> & applicationAccounts() const { DARABONBA_PTR_GET_CONST(applicationAccounts_, vector<ListApplicationAccountsResponseBodyApplicationAccounts>) };
    inline vector<ListApplicationAccountsResponseBodyApplicationAccounts> applicationAccounts() { DARABONBA_PTR_GET(applicationAccounts_, vector<ListApplicationAccountsResponseBodyApplicationAccounts>) };
    inline ListApplicationAccountsResponseBody& setApplicationAccounts(const vector<ListApplicationAccountsResponseBodyApplicationAccounts> & applicationAccounts) { DARABONBA_PTR_SET_VALUE(applicationAccounts_, applicationAccounts) };
    inline ListApplicationAccountsResponseBody& setApplicationAccounts(vector<ListApplicationAccountsResponseBodyApplicationAccounts> && applicationAccounts) { DARABONBA_PTR_SET_RVALUE(applicationAccounts_, applicationAccounts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationAccountsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListApplicationAccountsResponseBodyApplicationAccounts>> applicationAccounts_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
