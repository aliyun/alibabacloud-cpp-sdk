// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIBRARYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIBRARYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LibraryListResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListLibrarysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLibrarysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListLibrarysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    ListLibrarysResponseBody() = default ;
    ListLibrarysResponseBody(const ListLibrarysResponseBody &) = default ;
    ListLibrarysResponseBody(ListLibrarysResponseBody &&) = default ;
    ListLibrarysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLibrarysResponseBody() = default ;
    ListLibrarysResponseBody& operator=(const ListLibrarysResponseBody &) = default ;
    ListLibrarysResponseBody& operator=(ListLibrarysResponseBody &&) = default ;
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
    inline ListLibrarysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const LibraryListResult & getResult() const { DARABONBA_PTR_GET_CONST(result_, LibraryListResult) };
    inline LibraryListResult getResult() { DARABONBA_PTR_GET(result_, LibraryListResult) };
    inline ListLibrarysResponseBody& setResult(const LibraryListResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListLibrarysResponseBody& setResult(LibraryListResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<LibraryListResult> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
