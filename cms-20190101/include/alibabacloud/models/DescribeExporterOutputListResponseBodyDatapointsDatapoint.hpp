// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODYDATAPOINTSDATAPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTEROUTPUTLISTRESPONSEBODYDATAPOINTSDATAPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterOutputListResponseBodyDatapointsDatapoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterOutputListResponseBodyDatapointsDatapoint& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigJson, configJson_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DestName, destName_);
      DARABONBA_PTR_TO_JSON(DestType, destType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterOutputListResponseBodyDatapointsDatapoint& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigJson, configJson_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DestName, destName_);
      DARABONBA_PTR_FROM_JSON(DestType, destType_);
    };
    DescribeExporterOutputListResponseBodyDatapointsDatapoint() = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapoint(const DescribeExporterOutputListResponseBodyDatapointsDatapoint &) = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapoint(DescribeExporterOutputListResponseBodyDatapointsDatapoint &&) = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterOutputListResponseBodyDatapointsDatapoint() = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapoint& operator=(const DescribeExporterOutputListResponseBodyDatapointsDatapoint &) = default ;
    DescribeExporterOutputListResponseBodyDatapointsDatapoint& operator=(DescribeExporterOutputListResponseBodyDatapointsDatapoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configJson_ != nullptr
        && this->createTime_ != nullptr && this->destName_ != nullptr && this->destType_ != nullptr; };
    // configJson Field Functions 
    bool hasConfigJson() const { return this->configJson_ != nullptr;};
    void deleteConfigJson() { this->configJson_ = nullptr;};
    inline const Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson & configJson() const { DARABONBA_PTR_GET_CONST(configJson_, Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson) };
    inline Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson configJson() { DARABONBA_PTR_GET(configJson_, Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson) };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapoint& setConfigJson(const Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson & configJson) { DARABONBA_PTR_SET_VALUE(configJson_, configJson) };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapoint& setConfigJson(Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson && configJson) { DARABONBA_PTR_SET_RVALUE(configJson_, configJson) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapoint& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // destName Field Functions 
    bool hasDestName() const { return this->destName_ != nullptr;};
    void deleteDestName() { this->destName_ = nullptr;};
    inline string destName() const { DARABONBA_PTR_GET_DEFAULT(destName_, "") };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapoint& setDestName(string destName) { DARABONBA_PTR_SET_VALUE(destName_, destName) };


    // destType Field Functions 
    bool hasDestType() const { return this->destType_ != nullptr;};
    void deleteDestType() { this->destType_ = nullptr;};
    inline string destType() const { DARABONBA_PTR_GET_DEFAULT(destType_, "") };
    inline DescribeExporterOutputListResponseBodyDatapointsDatapoint& setDestType(string destType) { DARABONBA_PTR_SET_VALUE(destType_, destType) };


  protected:
    // The JSON object that contains the details about the destination to which the monitoring data is exported.
    std::shared_ptr<Models::DescribeExporterOutputListResponseBodyDatapointsDatapointConfigJson> configJson_ = nullptr;
    // The time when the configuration set was created. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The name of the configuration set.
    std::shared_ptr<string> destName_ = nullptr;
    // The service to which the monitoring data is exported.
    // 
    // > Only Log Service is supported. More services will be supported in the future.
    std::shared_ptr<string> destType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
