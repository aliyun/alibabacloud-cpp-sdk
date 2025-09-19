// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTODELCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTODELCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAutoDelConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoDelConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoDelConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAutoDelConfigResponseBody() = default ;
    DescribeAutoDelConfigResponseBody(const DescribeAutoDelConfigResponseBody &) = default ;
    DescribeAutoDelConfigResponseBody(DescribeAutoDelConfigResponseBody &&) = default ;
    DescribeAutoDelConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoDelConfigResponseBody() = default ;
    DescribeAutoDelConfigResponseBody& operator=(const DescribeAutoDelConfigResponseBody &) = default ;
    DescribeAutoDelConfigResponseBody& operator=(DescribeAutoDelConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->requestId_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t days() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline DescribeAutoDelConfigResponseBody& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoDelConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of days during which a detected vulnerability is retained before the vulnerability is automatically deleted.
    std::shared_ptr<int32_t> days_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
