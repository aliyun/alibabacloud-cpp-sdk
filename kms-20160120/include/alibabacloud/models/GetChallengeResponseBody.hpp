// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHALLENGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHALLENGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GetChallengeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChallengeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChallengeToken, challengeToken_);
      DARABONBA_PTR_TO_JSON(Nonce, nonce_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChallengeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChallengeToken, challengeToken_);
      DARABONBA_PTR_FROM_JSON(Nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetChallengeResponseBody() = default ;
    GetChallengeResponseBody(const GetChallengeResponseBody &) = default ;
    GetChallengeResponseBody(GetChallengeResponseBody &&) = default ;
    GetChallengeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChallengeResponseBody() = default ;
    GetChallengeResponseBody& operator=(const GetChallengeResponseBody &) = default ;
    GetChallengeResponseBody& operator=(GetChallengeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->challengeToken_ == nullptr
        && this->nonce_ == nullptr && this->requestId_ == nullptr; };
    // challengeToken Field Functions 
    bool hasChallengeToken() const { return this->challengeToken_ != nullptr;};
    void deleteChallengeToken() { this->challengeToken_ = nullptr;};
    inline string getChallengeToken() const { DARABONBA_PTR_GET_DEFAULT(challengeToken_, "") };
    inline GetChallengeResponseBody& setChallengeToken(string challengeToken) { DARABONBA_PTR_SET_VALUE(challengeToken_, challengeToken) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string getNonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline GetChallengeResponseBody& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChallengeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> challengeToken_ {};
    shared_ptr<string> nonce_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
