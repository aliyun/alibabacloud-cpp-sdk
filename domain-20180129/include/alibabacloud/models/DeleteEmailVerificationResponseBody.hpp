// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEEMAILVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteEmailVerificationResponseBodyFailList.hpp>
#include <alibabacloud/models/DeleteEmailVerificationResponseBodySuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class DeleteEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    DeleteEmailVerificationResponseBody() = default ;
    DeleteEmailVerificationResponseBody(const DeleteEmailVerificationResponseBody &) = default ;
    DeleteEmailVerificationResponseBody(DeleteEmailVerificationResponseBody &&) = default ;
    DeleteEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEmailVerificationResponseBody() = default ;
    DeleteEmailVerificationResponseBody& operator=(const DeleteEmailVerificationResponseBody &) = default ;
    DeleteEmailVerificationResponseBody& operator=(DeleteEmailVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failList_ == nullptr
        && return this->requestId_ == nullptr && return this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<DeleteEmailVerificationResponseBodyFailList> & failList() const { DARABONBA_PTR_GET_CONST(failList_, vector<DeleteEmailVerificationResponseBodyFailList>) };
    inline vector<DeleteEmailVerificationResponseBodyFailList> failList() { DARABONBA_PTR_GET(failList_, vector<DeleteEmailVerificationResponseBodyFailList>) };
    inline DeleteEmailVerificationResponseBody& setFailList(const vector<DeleteEmailVerificationResponseBodyFailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline DeleteEmailVerificationResponseBody& setFailList(vector<DeleteEmailVerificationResponseBodyFailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<DeleteEmailVerificationResponseBodySuccessList> & successList() const { DARABONBA_PTR_GET_CONST(successList_, vector<DeleteEmailVerificationResponseBodySuccessList>) };
    inline vector<DeleteEmailVerificationResponseBodySuccessList> successList() { DARABONBA_PTR_GET(successList_, vector<DeleteEmailVerificationResponseBodySuccessList>) };
    inline DeleteEmailVerificationResponseBody& setSuccessList(const vector<DeleteEmailVerificationResponseBodySuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline DeleteEmailVerificationResponseBody& setSuccessList(vector<DeleteEmailVerificationResponseBodySuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    std::shared_ptr<vector<DeleteEmailVerificationResponseBodyFailList>> failList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DeleteEmailVerificationResponseBodySuccessList>> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
