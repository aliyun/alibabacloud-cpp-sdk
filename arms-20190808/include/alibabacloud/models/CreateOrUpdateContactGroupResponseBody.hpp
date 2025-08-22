// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateContactGroupResponseBodyAlertContactGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateContactGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateContactGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertContactGroup, alertContactGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateContactGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertContactGroup, alertContactGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateOrUpdateContactGroupResponseBody() = default ;
    CreateOrUpdateContactGroupResponseBody(const CreateOrUpdateContactGroupResponseBody &) = default ;
    CreateOrUpdateContactGroupResponseBody(CreateOrUpdateContactGroupResponseBody &&) = default ;
    CreateOrUpdateContactGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateContactGroupResponseBody() = default ;
    CreateOrUpdateContactGroupResponseBody& operator=(const CreateOrUpdateContactGroupResponseBody &) = default ;
    CreateOrUpdateContactGroupResponseBody& operator=(CreateOrUpdateContactGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertContactGroup_ != nullptr
        && this->requestId_ != nullptr; };
    // alertContactGroup Field Functions 
    bool hasAlertContactGroup() const { return this->alertContactGroup_ != nullptr;};
    void deleteAlertContactGroup() { this->alertContactGroup_ = nullptr;};
    inline const CreateOrUpdateContactGroupResponseBodyAlertContactGroup & alertContactGroup() const { DARABONBA_PTR_GET_CONST(alertContactGroup_, CreateOrUpdateContactGroupResponseBodyAlertContactGroup) };
    inline CreateOrUpdateContactGroupResponseBodyAlertContactGroup alertContactGroup() { DARABONBA_PTR_GET(alertContactGroup_, CreateOrUpdateContactGroupResponseBodyAlertContactGroup) };
    inline CreateOrUpdateContactGroupResponseBody& setAlertContactGroup(const CreateOrUpdateContactGroupResponseBodyAlertContactGroup & alertContactGroup) { DARABONBA_PTR_SET_VALUE(alertContactGroup_, alertContactGroup) };
    inline CreateOrUpdateContactGroupResponseBody& setAlertContactGroup(CreateOrUpdateContactGroupResponseBodyAlertContactGroup && alertContactGroup) { DARABONBA_PTR_SET_RVALUE(alertContactGroup_, alertContactGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrUpdateContactGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the alert contact group.
    std::shared_ptr<CreateOrUpdateContactGroupResponseBodyAlertContactGroup> alertContactGroup_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
