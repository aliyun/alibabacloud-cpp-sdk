// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAPLISTTOAPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAPLISTTOAPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class AddApListToApgroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddApListToApgroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApGroupId, apGroupId_);
      DARABONBA_ANY_TO_JSON(ApMacList, apMacList_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, AddApListToApgroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApGroupId, apGroupId_);
      DARABONBA_ANY_FROM_JSON(ApMacList, apMacList_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    AddApListToApgroupRequest() = default ;
    AddApListToApgroupRequest(const AddApListToApgroupRequest &) = default ;
    AddApListToApgroupRequest(AddApListToApgroupRequest &&) = default ;
    AddApListToApgroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddApListToApgroupRequest() = default ;
    AddApListToApgroupRequest& operator=(const AddApListToApgroupRequest &) = default ;
    AddApListToApgroupRequest& operator=(AddApListToApgroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apGroupId_ == nullptr
        && this->apMacList_ == nullptr && this->appCode_ == nullptr && this->appName_ == nullptr; };
    // apGroupId Field Functions 
    bool hasApGroupId() const { return this->apGroupId_ != nullptr;};
    void deleteApGroupId() { this->apGroupId_ = nullptr;};
    inline string getApGroupId() const { DARABONBA_PTR_GET_DEFAULT(apGroupId_, "") };
    inline AddApListToApgroupRequest& setApGroupId(string apGroupId) { DARABONBA_PTR_SET_VALUE(apGroupId_, apGroupId) };


    // apMacList Field Functions 
    bool hasApMacList() const { return this->apMacList_ != nullptr;};
    void deleteApMacList() { this->apMacList_ = nullptr;};
    inline     const Darabonba::Json & getApMacList() const { DARABONBA_GET(apMacList_) };
    Darabonba::Json & getApMacList() { DARABONBA_GET(apMacList_) };
    inline AddApListToApgroupRequest& setApMacList(const Darabonba::Json & apMacList) { DARABONBA_SET_VALUE(apMacList_, apMacList) };
    inline AddApListToApgroupRequest& setApMacList(Darabonba::Json && apMacList) { DARABONBA_SET_RVALUE(apMacList_, apMacList) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline AddApListToApgroupRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddApListToApgroupRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // This parameter is required.
    shared_ptr<string> apGroupId_ {};
    // This parameter is required.
    Darabonba::Json apMacList_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
