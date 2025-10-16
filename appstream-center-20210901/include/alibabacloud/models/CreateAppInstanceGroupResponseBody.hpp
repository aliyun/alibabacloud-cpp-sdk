// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPINSTANCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppInstanceGroupResponseBodyAppInstanceGroupModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateAppInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupModel, appInstanceGroupModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupModel, appInstanceGroupModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppInstanceGroupResponseBody() = default ;
    CreateAppInstanceGroupResponseBody(const CreateAppInstanceGroupResponseBody &) = default ;
    CreateAppInstanceGroupResponseBody(CreateAppInstanceGroupResponseBody &&) = default ;
    CreateAppInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppInstanceGroupResponseBody() = default ;
    CreateAppInstanceGroupResponseBody& operator=(const CreateAppInstanceGroupResponseBody &) = default ;
    CreateAppInstanceGroupResponseBody& operator=(CreateAppInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupModel_ == nullptr
        && return this->requestId_ == nullptr; };
    // appInstanceGroupModel Field Functions 
    bool hasAppInstanceGroupModel() const { return this->appInstanceGroupModel_ != nullptr;};
    void deleteAppInstanceGroupModel() { this->appInstanceGroupModel_ = nullptr;};
    inline const CreateAppInstanceGroupResponseBodyAppInstanceGroupModel & appInstanceGroupModel() const { DARABONBA_PTR_GET_CONST(appInstanceGroupModel_, CreateAppInstanceGroupResponseBodyAppInstanceGroupModel) };
    inline CreateAppInstanceGroupResponseBodyAppInstanceGroupModel appInstanceGroupModel() { DARABONBA_PTR_GET(appInstanceGroupModel_, CreateAppInstanceGroupResponseBodyAppInstanceGroupModel) };
    inline CreateAppInstanceGroupResponseBody& setAppInstanceGroupModel(const CreateAppInstanceGroupResponseBodyAppInstanceGroupModel & appInstanceGroupModel) { DARABONBA_PTR_SET_VALUE(appInstanceGroupModel_, appInstanceGroupModel) };
    inline CreateAppInstanceGroupResponseBody& setAppInstanceGroupModel(CreateAppInstanceGroupResponseBodyAppInstanceGroupModel && appInstanceGroupModel) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupModel_, appInstanceGroupModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateAppInstanceGroupResponseBodyAppInstanceGroupModel> appInstanceGroupModel_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
