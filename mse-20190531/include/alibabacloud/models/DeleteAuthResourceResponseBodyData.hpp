// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTHRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTHRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteAuthResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAuthResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_TO_JSON(Path, path_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAuthResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
    };
    DeleteAuthResourceResponseBodyData() = default ;
    DeleteAuthResourceResponseBodyData(const DeleteAuthResourceResponseBodyData &) = default ;
    DeleteAuthResourceResponseBodyData(DeleteAuthResourceResponseBodyData &&) = default ;
    DeleteAuthResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAuthResourceResponseBodyData() = default ;
    DeleteAuthResourceResponseBodyData& operator=(const DeleteAuthResourceResponseBodyData &) = default ;
    DeleteAuthResourceResponseBodyData& operator=(DeleteAuthResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authId_ == nullptr
        && return this->domainId_ == nullptr && return this->domainName_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->isWhite_ == nullptr && return this->path_ == nullptr; };
    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline DeleteAuthResourceResponseBodyData& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline int64_t domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
    inline DeleteAuthResourceResponseBodyData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DeleteAuthResourceResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline DeleteAuthResourceResponseBodyData& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeleteAuthResourceResponseBodyData& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DeleteAuthResourceResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DeleteAuthResourceResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteAuthResourceResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isWhite Field Functions 
    bool hasIsWhite() const { return this->isWhite_ != nullptr;};
    void deleteIsWhite() { this->isWhite_ = nullptr;};
    inline bool isWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
    inline DeleteAuthResourceResponseBodyData& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DeleteAuthResourceResponseBodyData& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The authentication ID.
    std::shared_ptr<int64_t> authId_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<int64_t> domainId_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the primary key.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the whitelist mode is enabled.
    std::shared_ptr<bool> isWhite_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
