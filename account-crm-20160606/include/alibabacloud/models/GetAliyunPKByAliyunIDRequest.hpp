// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIYUNPKBYALIYUNIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIYUNPKBYALIYUNIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetAliyunPKByAliyunIDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAliyunPKByAliyunIDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
    };
    friend void from_json(const Darabonba::Json& j, GetAliyunPKByAliyunIDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
    };
    GetAliyunPKByAliyunIDRequest() = default ;
    GetAliyunPKByAliyunIDRequest(const GetAliyunPKByAliyunIDRequest &) = default ;
    GetAliyunPKByAliyunIDRequest(GetAliyunPKByAliyunIDRequest &&) = default ;
    GetAliyunPKByAliyunIDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAliyunPKByAliyunIDRequest() = default ;
    GetAliyunPKByAliyunIDRequest& operator=(const GetAliyunPKByAliyunIDRequest &) = default ;
    GetAliyunPKByAliyunIDRequest& operator=(GetAliyunPKByAliyunIDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->email_ == nullptr && this->havanaId_ == nullptr && this->mobile_ == nullptr && this->PK_ == nullptr; };
    // aliyunId Field Functions 
    bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
    void deleteAliyunId() { this->aliyunId_ = nullptr;};
    inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
    inline GetAliyunPKByAliyunIDRequest& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetAliyunPKByAliyunIDRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // havanaId Field Functions 
    bool hasHavanaId() const { return this->havanaId_ != nullptr;};
    void deleteHavanaId() { this->havanaId_ = nullptr;};
    inline string getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, "") };
    inline GetAliyunPKByAliyunIDRequest& setHavanaId(string havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetAliyunPKByAliyunIDRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
    inline GetAliyunPKByAliyunIDRequest& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


  protected:
    // This parameter is required.
    shared_ptr<string> aliyunId_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> havanaId_ {};
    shared_ptr<string> mobile_ {};
    shared_ptr<string> PK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
