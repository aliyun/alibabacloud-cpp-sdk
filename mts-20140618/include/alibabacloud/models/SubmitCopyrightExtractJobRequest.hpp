// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCOPYRIGHTEXTRACTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitCopyrightExtractJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCopyrightExtractJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallBack, callBack_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCopyrightExtractJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallBack, callBack_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitCopyrightExtractJobRequest() = default ;
    SubmitCopyrightExtractJobRequest(const SubmitCopyrightExtractJobRequest &) = default ;
    SubmitCopyrightExtractJobRequest(SubmitCopyrightExtractJobRequest &&) = default ;
    SubmitCopyrightExtractJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCopyrightExtractJobRequest() = default ;
    SubmitCopyrightExtractJobRequest& operator=(const SubmitCopyrightExtractJobRequest &) = default ;
    SubmitCopyrightExtractJobRequest& operator=(SubmitCopyrightExtractJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callBack_ == nullptr
        && this->input_ == nullptr && this->params_ == nullptr && this->url_ == nullptr && this->userData_ == nullptr; };
    // callBack Field Functions 
    bool hasCallBack() const { return this->callBack_ != nullptr;};
    void deleteCallBack() { this->callBack_ = nullptr;};
    inline string getCallBack() const { DARABONBA_PTR_GET_DEFAULT(callBack_, "") };
    inline SubmitCopyrightExtractJobRequest& setCallBack(string callBack) { DARABONBA_PTR_SET_VALUE(callBack_, callBack) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitCopyrightExtractJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline SubmitCopyrightExtractJobRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitCopyrightExtractJobRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitCopyrightExtractJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> callBack_ {};
    shared_ptr<string> input_ {};
    shared_ptr<string> params_ {};
    shared_ptr<string> url_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
