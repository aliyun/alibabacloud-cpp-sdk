// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHOSSBUCKETSCANINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHOSSBUCKETSCANINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RefreshOssBucketScanInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshOssBucketScanInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshOssBucketScanInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    RefreshOssBucketScanInfoRequest() = default ;
    RefreshOssBucketScanInfoRequest(const RefreshOssBucketScanInfoRequest &) = default ;
    RefreshOssBucketScanInfoRequest(RefreshOssBucketScanInfoRequest &&) = default ;
    RefreshOssBucketScanInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshOssBucketScanInfoRequest() = default ;
    RefreshOssBucketScanInfoRequest& operator=(const RefreshOssBucketScanInfoRequest &) = default ;
    RefreshOssBucketScanInfoRequest& operator=(RefreshOssBucketScanInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->source_ == nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline RefreshOssBucketScanInfoRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The service source. Valid values:
    // 
    // - **OSS**: OSS
    // - **NAS**: NAS
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
