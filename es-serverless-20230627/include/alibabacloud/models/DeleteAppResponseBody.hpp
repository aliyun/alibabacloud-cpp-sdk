// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAppResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class DeleteAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteAppResponseBody() = default ;
    DeleteAppResponseBody(const DeleteAppResponseBody &) = default ;
    DeleteAppResponseBody(DeleteAppResponseBody &&) = default ;
    DeleteAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppResponseBody() = default ;
    DeleteAppResponseBody& operator=(const DeleteAppResponseBody &) = default ;
    DeleteAppResponseBody& operator=(DeleteAppResponseBody &&) = default ;
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
    inline DeleteAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DeleteAppResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, DeleteAppResponseBodyResult) };
    inline DeleteAppResponseBodyResult result() { DARABONBA_PTR_GET(result_, DeleteAppResponseBodyResult) };
    inline DeleteAppResponseBody& setResult(const DeleteAppResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteAppResponseBody& setResult(DeleteAppResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DeleteAppResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
