// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STANDARDSEARCHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STANDARDSEARCHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StandardSearchResponseBodyDataSolutionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class StandardSearchResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StandardSearchResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(solution_list, solutionList_);
    };
    friend void from_json(const Darabonba::Json& j, StandardSearchResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(solution_list, solutionList_);
    };
    StandardSearchResponseBodyData() = default ;
    StandardSearchResponseBodyData(const StandardSearchResponseBodyData &) = default ;
    StandardSearchResponseBodyData(StandardSearchResponseBodyData &&) = default ;
    StandardSearchResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StandardSearchResponseBodyData() = default ;
    StandardSearchResponseBodyData& operator=(const StandardSearchResponseBodyData &) = default ;
    StandardSearchResponseBodyData& operator=(StandardSearchResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->solutionList_ == nullptr; };
    // solutionList Field Functions 
    bool hasSolutionList() const { return this->solutionList_ != nullptr;};
    void deleteSolutionList() { this->solutionList_ = nullptr;};
    inline const vector<Models::StandardSearchResponseBodyDataSolutionList> & solutionList() const { DARABONBA_PTR_GET_CONST(solutionList_, vector<Models::StandardSearchResponseBodyDataSolutionList>) };
    inline vector<Models::StandardSearchResponseBodyDataSolutionList> solutionList() { DARABONBA_PTR_GET(solutionList_, vector<Models::StandardSearchResponseBodyDataSolutionList>) };
    inline StandardSearchResponseBodyData& setSolutionList(const vector<Models::StandardSearchResponseBodyDataSolutionList> & solutionList) { DARABONBA_PTR_SET_VALUE(solutionList_, solutionList) };
    inline StandardSearchResponseBodyData& setSolutionList(vector<Models::StandardSearchResponseBodyDataSolutionList> && solutionList) { DARABONBA_PTR_SET_RVALUE(solutionList_, solutionList) };


  protected:
    std::shared_ptr<vector<Models::StandardSearchResponseBodyDataSolutionList>> solutionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
