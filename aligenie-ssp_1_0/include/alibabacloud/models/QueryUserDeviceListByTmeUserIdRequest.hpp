// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERDEVICELISTBYTMEUSERIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class QueryUserDeviceListByTmeUserIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserDeviceListByTmeUserIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Sp, sp_);
      DARABONBA_PTR_TO_JSON(TmeUserId, tmeUserId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserDeviceListByTmeUserIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Sp, sp_);
      DARABONBA_PTR_FROM_JSON(TmeUserId, tmeUserId_);
    };
    QueryUserDeviceListByTmeUserIdRequest() = default ;
    QueryUserDeviceListByTmeUserIdRequest(const QueryUserDeviceListByTmeUserIdRequest &) = default ;
    QueryUserDeviceListByTmeUserIdRequest(QueryUserDeviceListByTmeUserIdRequest &&) = default ;
    QueryUserDeviceListByTmeUserIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserDeviceListByTmeUserIdRequest() = default ;
    QueryUserDeviceListByTmeUserIdRequest& operator=(const QueryUserDeviceListByTmeUserIdRequest &) = default ;
    QueryUserDeviceListByTmeUserIdRequest& operator=(QueryUserDeviceListByTmeUserIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sp_ != nullptr
        && this->tmeUserId_ != nullptr; };
    // sp Field Functions 
    bool hasSp() const { return this->sp_ != nullptr;};
    void deleteSp() { this->sp_ = nullptr;};
    inline string sp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
    inline QueryUserDeviceListByTmeUserIdRequest& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


    // tmeUserId Field Functions 
    bool hasTmeUserId() const { return this->tmeUserId_ != nullptr;};
    void deleteTmeUserId() { this->tmeUserId_ = nullptr;};
    inline string tmeUserId() const { DARABONBA_PTR_GET_DEFAULT(tmeUserId_, "") };
    inline QueryUserDeviceListByTmeUserIdRequest& setTmeUserId(string tmeUserId) { DARABONBA_PTR_SET_VALUE(tmeUserId_, tmeUserId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tmeUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
