// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApplicationGroupResponseBodyApplicationGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class GetApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroup, applicationGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationGroupResponseBody() = default ;
    GetApplicationGroupResponseBody(const GetApplicationGroupResponseBody &) = default ;
    GetApplicationGroupResponseBody(GetApplicationGroupResponseBody &&) = default ;
    GetApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationGroupResponseBody() = default ;
    GetApplicationGroupResponseBody& operator=(const GetApplicationGroupResponseBody &) = default ;
    GetApplicationGroupResponseBody& operator=(GetApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationGroup_ == nullptr
        && return this->requestId_ == nullptr; };
    // applicationGroup Field Functions 
    bool hasApplicationGroup() const { return this->applicationGroup_ != nullptr;};
    void deleteApplicationGroup() { this->applicationGroup_ = nullptr;};
    inline const GetApplicationGroupResponseBodyApplicationGroup & applicationGroup() const { DARABONBA_PTR_GET_CONST(applicationGroup_, GetApplicationGroupResponseBodyApplicationGroup) };
    inline GetApplicationGroupResponseBodyApplicationGroup applicationGroup() { DARABONBA_PTR_GET(applicationGroup_, GetApplicationGroupResponseBodyApplicationGroup) };
    inline GetApplicationGroupResponseBody& setApplicationGroup(const GetApplicationGroupResponseBodyApplicationGroup & applicationGroup) { DARABONBA_PTR_SET_VALUE(applicationGroup_, applicationGroup) };
    inline GetApplicationGroupResponseBody& setApplicationGroup(GetApplicationGroupResponseBodyApplicationGroup && applicationGroup) { DARABONBA_PTR_SET_RVALUE(applicationGroup_, applicationGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application group.
    std::shared_ptr<GetApplicationGroupResponseBodyApplicationGroup> applicationGroup_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
