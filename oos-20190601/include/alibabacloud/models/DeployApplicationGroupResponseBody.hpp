// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYAPPLICATIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeployApplicationGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployApplicationGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeployApplicationGroupResponseBody() = default ;
    DeployApplicationGroupResponseBody(const DeployApplicationGroupResponseBody &) = default ;
    DeployApplicationGroupResponseBody(DeployApplicationGroupResponseBody &&) = default ;
    DeployApplicationGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployApplicationGroupResponseBody() = default ;
    DeployApplicationGroupResponseBody& operator=(const DeployApplicationGroupResponseBody &) = default ;
    DeployApplicationGroupResponseBody& operator=(DeployApplicationGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeployApplicationGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
