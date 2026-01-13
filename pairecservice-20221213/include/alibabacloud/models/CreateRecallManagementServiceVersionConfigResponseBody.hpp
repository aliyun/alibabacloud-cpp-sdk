// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTSERVICEVERSIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERECALLMANAGEMENTSERVICEVERSIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateRecallManagementServiceVersionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecallManagementServiceVersionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecallManagementServiceVersionConfigId, recallManagementServiceVersionConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecallManagementServiceVersionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallManagementServiceVersionConfigId, recallManagementServiceVersionConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateRecallManagementServiceVersionConfigResponseBody() = default ;
    CreateRecallManagementServiceVersionConfigResponseBody(const CreateRecallManagementServiceVersionConfigResponseBody &) = default ;
    CreateRecallManagementServiceVersionConfigResponseBody(CreateRecallManagementServiceVersionConfigResponseBody &&) = default ;
    CreateRecallManagementServiceVersionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecallManagementServiceVersionConfigResponseBody() = default ;
    CreateRecallManagementServiceVersionConfigResponseBody& operator=(const CreateRecallManagementServiceVersionConfigResponseBody &) = default ;
    CreateRecallManagementServiceVersionConfigResponseBody& operator=(CreateRecallManagementServiceVersionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallManagementServiceVersionConfigId_ == nullptr
        && this->requestId_ == nullptr; };
    // recallManagementServiceVersionConfigId Field Functions 
    bool hasRecallManagementServiceVersionConfigId() const { return this->recallManagementServiceVersionConfigId_ != nullptr;};
    void deleteRecallManagementServiceVersionConfigId() { this->recallManagementServiceVersionConfigId_ = nullptr;};
    inline string getRecallManagementServiceVersionConfigId() const { DARABONBA_PTR_GET_DEFAULT(recallManagementServiceVersionConfigId_, "") };
    inline CreateRecallManagementServiceVersionConfigResponseBody& setRecallManagementServiceVersionConfigId(string recallManagementServiceVersionConfigId) { DARABONBA_PTR_SET_VALUE(recallManagementServiceVersionConfigId_, recallManagementServiceVersionConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRecallManagementServiceVersionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> recallManagementServiceVersionConfigId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
