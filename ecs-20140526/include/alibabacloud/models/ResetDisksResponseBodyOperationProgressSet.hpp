// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODYOPERATIONPROGRESSSET_HPP_
#define ALIBABACLOUD_MODELS_RESETDISKSRESPONSEBODYOPERATIONPROGRESSSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResetDisksResponseBodyOperationProgressSetOperationProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ResetDisksResponseBodyOperationProgressSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetDisksResponseBodyOperationProgressSet& obj) { 
      DARABONBA_PTR_TO_JSON(OperationProgress, operationProgress_);
    };
    friend void from_json(const Darabonba::Json& j, ResetDisksResponseBodyOperationProgressSet& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationProgress, operationProgress_);
    };
    ResetDisksResponseBodyOperationProgressSet() = default ;
    ResetDisksResponseBodyOperationProgressSet(const ResetDisksResponseBodyOperationProgressSet &) = default ;
    ResetDisksResponseBodyOperationProgressSet(ResetDisksResponseBodyOperationProgressSet &&) = default ;
    ResetDisksResponseBodyOperationProgressSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetDisksResponseBodyOperationProgressSet() = default ;
    ResetDisksResponseBodyOperationProgressSet& operator=(const ResetDisksResponseBodyOperationProgressSet &) = default ;
    ResetDisksResponseBodyOperationProgressSet& operator=(ResetDisksResponseBodyOperationProgressSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operationProgress_ == nullptr; };
    // operationProgress Field Functions 
    bool hasOperationProgress() const { return this->operationProgress_ != nullptr;};
    void deleteOperationProgress() { this->operationProgress_ = nullptr;};
    inline const vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress> & operationProgress() const { DARABONBA_PTR_GET_CONST(operationProgress_, vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress>) };
    inline vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress> operationProgress() { DARABONBA_PTR_GET(operationProgress_, vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress>) };
    inline ResetDisksResponseBodyOperationProgressSet& setOperationProgress(const vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress> & operationProgress) { DARABONBA_PTR_SET_VALUE(operationProgress_, operationProgress) };
    inline ResetDisksResponseBodyOperationProgressSet& setOperationProgress(vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress> && operationProgress) { DARABONBA_PTR_SET_RVALUE(operationProgress_, operationProgress) };


  protected:
    std::shared_ptr<vector<Models::ResetDisksResponseBodyOperationProgressSetOperationProgress>> operationProgress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
