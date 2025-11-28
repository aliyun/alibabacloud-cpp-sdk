// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGESTATINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGESTATINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeEdgeStatInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeStatInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TotalDeviceLicenseCount, totalDeviceLicenseCount_);
      DARABONBA_PTR_TO_JSON(UsedDeviceLicenseCount, usedDeviceLicenseCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeStatInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TotalDeviceLicenseCount, totalDeviceLicenseCount_);
      DARABONBA_PTR_FROM_JSON(UsedDeviceLicenseCount, usedDeviceLicenseCount_);
    };
    DescribeEdgeStatInfoResponseBodyData() = default ;
    DescribeEdgeStatInfoResponseBodyData(const DescribeEdgeStatInfoResponseBodyData &) = default ;
    DescribeEdgeStatInfoResponseBodyData(DescribeEdgeStatInfoResponseBodyData &&) = default ;
    DescribeEdgeStatInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeStatInfoResponseBodyData() = default ;
    DescribeEdgeStatInfoResponseBodyData& operator=(const DescribeEdgeStatInfoResponseBodyData &) = default ;
    DescribeEdgeStatInfoResponseBodyData& operator=(DescribeEdgeStatInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->totalDeviceLicenseCount_ == nullptr
        && return this->usedDeviceLicenseCount_ == nullptr; };
    // totalDeviceLicenseCount Field Functions 
    bool hasTotalDeviceLicenseCount() const { return this->totalDeviceLicenseCount_ != nullptr;};
    void deleteTotalDeviceLicenseCount() { this->totalDeviceLicenseCount_ = nullptr;};
    inline int64_t totalDeviceLicenseCount() const { DARABONBA_PTR_GET_DEFAULT(totalDeviceLicenseCount_, 0L) };
    inline DescribeEdgeStatInfoResponseBodyData& setTotalDeviceLicenseCount(int64_t totalDeviceLicenseCount) { DARABONBA_PTR_SET_VALUE(totalDeviceLicenseCount_, totalDeviceLicenseCount) };


    // usedDeviceLicenseCount Field Functions 
    bool hasUsedDeviceLicenseCount() const { return this->usedDeviceLicenseCount_ != nullptr;};
    void deleteUsedDeviceLicenseCount() { this->usedDeviceLicenseCount_ = nullptr;};
    inline int64_t usedDeviceLicenseCount() const { DARABONBA_PTR_GET_DEFAULT(usedDeviceLicenseCount_, 0L) };
    inline DescribeEdgeStatInfoResponseBodyData& setUsedDeviceLicenseCount(int64_t usedDeviceLicenseCount) { DARABONBA_PTR_SET_VALUE(usedDeviceLicenseCount_, usedDeviceLicenseCount) };


  protected:
    std::shared_ptr<int64_t> totalDeviceLicenseCount_ = nullptr;
    std::shared_ptr<int64_t> usedDeviceLicenseCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
