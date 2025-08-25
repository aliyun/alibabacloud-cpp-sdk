// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROCESSALIMECALLBACKOFSTAGINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROCESSALIMECALLBACKOFSTAGINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ProcessAliMeCallbackOfStagingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProcessAliMeCallbackOfStagingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, ProcessAliMeCallbackOfStagingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    ProcessAliMeCallbackOfStagingRequest() = default ;
    ProcessAliMeCallbackOfStagingRequest(const ProcessAliMeCallbackOfStagingRequest &) = default ;
    ProcessAliMeCallbackOfStagingRequest(ProcessAliMeCallbackOfStagingRequest &&) = default ;
    ProcessAliMeCallbackOfStagingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProcessAliMeCallbackOfStagingRequest() = default ;
    ProcessAliMeCallbackOfStagingRequest& operator=(const ProcessAliMeCallbackOfStagingRequest &) = default ;
    ProcessAliMeCallbackOfStagingRequest& operator=(ProcessAliMeCallbackOfStagingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->token_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ProcessAliMeCallbackOfStagingRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ProcessAliMeCallbackOfStagingRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
