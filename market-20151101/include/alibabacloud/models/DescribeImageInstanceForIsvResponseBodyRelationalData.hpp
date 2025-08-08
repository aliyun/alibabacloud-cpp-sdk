// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCEFORISVRESPONSEBODYRELATIONALDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINSTANCEFORISVRESPONSEBODYRELATIONALDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeImageInstanceForIsvResponseBodyRelationalData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInstanceForIsvResponseBodyRelationalData& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInstanceForIsvResponseBodyRelationalData& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
    };
    DescribeImageInstanceForIsvResponseBodyRelationalData() = default ;
    DescribeImageInstanceForIsvResponseBodyRelationalData(const DescribeImageInstanceForIsvResponseBodyRelationalData &) = default ;
    DescribeImageInstanceForIsvResponseBodyRelationalData(DescribeImageInstanceForIsvResponseBodyRelationalData &&) = default ;
    DescribeImageInstanceForIsvResponseBodyRelationalData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInstanceForIsvResponseBodyRelationalData() = default ;
    DescribeImageInstanceForIsvResponseBodyRelationalData& operator=(const DescribeImageInstanceForIsvResponseBodyRelationalData &) = default ;
    DescribeImageInstanceForIsvResponseBodyRelationalData& operator=(DescribeImageInstanceForIsvResponseBodyRelationalData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceStatus_ != nullptr; };
    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline DescribeImageInstanceForIsvResponseBodyRelationalData& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


  protected:
    std::shared_ptr<string> serviceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
