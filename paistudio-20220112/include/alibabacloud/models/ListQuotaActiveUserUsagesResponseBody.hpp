// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAACTIVEUSERUSAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAACTIVEUSERUSAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuotaUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListQuotaActiveUserUsagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaActiveUserUsagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaUserUsage, quotaUserUsage_);
      DARABONBA_PTR_TO_JSON(QuotaUserUsages, quotaUserUsages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaActiveUserUsagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaUserUsage, quotaUserUsage_);
      DARABONBA_PTR_FROM_JSON(QuotaUserUsages, quotaUserUsages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQuotaActiveUserUsagesResponseBody() = default ;
    ListQuotaActiveUserUsagesResponseBody(const ListQuotaActiveUserUsagesResponseBody &) = default ;
    ListQuotaActiveUserUsagesResponseBody(ListQuotaActiveUserUsagesResponseBody &&) = default ;
    ListQuotaActiveUserUsagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaActiveUserUsagesResponseBody() = default ;
    ListQuotaActiveUserUsagesResponseBody& operator=(const ListQuotaActiveUserUsagesResponseBody &) = default ;
    ListQuotaActiveUserUsagesResponseBody& operator=(ListQuotaActiveUserUsagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaUserUsage_ == nullptr
        && this->quotaUserUsages_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // quotaUserUsage Field Functions 
    bool hasQuotaUserUsage() const { return this->quotaUserUsage_ != nullptr;};
    void deleteQuotaUserUsage() { this->quotaUserUsage_ = nullptr;};
    inline const vector<QuotaUser> & getQuotaUserUsage() const { DARABONBA_PTR_GET_CONST(quotaUserUsage_, vector<QuotaUser>) };
    inline vector<QuotaUser> getQuotaUserUsage() { DARABONBA_PTR_GET(quotaUserUsage_, vector<QuotaUser>) };
    inline ListQuotaActiveUserUsagesResponseBody& setQuotaUserUsage(const vector<QuotaUser> & quotaUserUsage) { DARABONBA_PTR_SET_VALUE(quotaUserUsage_, quotaUserUsage) };
    inline ListQuotaActiveUserUsagesResponseBody& setQuotaUserUsage(vector<QuotaUser> && quotaUserUsage) { DARABONBA_PTR_SET_RVALUE(quotaUserUsage_, quotaUserUsage) };


    // quotaUserUsages Field Functions 
    bool hasQuotaUserUsages() const { return this->quotaUserUsages_ != nullptr;};
    void deleteQuotaUserUsages() { this->quotaUserUsages_ = nullptr;};
    inline const vector<QuotaUser> & getQuotaUserUsages() const { DARABONBA_PTR_GET_CONST(quotaUserUsages_, vector<QuotaUser>) };
    inline vector<QuotaUser> getQuotaUserUsages() { DARABONBA_PTR_GET(quotaUserUsages_, vector<QuotaUser>) };
    inline ListQuotaActiveUserUsagesResponseBody& setQuotaUserUsages(const vector<QuotaUser> & quotaUserUsages) { DARABONBA_PTR_SET_VALUE(quotaUserUsages_, quotaUserUsages) };
    inline ListQuotaActiveUserUsagesResponseBody& setQuotaUserUsages(vector<QuotaUser> && quotaUserUsages) { DARABONBA_PTR_SET_RVALUE(quotaUserUsages_, quotaUserUsages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQuotaActiveUserUsagesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListQuotaActiveUserUsagesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<QuotaUser>> quotaUserUsage_ {};
    shared_ptr<vector<QuotaUser>> quotaUserUsages_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
