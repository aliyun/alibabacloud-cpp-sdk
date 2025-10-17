// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUESTINTERRUPTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUESTINTERRUPTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppAgentTemplateRequestInterruptConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppAgentTemplateRequestInterruptConfig& obj) { 
      DARABONBA_PTR_TO_JSON(SemanticsInterrupt, semanticsInterrupt_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppAgentTemplateRequestInterruptConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(SemanticsInterrupt, semanticsInterrupt_);
    };
    ModifyAppAgentTemplateRequestInterruptConfig() = default ;
    ModifyAppAgentTemplateRequestInterruptConfig(const ModifyAppAgentTemplateRequestInterruptConfig &) = default ;
    ModifyAppAgentTemplateRequestInterruptConfig(ModifyAppAgentTemplateRequestInterruptConfig &&) = default ;
    ModifyAppAgentTemplateRequestInterruptConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppAgentTemplateRequestInterruptConfig() = default ;
    ModifyAppAgentTemplateRequestInterruptConfig& operator=(const ModifyAppAgentTemplateRequestInterruptConfig &) = default ;
    ModifyAppAgentTemplateRequestInterruptConfig& operator=(ModifyAppAgentTemplateRequestInterruptConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->semanticsInterrupt_ == nullptr; };
    // semanticsInterrupt Field Functions 
    bool hasSemanticsInterrupt() const { return this->semanticsInterrupt_ != nullptr;};
    void deleteSemanticsInterrupt() { this->semanticsInterrupt_ = nullptr;};
    inline bool semanticsInterrupt() const { DARABONBA_PTR_GET_DEFAULT(semanticsInterrupt_, false) };
    inline ModifyAppAgentTemplateRequestInterruptConfig& setSemanticsInterrupt(bool semanticsInterrupt) { DARABONBA_PTR_SET_VALUE(semanticsInterrupt_, semanticsInterrupt) };


  protected:
    std::shared_ptr<bool> semanticsInterrupt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
