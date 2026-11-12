// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateDatasetVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateDatasetVersionResponseBody() = default ;
    CreateDatasetVersionResponseBody(const CreateDatasetVersionResponseBody &) = default ;
    CreateDatasetVersionResponseBody(CreateDatasetVersionResponseBody &&) = default ;
    CreateDatasetVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetVersionResponseBody() = default ;
    CreateDatasetVersionResponseBody& operator=(const CreateDatasetVersionResponseBody &) = default ;
    CreateDatasetVersionResponseBody& operator=(CreateDatasetVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDatasetVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The unique identifier of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
