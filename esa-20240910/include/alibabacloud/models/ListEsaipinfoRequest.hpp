// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTESAIPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTESAIPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListESAIPInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListESAIPInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VipInfo, vipInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListESAIPInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VipInfo, vipInfo_);
    };
    ListESAIPInfoRequest() = default ;
    ListESAIPInfoRequest(const ListESAIPInfoRequest &) = default ;
    ListESAIPInfoRequest(ListESAIPInfoRequest &&) = default ;
    ListESAIPInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListESAIPInfoRequest() = default ;
    ListESAIPInfoRequest& operator=(const ListESAIPInfoRequest &) = default ;
    ListESAIPInfoRequest& operator=(ListESAIPInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vipInfo_ != nullptr; };
    // vipInfo Field Functions 
    bool hasVipInfo() const { return this->vipInfo_ != nullptr;};
    void deleteVipInfo() { this->vipInfo_ = nullptr;};
    inline string vipInfo() const { DARABONBA_PTR_GET_DEFAULT(vipInfo_, "") };
    inline ListESAIPInfoRequest& setVipInfo(string vipInfo) { DARABONBA_PTR_SET_VALUE(vipInfo_, vipInfo) };


  protected:
    // You can enter IPv4 or IPv6 addresses. Separate multiple IP addresses with commas (,). You can enter up to 20 IP addresses at a time.
    // 
    // This parameter is required.
    std::shared_ptr<string> vipInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
