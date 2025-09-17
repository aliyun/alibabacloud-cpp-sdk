// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateWorkgroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkgroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkgroupId, workgroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkgroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkgroupId, workgroupId_);
    };
    CreateWorkgroupResponseBody() = default ;
    CreateWorkgroupResponseBody(const CreateWorkgroupResponseBody &) = default ;
    CreateWorkgroupResponseBody(CreateWorkgroupResponseBody &&) = default ;
    CreateWorkgroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkgroupResponseBody() = default ;
    CreateWorkgroupResponseBody& operator=(const CreateWorkgroupResponseBody &) = default ;
    CreateWorkgroupResponseBody& operator=(CreateWorkgroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workgroupId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkgroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workgroupId Field Functions 
    bool hasWorkgroupId() const { return this->workgroupId_ != nullptr;};
    void deleteWorkgroupId() { this->workgroupId_ = nullptr;};
    inline string workgroupId() const { DARABONBA_PTR_GET_DEFAULT(workgroupId_, "") };
    inline CreateWorkgroupResponseBody& setWorkgroupId(string workgroupId) { DARABONBA_PTR_SET_VALUE(workgroupId_, workgroupId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the workgroup.
    std::shared_ptr<string> workgroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
