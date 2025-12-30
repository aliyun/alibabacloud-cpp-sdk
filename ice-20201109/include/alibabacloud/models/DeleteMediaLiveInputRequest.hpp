// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIALIVEINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIALIVEINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaLiveInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
    };
    DeleteMediaLiveInputRequest() = default ;
    DeleteMediaLiveInputRequest(const DeleteMediaLiveInputRequest &) = default ;
    DeleteMediaLiveInputRequest(DeleteMediaLiveInputRequest &&) = default ;
    DeleteMediaLiveInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaLiveInputRequest() = default ;
    DeleteMediaLiveInputRequest& operator=(const DeleteMediaLiveInputRequest &) = default ;
    DeleteMediaLiveInputRequest& operator=(DeleteMediaLiveInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputId_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string getInputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline DeleteMediaLiveInputRequest& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


  protected:
    // The ID of the input.
    // 
    // This parameter is required.
    shared_ptr<string> inputId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
