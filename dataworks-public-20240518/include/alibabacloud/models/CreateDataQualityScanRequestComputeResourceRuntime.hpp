// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANREQUESTCOMPUTERESOURCERUNTIME_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANREQUESTCOMPUTERESOURCERUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanRequestComputeResourceRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanRequestComputeResourceRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_ANY_TO_JSON(HiveConf, hiveConf_);
      DARABONBA_ANY_TO_JSON(SparkConf, sparkConf_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanRequestComputeResourceRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_ANY_FROM_JSON(HiveConf, hiveConf_);
      DARABONBA_ANY_FROM_JSON(SparkConf, sparkConf_);
    };
    CreateDataQualityScanRequestComputeResourceRuntime() = default ;
    CreateDataQualityScanRequestComputeResourceRuntime(const CreateDataQualityScanRequestComputeResourceRuntime &) = default ;
    CreateDataQualityScanRequestComputeResourceRuntime(CreateDataQualityScanRequestComputeResourceRuntime &&) = default ;
    CreateDataQualityScanRequestComputeResourceRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanRequestComputeResourceRuntime() = default ;
    CreateDataQualityScanRequestComputeResourceRuntime& operator=(const CreateDataQualityScanRequestComputeResourceRuntime &) = default ;
    CreateDataQualityScanRequestComputeResourceRuntime& operator=(CreateDataQualityScanRequestComputeResourceRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->engine_ == nullptr
        && return this->hiveConf_ == nullptr && return this->sparkConf_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDataQualityScanRequestComputeResourceRuntime& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // hiveConf Field Functions 
    bool hasHiveConf() const { return this->hiveConf_ != nullptr;};
    void deleteHiveConf() { this->hiveConf_ = nullptr;};
    inline     const Darabonba::Json & hiveConf() const { DARABONBA_GET(hiveConf_) };
    Darabonba::Json & hiveConf() { DARABONBA_GET(hiveConf_) };
    inline CreateDataQualityScanRequestComputeResourceRuntime& setHiveConf(const Darabonba::Json & hiveConf) { DARABONBA_SET_VALUE(hiveConf_, hiveConf) };
    inline CreateDataQualityScanRequestComputeResourceRuntime& setHiveConf(Darabonba::Json & hiveConf) { DARABONBA_SET_RVALUE(hiveConf_, hiveConf) };


    // sparkConf Field Functions 
    bool hasSparkConf() const { return this->sparkConf_ != nullptr;};
    void deleteSparkConf() { this->sparkConf_ = nullptr;};
    inline     const Darabonba::Json & sparkConf() const { DARABONBA_GET(sparkConf_) };
    Darabonba::Json & sparkConf() { DARABONBA_GET(sparkConf_) };
    inline CreateDataQualityScanRequestComputeResourceRuntime& setSparkConf(const Darabonba::Json & sparkConf) { DARABONBA_SET_VALUE(sparkConf_, sparkConf) };
    inline CreateDataQualityScanRequestComputeResourceRuntime& setSparkConf(Darabonba::Json & sparkConf) { DARABONBA_SET_RVALUE(sparkConf_, sparkConf) };


  protected:
    // The type of the compute engine. Only EMR compute engines support these settings.
    // 
    // Valid values:
    // 
    // *   Hive: Hive SQL
    // *   Spark: Spark SQL
    // *   Kyuubi
    std::shared_ptr<string> engine_ = nullptr;
    // Additional Hive engine parameters. Currently, only the mapreduce.job.queuename parameter is supported.
    Darabonba::Json hiveConf_ = nullptr;
    // Additional Spark engine parameters. Currently, only the spark.yarn.queue parameter is supported.
    Darabonba::Json sparkConf_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
