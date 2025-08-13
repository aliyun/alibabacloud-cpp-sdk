// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHCONSUMERRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHCONSUMERRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayAuthConsumerResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthConsumerResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerStatus, consumerStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthConsumerResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerStatus, consumerStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGatewayAuthConsumerResponseBodyDataResult() = default ;
    ListGatewayAuthConsumerResponseBodyDataResult(const ListGatewayAuthConsumerResponseBodyDataResult &) = default ;
    ListGatewayAuthConsumerResponseBodyDataResult(ListGatewayAuthConsumerResponseBodyDataResult &&) = default ;
    ListGatewayAuthConsumerResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthConsumerResponseBodyDataResult() = default ;
    ListGatewayAuthConsumerResponseBodyDataResult& operator=(const ListGatewayAuthConsumerResponseBodyDataResult &) = default ;
    ListGatewayAuthConsumerResponseBodyDataResult& operator=(ListGatewayAuthConsumerResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumerStatus_ != nullptr
        && this->description_ != nullptr && this->gatewayUniqueId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr
        && this->name_ != nullptr && this->primaryUser_ != nullptr && this->type_ != nullptr; };
    // consumerStatus Field Functions 
    bool hasConsumerStatus() const { return this->consumerStatus_ != nullptr;};
    void deleteConsumerStatus() { this->consumerStatus_ = nullptr;};
    inline bool consumerStatus() const { DARABONBA_PTR_GET_DEFAULT(consumerStatus_, false) };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setConsumerStatus(bool consumerStatus) { DARABONBA_PTR_SET_VALUE(consumerStatus_, consumerStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGatewayAuthConsumerResponseBodyDataResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The status of the consumer. Valid values:
    // 
    // *   true: enabled
    // *   false: disabled
    std::shared_ptr<bool> consumerStatus_ = nullptr;
    // The description of the consumer.
    std::shared_ptr<string> description_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the consumer.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the consumer.
    std::shared_ptr<string> name_ = nullptr;
    // The creator.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The authentication type. Valid values:
    // 
    // *   JWT
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
