// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateAgenticSpaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticSpaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgenticSpaceId, agenticSpaceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticSpaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgenticSpaceId, agenticSpaceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAgenticSpaceResponseBody() = default ;
    CreateAgenticSpaceResponseBody(const CreateAgenticSpaceResponseBody &) = default ;
    CreateAgenticSpaceResponseBody(CreateAgenticSpaceResponseBody &&) = default ;
    CreateAgenticSpaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticSpaceResponseBody() = default ;
    CreateAgenticSpaceResponseBody& operator=(const CreateAgenticSpaceResponseBody &) = default ;
    CreateAgenticSpaceResponseBody& operator=(CreateAgenticSpaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agenticSpaceId_ == nullptr
        && this->requestId_ == nullptr; };
    // agenticSpaceId Field Functions 
    bool hasAgenticSpaceId() const { return this->agenticSpaceId_ != nullptr;};
    void deleteAgenticSpaceId() { this->agenticSpaceId_ = nullptr;};
    inline string getAgenticSpaceId() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceId_, "") };
    inline CreateAgenticSpaceResponseBody& setAgenticSpaceId(string agenticSpaceId) { DARABONBA_PTR_SET_VALUE(agenticSpaceId_, agenticSpaceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgenticSpaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The AgenticSpace ID. This is a globally unique identifier assigned by the system after the AgenticSpace (an independent workspace allocated to a single Agent end user in AgenticFS) is created.
    shared_ptr<string> agenticSpaceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
