// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISERVICESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISERVICESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListKyuubiServicesResponseBodyDataKyuubiServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiServicesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiServicesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(kyuubiServices, kyuubiServices_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiServicesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(kyuubiServices, kyuubiServices_);
    };
    ListKyuubiServicesResponseBodyData() = default ;
    ListKyuubiServicesResponseBodyData(const ListKyuubiServicesResponseBodyData &) = default ;
    ListKyuubiServicesResponseBodyData(ListKyuubiServicesResponseBodyData &&) = default ;
    ListKyuubiServicesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiServicesResponseBodyData() = default ;
    ListKyuubiServicesResponseBodyData& operator=(const ListKyuubiServicesResponseBodyData &) = default ;
    ListKyuubiServicesResponseBodyData& operator=(ListKyuubiServicesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kyuubiServices_ != nullptr; };
    // kyuubiServices Field Functions 
    bool hasKyuubiServices() const { return this->kyuubiServices_ != nullptr;};
    void deleteKyuubiServices() { this->kyuubiServices_ = nullptr;};
    inline const vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices> & kyuubiServices() const { DARABONBA_PTR_GET_CONST(kyuubiServices_, vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices>) };
    inline vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices> kyuubiServices() { DARABONBA_PTR_GET(kyuubiServices_, vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices>) };
    inline ListKyuubiServicesResponseBodyData& setKyuubiServices(const vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices> & kyuubiServices) { DARABONBA_PTR_SET_VALUE(kyuubiServices_, kyuubiServices) };
    inline ListKyuubiServicesResponseBodyData& setKyuubiServices(vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices> && kyuubiServices) { DARABONBA_PTR_SET_RVALUE(kyuubiServices_, kyuubiServices) };


  protected:
    std::shared_ptr<vector<Models::ListKyuubiServicesResponseBodyDataKyuubiServices>> kyuubiServices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
