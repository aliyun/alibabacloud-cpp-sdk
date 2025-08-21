// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODYSUCCESSINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERENDERINGPROJECTINSTANCESRESPONSEBODYSUCCESSINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class AssociateRenderingProjectInstancesResponseBodySuccessInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateRenderingProjectInstancesResponseBodySuccessInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateRenderingProjectInstancesResponseBodySuccessInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    AssociateRenderingProjectInstancesResponseBodySuccessInstances() = default ;
    AssociateRenderingProjectInstancesResponseBodySuccessInstances(const AssociateRenderingProjectInstancesResponseBodySuccessInstances &) = default ;
    AssociateRenderingProjectInstancesResponseBodySuccessInstances(AssociateRenderingProjectInstancesResponseBodySuccessInstances &&) = default ;
    AssociateRenderingProjectInstancesResponseBodySuccessInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateRenderingProjectInstancesResponseBodySuccessInstances() = default ;
    AssociateRenderingProjectInstancesResponseBodySuccessInstances& operator=(const AssociateRenderingProjectInstancesResponseBodySuccessInstances &) = default ;
    AssociateRenderingProjectInstancesResponseBodySuccessInstances& operator=(AssociateRenderingProjectInstancesResponseBodySuccessInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->renderingInstanceId_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AssociateRenderingProjectInstancesResponseBodySuccessInstances& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string renderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline AssociateRenderingProjectInstancesResponseBodySuccessInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> renderingInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
