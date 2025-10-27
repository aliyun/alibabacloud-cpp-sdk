// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageLatestScanTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageLatestScanTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Digest, digest_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageLatestScanTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
    };
    DescribeImageLatestScanTaskRequest() = default ;
    DescribeImageLatestScanTaskRequest(const DescribeImageLatestScanTaskRequest &) = default ;
    DescribeImageLatestScanTaskRequest(DescribeImageLatestScanTaskRequest &&) = default ;
    DescribeImageLatestScanTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageLatestScanTaskRequest() = default ;
    DescribeImageLatestScanTaskRequest& operator=(const DescribeImageLatestScanTaskRequest &) = default ;
    DescribeImageLatestScanTaskRequest& operator=(DescribeImageLatestScanTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digest_ == nullptr; };
    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DescribeImageLatestScanTaskRequest& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


  protected:
    // The digest value of the image.
    // 
    // This parameter is required.
    std::shared_ptr<string> digest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
