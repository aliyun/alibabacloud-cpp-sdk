// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOPILOTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOPILOTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateCopilotSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCopilotSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCopilotSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    UpdateCopilotSessionRequest() = default ;
    UpdateCopilotSessionRequest(const UpdateCopilotSessionRequest &) = default ;
    UpdateCopilotSessionRequest(UpdateCopilotSessionRequest &&) = default ;
    UpdateCopilotSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCopilotSessionRequest() = default ;
    UpdateCopilotSessionRequest& operator=(const UpdateCopilotSessionRequest &) = default ;
    UpdateCopilotSessionRequest& operator=(UpdateCopilotSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->status_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateCopilotSessionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCopilotSessionRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The session title. The length is 1 to 255 characters.
    shared_ptr<string> name_ {};
    // The session status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
