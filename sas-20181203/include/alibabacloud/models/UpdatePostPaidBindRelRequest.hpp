// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePostPaidBindRelRequestBindAction.hpp>
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
    virtual bool empty() const override { this->autoBind_ != nullptr
        && this->autoBindVersion_ != nullptr && this->bindAction_ != nullptr && this->updateIfNecessary_ != nullptr; };
    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t autoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline UpdatePostPaidBindRelRequest& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // autoBindVersion Field Functions 
    bool hasAutoBindVersion() const { return this->autoBindVersion_ != nullptr;};
    void deleteAutoBindVersion() { this->autoBindVersion_ = nullptr;};
    inline int32_t autoBindVersion() const { DARABONBA_PTR_GET_DEFAULT(autoBindVersion_, 0) };
    inline UpdatePostPaidBindRelRequest& setAutoBindVersion(int32_t autoBindVersion) { DARABONBA_PTR_SET_VALUE(autoBindVersion_, autoBindVersion) };


    // bindAction Field Functions 
    bool hasBindAction() const { return this->bindAction_ != nullptr;};
    void deleteBindAction() { this->bindAction_ = nullptr;};
    inline const vector<UpdatePostPaidBindRelRequestBindAction> & bindAction() const { DARABONBA_PTR_GET_CONST(bindAction_, vector<UpdatePostPaidBindRelRequestBindAction>) };
    inline vector<UpdatePostPaidBindRelRequestBindAction> bindAction() { DARABONBA_PTR_GET(bindAction_, vector<UpdatePostPaidBindRelRequestBindAction>) };
    inline UpdatePostPaidBindRelRequest& setBindAction(const vector<UpdatePostPaidBindRelRequestBindAction> & bindAction) { DARABONBA_PTR_SET_VALUE(bindAction_, bindAction) };
    inline UpdatePostPaidBindRelRequest& setBindAction(vector<UpdatePostPaidBindRelRequestBindAction> && bindAction) { DARABONBA_PTR_SET_RVALUE(bindAction_, bindAction) };


    // updateIfNecessary Field Functions 
    bool hasUpdateIfNecessary() const { return this->updateIfNecessary_ != nullptr;};
    void deleteUpdateIfNecessary() { this->updateIfNecessary_ = nullptr;};
    inline bool updateIfNecessary() const { DARABONBA_PTR_GET_DEFAULT(updateIfNecessary_, false) };
    inline UpdatePostPaidBindRelRequest& setUpdateIfNecessary(bool updateIfNecessary) { DARABONBA_PTR_SET_VALUE(updateIfNecessary_, updateIfNecessary) };


  protected:
    // Enable automatic binding for new assets. Values:
    // 
    // - **0**: Off
    // - **1**: On
    std::shared_ptr<int32_t> autoBind_ = nullptr;
    // Version to automatically bind when adding new assets. Values:
    // - **1**: Basic Edition 
    // - **3**: Enterprise Edition
    // - **5**: Advanced Edition
    // - **6**: Antivirus Edition    
    // - **7**: Container Edition
    std::shared_ptr<int32_t> autoBindVersion_ = nullptr;
    // Parameters for the binding action.
    std::shared_ptr<vector<UpdatePostPaidBindRelRequestBindAction>> bindAction_ = nullptr;
    std::shared_ptr<bool> updateIfNecessary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
