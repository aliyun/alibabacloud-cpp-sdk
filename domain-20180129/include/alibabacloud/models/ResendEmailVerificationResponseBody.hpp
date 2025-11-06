// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESENDEMAILVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResendEmailVerificationResponseBodyFailList.hpp>
#include <alibabacloud/models/ResendEmailVerificationResponseBodySuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ResendEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, ResendEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    ResendEmailVerificationResponseBody() = default ;
    ResendEmailVerificationResponseBody(const ResendEmailVerificationResponseBody &) = default ;
    ResendEmailVerificationResponseBody(ResendEmailVerificationResponseBody &&) = default ;
    ResendEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendEmailVerificationResponseBody() = default ;
    ResendEmailVerificationResponseBody& operator=(const ResendEmailVerificationResponseBody &) = default ;
    ResendEmailVerificationResponseBody& operator=(ResendEmailVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failList_ == nullptr
        && return this->requestId_ == nullptr && return this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<ResendEmailVerificationResponseBodyFailList> & failList() const { DARABONBA_PTR_GET_CONST(failList_, vector<ResendEmailVerificationResponseBodyFailList>) };
    inline vector<ResendEmailVerificationResponseBodyFailList> failList() { DARABONBA_PTR_GET(failList_, vector<ResendEmailVerificationResponseBodyFailList>) };
    inline ResendEmailVerificationResponseBody& setFailList(const vector<ResendEmailVerificationResponseBodyFailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline ResendEmailVerificationResponseBody& setFailList(vector<ResendEmailVerificationResponseBodyFailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResendEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<ResendEmailVerificationResponseBodySuccessList> & successList() const { DARABONBA_PTR_GET_CONST(successList_, vector<ResendEmailVerificationResponseBodySuccessList>) };
    inline vector<ResendEmailVerificationResponseBodySuccessList> successList() { DARABONBA_PTR_GET(successList_, vector<ResendEmailVerificationResponseBodySuccessList>) };
    inline ResendEmailVerificationResponseBody& setSuccessList(const vector<ResendEmailVerificationResponseBodySuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline ResendEmailVerificationResponseBody& setSuccessList(vector<ResendEmailVerificationResponseBodySuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    std::shared_ptr<vector<ResendEmailVerificationResponseBodyFailList>> failList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ResendEmailVerificationResponseBodySuccessList>> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
