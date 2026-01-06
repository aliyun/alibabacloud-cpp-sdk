// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPENURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOpenUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetOpenUrlResponseBody() = default ;
    GetOpenUrlResponseBody(const GetOpenUrlResponseBody &) = default ;
    GetOpenUrlResponseBody(GetOpenUrlResponseBody &&) = default ;
    GetOpenUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenUrlResponseBody() = default ;
    GetOpenUrlResponseBody& operator=(const GetOpenUrlResponseBody &) = default ;
    GetOpenUrlResponseBody& operator=(GetOpenUrlResponseBody &&) = default ;
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
    inline GetOpenUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetOpenUrlResponseBody& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<string> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
