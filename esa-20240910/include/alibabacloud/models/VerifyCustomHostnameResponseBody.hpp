// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCUSTOMHOSTNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCUSTOMHOSTNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class VerifyCustomHostnameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCustomHostnameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Passed, passed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCustomHostnameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    VerifyCustomHostnameResponseBody() = default ;
    VerifyCustomHostnameResponseBody(const VerifyCustomHostnameResponseBody &) = default ;
    VerifyCustomHostnameResponseBody(VerifyCustomHostnameResponseBody &&) = default ;
    VerifyCustomHostnameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCustomHostnameResponseBody() = default ;
    VerifyCustomHostnameResponseBody& operator=(const VerifyCustomHostnameResponseBody &) = default ;
    VerifyCustomHostnameResponseBody& operator=(VerifyCustomHostnameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passed_ == nullptr
        && this->requestId_ == nullptr; };
    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool getPassed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline VerifyCustomHostnameResponseBody& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyCustomHostnameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<bool> passed_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
