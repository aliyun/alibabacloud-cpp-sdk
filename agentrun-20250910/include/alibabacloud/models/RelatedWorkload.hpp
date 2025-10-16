// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELATEDWORKLOAD_HPP_
#define ALIBABACLOUD_MODELS_RELATEDWORKLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RelatedWorkload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RelatedWorkload& obj) { 
      DARABONBA_PTR_TO_JSON(workloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(workloadName, workloadName_);
      DARABONBA_PTR_TO_JSON(workloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, RelatedWorkload& obj) { 
      DARABONBA_PTR_FROM_JSON(workloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(workloadName, workloadName_);
      DARABONBA_PTR_FROM_JSON(workloadType, workloadType_);
    };
    RelatedWorkload() = default ;
    RelatedWorkload(const RelatedWorkload &) = default ;
    RelatedWorkload(RelatedWorkload &&) = default ;
    RelatedWorkload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RelatedWorkload() = default ;
    RelatedWorkload& operator=(const RelatedWorkload &) = default ;
    RelatedWorkload& operator=(RelatedWorkload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workloadId_ == nullptr
        && return this->workloadName_ == nullptr && return this->workloadType_ == nullptr; };
    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string workloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline RelatedWorkload& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadName Field Functions 
    bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
    void deleteWorkloadName() { this->workloadName_ = nullptr;};
    inline string workloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
    inline RelatedWorkload& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline RelatedWorkload& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    std::shared_ptr<string> workloadId_ = nullptr;
    std::shared_ptr<string> workloadName_ = nullptr;
    std::shared_ptr<string> workloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
