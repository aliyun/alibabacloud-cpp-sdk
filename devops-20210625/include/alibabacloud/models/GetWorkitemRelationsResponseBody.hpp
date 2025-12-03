// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMRELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkitemRelationsResponseBodyRelationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(relationList, relationList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(relationList, relationList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetWorkitemRelationsResponseBody() = default ;
    GetWorkitemRelationsResponseBody(const GetWorkitemRelationsResponseBody &) = default ;
    GetWorkitemRelationsResponseBody(GetWorkitemRelationsResponseBody &&) = default ;
    GetWorkitemRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemRelationsResponseBody() = default ;
    GetWorkitemRelationsResponseBody& operator=(const GetWorkitemRelationsResponseBody &) = default ;
    GetWorkitemRelationsResponseBody& operator=(GetWorkitemRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMsg_ == nullptr && return this->relationList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkitemRelationsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetWorkitemRelationsResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // relationList Field Functions 
    bool hasRelationList() const { return this->relationList_ != nullptr;};
    void deleteRelationList() { this->relationList_ = nullptr;};
    inline const vector<GetWorkitemRelationsResponseBodyRelationList> & relationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<GetWorkitemRelationsResponseBodyRelationList>) };
    inline vector<GetWorkitemRelationsResponseBodyRelationList> relationList() { DARABONBA_PTR_GET(relationList_, vector<GetWorkitemRelationsResponseBodyRelationList>) };
    inline GetWorkitemRelationsResponseBody& setRelationList(const vector<GetWorkitemRelationsResponseBodyRelationList> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
    inline GetWorkitemRelationsResponseBody& setRelationList(vector<GetWorkitemRelationsResponseBodyRelationList> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkitemRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkitemRelationsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<vector<GetWorkitemRelationsResponseBodyRelationList>> relationList_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
