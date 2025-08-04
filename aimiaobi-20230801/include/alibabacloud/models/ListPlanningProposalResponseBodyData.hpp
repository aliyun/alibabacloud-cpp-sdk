// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLANNINGPROPOSALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPLANNINGPROPOSALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPlanningProposalResponseBodyDataOutlines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListPlanningProposalResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlanningProposalResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlanningProposalResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    ListPlanningProposalResponseBodyData() = default ;
    ListPlanningProposalResponseBodyData(const ListPlanningProposalResponseBodyData &) = default ;
    ListPlanningProposalResponseBodyData(ListPlanningProposalResponseBodyData &&) = default ;
    ListPlanningProposalResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlanningProposalResponseBodyData() = default ;
    ListPlanningProposalResponseBodyData& operator=(const ListPlanningProposalResponseBodyData &) = default ;
    ListPlanningProposalResponseBodyData& operator=(ListPlanningProposalResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outlines_ != nullptr
        && this->summary_ != nullptr && this->title_ != nullptr; };
    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<Models::ListPlanningProposalResponseBodyDataOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<Models::ListPlanningProposalResponseBodyDataOutlines>) };
    inline vector<Models::ListPlanningProposalResponseBodyDataOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<Models::ListPlanningProposalResponseBodyDataOutlines>) };
    inline ListPlanningProposalResponseBodyData& setOutlines(const vector<Models::ListPlanningProposalResponseBodyDataOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline ListPlanningProposalResponseBodyData& setOutlines(vector<Models::ListPlanningProposalResponseBodyDataOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListPlanningProposalResponseBodyData& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListPlanningProposalResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<vector<Models::ListPlanningProposalResponseBodyDataOutlines>> outlines_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
