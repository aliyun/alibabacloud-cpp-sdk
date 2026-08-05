// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class UpdateCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateCredentialsResponseBody() = default ;
    UpdateCredentialsResponseBody(const UpdateCredentialsResponseBody &) = default ;
    UpdateCredentialsResponseBody(UpdateCredentialsResponseBody &&) = default ;
    UpdateCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialsResponseBody() = default ;
    UpdateCredentialsResponseBody& operator=(const UpdateCredentialsResponseBody &) = default ;
    UpdateCredentialsResponseBody& operator=(UpdateCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(appGroupId, appGroupId_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(token, token_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(appGroupId, appGroupId_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(token, token_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appGroupId_ == nullptr
        && this->enabled_ == nullptr && this->token_ == nullptr && this->type_ == nullptr; };
      // appGroupId Field Functions 
      bool hasAppGroupId() const { return this->appGroupId_ != nullptr;};
      void deleteAppGroupId() { this->appGroupId_ = nullptr;};
      inline int64_t getAppGroupId() const { DARABONBA_PTR_GET_DEFAULT(appGroupId_, 0L) };
      inline Result& setAppGroupId(int64_t appGroupId) { DARABONBA_PTR_SET_VALUE(appGroupId_, appGroupId) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Result& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Result& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The workspace ID.
      shared_ptr<int64_t> appGroupId_ {};
      // Specifies whether the credential is enabled. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      shared_ptr<bool> enabled_ {};
      // The access credential token.
      shared_ptr<string> token_ {};
      // The credential type. Valid values:
      // - api-token.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateCredentialsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdateCredentialsResponseBody::Result) };
    inline UpdateCredentialsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdateCredentialsResponseBody::Result) };
    inline UpdateCredentialsResponseBody& setResult(const UpdateCredentialsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateCredentialsResponseBody& setResult(UpdateCredentialsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<UpdateCredentialsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
