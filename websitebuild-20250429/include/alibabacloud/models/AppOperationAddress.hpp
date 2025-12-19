// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPOPERATIONADDRESS_HPP_
#define ALIBABACLOUD_MODELS_APPOPERATIONADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppOperateAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppOperationAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppOperationAddress& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
    };
    friend void from_json(const Darabonba::Json& j, AppOperationAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
    };
    AppOperationAddress() = default ;
    AppOperationAddress(const AppOperationAddress &) = default ;
    AppOperationAddress(AppOperationAddress &&) = default ;
    AppOperationAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppOperationAddress() = default ;
    AppOperationAddress& operator=(const AppOperationAddress &) = default ;
    AppOperationAddress& operator=(AppOperationAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<AppOperateAction> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<AppOperateAction>) };
    inline vector<AppOperateAction> actions() { DARABONBA_PTR_GET(actions_, vector<AppOperateAction>) };
    inline AppOperationAddress& setActions(const vector<AppOperateAction> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline AppOperationAddress& setActions(vector<AppOperateAction> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


  protected:
    std::shared_ptr<vector<AppOperateAction>> actions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
