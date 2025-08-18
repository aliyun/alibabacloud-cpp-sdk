// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEDGECONTAINERAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEdgeContainerAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEdgeContainerAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEdgeContainerAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateEdgeContainerAppResponseBody() = default ;
    CreateEdgeContainerAppResponseBody(const CreateEdgeContainerAppResponseBody &) = default ;
    CreateEdgeContainerAppResponseBody(CreateEdgeContainerAppResponseBody &&) = default ;
    CreateEdgeContainerAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEdgeContainerAppResponseBody() = default ;
    CreateEdgeContainerAppResponseBody& operator=(const CreateEdgeContainerAppResponseBody &) = default ;
    CreateEdgeContainerAppResponseBody& operator=(CreateEdgeContainerAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->requestId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateEdgeContainerAppResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEdgeContainerAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the application that is created.
    std::shared_ptr<string> appId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
