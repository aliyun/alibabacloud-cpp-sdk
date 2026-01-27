// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeOfficeSitesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody(DescribeOfficeSitesResponseBody &&) = default ;
    DescribeOfficeSitesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody& operator=(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody& operator=(DescribeOfficeSitesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfficeSites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfficeSites& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(BizType, bizType_);
        DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
        DARABONBA_PTR_TO_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
        DARABONBA_PTR_TO_JSON(SsoServiceUrl, ssoServiceUrl_);
      };
      friend void from_json(const Darabonba::Json& j, OfficeSites& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(BizType, bizType_);
        DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
        DARABONBA_PTR_FROM_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
        DARABONBA_PTR_FROM_JSON(SsoServiceUrl, ssoServiceUrl_);
      };
      OfficeSites() = default ;
      OfficeSites(const OfficeSites &) = default ;
      OfficeSites(OfficeSites &&) = default ;
      OfficeSites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfficeSites() = default ;
      OfficeSites& operator=(const OfficeSites &) = default ;
      OfficeSites& operator=(OfficeSites &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bizType_ == nullptr && this->desktopAccessType_ == nullptr && this->desktopVpcEndpoint_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteType_ == nullptr
        && this->providerId_ == nullptr && this->ssoServiceUrl_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline OfficeSites& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bizType Field Functions 
      bool hasBizType() const { return this->bizType_ != nullptr;};
      void deleteBizType() { this->bizType_ = nullptr;};
      inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
      inline OfficeSites& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


      // desktopAccessType Field Functions 
      bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
      void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
      inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
      inline OfficeSites& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


      // desktopVpcEndpoint Field Functions 
      bool hasDesktopVpcEndpoint() const { return this->desktopVpcEndpoint_ != nullptr;};
      void deleteDesktopVpcEndpoint() { this->desktopVpcEndpoint_ = nullptr;};
      inline string getDesktopVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(desktopVpcEndpoint_, "") };
      inline OfficeSites& setDesktopVpcEndpoint(string desktopVpcEndpoint) { DARABONBA_PTR_SET_VALUE(desktopVpcEndpoint_, desktopVpcEndpoint) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline OfficeSites& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline OfficeSites& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // providerId Field Functions 
      bool hasProviderId() const { return this->providerId_ != nullptr;};
      void deleteProviderId() { this->providerId_ = nullptr;};
      inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
      inline OfficeSites& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


      // ssoServiceUrl Field Functions 
      bool hasSsoServiceUrl() const { return this->ssoServiceUrl_ != nullptr;};
      void deleteSsoServiceUrl() { this->ssoServiceUrl_ = nullptr;};
      inline string getSsoServiceUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoServiceUrl_, "") };
      inline OfficeSites& setSsoServiceUrl(string ssoServiceUrl) { DARABONBA_PTR_SET_VALUE(ssoServiceUrl_, ssoServiceUrl) };


    protected:
      // aliuid
      shared_ptr<int64_t> aliUid_ {};
      // biztype
      shared_ptr<int32_t> bizType_ {};
      shared_ptr<string> desktopAccessType_ {};
      shared_ptr<string> desktopVpcEndpoint_ {};
      shared_ptr<string> officeSiteId_ {};
      shared_ptr<string> officeSiteType_ {};
      shared_ptr<string> providerId_ {};
      shared_ptr<string> ssoServiceUrl_ {};
    };

    virtual bool empty() const override { return this->officeSites_ == nullptr
        && this->requestId_ == nullptr; };
    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<DescribeOfficeSitesResponseBody::OfficeSites> & getOfficeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<DescribeOfficeSitesResponseBody::OfficeSites>) };
    inline vector<DescribeOfficeSitesResponseBody::OfficeSites> getOfficeSites() { DARABONBA_PTR_GET(officeSites_, vector<DescribeOfficeSitesResponseBody::OfficeSites>) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(const vector<DescribeOfficeSitesResponseBody::OfficeSites> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(vector<DescribeOfficeSitesResponseBody::OfficeSites> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOfficeSitesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The office networks.
    shared_ptr<vector<DescribeOfficeSitesResponseBody::OfficeSites>> officeSites_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
