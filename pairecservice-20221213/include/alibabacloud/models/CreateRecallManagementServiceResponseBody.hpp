// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTSERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTSERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateRecallManagementServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecallManagementServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementServiceId, recallManagementServiceId_);
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecallManagementServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceId, recallManagementServiceId_);
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRecallManagementServiceResponseBody() = default ;
    CreateRecallManagementServiceResponseBody(const CreateRecallManagementServiceResponseBody &) = default ;
    CreateRecallManagementServiceResponseBody(CreateRecallManagementServiceResponseBody &&) = default ;
    CreateRecallManagementServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecallManagementServiceResponseBody() = default ;
    CreateRecallManagementServiceResponseBody& operator=(const CreateRecallManagementServiceResponseBody &) = default ;
    CreateRecallManagementServiceResponseBody& operator=(CreateRecallManagementServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallManagementServiceId_ == nullptr
        && this->recallManagementServiceVersionId_ == nullptr && this->requestId_ == nullptr; };
    // recallManagementServiceId Field Functions 
    bool hasRecallManagementServiceId() const { return this->recallManagementServiceId_ != nullptr;};
    void deleteRecallManagementServiceId() { this->recallManagementServiceId_ = nullptr;};
    inline string getRecallManagementServiceId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceId_, "") };
    inline CreateRecallManagementServiceResponseBody& setRecallManagementServiceId(string recallManagementServiceId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceId_, recallManagementServiceId) };


    // recallManagementServiceVersionId Field Functions 
    bool hasRecallManagementServiceVersionId() const { return this->recallManagementServiceVersionId_ != nullptr;};
    void deleteRecallManagementServiceVersionId() { this->recallManagementServiceVersionId_ = nullptr;};
    inline string getRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionId_, "") };
    inline CreateRecallManagementServiceResponseBody& setRecallManagementServiceVersionId(string recallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionId_, recallManagementServiceVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRecallManagementServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> recallManagementServiceId_ {};
    shared_ptr<string> recallManagementServiceVersionId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
