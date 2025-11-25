// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEECSTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEECSTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEcsTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEcsTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEcsTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeInvadeEcsTrendResponseBodyDataList() = default ;
    DescribeInvadeEcsTrendResponseBodyDataList(const DescribeInvadeEcsTrendResponseBodyDataList &) = default ;
    DescribeInvadeEcsTrendResponseBodyDataList(DescribeInvadeEcsTrendResponseBodyDataList &&) = default ;
    DescribeInvadeEcsTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEcsTrendResponseBodyDataList() = default ;
    DescribeInvadeEcsTrendResponseBodyDataList& operator=(const DescribeInvadeEcsTrendResponseBodyDataList &) = default ;
    DescribeInvadeEcsTrendResponseBodyDataList& operator=(DescribeInvadeEcsTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsCount_ == nullptr
        && return this->time_ == nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int32_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
    inline DescribeInvadeEcsTrendResponseBodyDataList& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeInvadeEcsTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int32_t> ecsCount_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
