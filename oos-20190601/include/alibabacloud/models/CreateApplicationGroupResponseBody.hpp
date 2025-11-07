// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationGroupResponseBodyApplicationGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationGroupResponseBody() = default ;
    CreateApplicationGroupResponseBody(const CreateApplicationGroupResponseBody &) = default ;
    CreateApplicationGroupResponseBody(CreateApplicationGroupResponseBody &&) = default ;
    CreateApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationGroupResponseBody() = default ;
    CreateApplicationGroupResponseBody& operator=(const CreateApplicationGroupResponseBody &) = default ;
    CreateApplicationGroupResponseBody& operator=(CreateApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationGroup Field Functions 
    bool hasApplicationGroup() const { return this->applicationGroup_ != nullptr;};
    void deleteApplicationGroup() { this->applicationGroup_ = nullptr;};
    inline const CreateApplicationGroupResponseBodyApplicationGroup & applicationGroup() const { DARABONBA_PTR_GET_CONST(applicationGroup_, CreateApplicationGroupResponseBodyApplicationGroup) };
    inline CreateApplicationGroupResponseBodyApplicationGroup applicationGroup() { DARABONBA_PTR_GET(applicationGroup_, CreateApplicationGroupResponseBodyApplicationGroup) };
    inline CreateApplicationGroupResponseBody& setApplicationGroup(const CreateApplicationGroupResponseBodyApplicationGroup & applicationGroup) { DARABONBA_PTR_SET_VALUE(applicationGroup_, applicationGroup) };
    inline CreateApplicationGroupResponseBody& setApplicationGroup(CreateApplicationGroupResponseBodyApplicationGroup && applicationGroup) { DARABONBA_PTR_SET_RVALUE(applicationGroup_, applicationGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application group.
    std::shared_ptr<CreateApplicationGroupResponseBodyApplicationGroup> applicationGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
