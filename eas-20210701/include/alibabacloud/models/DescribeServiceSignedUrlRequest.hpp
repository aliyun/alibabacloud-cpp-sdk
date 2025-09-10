// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICESIGNEDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICESIGNEDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceSignedUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceSignedUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Internal, internal_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceSignedUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Internal, internal_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeServiceSignedUrlRequest() = default ;
    DescribeServiceSignedUrlRequest(const DescribeServiceSignedUrlRequest &) = default ;
    DescribeServiceSignedUrlRequest(DescribeServiceSignedUrlRequest &&) = default ;
    DescribeServiceSignedUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceSignedUrlRequest() = default ;
    DescribeServiceSignedUrlRequest& operator=(const DescribeServiceSignedUrlRequest &) = default ;
    DescribeServiceSignedUrlRequest& operator=(DescribeServiceSignedUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expire_ != nullptr
        && this->internal_ != nullptr && this->type_ != nullptr; };
    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline DescribeServiceSignedUrlRequest& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // internal Field Functions 
    bool hasInternal() const { return this->internal_ != nullptr;};
    void deleteInternal() { this->internal_ = nullptr;};
    inline bool internal() const { DARABONBA_PTR_GET_DEFAULT(internal_, false) };
    inline DescribeServiceSignedUrlRequest& setInternal(bool internal) { DARABONBA_PTR_SET_VALUE(internal_, internal) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeServiceSignedUrlRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The period of time for which the URL expires.
    std::shared_ptr<int64_t> expire_ = nullptr;
    // Specifies whether to use the VPC connection.
    std::shared_ptr<bool> internal_ = nullptr;
    // The page type.
    // 
    // Valid values:
    // 
    // *   webview
    // *   monitor
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
