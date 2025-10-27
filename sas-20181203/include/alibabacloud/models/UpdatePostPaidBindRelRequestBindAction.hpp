// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUESTBINDACTION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUESTBINDACTION_HPP_
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
  class UpdatePostPaidBindRelRequestBindAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePostPaidBindRelRequestBindAction& obj) { 
      DARABONBA_PTR_TO_JSON(BindAll, bindAll_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostPaidBindRelRequestBindAction& obj) { 
      DARABONBA_PTR_FROM_JSON(BindAll, bindAll_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdatePostPaidBindRelRequestBindAction() = default ;
    UpdatePostPaidBindRelRequestBindAction(const UpdatePostPaidBindRelRequestBindAction &) = default ;
    UpdatePostPaidBindRelRequestBindAction(UpdatePostPaidBindRelRequestBindAction &&) = default ;
    UpdatePostPaidBindRelRequestBindAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePostPaidBindRelRequestBindAction() = default ;
    UpdatePostPaidBindRelRequestBindAction& operator=(const UpdatePostPaidBindRelRequestBindAction &) = default ;
    UpdatePostPaidBindRelRequestBindAction& operator=(UpdatePostPaidBindRelRequestBindAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindAll_ == nullptr
        && return this->uuidList_ == nullptr && return this->version_ == nullptr; };
    // bindAll Field Functions 
    bool hasBindAll() const { return this->bindAll_ != nullptr;};
    void deleteBindAll() { this->bindAll_ = nullptr;};
    inline bool bindAll() const { DARABONBA_PTR_GET_DEFAULT(bindAll_, false) };
    inline UpdatePostPaidBindRelRequestBindAction& setBindAll(bool bindAll) { DARABONBA_PTR_SET_VALUE(bindAll_, bindAll) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & uuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> uuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline UpdatePostPaidBindRelRequestBindAction& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline UpdatePostPaidBindRelRequestBindAction& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdatePostPaidBindRelRequestBindAction& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Whether to bind all. Default is **false**. Values:
    // 
    // - **true**: Yes
    // - **false**: No
    std::shared_ptr<bool> bindAll_ = nullptr;
    // List of specified server UUIDs.
    std::shared_ptr<vector<string>> uuidList_ = nullptr;
    // The Cloud Security Center protection version that needs to be bound. Values:  
    // - **1**: Basic Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Antivirus Edition    
    // - **7**: Container Edition
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
