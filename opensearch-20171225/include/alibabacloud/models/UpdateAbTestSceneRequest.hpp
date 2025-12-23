// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEABTESTSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEABTESTSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ABTestScene.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class UpdateABTestSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateABTestSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateABTestSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    UpdateABTestSceneRequest() = default ;
    UpdateABTestSceneRequest(const UpdateABTestSceneRequest &) = default ;
    UpdateABTestSceneRequest(UpdateABTestSceneRequest &&) = default ;
    UpdateABTestSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateABTestSceneRequest() = default ;
    UpdateABTestSceneRequest& operator=(const UpdateABTestSceneRequest &) = default ;
    UpdateABTestSceneRequest& operator=(UpdateABTestSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->dryRun_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ABTestScene & body() const { DARABONBA_PTR_GET_CONST(body_, ABTestScene) };
    inline ABTestScene body() { DARABONBA_PTR_GET(body_, ABTestScene) };
    inline UpdateABTestSceneRequest& setBody(const ABTestScene & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateABTestSceneRequest& setBody(ABTestScene && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateABTestSceneRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The request body.
    std::shared_ptr<ABTestScene> body_ = nullptr;
    // Specifies whether to perform a dry run. This parameter is only used to check whether the data source is valid. Valid values: true and false.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
