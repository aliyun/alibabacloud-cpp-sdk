// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMULTIUSERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMultiUserInstancesResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMultiUserInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMultiUserInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateMultiUserInstancesResponseBody() = default ;
    UpdateMultiUserInstancesResponseBody(const UpdateMultiUserInstancesResponseBody &) = default ;
    UpdateMultiUserInstancesResponseBody(UpdateMultiUserInstancesResponseBody &&) = default ;
    UpdateMultiUserInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMultiUserInstancesResponseBody() = default ;
    UpdateMultiUserInstancesResponseBody& operator=(const UpdateMultiUserInstancesResponseBody &) = default ;
    UpdateMultiUserInstancesResponseBody& operator=(UpdateMultiUserInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateMultiUserInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<UpdateMultiUserInstancesResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<UpdateMultiUserInstancesResponseBodyResult>) };
    inline vector<UpdateMultiUserInstancesResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<UpdateMultiUserInstancesResponseBodyResult>) };
    inline UpdateMultiUserInstancesResponseBody& setResult(const vector<UpdateMultiUserInstancesResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateMultiUserInstancesResponseBody& setResult(vector<UpdateMultiUserInstancesResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<UpdateMultiUserInstancesResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
