// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDERBOOKERINFO_HPP_
#define ALIBABACLOUD_MODELS_IFLIGHTORDERLISTQUERYRESPONSEBODYMODULEFLIGHTSALEORDERBOOKERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
    };
    friend void from_json(const Darabonba::Json& j, IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
    };
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo(IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo &&) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo() = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo& operator=(const IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo &) = default ;
    IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo& operator=(IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userId_ != nullptr
        && this->userName_ != nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline IFlightOrderListQueryResponseBodyModuleFlightSaleOrderBookerInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
