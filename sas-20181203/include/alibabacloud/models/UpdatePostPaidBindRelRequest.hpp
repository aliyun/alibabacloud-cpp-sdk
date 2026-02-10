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
      DARABONBA_PTR_TO_JSON(UpdateIfNecessary, updateIfNecessary_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostPaidBindRelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(AutoBindVersion, autoBindVersion_);
      DARABONBA_PTR_FROM_JSON(BindAction, bindAction_);
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
      // Whether to bind all. Default is **false**. Values:
      // 
      // - **true**: Yes
      // - **false**: No
      shared_ptr<bool> bindAll_ {};
      // List of specified server UUIDs.
      shared_ptr<vector<string>> uuidList_ {};
      // The Cloud Security Center protection version that needs to be bound. Values:  
      // - **1**: Basic Edition 
      // - **3**: Enterprise Edition
      // - **5**: Advanced Edition
      // - **6**: Antivirus Edition    
      // - **7**: Container Edition
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->autoBind_ == nullptr
        && this->autoBindVersion_ == nullptr && this->bindAction_ == nullptr && this->updateIfNecessary_ == nullptr; };
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


    // updateIfNecessary Field Functions 
    bool hasUpdateIfNecessary() const { return this->updateIfNecessary_ != nullptr;};
    void deleteUpdateIfNecessary() { this->updateIfNecessary_ = nullptr;};
    inline bool getUpdateIfNecessary() const { DARABONBA_PTR_GET_DEFAULT(updateIfNecessary_, false) };
    inline UpdatePostPaidBindRelRequest& setUpdateIfNecessary(bool updateIfNecessary) { DARABONBA_PTR_SET_VALUE(updateIfNecessary_, updateIfNecessary) };


  protected:
    // Enable automatic binding for new assets. Values:
    // 
    // - **0**: Off
    // - **1**: On
    shared_ptr<int32_t> autoBind_ {};
    // Version to automatically bind when adding new assets. Values:
    // - **1**: Basic Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Antivirus Edition    
    // - **7**: Container Edition
    shared_ptr<int32_t> autoBindVersion_ {};
    // Parameters for the binding action.
    shared_ptr<vector<UpdatePostPaidBindRelRequest::BindAction>> bindAction_ {};
    // Whether to force upgrade the version.
    shared_ptr<bool> updateIfNecessary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
