// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPTMCHNOTICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LookupTmchNoticeResponseBodyClaims.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class LookupTmchNoticeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupTmchNoticeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Claims, claims_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LookupTmchNoticeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Claims, claims_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
      DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LookupTmchNoticeResponseBody() = default ;
    LookupTmchNoticeResponseBody(const LookupTmchNoticeResponseBody &) = default ;
    LookupTmchNoticeResponseBody(LookupTmchNoticeResponseBody &&) = default ;
    LookupTmchNoticeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupTmchNoticeResponseBody() = default ;
    LookupTmchNoticeResponseBody& operator=(const LookupTmchNoticeResponseBody &) = default ;
    LookupTmchNoticeResponseBody& operator=(LookupTmchNoticeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->claims_ == nullptr
        && return this->id_ == nullptr && return this->label_ == nullptr && return this->notAfter_ == nullptr && return this->notBefore_ == nullptr && return this->requestId_ == nullptr; };
    // claims Field Functions 
    bool hasClaims() const { return this->claims_ != nullptr;};
    void deleteClaims() { this->claims_ = nullptr;};
    inline const LookupTmchNoticeResponseBodyClaims & claims() const { DARABONBA_PTR_GET_CONST(claims_, LookupTmchNoticeResponseBodyClaims) };
    inline LookupTmchNoticeResponseBodyClaims claims() { DARABONBA_PTR_GET(claims_, LookupTmchNoticeResponseBodyClaims) };
    inline LookupTmchNoticeResponseBody& setClaims(const LookupTmchNoticeResponseBodyClaims & claims) { DARABONBA_PTR_SET_VALUE(claims_, claims) };
    inline LookupTmchNoticeResponseBody& setClaims(LookupTmchNoticeResponseBodyClaims && claims) { DARABONBA_PTR_SET_RVALUE(claims_, claims) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline LookupTmchNoticeResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline LookupTmchNoticeResponseBody& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline LookupTmchNoticeResponseBody& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline LookupTmchNoticeResponseBody& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LookupTmchNoticeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<LookupTmchNoticeResponseBodyClaims> claims_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> notAfter_ = nullptr;
    std::shared_ptr<string> notBefore_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
