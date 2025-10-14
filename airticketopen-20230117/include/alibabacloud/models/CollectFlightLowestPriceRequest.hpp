// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COLLECTFLIGHTLOWESTPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CollectFlightLowestPriceRequestLowestPriceFlightInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CollectFlightLowestPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectFlightLowestPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(lowest_price_flight_info_list, lowestPriceFlightInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, CollectFlightLowestPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(lowest_price_flight_info_list, lowestPriceFlightInfoList_);
    };
    CollectFlightLowestPriceRequest() = default ;
    CollectFlightLowestPriceRequest(const CollectFlightLowestPriceRequest &) = default ;
    CollectFlightLowestPriceRequest(CollectFlightLowestPriceRequest &&) = default ;
    CollectFlightLowestPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectFlightLowestPriceRequest() = default ;
    CollectFlightLowestPriceRequest& operator=(const CollectFlightLowestPriceRequest &) = default ;
    CollectFlightLowestPriceRequest& operator=(CollectFlightLowestPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lowestPriceFlightInfoList_ == nullptr; };
    // lowestPriceFlightInfoList Field Functions 
    bool hasLowestPriceFlightInfoList() const { return this->lowestPriceFlightInfoList_ != nullptr;};
    void deleteLowestPriceFlightInfoList() { this->lowestPriceFlightInfoList_ = nullptr;};
    inline const vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList> & lowestPriceFlightInfoList() const { DARABONBA_PTR_GET_CONST(lowestPriceFlightInfoList_, vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList>) };
    inline vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList> lowestPriceFlightInfoList() { DARABONBA_PTR_GET(lowestPriceFlightInfoList_, vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList>) };
    inline CollectFlightLowestPriceRequest& setLowestPriceFlightInfoList(const vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList> & lowestPriceFlightInfoList) { DARABONBA_PTR_SET_VALUE(lowestPriceFlightInfoList_, lowestPriceFlightInfoList) };
    inline CollectFlightLowestPriceRequest& setLowestPriceFlightInfoList(vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList> && lowestPriceFlightInfoList) { DARABONBA_PTR_SET_RVALUE(lowestPriceFlightInfoList_, lowestPriceFlightInfoList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<CollectFlightLowestPriceRequestLowestPriceFlightInfoList>> lowestPriceFlightInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
