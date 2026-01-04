// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OsType, osType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
    };
    DescribeImageInfosRequest() = default ;
    DescribeImageInfosRequest(const DescribeImageInfosRequest &) = default ;
    DescribeImageInfosRequest(DescribeImageInfosRequest &&) = default ;
    DescribeImageInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfosRequest() = default ;
    DescribeImageInfosRequest& operator=(const DescribeImageInfosRequest &) = default ;
    DescribeImageInfosRequest& operator=(DescribeImageInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->osType_ == nullptr; };
    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline DescribeImageInfosRequest& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


  protected:
    // The operating system (OS). You can specify only one OS in a request. If you do not specify a value for this parameter, images for all supported OSs are queried. Valid values:
    // 
    // *   linux
    // *   windows
    shared_ptr<string> osType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
