// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHOISPROTECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_WHOISPROTECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class WhoisProtectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhoisProtectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, WhoisProtectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    WhoisProtectionResponseBody() = default ;
    WhoisProtectionResponseBody(const WhoisProtectionResponseBody &) = default ;
    WhoisProtectionResponseBody(WhoisProtectionResponseBody &&) = default ;
    WhoisProtectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhoisProtectionResponseBody() = default ;
    WhoisProtectionResponseBody& operator=(const WhoisProtectionResponseBody &) = default ;
    WhoisProtectionResponseBody& operator=(WhoisProtectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline WhoisProtectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline int32_t getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, 0) };
    inline WhoisProtectionResponseBody& setResult(int32_t result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
