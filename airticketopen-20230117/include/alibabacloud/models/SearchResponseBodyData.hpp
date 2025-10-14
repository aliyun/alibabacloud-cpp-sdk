// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchResponseBodyDataSolutionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(solution_list, solutionList_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(solution_list, solutionList_);
    };
    SearchResponseBodyData() = default ;
    SearchResponseBodyData(const SearchResponseBodyData &) = default ;
    SearchResponseBodyData(SearchResponseBodyData &&) = default ;
    SearchResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyData() = default ;
    SearchResponseBodyData& operator=(const SearchResponseBodyData &) = default ;
    SearchResponseBodyData& operator=(SearchResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->solutionList_ == nullptr; };
    // solutionList Field Functions 
    bool hasSolutionList() const { return this->solutionList_ != nullptr;};
    void deleteSolutionList() { this->solutionList_ = nullptr;};
    inline const vector<Models::SearchResponseBodyDataSolutionList> & solutionList() const { DARABONBA_PTR_GET_CONST(solutionList_, vector<Models::SearchResponseBodyDataSolutionList>) };
    inline vector<Models::SearchResponseBodyDataSolutionList> solutionList() { DARABONBA_PTR_GET(solutionList_, vector<Models::SearchResponseBodyDataSolutionList>) };
    inline SearchResponseBodyData& setSolutionList(const vector<Models::SearchResponseBodyDataSolutionList> & solutionList) { DARABONBA_PTR_SET_VALUE(solutionList_, solutionList) };
    inline SearchResponseBodyData& setSolutionList(vector<Models::SearchResponseBodyDataSolutionList> && solutionList) { DARABONBA_PTR_SET_RVALUE(solutionList_, solutionList) };


  protected:
    // solution list
    std::shared_ptr<vector<Models::SearchResponseBodyDataSolutionList>> solutionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
