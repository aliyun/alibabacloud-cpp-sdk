// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationGroupResponseBodyApplicationGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationGroupResponseBody() = default ;
    UpdateApplicationGroupResponseBody(const UpdateApplicationGroupResponseBody &) = default ;
    UpdateApplicationGroupResponseBody(UpdateApplicationGroupResponseBody &&) = default ;
    UpdateApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationGroupResponseBody() = default ;
    UpdateApplicationGroupResponseBody& operator=(const UpdateApplicationGroupResponseBody &) = default ;
    UpdateApplicationGroupResponseBody& operator=(UpdateApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationGroup Field Functions 
    bool hasApplicationGroup() const { return this->applicationGroup_ != nullptr;};
    void deleteApplicationGroup() { this->applicationGroup_ = nullptr;};
    inline const UpdateApplicationGroupResponseBodyApplicationGroup & applicationGroup() const { DARABONBA_PTR_GET_CONST(applicationGroup_, UpdateApplicationGroupResponseBodyApplicationGroup) };
    inline UpdateApplicationGroupResponseBodyApplicationGroup applicationGroup() { DARABONBA_PTR_GET(applicationGroup_, UpdateApplicationGroupResponseBodyApplicationGroup) };
    inline UpdateApplicationGroupResponseBody& setApplicationGroup(const UpdateApplicationGroupResponseBodyApplicationGroup & applicationGroup) { DARABONBA_PTR_SET_VALUE(applicationGroup_, applicationGroup) };
    inline UpdateApplicationGroupResponseBody& setApplicationGroup(UpdateApplicationGroupResponseBodyApplicationGroup && applicationGroup) { DARABONBA_PTR_SET_RVALUE(applicationGroup_, applicationGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application group.
    std::shared_ptr<UpdateApplicationGroupResponseBodyApplicationGroup> applicationGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
