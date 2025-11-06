// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TransferInCheckMailTokenResponseBodyFailList.hpp>
#include <alibabacloud/models/TransferInCheckMailTokenResponseBodySuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class TransferInCheckMailTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferInCheckMailTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, TransferInCheckMailTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    TransferInCheckMailTokenResponseBody() = default ;
    TransferInCheckMailTokenResponseBody(const TransferInCheckMailTokenResponseBody &) = default ;
    TransferInCheckMailTokenResponseBody(TransferInCheckMailTokenResponseBody &&) = default ;
    TransferInCheckMailTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferInCheckMailTokenResponseBody() = default ;
    TransferInCheckMailTokenResponseBody& operator=(const TransferInCheckMailTokenResponseBody &) = default ;
    TransferInCheckMailTokenResponseBody& operator=(TransferInCheckMailTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failList_ == nullptr
        && return this->requestId_ == nullptr && return this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const TransferInCheckMailTokenResponseBodyFailList & failList() const { DARABONBA_PTR_GET_CONST(failList_, TransferInCheckMailTokenResponseBodyFailList) };
    inline TransferInCheckMailTokenResponseBodyFailList failList() { DARABONBA_PTR_GET(failList_, TransferInCheckMailTokenResponseBodyFailList) };
    inline TransferInCheckMailTokenResponseBody& setFailList(const TransferInCheckMailTokenResponseBodyFailList & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline TransferInCheckMailTokenResponseBody& setFailList(TransferInCheckMailTokenResponseBodyFailList && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TransferInCheckMailTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const TransferInCheckMailTokenResponseBodySuccessList & successList() const { DARABONBA_PTR_GET_CONST(successList_, TransferInCheckMailTokenResponseBodySuccessList) };
    inline TransferInCheckMailTokenResponseBodySuccessList successList() { DARABONBA_PTR_GET(successList_, TransferInCheckMailTokenResponseBodySuccessList) };
    inline TransferInCheckMailTokenResponseBody& setSuccessList(const TransferInCheckMailTokenResponseBodySuccessList & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline TransferInCheckMailTokenResponseBody& setSuccessList(TransferInCheckMailTokenResponseBodySuccessList && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    std::shared_ptr<TransferInCheckMailTokenResponseBodyFailList> failList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<TransferInCheckMailTokenResponseBodySuccessList> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
