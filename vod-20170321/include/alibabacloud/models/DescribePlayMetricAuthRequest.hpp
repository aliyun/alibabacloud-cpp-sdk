// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYMETRICAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayMetricAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayMetricAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayMetricAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribePlayMetricAuthRequest() = default ;
    DescribePlayMetricAuthRequest(const DescribePlayMetricAuthRequest &) = default ;
    DescribePlayMetricAuthRequest(DescribePlayMetricAuthRequest &&) = default ;
    DescribePlayMetricAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayMetricAuthRequest() = default ;
    DescribePlayMetricAuthRequest& operator=(const DescribePlayMetricAuthRequest &) = default ;
    DescribePlayMetricAuthRequest& operator=(DescribePlayMetricAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribePlayMetricAuthRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
