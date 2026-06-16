// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetCanTrySasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
    };
    GetCanTrySasRequest() = default ;
    GetCanTrySasRequest(const GetCanTrySasRequest &) = default ;
    GetCanTrySasRequest(GetCanTrySasRequest &&) = default ;
    GetCanTrySasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasRequest() = default ;
    GetCanTrySasRequest& operator=(const GetCanTrySasRequest &) = default ;
    GetCanTrySasRequest& operator=(GetCanTrySasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(FromEcs, fromEcs_);
        DARABONBA_PTR_TO_JSON(Lang, lang_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(FromEcs, fromEcs_);
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
      };
      SdkRequest() = default ;
      SdkRequest(const SdkRequest &) = default ;
      SdkRequest(SdkRequest &&) = default ;
      SdkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdkRequest() = default ;
      SdkRequest& operator=(const SdkRequest &) = default ;
      SdkRequest& operator=(SdkRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fromEcs_ == nullptr
        && this->lang_ == nullptr; };
      // fromEcs Field Functions 
      bool hasFromEcs() const { return this->fromEcs_ != nullptr;};
      void deleteFromEcs() { this->fromEcs_ = nullptr;};
      inline bool getFromEcs() const { DARABONBA_PTR_GET_DEFAULT(fromEcs_, false) };
      inline SdkRequest& setFromEcs(bool fromEcs) { DARABONBA_PTR_SET_VALUE(fromEcs_, fromEcs) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline SdkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    protected:
      shared_ptr<bool> fromEcs_ {};
      shared_ptr<string> lang_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCanTrySasRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const GetCanTrySasRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, GetCanTrySasRequest::SdkRequest) };
    inline GetCanTrySasRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, GetCanTrySasRequest::SdkRequest) };
    inline GetCanTrySasRequest& setSdkRequest(const GetCanTrySasRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline GetCanTrySasRequest& setSdkRequest(GetCanTrySasRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<GetCanTrySasRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
