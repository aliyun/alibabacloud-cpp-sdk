// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUESTPROCESSINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUESTPROCESSINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricListRequestProcessInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListRequestProcessInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessIds, processIds_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListRequestProcessInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessIds, processIds_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
    };
    DescribeMetricListRequestProcessInfos() = default ;
    DescribeMetricListRequestProcessInfos(const DescribeMetricListRequestProcessInfos &) = default ;
    DescribeMetricListRequestProcessInfos(DescribeMetricListRequestProcessInfos &&) = default ;
    DescribeMetricListRequestProcessInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListRequestProcessInfos() = default ;
    DescribeMetricListRequestProcessInfos& operator=(const DescribeMetricListRequestProcessInfos &) = default ;
    DescribeMetricListRequestProcessInfos& operator=(DescribeMetricListRequestProcessInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processIds_ == nullptr
        && return this->processName_ == nullptr; };
    // processIds Field Functions 
    bool hasProcessIds() const { return this->processIds_ != nullptr;};
    void deleteProcessIds() { this->processIds_ = nullptr;};
    inline const vector<int32_t> & processIds() const { DARABONBA_PTR_GET_CONST(processIds_, vector<int32_t>) };
    inline vector<int32_t> processIds() { DARABONBA_PTR_GET(processIds_, vector<int32_t>) };
    inline DescribeMetricListRequestProcessInfos& setProcessIds(const vector<int32_t> & processIds) { DARABONBA_PTR_SET_VALUE(processIds_, processIds) };
    inline DescribeMetricListRequestProcessInfos& setProcessIds(vector<int32_t> && processIds) { DARABONBA_PTR_SET_RVALUE(processIds_, processIds) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeMetricListRequestProcessInfos& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


  protected:
    std::shared_ptr<vector<int32_t>> processIds_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
