// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMBANNERRESPONSEBODYBANNERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMBANNERRESPONSEBODYBANNERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAlarmBannerResponseBodyBannerStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmBannerResponseBodyBannerStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmBannerResponseBodyBannerStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAlarmBannerResponseBodyBannerStatus() = default ;
    DescribeAlarmBannerResponseBodyBannerStatus(const DescribeAlarmBannerResponseBodyBannerStatus &) = default ;
    DescribeAlarmBannerResponseBodyBannerStatus(DescribeAlarmBannerResponseBodyBannerStatus &&) = default ;
    DescribeAlarmBannerResponseBodyBannerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmBannerResponseBodyBannerStatus() = default ;
    DescribeAlarmBannerResponseBodyBannerStatus& operator=(const DescribeAlarmBannerResponseBodyBannerStatus &) = default ;
    DescribeAlarmBannerResponseBodyBannerStatus& operator=(DescribeAlarmBannerResponseBodyBannerStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cause_ == nullptr
        && return this->count_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline DescribeAlarmBannerResponseBodyBannerStatus& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeAlarmBannerResponseBodyBannerStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeAlarmBannerResponseBodyBannerStatus& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAlarmBannerResponseBodyBannerStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> cause_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
