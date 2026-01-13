// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTSERVICEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTSERVICEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateRecallManagementServiceVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecallManagementServiceVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecallManagementServiceVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionId, recallManagementServiceVersionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRecallManagementServiceVersionResponseBody() = default ;
    CreateRecallManagementServiceVersionResponseBody(const CreateRecallManagementServiceVersionResponseBody &) = default ;
    CreateRecallManagementServiceVersionResponseBody(CreateRecallManagementServiceVersionResponseBody &&) = default ;
    CreateRecallManagementServiceVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecallManagementServiceVersionResponseBody() = default ;
    CreateRecallManagementServiceVersionResponseBody& operator=(const CreateRecallManagementServiceVersionResponseBody &) = default ;
    CreateRecallManagementServiceVersionResponseBody& operator=(CreateRecallManagementServiceVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallManagementServiceVersionId_ == nullptr
        && this->requestId_ == nullptr; };
    // recallManagementServiceVersionId Field Functions 
    bool hasRecallManagementServiceVersionId() const { return this->recallManagementServiceVersionId_ != nullptr;};
    void deleteRecallManagementServiceVersionId() { this->recallManagementServiceVersionId_ = nullptr;};
    inline string getRecallManagementServiceVersionId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionId_, "") };
    inline CreateRecallManagementServiceVersionResponseBody& setRecallManagementServiceVersionId(string recallManagementServiceVersionId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionId_, recallManagementServiceVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRecallManagementServiceVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> recallManagementServiceVersionId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
