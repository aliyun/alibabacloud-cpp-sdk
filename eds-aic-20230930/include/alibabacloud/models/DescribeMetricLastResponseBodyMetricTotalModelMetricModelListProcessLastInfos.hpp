// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTPROCESSLASTINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODYMETRICTOTALMODELMETRICMODELLISTPROCESSLASTINFOS_HPP_
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
  class DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& obj) { 
      DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProcessIds, processIds_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
      DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProcessIds, processIds_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos() = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos(const DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos(DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos &&) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos() = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& operator=(const DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos &) = default ;
    DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& operator=(DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuUsage_ != nullptr
        && this->memoryUsage_ != nullptr && this->name_ != nullptr && this->processIds_ != nullptr && this->timestamp_ != nullptr; };
    // cpuUsage Field Functions 
    bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
    void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
    inline double cpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline double memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0.0) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& setMemoryUsage(double memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processIds Field Functions 
    bool hasProcessIds() const { return this->processIds_ != nullptr;};
    void deleteProcessIds() { this->processIds_ = nullptr;};
    inline const vector<int32_t> & processIds() const { DARABONBA_PTR_GET_CONST(processIds_, vector<int32_t>) };
    inline vector<int32_t> processIds() { DARABONBA_PTR_GET(processIds_, vector<int32_t>) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& setProcessIds(const vector<int32_t> & processIds) { DARABONBA_PTR_SET_VALUE(processIds_, processIds) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& setProcessIds(vector<int32_t> && processIds) { DARABONBA_PTR_SET_RVALUE(processIds_, processIds) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeMetricLastResponseBodyMetricTotalModelMetricModelListProcessLastInfos& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<double> cpuUsage_ = nullptr;
    std::shared_ptr<double> memoryUsage_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<int32_t>> processIds_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
