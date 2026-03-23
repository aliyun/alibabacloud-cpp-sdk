// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPGROUPSSIDCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPGROUPSSIDCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class DeleteApgroupSsidConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApgroupSsidConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApgroupSsidConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApgroupId, apgroupId_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteApgroupSsidConfigRequest() = default ;
    DeleteApgroupSsidConfigRequest(const DeleteApgroupSsidConfigRequest &) = default ;
    DeleteApgroupSsidConfigRequest(DeleteApgroupSsidConfigRequest &&) = default ;
    DeleteApgroupSsidConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApgroupSsidConfigRequest() = default ;
    DeleteApgroupSsidConfigRequest& operator=(const DeleteApgroupSsidConfigRequest &) = default ;
    DeleteApgroupSsidConfigRequest& operator=(DeleteApgroupSsidConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apgroupId_ == nullptr
        && this->appCode_ == nullptr && this->appName_ == nullptr && this->id_ == nullptr; };
    // apgroupId Field Functions 
    bool hasApgroupId() const { return this->apgroupId_ != nullptr;};
    void deleteApgroupId() { this->apgroupId_ = nullptr;};
    inline int64_t getApgroupId() const { DARABONBA_PTR_GET_DEFAULT(apgroupId_, 0L) };
    inline DeleteApgroupSsidConfigRequest& setApgroupId(int64_t apgroupId) { DARABONBA_PTR_SET_VALUE(apgroupId_, apgroupId) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline DeleteApgroupSsidConfigRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DeleteApgroupSsidConfigRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteApgroupSsidConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> apgroupId_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
