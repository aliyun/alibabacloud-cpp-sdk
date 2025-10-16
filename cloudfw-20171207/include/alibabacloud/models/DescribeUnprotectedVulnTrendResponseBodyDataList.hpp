// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDVULNTRENDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNPROTECTEDVULNTRENDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUnprotectedVulnTrendResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnprotectedVulnTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(ProtectedVulnCnt, protectedVulnCnt_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(UnprotectedVulnCnt, unprotectedVulnCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnprotectedVulnTrendResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtectedVulnCnt, protectedVulnCnt_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(UnprotectedVulnCnt, unprotectedVulnCnt_);
    };
    DescribeUnprotectedVulnTrendResponseBodyDataList() = default ;
    DescribeUnprotectedVulnTrendResponseBodyDataList(const DescribeUnprotectedVulnTrendResponseBodyDataList &) = default ;
    DescribeUnprotectedVulnTrendResponseBodyDataList(DescribeUnprotectedVulnTrendResponseBodyDataList &&) = default ;
    DescribeUnprotectedVulnTrendResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnprotectedVulnTrendResponseBodyDataList() = default ;
    DescribeUnprotectedVulnTrendResponseBodyDataList& operator=(const DescribeUnprotectedVulnTrendResponseBodyDataList &) = default ;
    DescribeUnprotectedVulnTrendResponseBodyDataList& operator=(DescribeUnprotectedVulnTrendResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protectedVulnCnt_ == nullptr
        && return this->time_ == nullptr && return this->unprotectedVulnCnt_ == nullptr; };
    // protectedVulnCnt Field Functions 
    bool hasProtectedVulnCnt() const { return this->protectedVulnCnt_ != nullptr;};
    void deleteProtectedVulnCnt() { this->protectedVulnCnt_ = nullptr;};
    inline int32_t protectedVulnCnt() const { DARABONBA_PTR_GET_DEFAULT(protectedVulnCnt_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBodyDataList& setProtectedVulnCnt(int32_t protectedVulnCnt) { DARABONBA_PTR_SET_VALUE(protectedVulnCnt_, protectedVulnCnt) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeUnprotectedVulnTrendResponseBodyDataList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // unprotectedVulnCnt Field Functions 
    bool hasUnprotectedVulnCnt() const { return this->unprotectedVulnCnt_ != nullptr;};
    void deleteUnprotectedVulnCnt() { this->unprotectedVulnCnt_ = nullptr;};
    inline int32_t unprotectedVulnCnt() const { DARABONBA_PTR_GET_DEFAULT(unprotectedVulnCnt_, 0) };
    inline DescribeUnprotectedVulnTrendResponseBodyDataList& setUnprotectedVulnCnt(int32_t unprotectedVulnCnt) { DARABONBA_PTR_SET_VALUE(unprotectedVulnCnt_, unprotectedVulnCnt) };


  protected:
    std::shared_ptr<int32_t> protectedVulnCnt_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<int32_t> unprotectedVulnCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
