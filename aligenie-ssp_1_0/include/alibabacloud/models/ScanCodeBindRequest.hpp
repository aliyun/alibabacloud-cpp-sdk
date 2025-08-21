// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANCODEBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANCODEBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScanCodeBindRequestBindReq.hpp>
#include <alibabacloud/models/ScanCodeBindRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScanCodeBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanCodeBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindReq, bindReq_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ScanCodeBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindReq, bindReq_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ScanCodeBindRequest() = default ;
    ScanCodeBindRequest(const ScanCodeBindRequest &) = default ;
    ScanCodeBindRequest(ScanCodeBindRequest &&) = default ;
    ScanCodeBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanCodeBindRequest() = default ;
    ScanCodeBindRequest& operator=(const ScanCodeBindRequest &) = default ;
    ScanCodeBindRequest& operator=(ScanCodeBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindReq_ != nullptr
        && this->userInfo_ != nullptr; };
    // bindReq Field Functions 
    bool hasBindReq() const { return this->bindReq_ != nullptr;};
    void deleteBindReq() { this->bindReq_ = nullptr;};
    inline const ScanCodeBindRequestBindReq & bindReq() const { DARABONBA_PTR_GET_CONST(bindReq_, ScanCodeBindRequestBindReq) };
    inline ScanCodeBindRequestBindReq bindReq() { DARABONBA_PTR_GET(bindReq_, ScanCodeBindRequestBindReq) };
    inline ScanCodeBindRequest& setBindReq(const ScanCodeBindRequestBindReq & bindReq) { DARABONBA_PTR_SET_VALUE(bindReq_, bindReq) };
    inline ScanCodeBindRequest& setBindReq(ScanCodeBindRequestBindReq && bindReq) { DARABONBA_PTR_SET_RVALUE(bindReq_, bindReq) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ScanCodeBindRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ScanCodeBindRequestUserInfo) };
    inline ScanCodeBindRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ScanCodeBindRequestUserInfo) };
    inline ScanCodeBindRequest& setUserInfo(const ScanCodeBindRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ScanCodeBindRequest& setUserInfo(ScanCodeBindRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ScanCodeBindRequestBindReq> bindReq_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ScanCodeBindRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
