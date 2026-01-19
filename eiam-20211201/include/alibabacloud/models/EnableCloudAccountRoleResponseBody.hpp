// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECLOUDACCOUNTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLECLOUDACCOUNTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableCloudAccountRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCloudAccountRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCloudAccountRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableCloudAccountRoleResponseBody() = default ;
    EnableCloudAccountRoleResponseBody(const EnableCloudAccountRoleResponseBody &) = default ;
    EnableCloudAccountRoleResponseBody(EnableCloudAccountRoleResponseBody &&) = default ;
    EnableCloudAccountRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCloudAccountRoleResponseBody() = default ;
    EnableCloudAccountRoleResponseBody& operator=(const EnableCloudAccountRoleResponseBody &) = default ;
    EnableCloudAccountRoleResponseBody& operator=(EnableCloudAccountRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableCloudAccountRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
