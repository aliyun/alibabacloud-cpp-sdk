// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSANITYCHECKRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSANITYCHECKRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SanityCheckResultItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListJobSanityCheckResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobSanityCheckResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestID, requestID_);
      DARABONBA_PTR_TO_JSON(SanityCheckResults, sanityCheckResults_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobSanityCheckResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestID, requestID_);
      DARABONBA_PTR_FROM_JSON(SanityCheckResults, sanityCheckResults_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListJobSanityCheckResultsResponseBody() = default ;
    ListJobSanityCheckResultsResponseBody(const ListJobSanityCheckResultsResponseBody &) = default ;
    ListJobSanityCheckResultsResponseBody(ListJobSanityCheckResultsResponseBody &&) = default ;
    ListJobSanityCheckResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobSanityCheckResultsResponseBody() = default ;
    ListJobSanityCheckResultsResponseBody& operator=(const ListJobSanityCheckResultsResponseBody &) = default ;
    ListJobSanityCheckResultsResponseBody& operator=(ListJobSanityCheckResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestID_ == nullptr
        && return this->sanityCheckResults_ == nullptr && return this->totalCount_ == nullptr; };
    // requestID Field Functions 
    bool hasRequestID() const { return this->requestID_ != nullptr;};
    void deleteRequestID() { this->requestID_ = nullptr;};
    inline string requestID() const { DARABONBA_PTR_GET_DEFAULT(requestID_, "") };
    inline ListJobSanityCheckResultsResponseBody& setRequestID(string requestID) { DARABONBA_PTR_SET_VALUE(requestID_, requestID) };


    // sanityCheckResults Field Functions 
    bool hasSanityCheckResults() const { return this->sanityCheckResults_ != nullptr;};
    void deleteSanityCheckResults() { this->sanityCheckResults_ = nullptr;};
    inline const vector<vector<SanityCheckResultItem>> & sanityCheckResults() const { DARABONBA_PTR_GET_CONST(sanityCheckResults_, vector<vector<SanityCheckResultItem>>) };
    inline vector<vector<SanityCheckResultItem>> sanityCheckResults() { DARABONBA_PTR_GET(sanityCheckResults_, vector<vector<SanityCheckResultItem>>) };
    inline ListJobSanityCheckResultsResponseBody& setSanityCheckResults(const vector<vector<SanityCheckResultItem>> & sanityCheckResults) { DARABONBA_PTR_SET_VALUE(sanityCheckResults_, sanityCheckResults) };
    inline ListJobSanityCheckResultsResponseBody& setSanityCheckResults(vector<vector<SanityCheckResultItem>> && sanityCheckResults) { DARABONBA_PTR_SET_RVALUE(sanityCheckResults_, sanityCheckResults) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListJobSanityCheckResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestID_ = nullptr;
    // The sanity check results.
    std::shared_ptr<vector<vector<SanityCheckResultItem>>> sanityCheckResults_ = nullptr;
    // The total number of results that meet the filter conditions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
