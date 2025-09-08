// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBSCALINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_WEBSCALINGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebScalingConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebScalingConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MaximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_TO_JSON(MinimumInstanceCount, minimumInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, WebScalingConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MaximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(MinimumInstanceCount, minimumInstanceCount_);
    };
    WebScalingConfig() = default ;
    WebScalingConfig(const WebScalingConfig &) = default ;
    WebScalingConfig(WebScalingConfig &&) = default ;
    WebScalingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebScalingConfig() = default ;
    WebScalingConfig& operator=(const WebScalingConfig &) = default ;
    WebScalingConfig& operator=(WebScalingConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maximumInstanceCount_ != nullptr
        && this->minimumInstanceCount_ != nullptr; };
    // maximumInstanceCount Field Functions 
    bool hasMaximumInstanceCount() const { return this->maximumInstanceCount_ != nullptr;};
    void deleteMaximumInstanceCount() { this->maximumInstanceCount_ = nullptr;};
    inline int64_t maximumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maximumInstanceCount_, 0L) };
    inline WebScalingConfig& setMaximumInstanceCount(int64_t maximumInstanceCount) { DARABONBA_PTR_SET_VALUE(maximumInstanceCount_, maximumInstanceCount) };


    // minimumInstanceCount Field Functions 
    bool hasMinimumInstanceCount() const { return this->minimumInstanceCount_ != nullptr;};
    void deleteMinimumInstanceCount() { this->minimumInstanceCount_ = nullptr;};
    inline int64_t minimumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceCount_, 0L) };
    inline WebScalingConfig& setMinimumInstanceCount(int64_t minimumInstanceCount) { DARABONBA_PTR_SET_VALUE(minimumInstanceCount_, minimumInstanceCount) };


  protected:
    std::shared_ptr<int64_t> maximumInstanceCount_ = nullptr;
    std::shared_ptr<int64_t> minimumInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
