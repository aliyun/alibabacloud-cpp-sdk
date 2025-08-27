// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTLISTINGSEARCHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightListingSearchResponseBodyModuleFlightItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightListingSearchResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightListingSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(flight_item_list, flightItemList_);
      DARABONBA_PTR_TO_JSON(need_continue, needContinue_);
      DARABONBA_PTR_TO_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightListingSearchResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(flight_item_list, flightItemList_);
      DARABONBA_PTR_FROM_JSON(need_continue, needContinue_);
      DARABONBA_PTR_FROM_JSON(query_record_id, queryRecordId_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    IntlFlightListingSearchResponseBodyModule() = default ;
    IntlFlightListingSearchResponseBodyModule(const IntlFlightListingSearchResponseBodyModule &) = default ;
    IntlFlightListingSearchResponseBodyModule(IntlFlightListingSearchResponseBodyModule &&) = default ;
    IntlFlightListingSearchResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightListingSearchResponseBodyModule() = default ;
    IntlFlightListingSearchResponseBodyModule& operator=(const IntlFlightListingSearchResponseBodyModule &) = default ;
    IntlFlightListingSearchResponseBodyModule& operator=(IntlFlightListingSearchResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->flightItemList_ != nullptr
        && this->needContinue_ != nullptr && this->queryRecordId_ != nullptr && this->token_ != nullptr; };
    // flightItemList Field Functions 
    bool hasFlightItemList() const { return this->flightItemList_ != nullptr;};
    void deleteFlightItemList() { this->flightItemList_ = nullptr;};
    inline const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList> & flightItemList() const { DARABONBA_PTR_GET_CONST(flightItemList_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList>) };
    inline vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList> flightItemList() { DARABONBA_PTR_GET(flightItemList_, vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList>) };
    inline IntlFlightListingSearchResponseBodyModule& setFlightItemList(const vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList> & flightItemList) { DARABONBA_PTR_SET_VALUE(flightItemList_, flightItemList) };
    inline IntlFlightListingSearchResponseBodyModule& setFlightItemList(vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList> && flightItemList) { DARABONBA_PTR_SET_RVALUE(flightItemList_, flightItemList) };


    // needContinue Field Functions 
    bool hasNeedContinue() const { return this->needContinue_ != nullptr;};
    void deleteNeedContinue() { this->needContinue_ = nullptr;};
    inline bool needContinue() const { DARABONBA_PTR_GET_DEFAULT(needContinue_, false) };
    inline IntlFlightListingSearchResponseBodyModule& setNeedContinue(bool needContinue) { DARABONBA_PTR_SET_VALUE(needContinue_, needContinue) };


    // queryRecordId Field Functions 
    bool hasQueryRecordId() const { return this->queryRecordId_ != nullptr;};
    void deleteQueryRecordId() { this->queryRecordId_ = nullptr;};
    inline string queryRecordId() const { DARABONBA_PTR_GET_DEFAULT(queryRecordId_, "") };
    inline IntlFlightListingSearchResponseBodyModule& setQueryRecordId(string queryRecordId) { DARABONBA_PTR_SET_VALUE(queryRecordId_, queryRecordId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline IntlFlightListingSearchResponseBodyModule& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<vector<Models::IntlFlightListingSearchResponseBodyModuleFlightItemList>> flightItemList_ = nullptr;
    std::shared_ptr<bool> needContinue_ = nullptr;
    std::shared_ptr<string> queryRecordId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
