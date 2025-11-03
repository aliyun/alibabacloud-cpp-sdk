// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAIDIFFANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAIDIFFANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartAIDiffAnalysisRequestTask1.hpp>
#include <alibabacloud/models/StartAIDiffAnalysisRequestTask2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class StartAIDiffAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAIDiffAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(task1, task1_);
      DARABONBA_PTR_TO_JSON(task2, task2_);
    };
    friend void from_json(const Darabonba::Json& j, StartAIDiffAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(task1, task1_);
      DARABONBA_PTR_FROM_JSON(task2, task2_);
    };
    StartAIDiffAnalysisRequest() = default ;
    StartAIDiffAnalysisRequest(const StartAIDiffAnalysisRequest &) = default ;
    StartAIDiffAnalysisRequest(StartAIDiffAnalysisRequest &&) = default ;
    StartAIDiffAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAIDiffAnalysisRequest() = default ;
    StartAIDiffAnalysisRequest& operator=(const StartAIDiffAnalysisRequest &) = default ;
    StartAIDiffAnalysisRequest& operator=(StartAIDiffAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->task1_ == nullptr
        && return this->task2_ == nullptr; };
    // task1 Field Functions 
    bool hasTask1() const { return this->task1_ != nullptr;};
    void deleteTask1() { this->task1_ = nullptr;};
    inline const StartAIDiffAnalysisRequestTask1 & task1() const { DARABONBA_PTR_GET_CONST(task1_, StartAIDiffAnalysisRequestTask1) };
    inline StartAIDiffAnalysisRequestTask1 task1() { DARABONBA_PTR_GET(task1_, StartAIDiffAnalysisRequestTask1) };
    inline StartAIDiffAnalysisRequest& setTask1(const StartAIDiffAnalysisRequestTask1 & task1) { DARABONBA_PTR_SET_VALUE(task1_, task1) };
    inline StartAIDiffAnalysisRequest& setTask1(StartAIDiffAnalysisRequestTask1 && task1) { DARABONBA_PTR_SET_RVALUE(task1_, task1) };


    // task2 Field Functions 
    bool hasTask2() const { return this->task2_ != nullptr;};
    void deleteTask2() { this->task2_ = nullptr;};
    inline const StartAIDiffAnalysisRequestTask2 & task2() const { DARABONBA_PTR_GET_CONST(task2_, StartAIDiffAnalysisRequestTask2) };
    inline StartAIDiffAnalysisRequestTask2 task2() { DARABONBA_PTR_GET(task2_, StartAIDiffAnalysisRequestTask2) };
    inline StartAIDiffAnalysisRequest& setTask2(const StartAIDiffAnalysisRequestTask2 & task2) { DARABONBA_PTR_SET_VALUE(task2_, task2) };
    inline StartAIDiffAnalysisRequest& setTask2(StartAIDiffAnalysisRequestTask2 && task2) { DARABONBA_PTR_SET_RVALUE(task2_, task2) };


  protected:
    // This parameter is required.
    std::shared_ptr<StartAIDiffAnalysisRequestTask1> task1_ = nullptr;
    // This parameter is required.
    std::shared_ptr<StartAIDiffAnalysisRequestTask2> task2_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
