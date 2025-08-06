// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMESLSROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMESLSROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AssumeSlsRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeSlsRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsAuthResult, slsAuthResult_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeSlsRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsAuthResult, slsAuthResult_);
    };
    AssumeSlsRoleResponseBody() = default ;
    AssumeSlsRoleResponseBody(const AssumeSlsRoleResponseBody &) = default ;
    AssumeSlsRoleResponseBody(AssumeSlsRoleResponseBody &&) = default ;
    AssumeSlsRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeSlsRoleResponseBody() = default ;
    AssumeSlsRoleResponseBody& operator=(const AssumeSlsRoleResponseBody &) = default ;
    AssumeSlsRoleResponseBody& operator=(AssumeSlsRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->slsAuthResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssumeSlsRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsAuthResult Field Functions 
    bool hasSlsAuthResult() const { return this->slsAuthResult_ != nullptr;};
    void deleteSlsAuthResult() { this->slsAuthResult_ = nullptr;};
    inline string slsAuthResult() const { DARABONBA_PTR_GET_DEFAULT(slsAuthResult_, "") };
    inline AssumeSlsRoleResponseBody& setSlsAuthResult(string slsAuthResult) { DARABONBA_PTR_SET_VALUE(slsAuthResult_, slsAuthResult) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> slsAuthResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
