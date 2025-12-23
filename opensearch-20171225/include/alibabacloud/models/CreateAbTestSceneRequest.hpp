// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABTESTSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEABTESTSCENEREQUEST_HPP_
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
  class CreateABTestSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateABTestSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, CreateABTestSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    CreateABTestSceneRequest() = default ;
    CreateABTestSceneRequest(const CreateABTestSceneRequest &) = default ;
    CreateABTestSceneRequest(CreateABTestSceneRequest &&) = default ;
    CreateABTestSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateABTestSceneRequest() = default ;
    CreateABTestSceneRequest& operator=(const CreateABTestSceneRequest &) = default ;
    CreateABTestSceneRequest& operator=(CreateABTestSceneRequest &&) = default ;
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
    inline CreateABTestSceneRequest& setBody(const ABTestScene & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateABTestSceneRequest& setBody(ABTestScene && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateABTestSceneRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    // The ABTest scenario. For more information, see [ABTestScene](https://help.aliyun.com/document_detail/173618.html)
    std::shared_ptr<ABTestScene> body_ = nullptr;
    // Specifies whether to check the validity of input parameters. Default value: false.
    // 
    // Valid values:
    // 
    // *   **true**: checks only the validity of input parameters.
    // *   **false**: checks the validity of input parameters and creates an attribution configuration.
    std::shared_ptr<bool> dryRun_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
