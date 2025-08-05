// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTargetsResponseBodyDataTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListTargetsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListTargetsResponseBodyData() = default ;
    ListTargetsResponseBodyData(const ListTargetsResponseBodyData &) = default ;
    ListTargetsResponseBodyData(ListTargetsResponseBodyData &&) = default ;
    ListTargetsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetsResponseBodyData() = default ;
    ListTargetsResponseBodyData& operator=(const ListTargetsResponseBodyData &) = default ;
    ListTargetsResponseBodyData& operator=(ListTargetsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->targets_ != nullptr && this->total_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTargetsResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<Models::ListTargetsResponseBodyDataTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Models::ListTargetsResponseBodyDataTargets>) };
    inline vector<Models::ListTargetsResponseBodyDataTargets> targets() { DARABONBA_PTR_GET(targets_, vector<Models::ListTargetsResponseBodyDataTargets>) };
    inline ListTargetsResponseBodyData& setTargets(const vector<Models::ListTargetsResponseBodyDataTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline ListTargetsResponseBodyData& setTargets(vector<Models::ListTargetsResponseBodyDataTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListTargetsResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // If excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The event targets.
    std::shared_ptr<vector<Models::ListTargetsResponseBodyDataTargets>> targets_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
