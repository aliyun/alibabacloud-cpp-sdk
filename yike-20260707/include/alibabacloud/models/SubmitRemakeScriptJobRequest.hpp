// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITREMAKESCRIPTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITREMAKESCRIPTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitRemakeScriptJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitRemakeScriptJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RemakeParams, remakeParams_);
      DARABONBA_PTR_TO_JSON(RemakeType, remakeType_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitRemakeScriptJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RemakeParams, remakeParams_);
      DARABONBA_PTR_FROM_JSON(RemakeType, remakeType_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitRemakeScriptJobRequest() = default ;
    SubmitRemakeScriptJobRequest(const SubmitRemakeScriptJobRequest &) = default ;
    SubmitRemakeScriptJobRequest(SubmitRemakeScriptJobRequest &&) = default ;
    SubmitRemakeScriptJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitRemakeScriptJobRequest() = default ;
    SubmitRemakeScriptJobRequest& operator=(const SubmitRemakeScriptJobRequest &) = default ;
    SubmitRemakeScriptJobRequest& operator=(SubmitRemakeScriptJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remakeParams_ == nullptr
        && this->remakeType_ == nullptr && this->userData_ == nullptr; };
    // remakeParams Field Functions 
    bool hasRemakeParams() const { return this->remakeParams_ != nullptr;};
    void deleteRemakeParams() { this->remakeParams_ = nullptr;};
    inline string getRemakeParams() const { DARABONBA_PTR_GET_DEFAULT(remakeParams_, "") };
    inline SubmitRemakeScriptJobRequest& setRemakeParams(string remakeParams) { DARABONBA_PTR_SET_VALUE(remakeParams_, remakeParams) };


    // remakeType Field Functions 
    bool hasRemakeType() const { return this->remakeType_ != nullptr;};
    void deleteRemakeType() { this->remakeType_ = nullptr;};
    inline string getRemakeType() const { DARABONBA_PTR_GET_DEFAULT(remakeType_, "") };
    inline SubmitRemakeScriptJobRequest& setRemakeType(string remakeType) { DARABONBA_PTR_SET_VALUE(remakeType_, remakeType) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitRemakeScriptJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> remakeParams_ {};
    shared_ptr<string> remakeType_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
