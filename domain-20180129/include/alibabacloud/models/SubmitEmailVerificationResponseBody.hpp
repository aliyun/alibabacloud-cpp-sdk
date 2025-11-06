// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITEMAILVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitEmailVerificationResponseBodyExistList.hpp>
#include <alibabacloud/models/SubmitEmailVerificationResponseBodyFailList.hpp>
#include <alibabacloud/models/SubmitEmailVerificationResponseBodySuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SubmitEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExistList, existList_);
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistList, existList_);
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    SubmitEmailVerificationResponseBody() = default ;
    SubmitEmailVerificationResponseBody(const SubmitEmailVerificationResponseBody &) = default ;
    SubmitEmailVerificationResponseBody(SubmitEmailVerificationResponseBody &&) = default ;
    SubmitEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEmailVerificationResponseBody() = default ;
    SubmitEmailVerificationResponseBody& operator=(const SubmitEmailVerificationResponseBody &) = default ;
    SubmitEmailVerificationResponseBody& operator=(SubmitEmailVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->existList_ == nullptr
        && return this->failList_ == nullptr && return this->requestId_ == nullptr && return this->successList_ == nullptr; };
    // existList Field Functions 
    bool hasExistList() const { return this->existList_ != nullptr;};
    void deleteExistList() { this->existList_ = nullptr;};
    inline const vector<SubmitEmailVerificationResponseBodyExistList> & existList() const { DARABONBA_PTR_GET_CONST(existList_, vector<SubmitEmailVerificationResponseBodyExistList>) };
    inline vector<SubmitEmailVerificationResponseBodyExistList> existList() { DARABONBA_PTR_GET(existList_, vector<SubmitEmailVerificationResponseBodyExistList>) };
    inline SubmitEmailVerificationResponseBody& setExistList(const vector<SubmitEmailVerificationResponseBodyExistList> & existList) { DARABONBA_PTR_SET_VALUE(existList_, existList) };
    inline SubmitEmailVerificationResponseBody& setExistList(vector<SubmitEmailVerificationResponseBodyExistList> && existList) { DARABONBA_PTR_SET_RVALUE(existList_, existList) };


    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<SubmitEmailVerificationResponseBodyFailList> & failList() const { DARABONBA_PTR_GET_CONST(failList_, vector<SubmitEmailVerificationResponseBodyFailList>) };
    inline vector<SubmitEmailVerificationResponseBodyFailList> failList() { DARABONBA_PTR_GET(failList_, vector<SubmitEmailVerificationResponseBodyFailList>) };
    inline SubmitEmailVerificationResponseBody& setFailList(const vector<SubmitEmailVerificationResponseBodyFailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline SubmitEmailVerificationResponseBody& setFailList(vector<SubmitEmailVerificationResponseBodyFailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<SubmitEmailVerificationResponseBodySuccessList> & successList() const { DARABONBA_PTR_GET_CONST(successList_, vector<SubmitEmailVerificationResponseBodySuccessList>) };
    inline vector<SubmitEmailVerificationResponseBodySuccessList> successList() { DARABONBA_PTR_GET(successList_, vector<SubmitEmailVerificationResponseBodySuccessList>) };
    inline SubmitEmailVerificationResponseBody& setSuccessList(const vector<SubmitEmailVerificationResponseBodySuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline SubmitEmailVerificationResponseBody& setSuccessList(vector<SubmitEmailVerificationResponseBodySuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    std::shared_ptr<vector<SubmitEmailVerificationResponseBodyExistList>> existList_ = nullptr;
    std::shared_ptr<vector<SubmitEmailVerificationResponseBodyFailList>> failList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<SubmitEmailVerificationResponseBodySuccessList>> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
