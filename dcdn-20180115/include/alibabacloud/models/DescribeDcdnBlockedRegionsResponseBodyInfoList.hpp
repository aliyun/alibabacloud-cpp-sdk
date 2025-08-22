// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBLOCKEDREGIONSRESPONSEBODYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBLOCKEDREGIONSRESPONSEBODYINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnBlockedRegionsResponseBodyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnBlockedRegionsResponseBodyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(InfoItem, infoItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnBlockedRegionsResponseBodyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoItem, infoItem_);
    };
    DescribeDcdnBlockedRegionsResponseBodyInfoList() = default ;
    DescribeDcdnBlockedRegionsResponseBodyInfoList(const DescribeDcdnBlockedRegionsResponseBodyInfoList &) = default ;
    DescribeDcdnBlockedRegionsResponseBodyInfoList(DescribeDcdnBlockedRegionsResponseBodyInfoList &&) = default ;
    DescribeDcdnBlockedRegionsResponseBodyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnBlockedRegionsResponseBodyInfoList() = default ;
    DescribeDcdnBlockedRegionsResponseBodyInfoList& operator=(const DescribeDcdnBlockedRegionsResponseBodyInfoList &) = default ;
    DescribeDcdnBlockedRegionsResponseBodyInfoList& operator=(DescribeDcdnBlockedRegionsResponseBodyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->infoItem_ != nullptr; };
    // infoItem Field Functions 
    bool hasInfoItem() const { return this->infoItem_ != nullptr;};
    void deleteInfoItem() { this->infoItem_ = nullptr;};
    inline const vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem> & infoItem() const { DARABONBA_PTR_GET_CONST(infoItem_, vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem>) };
    inline vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem> infoItem() { DARABONBA_PTR_GET(infoItem_, vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem>) };
    inline DescribeDcdnBlockedRegionsResponseBodyInfoList& setInfoItem(const vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem> & infoItem) { DARABONBA_PTR_SET_VALUE(infoItem_, infoItem) };
    inline DescribeDcdnBlockedRegionsResponseBodyInfoList& setInfoItem(vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem> && infoItem) { DARABONBA_PTR_SET_RVALUE(infoItem_, infoItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnBlockedRegionsResponseBodyInfoListInfoItem>> infoItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
