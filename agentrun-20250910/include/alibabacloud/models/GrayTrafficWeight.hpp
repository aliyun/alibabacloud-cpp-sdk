// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAYTRAFFICWEIGHT_HPP_
#define ALIBABACLOUD_MODELS_GRAYTRAFFICWEIGHT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class GrayTrafficWeight : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrayTrafficWeight& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GrayTrafficWeight& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    GrayTrafficWeight() = default ;
    GrayTrafficWeight(const GrayTrafficWeight &) = default ;
    GrayTrafficWeight(GrayTrafficWeight &&) = default ;
    GrayTrafficWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrayTrafficWeight() = default ;
    GrayTrafficWeight& operator=(const GrayTrafficWeight &) = default ;
    GrayTrafficWeight& operator=(GrayTrafficWeight &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->version_ != nullptr
        && this->weight_ != nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GrayTrafficWeight& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline float weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0.0) };
    inline GrayTrafficWeight& setWeight(float weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // 灰度版本号
    std::shared_ptr<string> version_ = nullptr;
    // 流量权重比例（0.0-1.0）
    std::shared_ptr<float> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
