// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPAUSEPOLICYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPAUSEPOLICYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ResultValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListPausePolicysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPausePolicysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListPausePolicysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListPausePolicysResponseBody() = default ;
    ListPausePolicysResponseBody(const ListPausePolicysResponseBody &) = default ;
    ListPausePolicysResponseBody(ListPausePolicysResponseBody &&) = default ;
    ListPausePolicysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPausePolicysResponseBody() = default ;
    ListPausePolicysResponseBody& operator=(const ListPausePolicysResponseBody &) = default ;
    ListPausePolicysResponseBody& operator=(ListPausePolicysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPausePolicysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const map<string, ResultValue> & result() const { DARABONBA_PTR_GET_CONST(result_, map<string, ResultValue>) };
    inline map<string, ResultValue> result() { DARABONBA_PTR_GET(result_, map<string, ResultValue>) };
    inline ListPausePolicysResponseBody& setResult(const map<string, ResultValue> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListPausePolicysResponseBody& setResult(map<string, ResultValue> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result.
    std::shared_ptr<map<string, ResultValue>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
