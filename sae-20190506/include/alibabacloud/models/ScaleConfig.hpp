// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SCALECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ScaleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(alwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_TO_JSON(maximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_TO_JSON(minimumInstanceCount, minimumInstanceCount_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(alwaysAllocateCPU, alwaysAllocateCPU_);
      DARABONBA_PTR_FROM_JSON(maximumInstanceCount, maximumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(minimumInstanceCount, minimumInstanceCount_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ScaleConfig() = default ;
    ScaleConfig(const ScaleConfig &) = default ;
    ScaleConfig(ScaleConfig &&) = default ;
    ScaleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleConfig() = default ;
    ScaleConfig& operator=(const ScaleConfig &) = default ;
    ScaleConfig& operator=(ScaleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alwaysAllocateCPU_ != nullptr
        && this->maximumInstanceCount_ != nullptr && this->minimumInstanceCount_ != nullptr && this->requestId_ != nullptr; };
    // alwaysAllocateCPU Field Functions 
    bool hasAlwaysAllocateCPU() const { return this->alwaysAllocateCPU_ != nullptr;};
    void deleteAlwaysAllocateCPU() { this->alwaysAllocateCPU_ = nullptr;};
    inline bool alwaysAllocateCPU() const { DARABONBA_PTR_GET_DEFAULT(alwaysAllocateCPU_, false) };
    inline ScaleConfig& setAlwaysAllocateCPU(bool alwaysAllocateCPU) { DARABONBA_PTR_SET_VALUE(alwaysAllocateCPU_, alwaysAllocateCPU) };


    // maximumInstanceCount Field Functions 
    bool hasMaximumInstanceCount() const { return this->maximumInstanceCount_ != nullptr;};
    void deleteMaximumInstanceCount() { this->maximumInstanceCount_ = nullptr;};
    inline int64_t maximumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maximumInstanceCount_, 0L) };
    inline ScaleConfig& setMaximumInstanceCount(int64_t maximumInstanceCount) { DARABONBA_PTR_SET_VALUE(maximumInstanceCount_, maximumInstanceCount) };


    // minimumInstanceCount Field Functions 
    bool hasMinimumInstanceCount() const { return this->minimumInstanceCount_ != nullptr;};
    void deleteMinimumInstanceCount() { this->minimumInstanceCount_ = nullptr;};
    inline int64_t minimumInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceCount_, 0L) };
    inline ScaleConfig& setMinimumInstanceCount(int64_t minimumInstanceCount) { DARABONBA_PTR_SET_VALUE(minimumInstanceCount_, minimumInstanceCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ScaleConfig& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> alwaysAllocateCPU_ = nullptr;
    std::shared_ptr<int64_t> maximumInstanceCount_ = nullptr;
    std::shared_ptr<int64_t> minimumInstanceCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
