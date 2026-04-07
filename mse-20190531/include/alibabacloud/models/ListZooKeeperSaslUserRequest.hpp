// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZOOKEEPERSASLUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTZOOKEEPERSASLUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListZooKeeperSaslUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZooKeeperSaslUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListZooKeeperSaslUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ListZooKeeperSaslUserRequest() = default ;
    ListZooKeeperSaslUserRequest(const ListZooKeeperSaslUserRequest &) = default ;
    ListZooKeeperSaslUserRequest(ListZooKeeperSaslUserRequest &&) = default ;
    ListZooKeeperSaslUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZooKeeperSaslUserRequest() = default ;
    ListZooKeeperSaslUserRequest& operator=(const ListZooKeeperSaslUserRequest &) = default ;
    ListZooKeeperSaslUserRequest& operator=(ListZooKeeperSaslUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->instanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListZooKeeperSaslUserRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListZooKeeperSaslUserRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
