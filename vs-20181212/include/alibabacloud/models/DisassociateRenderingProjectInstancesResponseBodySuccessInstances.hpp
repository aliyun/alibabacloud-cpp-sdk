// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODYSUCCESSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODYSUCCESSINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DisassociateRenderingProjectInstancesResponseBodySuccessInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateRenderingProjectInstancesResponseBodySuccessInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateRenderingProjectInstancesResponseBodySuccessInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    DisassociateRenderingProjectInstancesResponseBodySuccessInstances() = default ;
    DisassociateRenderingProjectInstancesResponseBodySuccessInstances(const DisassociateRenderingProjectInstancesResponseBodySuccessInstances &) = default ;
    DisassociateRenderingProjectInstancesResponseBodySuccessInstances(DisassociateRenderingProjectInstancesResponseBodySuccessInstances &&) = default ;
    DisassociateRenderingProjectInstancesResponseBodySuccessInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateRenderingProjectInstancesResponseBodySuccessInstances() = default ;
    DisassociateRenderingProjectInstancesResponseBodySuccessInstances& operator=(const DisassociateRenderingProjectInstancesResponseBodySuccessInstances &) = default ;
    DisassociateRenderingProjectInstancesResponseBodySuccessInstances& operator=(DisassociateRenderingProjectInstancesResponseBodySuccessInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && return this->renderingInstanceId_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DisassociateRenderingProjectInstancesResponseBodySuccessInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline DisassociateRenderingProjectInstancesResponseBodySuccessInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
