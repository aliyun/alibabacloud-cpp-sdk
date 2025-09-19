// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRENDRESPONSEBODYDATAITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRENDRESPONSEBODYDATAITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetDataTrendResponseBodyDataItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrendResponseBodyDataItemList& obj) { 
      DARABONBA_PTR_TO_JSON(CountList, countList_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrendResponseBodyDataItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(CountList, countList_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
    };
    GetDataTrendResponseBodyDataItemList() = default ;
    GetDataTrendResponseBodyDataItemList(const GetDataTrendResponseBodyDataItemList &) = default ;
    GetDataTrendResponseBodyDataItemList(GetDataTrendResponseBodyDataItemList &&) = default ;
    GetDataTrendResponseBodyDataItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrendResponseBodyDataItemList() = default ;
    GetDataTrendResponseBodyDataItemList& operator=(const GetDataTrendResponseBodyDataItemList &) = default ;
    GetDataTrendResponseBodyDataItemList& operator=(GetDataTrendResponseBodyDataItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->countList_ != nullptr
        && this->keyName_ != nullptr; };
    // countList Field Functions 
    bool hasCountList() const { return this->countList_ != nullptr;};
    void deleteCountList() { this->countList_ = nullptr;};
    inline const vector<int64_t> & countList() const { DARABONBA_PTR_GET_CONST(countList_, vector<int64_t>) };
    inline vector<int64_t> countList() { DARABONBA_PTR_GET(countList_, vector<int64_t>) };
    inline GetDataTrendResponseBodyDataItemList& setCountList(const vector<int64_t> & countList) { DARABONBA_PTR_SET_VALUE(countList_, countList) };
    inline GetDataTrendResponseBodyDataItemList& setCountList(vector<int64_t> && countList) { DARABONBA_PTR_SET_RVALUE(countList_, countList) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline GetDataTrendResponseBodyDataItemList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


  protected:
    // The statistical values of the trend data.
    std::shared_ptr<vector<int64_t>> countList_ = nullptr;
    // The type of the security data. Valid values:
    // 
    // *   **HC_NEW**: the number of new baseline risks.
    // *   **HC_OPERATE**: the number of handled baseline risks.
    // *   **VUL_NEW**: the number of new vulnerabilities.
    // *   **VUL_OPERATE**: the number of handled vulnerabilities.
    // *   **SUSP_NEW**: the number of new alerts.
    // *   **SUSP_OPERATE**: the number of handled alerts.
    std::shared_ptr<string> keyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
