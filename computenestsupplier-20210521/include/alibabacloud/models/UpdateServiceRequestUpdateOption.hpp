// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTUPDATEOPTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEREQUESTUPDATEOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceRequestUpdateOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceRequestUpdateOption& obj) { 
      DARABONBA_PTR_TO_JSON(UpdateArtifact, updateArtifact_);
      DARABONBA_PTR_TO_JSON(UpdateFrom, updateFrom_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceRequestUpdateOption& obj) { 
      DARABONBA_PTR_FROM_JSON(UpdateArtifact, updateArtifact_);
      DARABONBA_PTR_FROM_JSON(UpdateFrom, updateFrom_);
    };
    UpdateServiceRequestUpdateOption() = default ;
    UpdateServiceRequestUpdateOption(const UpdateServiceRequestUpdateOption &) = default ;
    UpdateServiceRequestUpdateOption(UpdateServiceRequestUpdateOption &&) = default ;
    UpdateServiceRequestUpdateOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceRequestUpdateOption() = default ;
    UpdateServiceRequestUpdateOption& operator=(const UpdateServiceRequestUpdateOption &) = default ;
    UpdateServiceRequestUpdateOption& operator=(UpdateServiceRequestUpdateOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->updateArtifact_ != nullptr
        && this->updateFrom_ != nullptr; };
    // updateArtifact Field Functions 
    bool hasUpdateArtifact() const { return this->updateArtifact_ != nullptr;};
    void deleteUpdateArtifact() { this->updateArtifact_ = nullptr;};
    inline bool updateArtifact() const { DARABONBA_PTR_GET_DEFAULT(updateArtifact_, false) };
    inline UpdateServiceRequestUpdateOption& setUpdateArtifact(bool updateArtifact) { DARABONBA_PTR_SET_VALUE(updateArtifact_, updateArtifact) };


    // updateFrom Field Functions 
    bool hasUpdateFrom() const { return this->updateFrom_ != nullptr;};
    void deleteUpdateFrom() { this->updateFrom_ = nullptr;};
    inline string updateFrom() const { DARABONBA_PTR_GET_DEFAULT(updateFrom_, "") };
    inline UpdateServiceRequestUpdateOption& setUpdateFrom(string updateFrom) { DARABONBA_PTR_SET_VALUE(updateFrom_, updateFrom) };


  protected:
    // Whether to update artifact.
    std::shared_ptr<bool> updateArtifact_ = nullptr;
    // Update from. Valid values:
    // 
    // - CODE
    // - PARAMETERS
    std::shared_ptr<string> updateFrom_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
