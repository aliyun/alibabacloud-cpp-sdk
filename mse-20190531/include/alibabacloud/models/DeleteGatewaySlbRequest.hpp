// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYSLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYSLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteGatewaySlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewaySlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DeleteSlb, deleteSlb_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewaySlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DeleteSlb, deleteSlb_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
    };
    DeleteGatewaySlbRequest() = default ;
    DeleteGatewaySlbRequest(const DeleteGatewaySlbRequest &) = default ;
    DeleteGatewaySlbRequest(DeleteGatewaySlbRequest &&) = default ;
    DeleteGatewaySlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewaySlbRequest() = default ;
    DeleteGatewaySlbRequest& operator=(const DeleteGatewaySlbRequest &) = default ;
    DeleteGatewaySlbRequest& operator=(DeleteGatewaySlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->deleteSlb_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->id_ == nullptr && return this->slbId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteGatewaySlbRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // deleteSlb Field Functions 
    bool hasDeleteSlb() const { return this->deleteSlb_ != nullptr;};
    void deleteDeleteSlb() { this->deleteSlb_ = nullptr;};
    inline bool deleteSlb() const { DARABONBA_PTR_GET_DEFAULT(deleteSlb_, false) };
    inline DeleteGatewaySlbRequest& setDeleteSlb(bool deleteSlb) { DARABONBA_PTR_SET_VALUE(deleteSlb_, deleteSlb) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteGatewaySlbRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteGatewaySlbRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline DeleteGatewaySlbRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to delete the SLB instance purchased for the gateway when you delete the gateway.
    std::shared_ptr<bool> deleteSlb_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the association record.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the SLB instance that needs to be deleted.
    std::shared_ptr<string> slbId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
