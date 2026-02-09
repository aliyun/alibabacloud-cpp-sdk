// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BrainIndustrial20200920
{
namespace Models
{
  class ListUserResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
    };
    ListUserResourcesRequest() = default ;
    ListUserResourcesRequest(const ListUserResourcesRequest &) = default ;
    ListUserResourcesRequest(ListUserResourcesRequest &&) = default ;
    ListUserResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserResourcesRequest() = default ;
    ListUserResourcesRequest& operator=(const ListUserResourcesRequest &) = default ;
    ListUserResourcesRequest& operator=(ListUserResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListUserResourcesRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


  protected:
    shared_ptr<string> commodityCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BrainIndustrial20200920
#endif
