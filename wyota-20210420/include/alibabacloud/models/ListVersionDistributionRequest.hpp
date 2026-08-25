// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVERSIONDISTRIBUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVERSIONDISTRIBUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class ListVersionDistributionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVersionDistributionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(InManage, inManage_);
      DARABONBA_PTR_TO_JSON(MainBizType, mainBizType_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(VersionType, versionType_);
    };
    friend void from_json(const Darabonba::Json& j, ListVersionDistributionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(InManage, inManage_);
      DARABONBA_PTR_FROM_JSON(MainBizType, mainBizType_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(VersionType, versionType_);
    };
    ListVersionDistributionRequest() = default ;
    ListVersionDistributionRequest(const ListVersionDistributionRequest &) = default ;
    ListVersionDistributionRequest(ListVersionDistributionRequest &&) = default ;
    ListVersionDistributionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVersionDistributionRequest() = default ;
    ListVersionDistributionRequest& operator=(const ListVersionDistributionRequest &) = default ;
    ListVersionDistributionRequest& operator=(ListVersionDistributionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientType_ == nullptr
        && this->inManage_ == nullptr && this->mainBizType_ == nullptr && this->model_ == nullptr && this->versionType_ == nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline ListVersionDistributionRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // inManage Field Functions 
    bool hasInManage() const { return this->inManage_ != nullptr;};
    void deleteInManage() { this->inManage_ = nullptr;};
    inline bool getInManage() const { DARABONBA_PTR_GET_DEFAULT(inManage_, false) };
    inline ListVersionDistributionRequest& setInManage(bool inManage) { DARABONBA_PTR_SET_VALUE(inManage_, inManage) };


    // mainBizType Field Functions 
    bool hasMainBizType() const { return this->mainBizType_ != nullptr;};
    void deleteMainBizType() { this->mainBizType_ = nullptr;};
    inline string getMainBizType() const { DARABONBA_PTR_GET_DEFAULT(mainBizType_, "") };
    inline ListVersionDistributionRequest& setMainBizType(string mainBizType) { DARABONBA_PTR_SET_VALUE(mainBizType_, mainBizType) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListVersionDistributionRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // versionType Field Functions 
    bool hasVersionType() const { return this->versionType_ != nullptr;};
    void deleteVersionType() { this->versionType_ = nullptr;};
    inline string getVersionType() const { DARABONBA_PTR_GET_DEFAULT(versionType_, "") };
    inline ListVersionDistributionRequest& setVersionType(string versionType) { DARABONBA_PTR_SET_VALUE(versionType_, versionType) };


  protected:
    // The terminal type. Valid values:
    // - 1: hardware terminal.
    // - 2: software terminal.
    // - 3: secure browser plugin.
    // - 4: GuestOS application.
    // - 5: DingTalk Wuying plugin.
    // - 6: cloud application component.
    // - 7: Cloud Hub.
    // - 8: H5.
    // 
    // This parameter is required.
    shared_ptr<int32_t> clientType_ {};
    // The management status. A value of true indicates managed, and a value of false indicates unmanaged. If this parameter is not specified, all terminals are queried.
    shared_ptr<bool> inManage_ {};
    // The business type. Default value: enterprise.
    shared_ptr<string> mainBizType_ {};
    // The terminal model.
    // 
    // This parameter is required.
    shared_ptr<string> model_ {};
    // The version type. Valid values:
    // - SYS: system version.
    // - APP: application version.
    // 
    // This parameter is required.
    shared_ptr<string> versionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
