// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGSTATUS_HPP_
#define ALIBABACLOUD_MODELS_SCALINGSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ScalingStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingStatus& obj) { 
      DARABONBA_PTR_TO_JSON(currentError, currentError_);
      DARABONBA_PTR_TO_JSON(resourceCount, resourceCount_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(currentError, currentError_);
      DARABONBA_PTR_FROM_JSON(resourceCount, resourceCount_);
    };
    ScalingStatus() = default ;
    ScalingStatus(const ScalingStatus &) = default ;
    ScalingStatus(ScalingStatus &&) = default ;
    ScalingStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingStatus() = default ;
    ScalingStatus& operator=(const ScalingStatus &) = default ;
    ScalingStatus& operator=(ScalingStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentError_ != nullptr
        && this->resourceCount_ != nullptr; };
    // currentError Field Functions 
    bool hasCurrentError() const { return this->currentError_ != nullptr;};
    void deleteCurrentError() { this->currentError_ = nullptr;};
    inline string currentError() const { DARABONBA_PTR_GET_DEFAULT(currentError_, "") };
    inline ScalingStatus& setCurrentError(string currentError) { DARABONBA_PTR_SET_VALUE(currentError_, currentError) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int64_t resourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0L) };
    inline ScalingStatus& setResourceCount(int64_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


  protected:
    std::shared_ptr<string> currentError_ = nullptr;
    std::shared_ptr<int64_t> resourceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
