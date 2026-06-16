// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class UpdatePostPaidBindRelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePostPaidBindRelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SdkRequest, sdkRequest_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostPaidBindRelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SdkRequest, sdkRequest_);
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
    class SdkRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdkRequest& obj) { 
        DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
        DARABONBA_PTR_TO_JSON(AutoBindVersion, autoBindVersion_);
        DARABONBA_PTR_TO_JSON(BindAction, bindAction_);
        DARABONBA_PTR_TO_JSON(UpdateIfNecessary, updateIfNecessary_);
      };
      friend void from_json(const Darabonba::Json& j, SdkRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
        DARABONBA_PTR_FROM_JSON(AutoBindVersion, autoBindVersion_);
        DARABONBA_PTR_FROM_JSON(BindAction, bindAction_);
        DARABONBA_PTR_FROM_JSON(UpdateIfNecessary, updateIfNecessary_);
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
      class BindAction : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindAction& obj) { 
          DARABONBA_PTR_TO_JSON(BindAll, bindAll_);
          DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, BindAction& obj) { 
          DARABONBA_PTR_FROM_JSON(BindAll, bindAll_);
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
        && this->uuidList_ == nullptr && this->version_ == nullptr; };
        // bindAll Field Functions 
        bool hasBindAll() const { return this->bindAll_ != nullptr;};
        void deleteBindAll() { this->bindAll_ = nullptr;};
        inline bool getBindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
        inline BindAction& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


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
        shared_ptr<bool> bindAll_ {};
        shared_ptr<vector<string>> uuidList_ {};
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->autoBind_ == nullptr
        && this->autoBindVersion_ == nullptr && this->bindAction_ == nullptr && this->updateIfNecessary_ == nullptr; };
      // autoBind Field Functions 
      bool hasAutoBind() const { return this->autoBind_ != nullptr;};
      void deleteAutoBind() { this->autoBind_ = nullptr;};
      inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
      inline SdkRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


      // autoBindVersion Field Functions 
      bool hasAutoBindVersion() const { return this->autoBindVersion_ != nullptr;};
      void deleteAutoBindVersion() { this->autoBindVersion_ = nullptr;};
      inline int32_t getAutoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(autoBindVersion_, 0) };
      inline SdkRequest& setAutoBindVersion(int32_t autoBindVersion) { DARABONBA_PTR_SET_VALUE(autoBindVersion_, autoBindVersion) };


      // bindAction Field Functions 
      bool hasBindAction() const { return this->bindAction_ != nullptr;};
      void deleteBindAction() { this->bindAction_ = nullptr;};
      inline const vector<SdkRequest::BindAction> & getBindAction() const { DARABONBA_PTR_GET_CONST(bindAction_, vector<SdkRequest::BindAction>) };
      inline vector<SdkRequest::BindAction> getBindAction() { DARABONBA_PTR_GET(bindAction_, vector<SdkRequest::BindAction>) };
      inline SdkRequest& setBindAction(const vector<SdkRequest::BindAction> & bindAction) { DARABONBA_PTR_SET_VALUE(bindAction_, bindAction) };
      inline SdkRequest& setBindAction(vector<SdkRequest::BindAction> && bindAction) { DARABONBA_PTR_SET_RVALUE(bindAction_, bindAction) };


      // updateIfNecessary Field Functions 
      bool hasUpdateIfNecessary() const { return this->updateIfNecessary_ != nullptr;};
      void deleteUpdateIfNecessary() { this->updateIfNecessary_ = nullptr;};
      inline bool getUpdateIfNecessary() const { DARABONBA_PTR_GET_DEFAULT(updateIfNecessary_, false) };
      inline SdkRequest& setUpdateIfNecessary(bool updateIfNecessary) { DARABONBA_PTR_SET_VALUE(updateIfNecessary_, updateIfNecessary) };


    protected:
      shared_ptr<int32_t> autoBind_ {};
      shared_ptr<int32_t> autoBindVersion_ {};
      shared_ptr<vector<SdkRequest::BindAction>> bindAction_ {};
      shared_ptr<bool> updateIfNecessary_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->sdkRequest_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePostPaidBindRelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sdkRequest Field Functions 
    bool hasSdkRequest() const { return this->sdkRequest_ != nullptr;};
    void deleteSdkRequest() { this->sdkRequest_ = nullptr;};
    inline const UpdatePostPaidBindRelRequest::SdkRequest & getSdkRequest() const { DARABONBA_PTR_GET_CONST(sdkRequest_, UpdatePostPaidBindRelRequest::SdkRequest) };
    inline UpdatePostPaidBindRelRequest::SdkRequest getSdkRequest() { DARABONBA_PTR_GET(sdkRequest_, UpdatePostPaidBindRelRequest::SdkRequest) };
    inline UpdatePostPaidBindRelRequest& setSdkRequest(const UpdatePostPaidBindRelRequest::SdkRequest & sdkRequest) { DARABONBA_PTR_SET_VALUE(sdkRequest_, sdkRequest) };
    inline UpdatePostPaidBindRelRequest& setSdkRequest(UpdatePostPaidBindRelRequest::SdkRequest && sdkRequest) { DARABONBA_PTR_SET_RVALUE(sdkRequest_, sdkRequest) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<UpdatePostPaidBindRelRequest::SdkRequest> sdkRequest_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
