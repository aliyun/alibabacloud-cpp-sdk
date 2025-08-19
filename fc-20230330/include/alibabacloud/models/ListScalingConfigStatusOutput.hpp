// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALINGCONFIGSTATUSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALINGCONFIGSTATUSOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingConfigStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListScalingConfigStatusOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScalingConfigStatusOutput& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListScalingConfigStatusOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListScalingConfigStatusOutput() = default ;
    ListScalingConfigStatusOutput(const ListScalingConfigStatusOutput &) = default ;
    ListScalingConfigStatusOutput(ListScalingConfigStatusOutput &&) = default ;
    ListScalingConfigStatusOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScalingConfigStatusOutput() = default ;
    ListScalingConfigStatusOutput& operator=(const ListScalingConfigStatusOutput &) = default ;
    ListScalingConfigStatusOutput& operator=(ListScalingConfigStatusOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->result_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListScalingConfigStatusOutput& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ScalingConfigStatus> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ScalingConfigStatus>) };
    inline vector<ScalingConfigStatus> result() { DARABONBA_PTR_GET(result_, vector<ScalingConfigStatus>) };
    inline ListScalingConfigStatusOutput& setResult(const vector<ScalingConfigStatus> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListScalingConfigStatusOutput& setResult(vector<ScalingConfigStatus> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ScalingConfigStatus>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
