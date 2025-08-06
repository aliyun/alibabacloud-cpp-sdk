// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMESLSROLEV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSUMESLSROLEV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AssumeSlsRoleV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeSlsRoleV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsAuthResult, slsAuthResult_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeSlsRoleV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsAuthResult, slsAuthResult_);
    };
    AssumeSlsRoleV2ResponseBody() = default ;
    AssumeSlsRoleV2ResponseBody(const AssumeSlsRoleV2ResponseBody &) = default ;
    AssumeSlsRoleV2ResponseBody(AssumeSlsRoleV2ResponseBody &&) = default ;
    AssumeSlsRoleV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeSlsRoleV2ResponseBody() = default ;
    AssumeSlsRoleV2ResponseBody& operator=(const AssumeSlsRoleV2ResponseBody &) = default ;
    AssumeSlsRoleV2ResponseBody& operator=(AssumeSlsRoleV2ResponseBody &&) = default ;
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
    inline AssumeSlsRoleV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsAuthResult Field Functions 
    bool hasSlsAuthResult() const { return this->slsAuthResult_ != nullptr;};
    void deleteSlsAuthResult() { this->slsAuthResult_ = nullptr;};
    inline string slsAuthResult() const { DARABONBA_PTR_GET_DEFAULT(slsAuthResult_, "") };
    inline AssumeSlsRoleV2ResponseBody& setSlsAuthResult(string slsAuthResult) { DARABONBA_PTR_SET_VALUE(slsAuthResult_, slsAuthResult) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> slsAuthResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
