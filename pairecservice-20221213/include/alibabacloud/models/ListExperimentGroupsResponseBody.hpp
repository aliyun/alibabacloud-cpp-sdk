// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListExperimentGroupsResponseBodyExperimentGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListExperimentGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExperimentGroups, experimentGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExperimentGroups, experimentGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExperimentGroupsResponseBody() = default ;
    ListExperimentGroupsResponseBody(const ListExperimentGroupsResponseBody &) = default ;
    ListExperimentGroupsResponseBody(ListExperimentGroupsResponseBody &&) = default ;
    ListExperimentGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentGroupsResponseBody() = default ;
    ListExperimentGroupsResponseBody& operator=(const ListExperimentGroupsResponseBody &) = default ;
    ListExperimentGroupsResponseBody& operator=(ListExperimentGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->experimentGroups_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // experimentGroups Field Functions 
    bool hasExperimentGroups() const { return this->experimentGroups_ != nullptr;};
    void deleteExperimentGroups() { this->experimentGroups_ = nullptr;};
    inline const vector<ListExperimentGroupsResponseBodyExperimentGroups> & experimentGroups() const { DARABONBA_PTR_GET_CONST(experimentGroups_, vector<ListExperimentGroupsResponseBodyExperimentGroups>) };
    inline vector<ListExperimentGroupsResponseBodyExperimentGroups> experimentGroups() { DARABONBA_PTR_GET(experimentGroups_, vector<ListExperimentGroupsResponseBodyExperimentGroups>) };
    inline ListExperimentGroupsResponseBody& setExperimentGroups(const vector<ListExperimentGroupsResponseBodyExperimentGroups> & experimentGroups) { DARABONBA_PTR_SET_VALUE(experimentGroups_, experimentGroups) };
    inline ListExperimentGroupsResponseBody& setExperimentGroups(vector<ListExperimentGroupsResponseBodyExperimentGroups> && experimentGroups) { DARABONBA_PTR_SET_RVALUE(experimentGroups_, experimentGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExperimentGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExperimentGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListExperimentGroupsResponseBodyExperimentGroups>> experimentGroups_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
