// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODYFAILURES_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODYFAILURES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures& obj) { 
      DARABONBA_PTR_TO_JSON(Failures, failures_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures& obj) { 
      DARABONBA_PTR_FROM_JSON(Failures, failures_);
    };
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures(const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures(PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures &&) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures& operator=(const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures& operator=(PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failures_ == nullptr; };
    // failures Field Functions 
    bool hasFailures() const { return this->failures_ != nullptr;};
    void deleteFailures() { this->failures_ = nullptr;};
    inline const vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures> & failures() const { DARABONBA_PTR_GET_CONST(failures_, vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures>) };
    inline vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures> failures() { DARABONBA_PTR_GET(failures_, vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures>) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures& setFailures(const vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures> & failures) { DARABONBA_PTR_SET_VALUE(failures_, failures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures& setFailures(vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures> && failures) { DARABONBA_PTR_SET_RVALUE(failures_, failures) };


  protected:
    std::shared_ptr<vector<Models::PreCheckCreateOrderForDeleteDBNodesResponseBodyFailuresFailures>> failures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
