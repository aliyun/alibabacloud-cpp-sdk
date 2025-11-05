// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODYURLDETAILSURLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRELOADDETAILBYIDRESPONSEBODYURLDETAILSURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribePreloadDetailByIdResponseBodyUrlDetailsUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribePreloadDetailByIdResponseBodyUrlDetailsUrls() = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetailsUrls(const DescribePreloadDetailByIdResponseBodyUrlDetailsUrls &) = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetailsUrls(DescribePreloadDetailByIdResponseBodyUrlDetailsUrls &&) = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetailsUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreloadDetailByIdResponseBodyUrlDetailsUrls() = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& operator=(const DescribePreloadDetailByIdResponseBodyUrlDetailsUrls &) = default ;
    DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& operator=(DescribePreloadDetailByIdResponseBodyUrlDetailsUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->success_ == nullptr && return this->url_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribePreloadDetailByIdResponseBodyUrlDetailsUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The details of resource prefetch.
    // 
    // *   If the resource is prefetched on all POPs, "Successfully preloaded" is returned.
    // *   If the resource fails to be prefetched on some POPs, the failure details separated by vertical bars (|) are returned.
    std::shared_ptr<string> description_ = nullptr;
    // The success percentage, which indicates the number of POPs on which the resource is prefetched.
    std::shared_ptr<string> success_ = nullptr;
    // The URL of the prefetched resource.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
