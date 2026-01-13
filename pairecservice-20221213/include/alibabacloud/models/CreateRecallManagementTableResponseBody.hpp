// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateRecallManagementTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementTableId, recallManagementTableId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecallManagementTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementTableId, recallManagementTableId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRecallManagementTableResponseBody() = default ;
    CreateRecallManagementTableResponseBody(const CreateRecallManagementTableResponseBody &) = default ;
    CreateRecallManagementTableResponseBody(CreateRecallManagementTableResponseBody &&) = default ;
    CreateRecallManagementTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecallManagementTableResponseBody() = default ;
    CreateRecallManagementTableResponseBody& operator=(const CreateRecallManagementTableResponseBody &) = default ;
    CreateRecallManagementTableResponseBody& operator=(CreateRecallManagementTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallManagementTableId_ == nullptr
        && this->requestId_ == nullptr; };
    // recallManagementTableId Field Functions 
    bool hasRecallManagementTableId() const { return this->recallManagementTableId_ != nullptr;};
    void deleteRecallManagementTableId() { this->recallManagementTableId_ = nullptr;};
    inline string getRecallManagementTableId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementTableId_, "") };
    inline CreateRecallManagementTableResponseBody& setRecallManagementTableId(string recallManagementTableId) { DARABONBA_PTR_SET_VALUE(recallManagementTableId_, recallManagementTableId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRecallManagementTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> recallManagementTableId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
