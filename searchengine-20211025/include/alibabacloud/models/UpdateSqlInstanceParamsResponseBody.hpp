// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESQLINSTANCEPARAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESQLINSTANCEPARAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSqlInstanceParamsResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class UpdateSqlInstanceParamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSqlInstanceParamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSqlInstanceParamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateSqlInstanceParamsResponseBody() = default ;
    UpdateSqlInstanceParamsResponseBody(const UpdateSqlInstanceParamsResponseBody &) = default ;
    UpdateSqlInstanceParamsResponseBody(UpdateSqlInstanceParamsResponseBody &&) = default ;
    UpdateSqlInstanceParamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSqlInstanceParamsResponseBody() = default ;
    UpdateSqlInstanceParamsResponseBody& operator=(const UpdateSqlInstanceParamsResponseBody &) = default ;
    UpdateSqlInstanceParamsResponseBody& operator=(UpdateSqlInstanceParamsResponseBody &&) = default ;
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
    inline UpdateSqlInstanceParamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateSqlInstanceParamsResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, UpdateSqlInstanceParamsResponseBodyResult) };
    inline UpdateSqlInstanceParamsResponseBodyResult result() { DARABONBA_PTR_GET(result_, UpdateSqlInstanceParamsResponseBodyResult) };
    inline UpdateSqlInstanceParamsResponseBody& setResult(const UpdateSqlInstanceParamsResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateSqlInstanceParamsResponseBody& setResult(UpdateSqlInstanceParamsResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // InstanceVersionVO
    std::shared_ptr<UpdateSqlInstanceParamsResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
