// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODYREGIONSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARIESRESPONSEBODYREGIONSUMMARIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSummariesResponseBodyRegionSummariesStackDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListSummariesResponseBodyRegionSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummariesResponseBodyRegionSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackCount, stackCount_);
      DARABONBA_PTR_TO_JSON(StackDetails, stackDetails_);
      DARABONBA_PTR_TO_JSON(StackGroupCount, stackGroupCount_);
      DARABONBA_PTR_TO_JSON(TemplateScratchCount, templateScratchCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummariesResponseBodyRegionSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackCount, stackCount_);
      DARABONBA_PTR_FROM_JSON(StackDetails, stackDetails_);
      DARABONBA_PTR_FROM_JSON(StackGroupCount, stackGroupCount_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchCount, templateScratchCount_);
    };
    ListSummariesResponseBodyRegionSummaries() = default ;
    ListSummariesResponseBodyRegionSummaries(const ListSummariesResponseBodyRegionSummaries &) = default ;
    ListSummariesResponseBodyRegionSummaries(ListSummariesResponseBodyRegionSummaries &&) = default ;
    ListSummariesResponseBodyRegionSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummariesResponseBodyRegionSummaries() = default ;
    ListSummariesResponseBodyRegionSummaries& operator=(const ListSummariesResponseBodyRegionSummaries &) = default ;
    ListSummariesResponseBodyRegionSummaries& operator=(ListSummariesResponseBodyRegionSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->stackCount_ == nullptr && return this->stackDetails_ == nullptr && return this->stackGroupCount_ == nullptr && return this->templateScratchCount_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSummariesResponseBodyRegionSummaries& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackCount Field Functions 
    bool hasStackCount() const { return this->stackCount_ != nullptr;};
    void deleteStackCount() { this->stackCount_ = nullptr;};
    inline string stackCount() const { DARABONBA_PTR_GET_DEFAULT(stackCount_, "") };
    inline ListSummariesResponseBodyRegionSummaries& setStackCount(string stackCount) { DARABONBA_PTR_SET_VALUE(stackCount_, stackCount) };


    // stackDetails Field Functions 
    bool hasStackDetails() const { return this->stackDetails_ != nullptr;};
    void deleteStackDetails() { this->stackDetails_ = nullptr;};
    inline const vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails> & stackDetails() const { DARABONBA_PTR_GET_CONST(stackDetails_, vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails>) };
    inline vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails> stackDetails() { DARABONBA_PTR_GET(stackDetails_, vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails>) };
    inline ListSummariesResponseBodyRegionSummaries& setStackDetails(const vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails> & stackDetails) { DARABONBA_PTR_SET_VALUE(stackDetails_, stackDetails) };
    inline ListSummariesResponseBodyRegionSummaries& setStackDetails(vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails> && stackDetails) { DARABONBA_PTR_SET_RVALUE(stackDetails_, stackDetails) };


    // stackGroupCount Field Functions 
    bool hasStackGroupCount() const { return this->stackGroupCount_ != nullptr;};
    void deleteStackGroupCount() { this->stackGroupCount_ = nullptr;};
    inline string stackGroupCount() const { DARABONBA_PTR_GET_DEFAULT(stackGroupCount_, "") };
    inline ListSummariesResponseBodyRegionSummaries& setStackGroupCount(string stackGroupCount) { DARABONBA_PTR_SET_VALUE(stackGroupCount_, stackGroupCount) };


    // templateScratchCount Field Functions 
    bool hasTemplateScratchCount() const { return this->templateScratchCount_ != nullptr;};
    void deleteTemplateScratchCount() { this->templateScratchCount_ = nullptr;};
    inline int32_t templateScratchCount() const { DARABONBA_PTR_GET_DEFAULT(templateScratchCount_, 0) };
    inline ListSummariesResponseBodyRegionSummaries& setTemplateScratchCount(int32_t templateScratchCount) { DARABONBA_PTR_SET_VALUE(templateScratchCount_, templateScratchCount) };


  protected:
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> stackCount_ = nullptr;
    std::shared_ptr<vector<Models::ListSummariesResponseBodyRegionSummariesStackDetails>> stackDetails_ = nullptr;
    std::shared_ptr<string> stackGroupCount_ = nullptr;
    std::shared_ptr<int32_t> templateScratchCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
