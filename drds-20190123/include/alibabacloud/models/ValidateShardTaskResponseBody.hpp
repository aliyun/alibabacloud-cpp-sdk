// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESHARDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESHARDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateShardTaskResponseBodyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ValidateShardTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateShardTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateShardTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ValidateShardTaskResponseBody() = default ;
    ValidateShardTaskResponseBody(const ValidateShardTaskResponseBody &) = default ;
    ValidateShardTaskResponseBody(ValidateShardTaskResponseBody &&) = default ;
    ValidateShardTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateShardTaskResponseBody() = default ;
    ValidateShardTaskResponseBody& operator=(const ValidateShardTaskResponseBody &) = default ;
    ValidateShardTaskResponseBody& operator=(ValidateShardTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ValidateShardTaskResponseBodyList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<ValidateShardTaskResponseBodyList>) };
    inline vector<ValidateShardTaskResponseBodyList> list() { DARABONBA_PTR_GET(list_, vector<ValidateShardTaskResponseBodyList>) };
    inline ValidateShardTaskResponseBody& setList(const vector<ValidateShardTaskResponseBodyList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ValidateShardTaskResponseBody& setList(vector<ValidateShardTaskResponseBodyList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ValidateShardTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ValidateShardTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the check results.
    std::shared_ptr<vector<ValidateShardTaskResponseBodyList>> list_ = nullptr;
    // Indicates the ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
