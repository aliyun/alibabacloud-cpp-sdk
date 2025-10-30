// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODYPARSERESULT_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYRESPONSEBODYPARSERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ParseBatchTaskDependencyResponseBodyParseResultDependNodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyResponseBodyParseResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyResponseBodyParseResult& obj) { 
      DARABONBA_PTR_TO_JSON(DependNodeList, dependNodeList_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyResponseBodyParseResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DependNodeList, dependNodeList_);
    };
    ParseBatchTaskDependencyResponseBodyParseResult() = default ;
    ParseBatchTaskDependencyResponseBodyParseResult(const ParseBatchTaskDependencyResponseBodyParseResult &) = default ;
    ParseBatchTaskDependencyResponseBodyParseResult(ParseBatchTaskDependencyResponseBodyParseResult &&) = default ;
    ParseBatchTaskDependencyResponseBodyParseResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyResponseBodyParseResult() = default ;
    ParseBatchTaskDependencyResponseBodyParseResult& operator=(const ParseBatchTaskDependencyResponseBodyParseResult &) = default ;
    ParseBatchTaskDependencyResponseBodyParseResult& operator=(ParseBatchTaskDependencyResponseBodyParseResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dependNodeList_ == nullptr; };
    // dependNodeList Field Functions 
    bool hasDependNodeList() const { return this->dependNodeList_ != nullptr;};
    void deleteDependNodeList() { this->dependNodeList_ = nullptr;};
    inline const vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList> & dependNodeList() const { DARABONBA_PTR_GET_CONST(dependNodeList_, vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList>) };
    inline vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList> dependNodeList() { DARABONBA_PTR_GET(dependNodeList_, vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList>) };
    inline ParseBatchTaskDependencyResponseBodyParseResult& setDependNodeList(const vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList> & dependNodeList) { DARABONBA_PTR_SET_VALUE(dependNodeList_, dependNodeList) };
    inline ParseBatchTaskDependencyResponseBodyParseResult& setDependNodeList(vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList> && dependNodeList) { DARABONBA_PTR_SET_RVALUE(dependNodeList_, dependNodeList) };


  protected:
    std::shared_ptr<vector<Models::ParseBatchTaskDependencyResponseBodyParseResultDependNodeList>> dependNodeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
