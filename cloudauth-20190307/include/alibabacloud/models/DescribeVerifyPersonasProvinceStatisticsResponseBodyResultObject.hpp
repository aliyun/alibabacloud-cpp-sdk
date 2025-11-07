// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASPROVINCESTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(AllUserCnt, allUserCnt_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(AllUserCnt, allUserCnt_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject(const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject(DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& operator=(const DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& operator=(DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allUserCnt_ == nullptr
        && return this->items_ == nullptr; };
    // allUserCnt Field Functions 
    bool hasAllUserCnt() const { return this->allUserCnt_ != nullptr;};
    void deleteAllUserCnt() { this->allUserCnt_ = nullptr;};
    inline int64_t allUserCnt() const { DARABONBA_PTR_GET_DEFAULT(allUserCnt_, 0L) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& setAllUserCnt(int64_t allUserCnt) { DARABONBA_PTR_SET_VALUE(allUserCnt_, allUserCnt) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems>) };
    inline vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems>) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& setItems(const vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObject& setItems(vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // Total number of devices.
    std::shared_ptr<int64_t> allUserCnt_ = nullptr;
    // Data items.
    std::shared_ptr<vector<Models::DescribeVerifyPersonasProvinceStatisticsResponseBodyResultObjectItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
