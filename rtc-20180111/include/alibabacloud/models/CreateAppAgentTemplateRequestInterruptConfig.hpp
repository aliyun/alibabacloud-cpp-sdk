// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTINTERRUPTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTINTERRUPTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppAgentTemplateRequestInterruptConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAgentTemplateRequestInterruptConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SemanticsInterrupt, semanticsInterrupt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAgentTemplateRequestInterruptConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SemanticsInterrupt, semanticsInterrupt_);
    };
    CreateAppAgentTemplateRequestInterruptConfig() = default ;
    CreateAppAgentTemplateRequestInterruptConfig(const CreateAppAgentTemplateRequestInterruptConfig &) = default ;
    CreateAppAgentTemplateRequestInterruptConfig(CreateAppAgentTemplateRequestInterruptConfig &&) = default ;
    CreateAppAgentTemplateRequestInterruptConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAgentTemplateRequestInterruptConfig() = default ;
    CreateAppAgentTemplateRequestInterruptConfig& operator=(const CreateAppAgentTemplateRequestInterruptConfig &) = default ;
    CreateAppAgentTemplateRequestInterruptConfig& operator=(CreateAppAgentTemplateRequestInterruptConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->semanticsInterrupt_ != nullptr; };
    // semanticsInterrupt Field Functions 
    bool hasSemanticsInterrupt() const { return this->semanticsInterrupt_ != nullptr;};
    void deleteSemanticsInterrupt() { this->semanticsInterrupt_ = nullptr;};
    inline bool semanticsInterrupt() const { DARABONBA_PTR_GET_DEFAULT(semanticsInterrupt_, false) };
    inline CreateAppAgentTemplateRequestInterruptConfig& setSemanticsInterrupt(bool semanticsInterrupt) { DARABONBA_PTR_SET_VALUE(semanticsInterrupt_, semanticsInterrupt) };


  protected:
    std::shared_ptr<bool> semanticsInterrupt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
