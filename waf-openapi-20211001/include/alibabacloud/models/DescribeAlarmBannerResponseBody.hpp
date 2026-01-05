// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMBANNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMBANNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAlarmBannerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmBannerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BannerStatus, bannerStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmBannerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BannerStatus, bannerStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAlarmBannerResponseBody() = default ;
    DescribeAlarmBannerResponseBody(const DescribeAlarmBannerResponseBody &) = default ;
    DescribeAlarmBannerResponseBody(DescribeAlarmBannerResponseBody &&) = default ;
    DescribeAlarmBannerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmBannerResponseBody() = default ;
    DescribeAlarmBannerResponseBody& operator=(const DescribeAlarmBannerResponseBody &) = default ;
    DescribeAlarmBannerResponseBody& operator=(DescribeAlarmBannerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BannerStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BannerStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Cause, cause_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, BannerStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Cause, cause_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      BannerStatus() = default ;
      BannerStatus(const BannerStatus &) = default ;
      BannerStatus(BannerStatus &&) = default ;
      BannerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BannerStatus() = default ;
      BannerStatus& operator=(const BannerStatus &) = default ;
      BannerStatus& operator=(BannerStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cause_ == nullptr
        && this->count_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // cause Field Functions 
      bool hasCause() const { return this->cause_ != nullptr;};
      void deleteCause() { this->cause_ = nullptr;};
      inline string getCause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
      inline BannerStatus& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline BannerStatus& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline BannerStatus& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BannerStatus& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> cause_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<bool> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->bannerStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // bannerStatus Field Functions 
    bool hasBannerStatus() const { return this->bannerStatus_ != nullptr;};
    void deleteBannerStatus() { this->bannerStatus_ = nullptr;};
    inline const DescribeAlarmBannerResponseBody::BannerStatus & getBannerStatus() const { DARABONBA_PTR_GET_CONST(bannerStatus_, DescribeAlarmBannerResponseBody::BannerStatus) };
    inline DescribeAlarmBannerResponseBody::BannerStatus getBannerStatus() { DARABONBA_PTR_GET(bannerStatus_, DescribeAlarmBannerResponseBody::BannerStatus) };
    inline DescribeAlarmBannerResponseBody& setBannerStatus(const DescribeAlarmBannerResponseBody::BannerStatus & bannerStatus) { DARABONBA_PTR_SET_VALUE(bannerStatus_, bannerStatus) };
    inline DescribeAlarmBannerResponseBody& setBannerStatus(DescribeAlarmBannerResponseBody::BannerStatus && bannerStatus) { DARABONBA_PTR_SET_RVALUE(bannerStatus_, bannerStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmBannerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeAlarmBannerResponseBody::BannerStatus> bannerStatus_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
