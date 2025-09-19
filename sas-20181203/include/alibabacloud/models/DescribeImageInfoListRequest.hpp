// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageInfoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeImageInfoListRequest() = default ;
    DescribeImageInfoListRequest(const DescribeImageInfoListRequest &) = default ;
    DescribeImageInfoListRequest(DescribeImageInfoListRequest &&) = default ;
    DescribeImageInfoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfoListRequest() = default ;
    DescribeImageInfoListRequest& operator=(const DescribeImageInfoListRequest &) = default ;
    DescribeImageInfoListRequest& operator=(DescribeImageInfoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uuids_ != nullptr; };
    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeImageInfoListRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The UUID of the server. Separate multiple UUIDs with commas (,).
    // 
    // > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/141932.html) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
