// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWHITELISTSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWHITELISTSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CreateWhitelistSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWhitelistSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWhitelistSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    CreateWhitelistSettingResponseBody() = default ;
    CreateWhitelistSettingResponseBody(const CreateWhitelistSettingResponseBody &) = default ;
    CreateWhitelistSettingResponseBody(CreateWhitelistSettingResponseBody &&) = default ;
    CreateWhitelistSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWhitelistSettingResponseBody() = default ;
    CreateWhitelistSettingResponseBody& operator=(const CreateWhitelistSettingResponseBody &) = default ;
    CreateWhitelistSettingResponseBody& operator=(CreateWhitelistSettingResponseBody &&) = default ;
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
    inline CreateWhitelistSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline bool getResultObject() const { DARABONBA_PTR_GET_DEFAULT(resultObject_, false) };
    inline CreateWhitelistSettingResponseBody& setResultObject(bool resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };


  protected:
    // The ID of this request.
    shared_ptr<string> requestId_ {};
    // Return result, whether the creation was successful:
    // - true: Success
    // - false: Failure
    shared_ptr<bool> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
