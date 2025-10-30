// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODYDATACALLERRORIMPACTTRENDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODYDATACALLERRORIMPACTTRENDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIdList, apiIdList_);
      DARABONBA_PTR_TO_JSON(ErrorApiCount, errorApiCount_);
      DARABONBA_PTR_TO_JSON(ErrorAppCount, errorAppCount_);
      DARABONBA_PTR_TO_JSON(Minute, minute_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIdList, apiIdList_);
      DARABONBA_PTR_FROM_JSON(ErrorApiCount, errorApiCount_);
      DARABONBA_PTR_FROM_JSON(ErrorAppCount, errorAppCount_);
      DARABONBA_PTR_FROM_JSON(Minute, minute_);
    };
    GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList() = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList(const GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList &) = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList(GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList &&) = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList() = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& operator=(const GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList &) = default ;
    GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& operator=(GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIdList_ == nullptr
        && return this->errorApiCount_ == nullptr && return this->errorAppCount_ == nullptr && return this->minute_ == nullptr; };
    // apiIdList Field Functions 
    bool hasApiIdList() const { return this->apiIdList_ != nullptr;};
    void deleteApiIdList() { this->apiIdList_ = nullptr;};
    inline const vector<int64_t> & apiIdList() const { DARABONBA_PTR_GET_CONST(apiIdList_, vector<int64_t>) };
    inline vector<int64_t> apiIdList() { DARABONBA_PTR_GET(apiIdList_, vector<int64_t>) };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& setApiIdList(const vector<int64_t> & apiIdList) { DARABONBA_PTR_SET_VALUE(apiIdList_, apiIdList) };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& setApiIdList(vector<int64_t> && apiIdList) { DARABONBA_PTR_SET_RVALUE(apiIdList_, apiIdList) };


    // errorApiCount Field Functions 
    bool hasErrorApiCount() const { return this->errorApiCount_ != nullptr;};
    void deleteErrorApiCount() { this->errorApiCount_ = nullptr;};
    inline int32_t errorApiCount() const { DARABONBA_PTR_GET_DEFAULT(errorApiCount_, 0) };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& setErrorApiCount(int32_t errorApiCount) { DARABONBA_PTR_SET_VALUE(errorApiCount_, errorApiCount) };


    // errorAppCount Field Functions 
    bool hasErrorAppCount() const { return this->errorAppCount_ != nullptr;};
    void deleteErrorAppCount() { this->errorAppCount_ = nullptr;};
    inline int32_t errorAppCount() const { DARABONBA_PTR_GET_DEFAULT(errorAppCount_, 0) };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& setErrorAppCount(int32_t errorAppCount) { DARABONBA_PTR_SET_VALUE(errorAppCount_, errorAppCount) };


    // minute Field Functions 
    bool hasMinute() const { return this->minute_ != nullptr;};
    void deleteMinute() { this->minute_ = nullptr;};
    inline string minute() const { DARABONBA_PTR_GET_DEFAULT(minute_, "") };
    inline GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList& setMinute(string minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


  protected:
    std::shared_ptr<vector<int64_t>> apiIdList_ = nullptr;
    std::shared_ptr<int32_t> errorApiCount_ = nullptr;
    std::shared_ptr<int32_t> errorAppCount_ = nullptr;
    std::shared_ptr<string> minute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
