// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class AddWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, AddWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    AddWhitelistRequest() = default ;
    AddWhitelistRequest(const AddWhitelistRequest &) = default ;
    AddWhitelistRequest(AddWhitelistRequest &&) = default ;
    AddWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWhitelistRequest() = default ;
    AddWhitelistRequest& operator=(const AddWhitelistRequest &) = default ;
    AddWhitelistRequest& operator=(AddWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->jwtToken_ == nullptr && this->remark_ == nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline AddWhitelistRequest& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline AddWhitelistRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddWhitelistRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // This parameter is required.
    shared_ptr<string> aliyunUid_ {};
    shared_ptr<string> jwtToken_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
