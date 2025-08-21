// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationResponseBodyApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Application, application_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Application, application_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateApplicationResponseBody() = default ;
    UpdateApplicationResponseBody(const UpdateApplicationResponseBody &) = default ;
    UpdateApplicationResponseBody(UpdateApplicationResponseBody &&) = default ;
    UpdateApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationResponseBody() = default ;
    UpdateApplicationResponseBody& operator=(const UpdateApplicationResponseBody &) = default ;
    UpdateApplicationResponseBody& operator=(UpdateApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->application_ != nullptr
        && this->requestId_ != nullptr; };
    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline const UpdateApplicationResponseBodyApplication & application() const { DARABONBA_PTR_GET_CONST(application_, UpdateApplicationResponseBodyApplication) };
    inline UpdateApplicationResponseBodyApplication application() { DARABONBA_PTR_GET(application_, UpdateApplicationResponseBodyApplication) };
    inline UpdateApplicationResponseBody& setApplication(const UpdateApplicationResponseBodyApplication & application) { DARABONBA_PTR_SET_VALUE(application_, application) };
    inline UpdateApplicationResponseBody& setApplication(UpdateApplicationResponseBodyApplication && application) { DARABONBA_PTR_SET_RVALUE(application_, application) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the application.
    std::shared_ptr<UpdateApplicationResponseBodyApplication> application_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
