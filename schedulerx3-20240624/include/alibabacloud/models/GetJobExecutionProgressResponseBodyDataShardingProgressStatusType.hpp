// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATASHARDINGPROGRESSSTATUSTYPE_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONPROGRESSRESPONSEBODYDATASHARDINGPROGRESSSTATUSTYPE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionProgressResponseBodyDataShardingProgressStatusType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Tips, tips_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Tips, tips_);
    };
    GetJobExecutionProgressResponseBodyDataShardingProgressStatusType() = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgressStatusType(const GetJobExecutionProgressResponseBodyDataShardingProgressStatusType &) = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgressStatusType(GetJobExecutionProgressResponseBodyDataShardingProgressStatusType &&) = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgressStatusType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionProgressResponseBodyDataShardingProgressStatusType() = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& operator=(const GetJobExecutionProgressResponseBodyDataShardingProgressStatusType &) = default ;
    GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& operator=(GetJobExecutionProgressResponseBodyDataShardingProgressStatusType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->name_ != nullptr && this->tips_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tips Field Functions 
    bool hasTips() const { return this->tips_ != nullptr;};
    void deleteTips() { this->tips_ = nullptr;};
    inline const map<string, string> & tips() const { DARABONBA_PTR_GET_CONST(tips_, map<string, string>) };
    inline map<string, string> tips() { DARABONBA_PTR_GET(tips_, map<string, string>) };
    inline GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& setTips(const map<string, string> & tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };
    inline GetJobExecutionProgressResponseBodyDataShardingProgressStatusType& setTips(map<string, string> && tips) { DARABONBA_PTR_SET_RVALUE(tips_, tips) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // -
    std::shared_ptr<map<string, string>> tips_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
