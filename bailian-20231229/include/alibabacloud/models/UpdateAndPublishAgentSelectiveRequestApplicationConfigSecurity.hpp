// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIGSECURITY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEANDPUBLISHAGENTSELECTIVEREQUESTAPPLICATIONCONFIGSECURITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity& obj) { 
      DARABONBA_PTR_TO_JSON(processingStrategy, processingStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity& obj) { 
      DARABONBA_PTR_FROM_JSON(processingStrategy, processingStrategy_);
    };
    UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity(const UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity(UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity &&) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity() = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity& operator=(const UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity &) = default ;
    UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity& operator=(UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processingStrategy_ == nullptr; };
    // processingStrategy Field Functions 
    bool hasProcessingStrategy() const { return this->processingStrategy_ != nullptr;};
    void deleteProcessingStrategy() { this->processingStrategy_ = nullptr;};
    inline string processingStrategy() const { DARABONBA_PTR_GET_DEFAULT(processingStrategy_, "") };
    inline UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity& setProcessingStrategy(string processingStrategy) { DARABONBA_PTR_SET_VALUE(processingStrategy_, processingStrategy) };


  protected:
    std::shared_ptr<string> processingStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
