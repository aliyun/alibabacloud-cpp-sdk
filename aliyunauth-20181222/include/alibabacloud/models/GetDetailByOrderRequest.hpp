// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDETAILBYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDETAILBYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
namespace Models
{
  class GetDetailByOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDetailByOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Acceptor, acceptor_);
      DARABONBA_PTR_TO_JSON(BizNo, bizNo_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(CheckAuthItems, checkAuthItems_);
      DARABONBA_PTR_TO_JSON(EmpId, empId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OptSource, optSource_);
    };
    friend void from_json(const Darabonba::Json& j, GetDetailByOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Acceptor, acceptor_);
      DARABONBA_PTR_FROM_JSON(BizNo, bizNo_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(CheckAuthItems, checkAuthItems_);
      DARABONBA_PTR_FROM_JSON(EmpId, empId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OptSource, optSource_);
    };
    GetDetailByOrderRequest() = default ;
    GetDetailByOrderRequest(const GetDetailByOrderRequest &) = default ;
    GetDetailByOrderRequest(GetDetailByOrderRequest &&) = default ;
    GetDetailByOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDetailByOrderRequest() = default ;
    GetDetailByOrderRequest& operator=(const GetDetailByOrderRequest &) = default ;
    GetDetailByOrderRequest& operator=(GetDetailByOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptor_ == nullptr
        && this->bizNo_ == nullptr && this->channel_ == nullptr && this->checkAuthItems_ == nullptr && this->empId_ == nullptr && this->language_ == nullptr
        && this->optSource_ == nullptr; };
    // acceptor Field Functions 
    bool hasAcceptor() const { return this->acceptor_ != nullptr;};
    void deleteAcceptor() { this->acceptor_ = nullptr;};
    inline string getAcceptor() const { DARABONBA_PTR_GET_DEFAULT(acceptor_, "") };
    inline GetDetailByOrderRequest& setAcceptor(string acceptor) { DARABONBA_PTR_SET_VALUE(acceptor_, acceptor) };


    // bizNo Field Functions 
    bool hasBizNo() const { return this->bizNo_ != nullptr;};
    void deleteBizNo() { this->bizNo_ = nullptr;};
    inline string getBizNo() const { DARABONBA_PTR_GET_DEFAULT(bizNo_, "") };
    inline GetDetailByOrderRequest& setBizNo(string bizNo) { DARABONBA_PTR_SET_VALUE(bizNo_, bizNo) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetDetailByOrderRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // checkAuthItems Field Functions 
    bool hasCheckAuthItems() const { return this->checkAuthItems_ != nullptr;};
    void deleteCheckAuthItems() { this->checkAuthItems_ = nullptr;};
    inline string getCheckAuthItems() const { DARABONBA_PTR_GET_DEFAULT(checkAuthItems_, "") };
    inline GetDetailByOrderRequest& setCheckAuthItems(string checkAuthItems) { DARABONBA_PTR_SET_VALUE(checkAuthItems_, checkAuthItems) };


    // empId Field Functions 
    bool hasEmpId() const { return this->empId_ != nullptr;};
    void deleteEmpId() { this->empId_ = nullptr;};
    inline string getEmpId() const { DARABONBA_PTR_GET_DEFAULT(empId_, "") };
    inline GetDetailByOrderRequest& setEmpId(string empId) { DARABONBA_PTR_SET_VALUE(empId_, empId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetDetailByOrderRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // optSource Field Functions 
    bool hasOptSource() const { return this->optSource_ != nullptr;};
    void deleteOptSource() { this->optSource_ = nullptr;};
    inline string getOptSource() const { DARABONBA_PTR_GET_DEFAULT(optSource_, "") };
    inline GetDetailByOrderRequest& setOptSource(string optSource) { DARABONBA_PTR_SET_VALUE(optSource_, optSource) };


  protected:
    // This parameter is required.
    shared_ptr<string> acceptor_ {};
    // This parameter is required.
    shared_ptr<string> bizNo_ {};
    // This parameter is required.
    shared_ptr<string> channel_ {};
    shared_ptr<string> checkAuthItems_ {};
    // This parameter is required.
    shared_ptr<string> empId_ {};
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<string> optSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
