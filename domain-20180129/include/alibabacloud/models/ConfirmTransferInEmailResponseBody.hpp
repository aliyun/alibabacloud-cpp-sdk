// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConfirmTransferInEmailResponseBodyFailList.hpp>
#include <alibabacloud/models/ConfirmTransferInEmailResponseBodySuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ConfirmTransferInEmailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmTransferInEmailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmTransferInEmailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    ConfirmTransferInEmailResponseBody() = default ;
    ConfirmTransferInEmailResponseBody(const ConfirmTransferInEmailResponseBody &) = default ;
    ConfirmTransferInEmailResponseBody(ConfirmTransferInEmailResponseBody &&) = default ;
    ConfirmTransferInEmailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmTransferInEmailResponseBody() = default ;
    ConfirmTransferInEmailResponseBody& operator=(const ConfirmTransferInEmailResponseBody &) = default ;
    ConfirmTransferInEmailResponseBody& operator=(ConfirmTransferInEmailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failList_ == nullptr
        && return this->requestId_ == nullptr && return this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const ConfirmTransferInEmailResponseBodyFailList & failList() const { DARABONBA_PTR_GET_CONST(failList_, ConfirmTransferInEmailResponseBodyFailList) };
    inline ConfirmTransferInEmailResponseBodyFailList failList() { DARABONBA_PTR_GET(failList_, ConfirmTransferInEmailResponseBodyFailList) };
    inline ConfirmTransferInEmailResponseBody& setFailList(const ConfirmTransferInEmailResponseBodyFailList & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline ConfirmTransferInEmailResponseBody& setFailList(ConfirmTransferInEmailResponseBodyFailList && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfirmTransferInEmailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const ConfirmTransferInEmailResponseBodySuccessList & successList() const { DARABONBA_PTR_GET_CONST(successList_, ConfirmTransferInEmailResponseBodySuccessList) };
    inline ConfirmTransferInEmailResponseBodySuccessList successList() { DARABONBA_PTR_GET(successList_, ConfirmTransferInEmailResponseBodySuccessList) };
    inline ConfirmTransferInEmailResponseBody& setSuccessList(const ConfirmTransferInEmailResponseBodySuccessList & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline ConfirmTransferInEmailResponseBody& setSuccessList(ConfirmTransferInEmailResponseBodySuccessList && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    std::shared_ptr<ConfirmTransferInEmailResponseBodyFailList> failList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ConfirmTransferInEmailResponseBodySuccessList> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
