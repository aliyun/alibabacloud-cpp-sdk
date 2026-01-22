// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTREAMURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTREAMURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVodStreamURLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStreamURLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStreamURLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeVodStreamURLRequest() = default ;
    DescribeVodStreamURLRequest(const DescribeVodStreamURLRequest &) = default ;
    DescribeVodStreamURLRequest(DescribeVodStreamURLRequest &&) = default ;
    DescribeVodStreamURLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStreamURLRequest() = default ;
    DescribeVodStreamURLRequest& operator=(const DescribeVodStreamURLRequest &) = default ;
    DescribeVodStreamURLRequest& operator=(DescribeVodStreamURLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->url_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodStreamURLRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeVodStreamURLRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
