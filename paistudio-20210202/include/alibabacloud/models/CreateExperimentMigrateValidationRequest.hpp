// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPERIMENTMIGRATEVALIDATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPERIMENTMIGRATEVALIDATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class CreateExperimentMigrateValidationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExperimentMigrateValidationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceExpId, sourceExpId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExperimentMigrateValidationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceExpId, sourceExpId_);
    };
    CreateExperimentMigrateValidationRequest() = default ;
    CreateExperimentMigrateValidationRequest(const CreateExperimentMigrateValidationRequest &) = default ;
    CreateExperimentMigrateValidationRequest(CreateExperimentMigrateValidationRequest &&) = default ;
    CreateExperimentMigrateValidationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExperimentMigrateValidationRequest() = default ;
    CreateExperimentMigrateValidationRequest& operator=(const CreateExperimentMigrateValidationRequest &) = default ;
    CreateExperimentMigrateValidationRequest& operator=(CreateExperimentMigrateValidationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceExpId_ == nullptr; };
    // sourceExpId Field Functions 
    bool hasSourceExpId() const { return this->sourceExpId_ != nullptr;};
    void deleteSourceExpId() { this->sourceExpId_ = nullptr;};
    inline int64_t sourceExpId() const { DARABONBA_PTR_GET_DEFAULT(sourceExpId_, 0L) };
    inline CreateExperimentMigrateValidationRequest& setSourceExpId(int64_t sourceExpId) { DARABONBA_PTR_SET_VALUE(sourceExpId_, sourceExpId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> sourceExpId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
