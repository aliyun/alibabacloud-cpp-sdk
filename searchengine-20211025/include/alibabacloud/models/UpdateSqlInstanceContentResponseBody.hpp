// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESQLINSTANCECONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESQLINSTANCECONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSqlInstanceContentResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class UpdateSqlInstanceContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSqlInstanceContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSqlInstanceContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateSqlInstanceContentResponseBody() = default ;
    UpdateSqlInstanceContentResponseBody(const UpdateSqlInstanceContentResponseBody &) = default ;
    UpdateSqlInstanceContentResponseBody(UpdateSqlInstanceContentResponseBody &&) = default ;
    UpdateSqlInstanceContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSqlInstanceContentResponseBody() = default ;
    UpdateSqlInstanceContentResponseBody& operator=(const UpdateSqlInstanceContentResponseBody &) = default ;
    UpdateSqlInstanceContentResponseBody& operator=(UpdateSqlInstanceContentResponseBody &&) = default ;
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
    inline UpdateSqlInstanceContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const UpdateSqlInstanceContentResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, UpdateSqlInstanceContentResponseBodyResult) };
    inline UpdateSqlInstanceContentResponseBodyResult result() { DARABONBA_PTR_GET(result_, UpdateSqlInstanceContentResponseBodyResult) };
    inline UpdateSqlInstanceContentResponseBody& setResult(const UpdateSqlInstanceContentResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateSqlInstanceContentResponseBody& setResult(UpdateSqlInstanceContentResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // id of request
    std::shared_ptr<string> requestId_ = nullptr;
    // InstanceVersionVO
    std::shared_ptr<UpdateSqlInstanceContentResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
