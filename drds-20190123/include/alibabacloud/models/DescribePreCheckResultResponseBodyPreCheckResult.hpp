// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKRESULTRESPONSEBODYPRECHECKRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKRESULTRESPONSEBODYPRECHECKRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribePreCheckResultResponseBodyPreCheckResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckResultResponseBodyPreCheckResult& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckName, preCheckName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(SubCheckItems, subCheckItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckResultResponseBodyPreCheckResult& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckName, preCheckName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(SubCheckItems, subCheckItems_);
    };
    DescribePreCheckResultResponseBodyPreCheckResult() = default ;
    DescribePreCheckResultResponseBodyPreCheckResult(const DescribePreCheckResultResponseBodyPreCheckResult &) = default ;
    DescribePreCheckResultResponseBodyPreCheckResult(DescribePreCheckResultResponseBodyPreCheckResult &&) = default ;
    DescribePreCheckResultResponseBodyPreCheckResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckResultResponseBodyPreCheckResult() = default ;
    DescribePreCheckResultResponseBodyPreCheckResult& operator=(const DescribePreCheckResultResponseBodyPreCheckResult &) = default ;
    DescribePreCheckResultResponseBodyPreCheckResult& operator=(DescribePreCheckResultResponseBodyPreCheckResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preCheckName_ != nullptr
        && this->state_ != nullptr && this->subCheckItems_ != nullptr; };
    // preCheckName Field Functions 
    bool hasPreCheckName() const { return this->preCheckName_ != nullptr;};
    void deletePreCheckName() { this->preCheckName_ = nullptr;};
    inline string preCheckName() const { DARABONBA_PTR_GET_DEFAULT(preCheckName_, "") };
    inline DescribePreCheckResultResponseBodyPreCheckResult& setPreCheckName(string preCheckName) { DARABONBA_PTR_SET_VALUE(preCheckName_, preCheckName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckResultResponseBodyPreCheckResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // subCheckItems Field Functions 
    bool hasSubCheckItems() const { return this->subCheckItems_ != nullptr;};
    void deleteSubCheckItems() { this->subCheckItems_ = nullptr;};
    inline const vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems> & subCheckItems() const { DARABONBA_PTR_GET_CONST(subCheckItems_, vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems>) };
    inline vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems> subCheckItems() { DARABONBA_PTR_GET(subCheckItems_, vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems>) };
    inline DescribePreCheckResultResponseBodyPreCheckResult& setSubCheckItems(const vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems> & subCheckItems) { DARABONBA_PTR_SET_VALUE(subCheckItems_, subCheckItems) };
    inline DescribePreCheckResultResponseBodyPreCheckResult& setSubCheckItems(vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems> && subCheckItems) { DARABONBA_PTR_SET_RVALUE(subCheckItems_, subCheckItems) };


  protected:
    // Indicates the name of the precheck task.
    std::shared_ptr<string> preCheckName_ = nullptr;
    // Indicates the state of the precheck task.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates the details about the subtasks of the precheck task.
    std::shared_ptr<vector<Models::DescribePreCheckResultResponseBodyPreCheckResultSubCheckItems>> subCheckItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
