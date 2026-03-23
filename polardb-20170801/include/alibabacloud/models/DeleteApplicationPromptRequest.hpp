// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONPROMPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONPROMPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteApplicationPromptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationPromptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PromptId, promptId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationPromptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
    };
    DeleteApplicationPromptRequest() = default ;
    DeleteApplicationPromptRequest(const DeleteApplicationPromptRequest &) = default ;
    DeleteApplicationPromptRequest(DeleteApplicationPromptRequest &&) = default ;
    DeleteApplicationPromptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationPromptRequest() = default ;
    DeleteApplicationPromptRequest& operator=(const DeleteApplicationPromptRequest &) = default ;
    DeleteApplicationPromptRequest& operator=(DeleteApplicationPromptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->promptId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeleteApplicationPromptRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // promptId Field Functions 
    bool hasPromptId() const { return this->promptId_ != nullptr;};
    void deletePromptId() { this->promptId_ = nullptr;};
    inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
    inline DeleteApplicationPromptRequest& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> promptId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
