// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLICNETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLICNETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdatePublicNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublicNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublicNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdatePublicNetworkResponseBody() = default ;
    UpdatePublicNetworkResponseBody(const UpdatePublicNetworkResponseBody &) = default ;
    UpdatePublicNetworkResponseBody(UpdatePublicNetworkResponseBody &&) = default ;
    UpdatePublicNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublicNetworkResponseBody() = default ;
    UpdatePublicNetworkResponseBody& operator=(const UpdatePublicNetworkResponseBody &) = default ;
    UpdatePublicNetworkResponseBody& operator=(UpdatePublicNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
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
      virtual bool empty() const override { return this->enablePublic_ == nullptr; };
      // enablePublic Field Functions 
      bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
      void deleteEnablePublic() { this->enablePublic_ = nullptr;};
      inline bool getEnablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
      inline Result& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


    protected:
      // The status of the public network access switch.
      shared_ptr<bool> enablePublic_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePublicNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdatePublicNetworkResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, UpdatePublicNetworkResponseBody::Result) };
    inline UpdatePublicNetworkResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, UpdatePublicNetworkResponseBody::Result) };
    inline UpdatePublicNetworkResponseBody& setResult(const UpdatePublicNetworkResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdatePublicNetworkResponseBody& setResult(UpdatePublicNetworkResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<UpdatePublicNetworkResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
