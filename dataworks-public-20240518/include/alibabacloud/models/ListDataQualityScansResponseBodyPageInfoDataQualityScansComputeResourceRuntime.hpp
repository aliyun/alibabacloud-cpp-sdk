// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANSCOMPUTERESOURCERUNTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANSCOMPUTERESOURCERUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(HiveConf, hiveConf_);
      DARABONBA_PTR_TO_JSON(SparkConf, sparkConf_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(HiveConf, hiveConf_);
      DARABONBA_PTR_FROM_JSON(SparkConf, sparkConf_);
    };
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime(const ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime(ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime &&) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& operator=(const ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& operator=(ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->engine_ != nullptr
        && this->hiveConf_ != nullptr && this->sparkConf_ != nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // hiveConf Field Functions 
    bool hasHiveConf() const { return this->hiveConf_ != nullptr;};
    void deleteHiveConf() { this->hiveConf_ = nullptr;};
    inline string hiveConf() const { DARABONBA_PTR_GET_DEFAULT(hiveConf_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& setHiveConf(string hiveConf) { DARABONBA_PTR_SET_VALUE(hiveConf_, hiveConf) };


    // sparkConf Field Functions 
    bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
    void deleteSparkConf() { this->sparkConf_ = nullptr;};
    inline string sparkConf() const { DARABONBA_PTR_GET_DEFAULT(sparkConf_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime& setSparkConf(string sparkConf) { DARABONBA_PTR_SET_VALUE(sparkConf_, sparkConf) };


  protected:
    // The engine type. These settings are only supported for the EMR compute engine. Valid values:
    // 
    // *   Hive: Hive SQL
    // *   Spark: Spark SQL
    // *   Kyuubi
    std::shared_ptr<string> engine_ = nullptr;
    // Additional parameters for the Hive engine. Currently, only mapreduce.job.queuename is supported to set the queue.
    std::shared_ptr<string> hiveConf_ = nullptr;
    // Additional parameters for the Spark engine. Currently, only spark.yarn.queue is supported to set the queue.
    std::shared_ptr<string> sparkConf_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
