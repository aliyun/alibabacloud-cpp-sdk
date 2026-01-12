// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class CreateSourcePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourcePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourcePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
    };
    CreateSourcePolicyRequest() = default ;
    CreateSourcePolicyRequest(const CreateSourcePolicyRequest &) = default ;
    CreateSourcePolicyRequest(CreateSourcePolicyRequest &&) = default ;
    CreateSourcePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourcePolicyRequest() = default ;
    CreateSourcePolicyRequest& operator=(const CreateSourcePolicyRequest &) = default ;
    CreateSourcePolicyRequest& operator=(CreateSourcePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr
        && this->ossKey_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline CreateSourcePolicyRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline CreateSourcePolicyRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


  protected:
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> ossKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
