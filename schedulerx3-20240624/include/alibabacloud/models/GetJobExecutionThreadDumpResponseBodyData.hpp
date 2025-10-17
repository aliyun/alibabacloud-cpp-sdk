// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBEXECUTIONTHREADDUMPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETJOBEXECUTIONTHREADDUMPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class GetJobExecutionThreadDumpResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobExecutionThreadDumpResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Dump, dump_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobExecutionThreadDumpResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Dump, dump_);
    };
    GetJobExecutionThreadDumpResponseBodyData() = default ;
    GetJobExecutionThreadDumpResponseBodyData(const GetJobExecutionThreadDumpResponseBodyData &) = default ;
    GetJobExecutionThreadDumpResponseBodyData(GetJobExecutionThreadDumpResponseBodyData &&) = default ;
    GetJobExecutionThreadDumpResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobExecutionThreadDumpResponseBodyData() = default ;
    GetJobExecutionThreadDumpResponseBodyData& operator=(const GetJobExecutionThreadDumpResponseBodyData &) = default ;
    GetJobExecutionThreadDumpResponseBodyData& operator=(GetJobExecutionThreadDumpResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dump_ == nullptr; };
    // dump Field Functions 
    bool hasDump() const { return this->dump_ != nullptr;};
    void deleteDump() { this->dump_ = nullptr;};
    inline string dump() const { DARABONBA_PTR_GET_DEFAULT(dump_, "") };
    inline GetJobExecutionThreadDumpResponseBodyData& setDump(string dump) { DARABONBA_PTR_SET_VALUE(dump_, dump) };


  protected:
    std::shared_ptr<string> dump_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
