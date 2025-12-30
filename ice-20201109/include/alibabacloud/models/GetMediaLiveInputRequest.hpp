// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIALIVEINPUTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaLiveInputRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaLiveInputRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
    };
    GetMediaLiveInputRequest() = default ;
    GetMediaLiveInputRequest(const GetMediaLiveInputRequest &) = default ;
    GetMediaLiveInputRequest(GetMediaLiveInputRequest &&) = default ;
    GetMediaLiveInputRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaLiveInputRequest() = default ;
    GetMediaLiveInputRequest& operator=(const GetMediaLiveInputRequest &) = default ;
    GetMediaLiveInputRequest& operator=(GetMediaLiveInputRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputId_ == nullptr; };
    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string getInputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline GetMediaLiveInputRequest& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


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
