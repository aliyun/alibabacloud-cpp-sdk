// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOPILOTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOPILOTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CreateCopilotSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCopilotSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCopilotSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateCopilotSessionRequest() = default ;
    CreateCopilotSessionRequest(const CreateCopilotSessionRequest &) = default ;
    CreateCopilotSessionRequest(CreateCopilotSessionRequest &&) = default ;
    CreateCopilotSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCopilotSessionRequest() = default ;
    CreateCopilotSessionRequest& operator=(const CreateCopilotSessionRequest &) = default ;
    CreateCopilotSessionRequest& operator=(CreateCopilotSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCopilotSessionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // 不填为 New Session
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
