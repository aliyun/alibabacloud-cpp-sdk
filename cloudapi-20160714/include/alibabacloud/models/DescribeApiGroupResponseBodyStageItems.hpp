// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYSTAGEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODYSTAGEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApiGroupResponseBodyStageItemsStageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupResponseBodyStageItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupResponseBodyStageItems& obj) { 
      DARABONBA_PTR_TO_JSON(StageInfo, stageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupResponseBodyStageItems& obj) { 
      DARABONBA_PTR_FROM_JSON(StageInfo, stageInfo_);
    };
    DescribeApiGroupResponseBodyStageItems() = default ;
    DescribeApiGroupResponseBodyStageItems(const DescribeApiGroupResponseBodyStageItems &) = default ;
    DescribeApiGroupResponseBodyStageItems(DescribeApiGroupResponseBodyStageItems &&) = default ;
    DescribeApiGroupResponseBodyStageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupResponseBodyStageItems() = default ;
    DescribeApiGroupResponseBodyStageItems& operator=(const DescribeApiGroupResponseBodyStageItems &) = default ;
    DescribeApiGroupResponseBodyStageItems& operator=(DescribeApiGroupResponseBodyStageItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->stageInfo_ == nullptr; };
    // stageInfo Field Functions 
    bool hasStageInfo() const { return this->stageInfo_ != nullptr;};
    void deleteStageInfo() { this->stageInfo_ = nullptr;};
    inline const vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo> & stageInfo() const { DARABONBA_PTR_GET_CONST(stageInfo_, vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo>) };
    inline vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo> stageInfo() { DARABONBA_PTR_GET(stageInfo_, vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo>) };
    inline DescribeApiGroupResponseBodyStageItems& setStageInfo(const vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo> & stageInfo) { DARABONBA_PTR_SET_VALUE(stageInfo_, stageInfo) };
    inline DescribeApiGroupResponseBodyStageItems& setStageInfo(vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo> && stageInfo) { DARABONBA_PTR_SET_RVALUE(stageInfo_, stageInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeApiGroupResponseBodyStageItemsStageInfo>> stageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
