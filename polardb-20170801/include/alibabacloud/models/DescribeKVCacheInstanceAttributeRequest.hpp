// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKVCacheInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKVCacheInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KVCacheInstanceId, KVCacheInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKVCacheInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceId, KVCacheInstanceId_);
    };
    DescribeKVCacheInstanceAttributeRequest() = default ;
    DescribeKVCacheInstanceAttributeRequest(const DescribeKVCacheInstanceAttributeRequest &) = default ;
    DescribeKVCacheInstanceAttributeRequest(DescribeKVCacheInstanceAttributeRequest &&) = default ;
    DescribeKVCacheInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKVCacheInstanceAttributeRequest() = default ;
    DescribeKVCacheInstanceAttributeRequest& operator=(const DescribeKVCacheInstanceAttributeRequest &) = default ;
    DescribeKVCacheInstanceAttributeRequest& operator=(DescribeKVCacheInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->KVCacheInstanceId_ == nullptr; };
    // KVCacheInstanceId Field Functions 
    bool hasKVCacheInstanceId() const { return this->KVCacheInstanceId_ != nullptr;};
    void deleteKVCacheInstanceId() { this->KVCacheInstanceId_ = nullptr;};
    inline string getKVCacheInstanceId() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceId_, "") };
    inline DescribeKVCacheInstanceAttributeRequest& setKVCacheInstanceId(string KVCacheInstanceId) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceId_, KVCacheInstanceId) };


  protected:
    // The ID of the KVCache instance.
    // 
    // This parameter is required.
    shared_ptr<string> KVCacheInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
