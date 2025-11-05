// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSRESPONSEBODYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSRESPONSEBODYINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBlockedRegionsResponseBodyInfoListInfoItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeBlockedRegionsResponseBodyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockedRegionsResponseBodyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(InfoItem, infoItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockedRegionsResponseBodyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(InfoItem, infoItem_);
    };
    DescribeBlockedRegionsResponseBodyInfoList() = default ;
    DescribeBlockedRegionsResponseBodyInfoList(const DescribeBlockedRegionsResponseBodyInfoList &) = default ;
    DescribeBlockedRegionsResponseBodyInfoList(DescribeBlockedRegionsResponseBodyInfoList &&) = default ;
    DescribeBlockedRegionsResponseBodyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockedRegionsResponseBodyInfoList() = default ;
    DescribeBlockedRegionsResponseBodyInfoList& operator=(const DescribeBlockedRegionsResponseBodyInfoList &) = default ;
    DescribeBlockedRegionsResponseBodyInfoList& operator=(DescribeBlockedRegionsResponseBodyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->infoItem_ == nullptr; };
    // infoItem Field Functions 
    bool hasInfoItem() const { return this->infoItem_ != nullptr;};
    void deleteInfoItem() { this->infoItem_ = nullptr;};
    inline const vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem> & infoItem() const { DARABONBA_PTR_GET_CONST(infoItem_, vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem>) };
    inline vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem> infoItem() { DARABONBA_PTR_GET(infoItem_, vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem>) };
    inline DescribeBlockedRegionsResponseBodyInfoList& setInfoItem(const vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem> & infoItem) { DARABONBA_PTR_SET_VALUE(infoItem_, infoItem) };
    inline DescribeBlockedRegionsResponseBodyInfoList& setInfoItem(vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem> && infoItem) { DARABONBA_PTR_SET_RVALUE(infoItem_, infoItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeBlockedRegionsResponseBodyInfoListInfoItem>> infoItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
