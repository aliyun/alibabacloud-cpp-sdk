// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCEKAFKAINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSDATASOURCERESPONSEBODYAPSDATASOURCEKAFKAINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo& obj) { 
      DARABONBA_PTR_TO_JSON(KafkaClusterId, kafkaClusterId_);
      DARABONBA_PTR_TO_JSON(KafkaTopic, kafkaTopic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(KafkaClusterId, kafkaClusterId_);
      DARABONBA_PTR_FROM_JSON(KafkaTopic, kafkaTopic_);
    };
    DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo() = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo(const DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo(DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo &&) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo() = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo& operator=(const DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo &) = default ;
    DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo& operator=(DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kafkaClusterId_ != nullptr
        && this->kafkaTopic_ != nullptr; };
    // kafkaClusterId Field Functions 
    bool hasKafkaClusterId() const { return this->kafkaClusterId_ != nullptr;};
    void deleteKafkaClusterId() { this->kafkaClusterId_ = nullptr;};
    inline string kafkaClusterId() const { DARABONBA_PTR_GET_DEFAULT(kafkaClusterId_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo& setKafkaClusterId(string kafkaClusterId) { DARABONBA_PTR_SET_VALUE(kafkaClusterId_, kafkaClusterId) };


    // kafkaTopic Field Functions 
    bool hasKafkaTopic() const { return this->kafkaTopic_ != nullptr;};
    void deleteKafkaTopic() { this->kafkaTopic_ = nullptr;};
    inline string kafkaTopic() const { DARABONBA_PTR_GET_DEFAULT(kafkaTopic_, "") };
    inline DescribeApsDatasourceResponseBodyApsDatasourceKafkaInfo& setKafkaTopic(string kafkaTopic) { DARABONBA_PTR_SET_VALUE(kafkaTopic_, kafkaTopic) };


  protected:
    // The ID of the Kafka instance.
    std::shared_ptr<string> kafkaClusterId_ = nullptr;
    // The topic of the Kafka instance.
    std::shared_ptr<string> kafkaTopic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
