// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAY_HPP_
#define ALIBABACLOUD_MODELS_GATEWAY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Gateway : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Gateway& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(internetUrl, internetUrl_);
      DARABONBA_PTR_TO_JSON(intranetUrl, intranetUrl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, Gateway& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(internetUrl, internetUrl_);
      DARABONBA_PTR_FROM_JSON(intranetUrl, intranetUrl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    Gateway() = default ;
    Gateway(const Gateway &) = default ;
    Gateway(Gateway &&) = default ;
    Gateway(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Gateway() = default ;
    Gateway& operator=(const Gateway &) = default ;
    Gateway& operator=(Gateway &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->gatewayId_ == nullptr && this->internetUrl_ == nullptr && this->intranetUrl_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Gateway& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline Gateway& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // internetUrl Field Functions 
    bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
    void deleteInternetUrl() { this->internetUrl_ = nullptr;};
    inline string getInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
    inline Gateway& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


    // intranetUrl Field Functions 
    bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
    void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
    inline string getIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
    inline Gateway& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Gateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Gateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline Gateway& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> gatewayId_ {};
    shared_ptr<string> internetUrl_ {};
    shared_ptr<string> intranetUrl_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
