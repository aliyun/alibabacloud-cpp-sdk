// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICRESPONSEBODYDATASCENEBILLINGLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGATEVERIFYBILLINGPUBLICRESPONSEBODYDATASCENEBILLINGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& obj) { 
      DARABONBA_PTR_TO_JSON(Add, add_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(SinglePrice, singlePrice_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& obj) { 
      DARABONBA_PTR_FROM_JSON(Add, add_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(SinglePrice, singlePrice_);
    };
    QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList() = default ;
    QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList(const QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList &) = default ;
    QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList(QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList &&) = default ;
    QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList() = default ;
    QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& operator=(const QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList &) = default ;
    QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& operator=(QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->add_ != nullptr
        && this->amount_ != nullptr && this->appName_ != nullptr && this->itemName_ != nullptr && this->sceneCode_ != nullptr && this->sceneName_ != nullptr
        && this->singlePrice_ != nullptr; };
    // add Field Functions 
    bool hasAdd() const { return this->add_ != nullptr;};
    void deleteAdd() { this->add_ = nullptr;};
    inline string add() const { DARABONBA_PTR_GET_DEFAULT(add_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setAdd(string add) { DARABONBA_PTR_SET_VALUE(add_, add) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // singlePrice Field Functions 
    bool hasSinglePrice() const { return this->singlePrice_ != nullptr;};
    void deleteSinglePrice() { this->singlePrice_ = nullptr;};
    inline string singlePrice() const { DARABONBA_PTR_GET_DEFAULT(singlePrice_, "") };
    inline QueryGateVerifyBillingPublicResponseBodyDataSceneBillingList& setSinglePrice(string singlePrice) { DARABONBA_PTR_SET_VALUE(singlePrice_, singlePrice) };


  protected:
    // The billable items.
    std::shared_ptr<string> add_ = nullptr;
    // The fees generated for the verification service. Unitrogen: CNY.
    std::shared_ptr<string> amount_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The verification method.
    std::shared_ptr<string> itemName_ = nullptr;
    // The service code.
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The service name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The unit price. Unit: CNY.
    std::shared_ptr<string> singlePrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
