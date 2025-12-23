// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABTESTEXPERIMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABTESTEXPERIMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ABTestExperiment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateABTestExperimentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABTestExperimentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABTestExperimentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateABTestExperimentRequest() = default ;
    UpdateABTestExperimentRequest(const UpdateABTestExperimentRequest &) = default ;
    UpdateABTestExperimentRequest(UpdateABTestExperimentRequest &&) = default ;
    UpdateABTestExperimentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABTestExperimentRequest() = default ;
    UpdateABTestExperimentRequest& operator=(const UpdateABTestExperimentRequest &) = default ;
    UpdateABTestExperimentRequest& operator=(UpdateABTestExperimentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ABTestExperiment & body() const { DARABONBA_PTR_GET_CONST(body_, ABTestExperiment) };
    inline ABTestExperiment body() { DARABONBA_PTR_GET(body_, ABTestExperiment) };
    inline UpdateABTestExperimentRequest& setBody(const ABTestExperiment & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateABTestExperimentRequest& setBody(ABTestExperiment && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateABTestExperimentRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body. For more information, see [ABTestExperiment](https://help.aliyun.com/document_detail/173617.html).
    std::shared_ptr<ABTestExperiment> body_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. No endpoint is created. The system checks whether your AccessKey is valid, whether Resource Access Management (RAM) users are authorized, and whether the required parameters are set.
    // *   false (default): creates an endpoint immediately.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
