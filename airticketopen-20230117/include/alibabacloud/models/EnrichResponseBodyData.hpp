// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(solution_list, solutionList_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(solution_list, solutionList_);
    };
    EnrichResponseBodyData() = default ;
    EnrichResponseBodyData(const EnrichResponseBodyData &) = default ;
    EnrichResponseBodyData(EnrichResponseBodyData &&) = default ;
    EnrichResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyData() = default ;
    EnrichResponseBodyData& operator=(const EnrichResponseBodyData &) = default ;
    EnrichResponseBodyData& operator=(EnrichResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->solutionList_ == nullptr; };
    // solutionList Field Functions 
    bool hasSolutionList() const { return this->solutionList_ != nullptr;};
    void deleteSolutionList() { this->solutionList_ = nullptr;};
    inline const vector<Models::EnrichResponseBodyDataSolutionList> & solutionList() const { DARABONBA_PTR_GET_CONST(solutionList_, vector<Models::EnrichResponseBodyDataSolutionList>) };
    inline vector<Models::EnrichResponseBodyDataSolutionList> solutionList() { DARABONBA_PTR_GET(solutionList_, vector<Models::EnrichResponseBodyDataSolutionList>) };
    inline EnrichResponseBodyData& setSolutionList(const vector<Models::EnrichResponseBodyDataSolutionList> & solutionList) { DARABONBA_PTR_SET_VALUE(solutionList_, solutionList) };
    inline EnrichResponseBodyData& setSolutionList(vector<Models::EnrichResponseBodyDataSolutionList> && solutionList) { DARABONBA_PTR_SET_RVALUE(solutionList_, solutionList) };


  protected:
    // search quotation results
    std::shared_ptr<vector<Models::EnrichResponseBodyDataSolutionList>> solutionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
