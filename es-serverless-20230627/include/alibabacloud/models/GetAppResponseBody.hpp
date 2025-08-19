// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAppResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetAppResponseBody() = default ;
    GetAppResponseBody(const GetAppResponseBody &) = default ;
    GetAppResponseBody(GetAppResponseBody &&) = default ;
    GetAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppResponseBody() = default ;
    GetAppResponseBody& operator=(const GetAppResponseBody &) = default ;
    GetAppResponseBody& operator=(GetAppResponseBody &&) = default ;
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
    inline GetAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetAppResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetAppResponseBodyResult) };
    inline GetAppResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetAppResponseBodyResult) };
    inline GetAppResponseBody& setResult(const GetAppResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetAppResponseBody& setResult(GetAppResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetAppResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
