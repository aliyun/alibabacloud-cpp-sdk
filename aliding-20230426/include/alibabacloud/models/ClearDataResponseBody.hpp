// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLEARDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ClearDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(a1Notation, a1Notation_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(a1Notation, a1Notation_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ClearDataResponseBody() = default ;
    ClearDataResponseBody(const ClearDataResponseBody &) = default ;
    ClearDataResponseBody(ClearDataResponseBody &&) = default ;
    ClearDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearDataResponseBody() = default ;
    ClearDataResponseBody& operator=(const ClearDataResponseBody &) = default ;
    ClearDataResponseBody& operator=(ClearDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->a1Notation_ == nullptr
        && this->requestId_ == nullptr; };
    // a1Notation Field Functions 
    bool hasA1Notation() const { return this->a1Notation_ != nullptr;};
    void deleteA1Notation() { this->a1Notation_ = nullptr;};
    inline string getA1Notation() const { DARABONBA_PTR_GET_DEFAULT(a1Notation_, "") };
    inline ClearDataResponseBody& setA1Notation(string a1Notation) { DARABONBA_PTR_SET_VALUE(a1Notation_, a1Notation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClearDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> a1Notation_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
