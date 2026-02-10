// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSBUCKETSCANSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSBUCKETSCANSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetOssBucketScanStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssBucketScanStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssBucketScanStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BucketNameList, bucketNameList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    GetOssBucketScanStatisticRequest() = default ;
    GetOssBucketScanStatisticRequest(const GetOssBucketScanStatisticRequest &) = default ;
    GetOssBucketScanStatisticRequest(GetOssBucketScanStatisticRequest &&) = default ;
    GetOssBucketScanStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssBucketScanStatisticRequest() = default ;
    GetOssBucketScanStatisticRequest& operator=(const GetOssBucketScanStatisticRequest &) = default ;
    GetOssBucketScanStatisticRequest& operator=(GetOssBucketScanStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucketNameList_ == nullptr
        && this->source_ == nullptr; };
    // bucketNameList Field Functions 
    bool hasBucketNameList() const { return this->bucketNameList_ != nullptr;};
    void deleteBucketNameList() { this->bucketNameList_ = nullptr;};
    inline const vector<string> & getBucketNameList() const { DARABONBA_PTR_GET_CONST(bucketNameList_, vector<string>) };
    inline vector<string> getBucketNameList() { DARABONBA_PTR_GET(bucketNameList_, vector<string>) };
    inline GetOssBucketScanStatisticRequest& setBucketNameList(const vector<string> & bucketNameList) { DARABONBA_PTR_SET_VALUE(bucketNameList_, bucketNameList) };
    inline GetOssBucketScanStatisticRequest& setBucketNameList(vector<string> && bucketNameList) { DARABONBA_PTR_SET_RVALUE(bucketNameList_, bucketNameList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetOssBucketScanStatisticRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The names of the buckets.
    shared_ptr<vector<string>> bucketNameList_ {};
    // The data source. Valid values:
    // 
    // *   **API**: API operations.
    // *   **OSS**: Object Storage Service (OSS) file check.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
