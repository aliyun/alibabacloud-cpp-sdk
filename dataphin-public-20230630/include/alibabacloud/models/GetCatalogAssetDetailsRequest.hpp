// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGASSETDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGASSETDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetCatalogAssetDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogAssetDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetCatalogAssetDetailsQuery, getCatalogAssetDetailsQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogAssetDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetCatalogAssetDetailsQuery, getCatalogAssetDetailsQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetCatalogAssetDetailsRequest() = default ;
    GetCatalogAssetDetailsRequest(const GetCatalogAssetDetailsRequest &) = default ;
    GetCatalogAssetDetailsRequest(GetCatalogAssetDetailsRequest &&) = default ;
    GetCatalogAssetDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogAssetDetailsRequest() = default ;
    GetCatalogAssetDetailsRequest& operator=(const GetCatalogAssetDetailsRequest &) = default ;
    GetCatalogAssetDetailsRequest& operator=(GetCatalogAssetDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetCatalogAssetDetailsQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetCatalogAssetDetailsQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(IncludeColumns, includeColumns_);
        DARABONBA_PTR_TO_JSON(IncludeDetailedAttributes, includeDetailedAttributes_);
      };
      friend void from_json(const Darabonba::Json& j, GetCatalogAssetDetailsQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(IncludeColumns, includeColumns_);
        DARABONBA_PTR_FROM_JSON(IncludeDetailedAttributes, includeDetailedAttributes_);
      };
      GetCatalogAssetDetailsQuery() = default ;
      GetCatalogAssetDetailsQuery(const GetCatalogAssetDetailsQuery &) = default ;
      GetCatalogAssetDetailsQuery(GetCatalogAssetDetailsQuery &&) = default ;
      GetCatalogAssetDetailsQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetCatalogAssetDetailsQuery() = default ;
      GetCatalogAssetDetailsQuery& operator=(const GetCatalogAssetDetailsQuery &) = default ;
      GetCatalogAssetDetailsQuery& operator=(GetCatalogAssetDetailsQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->guid_ == nullptr
        && this->includeColumns_ == nullptr && this->includeDetailedAttributes_ == nullptr; };
      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline GetCatalogAssetDetailsQuery& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // includeColumns Field Functions 
      bool hasIncludeColumns() const { return this->includeColumns_ != nullptr;};
      void deleteIncludeColumns() { this->includeColumns_ = nullptr;};
      inline bool getIncludeColumns() const { DARABONBA_PTR_GET_DEFAULT(includeColumns_, false) };
      inline GetCatalogAssetDetailsQuery& setIncludeColumns(bool includeColumns) { DARABONBA_PTR_SET_VALUE(includeColumns_, includeColumns) };


      // includeDetailedAttributes Field Functions 
      bool hasIncludeDetailedAttributes() const { return this->includeDetailedAttributes_ != nullptr;};
      void deleteIncludeDetailedAttributes() { this->includeDetailedAttributes_ = nullptr;};
      inline bool getIncludeDetailedAttributes() const { DARABONBA_PTR_GET_DEFAULT(includeDetailedAttributes_, false) };
      inline GetCatalogAssetDetailsQuery& setIncludeDetailedAttributes(bool includeDetailedAttributes) { DARABONBA_PTR_SET_VALUE(includeDetailedAttributes_, includeDetailedAttributes) };


    protected:
      // This parameter is required.
      shared_ptr<string> guid_ {};
      shared_ptr<bool> includeColumns_ {};
      shared_ptr<bool> includeDetailedAttributes_ {};
    };

    virtual bool empty() const override { return this->getCatalogAssetDetailsQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // getCatalogAssetDetailsQuery Field Functions 
    bool hasGetCatalogAssetDetailsQuery() const { return this->getCatalogAssetDetailsQuery_ != nullptr;};
    void deleteGetCatalogAssetDetailsQuery() { this->getCatalogAssetDetailsQuery_ = nullptr;};
    inline const GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery & getGetCatalogAssetDetailsQuery() const { DARABONBA_PTR_GET_CONST(getCatalogAssetDetailsQuery_, GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery) };
    inline GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery getGetCatalogAssetDetailsQuery() { DARABONBA_PTR_GET(getCatalogAssetDetailsQuery_, GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery) };
    inline GetCatalogAssetDetailsRequest& setGetCatalogAssetDetailsQuery(const GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery & getCatalogAssetDetailsQuery) { DARABONBA_PTR_SET_VALUE(getCatalogAssetDetailsQuery_, getCatalogAssetDetailsQuery) };
    inline GetCatalogAssetDetailsRequest& setGetCatalogAssetDetailsQuery(GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery && getCatalogAssetDetailsQuery) { DARABONBA_PTR_SET_RVALUE(getCatalogAssetDetailsQuery_, getCatalogAssetDetailsQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetCatalogAssetDetailsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<GetCatalogAssetDetailsRequest::GetCatalogAssetDetailsQuery> getCatalogAssetDetailsQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
