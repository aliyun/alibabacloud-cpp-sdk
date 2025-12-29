// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDAUTHSTSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDAUTHSTSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateCloudauthstSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudauthstSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudauthstSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CreateCloudauthstSceneResponseBody() = default ;
    CreateCloudauthstSceneResponseBody(const CreateCloudauthstSceneResponseBody &) = default ;
    CreateCloudauthstSceneResponseBody(CreateCloudauthstSceneResponseBody &&) = default ;
    CreateCloudauthstSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudauthstSceneResponseBody() = default ;
    CreateCloudauthstSceneResponseBody& operator=(const CreateCloudauthstSceneResponseBody &) = default ;
    CreateCloudauthstSceneResponseBody& operator=(CreateCloudauthstSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudauthstSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline bool getResultObject() const { DARABONBA_PTR_GET_DEFAULT(resultObject_, false) };
    inline CreateCloudauthstSceneResponseBody& setResultObject(bool resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };


  protected:
    // ID of this request
    shared_ptr<string> requestId_ {};
    // The result, indicating whether the operation was successful.
    shared_ptr<bool> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
