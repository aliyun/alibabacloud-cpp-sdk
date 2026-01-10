// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSEROSSLOCATION_HPP_
#define ALIBABACLOUD_MODELS_BROWSEROSSLOCATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserOssLocation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserOssLocation& obj) { 
      DARABONBA_PTR_TO_JSON(bucket, bucket_);
      DARABONBA_PTR_TO_JSON(prefix, prefix_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserOssLocation& obj) { 
      DARABONBA_PTR_FROM_JSON(bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(prefix, prefix_);
    };
    BrowserOssLocation() = default ;
    BrowserOssLocation(const BrowserOssLocation &) = default ;
    BrowserOssLocation(BrowserOssLocation &&) = default ;
    BrowserOssLocation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserOssLocation() = default ;
    BrowserOssLocation& operator=(const BrowserOssLocation &) = default ;
    BrowserOssLocation& operator=(BrowserOssLocation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bucket_ == nullptr
        && this->prefix_ == nullptr; };
    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline BrowserOssLocation& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline BrowserOssLocation& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


  protected:
    shared_ptr<string> bucket_ {};
    shared_ptr<string> prefix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
