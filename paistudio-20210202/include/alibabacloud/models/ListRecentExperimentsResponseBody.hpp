// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTEXPERIMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTEXPERIMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRecentExperimentsResponseBodyExperiments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListRecentExperimentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentExperimentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Experiments, experiments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentExperimentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Experiments, experiments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRecentExperimentsResponseBody() = default ;
    ListRecentExperimentsResponseBody(const ListRecentExperimentsResponseBody &) = default ;
    ListRecentExperimentsResponseBody(ListRecentExperimentsResponseBody &&) = default ;
    ListRecentExperimentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentExperimentsResponseBody() = default ;
    ListRecentExperimentsResponseBody& operator=(const ListRecentExperimentsResponseBody &) = default ;
    ListRecentExperimentsResponseBody& operator=(ListRecentExperimentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->experiments_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // experiments Field Functions 
    bool hasExperiments() const { return this->experiments_ != nullptr;};
    void deleteExperiments() { this->experiments_ = nullptr;};
    inline const vector<ListRecentExperimentsResponseBodyExperiments> & experiments() const { DARABONBA_PTR_GET_CONST(experiments_, vector<ListRecentExperimentsResponseBodyExperiments>) };
    inline vector<ListRecentExperimentsResponseBodyExperiments> experiments() { DARABONBA_PTR_GET(experiments_, vector<ListRecentExperimentsResponseBodyExperiments>) };
    inline ListRecentExperimentsResponseBody& setExperiments(const vector<ListRecentExperimentsResponseBodyExperiments> & experiments) { DARABONBA_PTR_SET_VALUE(experiments_, experiments) };
    inline ListRecentExperimentsResponseBody& setExperiments(vector<ListRecentExperimentsResponseBodyExperiments> && experiments) { DARABONBA_PTR_SET_RVALUE(experiments_, experiments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentExperimentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRecentExperimentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListRecentExperimentsResponseBodyExperiments>> experiments_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
