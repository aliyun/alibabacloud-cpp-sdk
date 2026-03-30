// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLOUDACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCLOUDACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class AddCloudAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCloudAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCloudAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCloudAccessResponseBody() = default ;
    AddCloudAccessResponseBody(const AddCloudAccessResponseBody &) = default ;
    AddCloudAccessResponseBody(AddCloudAccessResponseBody &&) = default ;
    AddCloudAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCloudAccessResponseBody() = default ;
    AddCloudAccessResponseBody& operator=(const AddCloudAccessResponseBody &) = default ;
    AddCloudAccessResponseBody& operator=(AddCloudAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCloudAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
