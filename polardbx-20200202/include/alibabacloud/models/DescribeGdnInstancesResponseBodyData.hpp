// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGdnInstancesResponseBodyDataGdnInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeGdnInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGdnInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(GdnInstanceList, gdnInstanceList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGdnInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(GdnInstanceList, gdnInstanceList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
    };
    DescribeGdnInstancesResponseBodyData() = default ;
    DescribeGdnInstancesResponseBodyData(const DescribeGdnInstancesResponseBodyData &) = default ;
    DescribeGdnInstancesResponseBodyData(DescribeGdnInstancesResponseBodyData &&) = default ;
    DescribeGdnInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGdnInstancesResponseBodyData() = default ;
    DescribeGdnInstancesResponseBodyData& operator=(const DescribeGdnInstancesResponseBodyData &) = default ;
    DescribeGdnInstancesResponseBodyData& operator=(DescribeGdnInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gdnInstanceList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalNumber_ == nullptr; };
    // gdnInstanceList Field Functions 
    bool hasGdnInstanceList() const { return this->gdnInstanceList_ != nullptr;};
    void deleteGdnInstanceList() { this->gdnInstanceList_ = nullptr;};
    inline const vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList> & gdnInstanceList() const { DARABONBA_PTR_GET_CONST(gdnInstanceList_, vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList>) };
    inline vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList> gdnInstanceList() { DARABONBA_PTR_GET(gdnInstanceList_, vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList>) };
    inline DescribeGdnInstancesResponseBodyData& setGdnInstanceList(const vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList> & gdnInstanceList) { DARABONBA_PTR_SET_VALUE(gdnInstanceList_, gdnInstanceList) };
    inline DescribeGdnInstancesResponseBodyData& setGdnInstanceList(vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList> && gdnInstanceList) { DARABONBA_PTR_SET_RVALUE(gdnInstanceList_, gdnInstanceList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeGdnInstancesResponseBodyData& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGdnInstancesResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalNumber Field Functions 
    bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
    void deleteTotalNumber() { this->totalNumber_ = nullptr;};
    inline string totalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, "") };
    inline DescribeGdnInstancesResponseBodyData& setTotalNumber(string totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


  protected:
    std::shared_ptr<vector<Models::DescribeGdnInstancesResponseBodyDataGdnInstanceList>> gdnInstanceList_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> totalNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
