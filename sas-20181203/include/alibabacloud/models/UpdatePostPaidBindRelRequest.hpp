// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdatePostPaidBindRelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePostPaidBindRelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(AutoBindVersion, autoBindVersion_);
      DARABONBA_PTR_TO_JSON(BindAction, bindAction_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(UpdateIfNecessary, updateIfNecessary_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostPaidBindRelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(AutoBindVersion, autoBindVersion_);
      DARABONBA_PTR_FROM_JSON(BindAction, bindAction_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(UpdateIfNecessary, updateIfNecessary_);
    };
    UpdatePostPaidBindRelRequest() = default ;
    UpdatePostPaidBindRelRequest(const UpdatePostPaidBindRelRequest &) = default ;
    UpdatePostPaidBindRelRequest(UpdatePostPaidBindRelRequest &&) = default ;
    UpdatePostPaidBindRelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePostPaidBindRelRequest() = default ;
    UpdatePostPaidBindRelRequest& operator=(const UpdatePostPaidBindRelRequest &) = default ;
    UpdatePostPaidBindRelRequest& operator=(UpdatePostPaidBindRelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BindAction : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindAction& obj) { 
        DARABONBA_PTR_TO_JSON(BindAll, bindAll_);
        DARABONBA_PTR_TO_JSON(FreeType, freeType_);
        DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BindAction& obj) { 
        DARABONBA_PTR_FROM_JSON(BindAll, bindAll_);
        DARABONBA_PTR_FROM_JSON(FreeType, freeType_);
        DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BindAction() = default ;
      BindAction(const BindAction &) = default ;
      BindAction(BindAction &&) = default ;
      BindAction(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindAction() = default ;
      BindAction& operator=(const BindAction &) = default ;
      BindAction& operator=(BindAction &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bindAll_ == nullptr
        && this->freeType_ == nullptr && this->uuidList_ == nullptr && this->version_ == nullptr; };
      // bindAll Field Functions 
      bool hasBindAll() const { return this->bindAll_ != nullptr;};
      void deleteBindAll() { this->bindAll_ = nullptr;};
      inline bool getBindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
      inline BindAction& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


      // freeType Field Functions 
      bool hasFreeType() const { return this->freeType_ != nullptr;};
      void deleteFreeType() { this->freeType_ = nullptr;};
      inline string getFreeType() const { DARABONBA_PTR_GET_DEFAULT(freeType_, "") };
      inline BindAction& setFreeType(string freeType) { DARABONBA_PTR_SET_VALUE(freeType_, freeType) };


      // uuidList Field Functions 
      bool hasUuidList() const { return this->uuidList_ != nullptr;};
      void deleteUuidList() { this->uuidList_ = nullptr;};
      inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
      inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
      inline BindAction& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
      inline BindAction& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BindAction& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Specifies whether to bind all servers. Default value: **false**. Valid values:
      // 
      // - **true**: yes
      // - **false**: no
      shared_ptr<bool> bindAll_ {};
      shared_ptr<string> freeType_ {};
      // The list of server UUIDs.
      shared_ptr<vector<string>> uuidList_ {};
      // The protection edition of Security Center to bind. Valid values:  
      // - **1**: Free Edition 
      // - **3**: Enterprise Edition
      // - **5**: Advanced Edition
      // - **6**: Anti-virus Edition    
      // - **7**: Ultimate Edition
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->autoBind_ == nullptr
        && this->autoBindVersion_ == nullptr && this->bindAction_ == nullptr && this->clientToken_ == nullptr && this->productCode_ == nullptr && this->updateIfNecessary_ == nullptr; };
    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline UpdatePostPaidBindRelRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // autoBindVersion Field Functions 
    bool hasAutoBindVersion() const { return this->autoBindVersion_ != nullptr;};
    void deleteAutoBindVersion() { this->autoBindVersion_ = nullptr;};
    inline int32_t getAutoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(autoBindVersion_, 0) };
    inline UpdatePostPaidBindRelRequest& setAutoBindVersion(int32_t autoBindVersion) { DARABONBA_PTR_SET_VALUE(autoBindVersion_, autoBindVersion) };


    // bindAction Field Functions 
    bool hasBindAction() const { return this->bindAction_ != nullptr;};
    void deleteBindAction() { this->bindAction_ = nullptr;};
    inline const vector<UpdatePostPaidBindRelRequest::BindAction> & getBindAction() const { DARABONBA_PTR_GET_CONST(bindAction_, vector<UpdatePostPaidBindRelRequest::BindAction>) };
    inline vector<UpdatePostPaidBindRelRequest::BindAction> getBindAction() { DARABONBA_PTR_GET(bindAction_, vector<UpdatePostPaidBindRelRequest::BindAction>) };
    inline UpdatePostPaidBindRelRequest& setBindAction(const vector<UpdatePostPaidBindRelRequest::BindAction> & bindAction) { DARABONBA_PTR_SET_VALUE(bindAction_, bindAction) };
    inline UpdatePostPaidBindRelRequest& setBindAction(vector<UpdatePostPaidBindRelRequest::BindAction> && bindAction) { DARABONBA_PTR_SET_RVALUE(bindAction_, bindAction) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdatePostPaidBindRelRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline UpdatePostPaidBindRelRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // updateIfNecessary Field Functions 
    bool hasUpdateIfNecessary() const { return this->updateIfNecessary_ != nullptr;};
    void deleteUpdateIfNecessary() { this->updateIfNecessary_ = nullptr;};
    inline bool getUpdateIfNecessary() const { DARABONBA_PTR_GET_DEFAULT(updateIfNecessary_, false) };
    inline UpdatePostPaidBindRelRequest& setUpdateIfNecessary(bool updateIfNecessary) { DARABONBA_PTR_SET_VALUE(updateIfNecessary_, updateIfNecessary) };


  protected:
    // Specifies whether to enable automatic binding for new assets. Valid values:
    // 
    // - **0**: disabled
    // - **1**: enabled
    shared_ptr<int32_t> autoBind_ {};
    // The edition to automatically bind when new assets are added. Valid values:
    // - **1**: Free Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Anti-virus Edition    
    // - **7**: Ultimate Edition
    shared_ptr<int32_t> autoBindVersion_ {};
    // The binding action parameter.
    shared_ptr<vector<UpdatePostPaidBindRelRequest::BindAction>> bindAction_ {};
    // The client token that is used to ensure the idempotence of the request. Different requests must use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> productCode_ {};
    // Specifies whether to forcibly upgrade the edition.
    shared_ptr<bool> updateIfNecessary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
