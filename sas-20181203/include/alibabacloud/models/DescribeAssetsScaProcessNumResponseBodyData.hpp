// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETSSCAPROCESSNUMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETSSCAPROCESSNUMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAssetsScaProcessNumResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetsScaProcessNumResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetsScaProcessNumResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeAssetsScaProcessNumResponseBodyData() = default ;
    DescribeAssetsScaProcessNumResponseBodyData(const DescribeAssetsScaProcessNumResponseBodyData &) = default ;
    DescribeAssetsScaProcessNumResponseBodyData(DescribeAssetsScaProcessNumResponseBodyData &&) = default ;
    DescribeAssetsScaProcessNumResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetsScaProcessNumResponseBodyData() = default ;
    DescribeAssetsScaProcessNumResponseBodyData& operator=(const DescribeAssetsScaProcessNumResponseBodyData &) = default ;
    DescribeAssetsScaProcessNumResponseBodyData& operator=(DescribeAssetsScaProcessNumResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->uuid_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAssetsScaProcessNumResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeAssetsScaProcessNumResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of Java processes.
    // 
    // >  If no processes exist on the asset, no statistical result is returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The UUID of the asset.
    // 
    // >  If no processes exist on the asset, no statistical result is returned.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
