// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNATTABLEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSnatTableEntriesResponseBodySnatTableEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSnatTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatTableEntries, snatTableEntries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnatTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatTableEntries, snatTableEntries_);
    };
    DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody(DescribeSnatTableEntriesResponseBody &&) = default ;
    DescribeSnatTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnatTableEntriesResponseBody() = default ;
    DescribeSnatTableEntriesResponseBody& operator=(const DescribeSnatTableEntriesResponseBody &) = default ;
    DescribeSnatTableEntriesResponseBody& operator=(DescribeSnatTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->snatTableEntries_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSnatTableEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSnatTableEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnatTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatTableEntries Field Functions 
    bool hasSnatTableEntries() const { return this->snatTableEntries_ != nullptr;};
    void deleteSnatTableEntries() { this->snatTableEntries_ = nullptr;};
    inline const vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> & snatTableEntries() const { DARABONBA_PTR_GET_CONST(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBodySnatTableEntries>) };
    inline vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> snatTableEntries() { DARABONBA_PTR_GET(snatTableEntries_, vector<DescribeSnatTableEntriesResponseBodySnatTableEntries>) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(const vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> & snatTableEntries) { DARABONBA_PTR_SET_VALUE(snatTableEntries_, snatTableEntries) };
    inline DescribeSnatTableEntriesResponseBody& setSnatTableEntries(vector<DescribeSnatTableEntriesResponseBodySnatTableEntries> && snatTableEntries) { DARABONBA_PTR_SET_RVALUE(snatTableEntries_, snatTableEntries) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeSnatTableEntriesResponseBodySnatTableEntries>> snatTableEntries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
