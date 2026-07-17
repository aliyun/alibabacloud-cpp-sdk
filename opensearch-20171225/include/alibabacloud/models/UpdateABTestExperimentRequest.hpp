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
        && this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ABTestExperiment & getBody() const { DARABONBA_PTR_GET_CONST(body_, ABTestExperiment) };
    inline ABTestExperiment getBody() { DARABONBA_PTR_GET(body_, ABTestExperiment) };
    inline UpdateABTestExperimentRequest& setBody(const ABTestExperiment & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateABTestExperimentRequest& setBody(ABTestExperiment && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateABTestExperimentRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body. For more information, see [ABTestExperiment](https://help.aliyun.com/document_detail/173617.html).
    shared_ptr<ABTestExperiment> body_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - true: Performs a dry run. The system checks if your AccessKey is valid, if the Resource Access Management (RAM) user is authorized, and if all required parameters are specified. The request is not sent.
    // 
    // - false (default): Sends the request to update the experiment.
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
