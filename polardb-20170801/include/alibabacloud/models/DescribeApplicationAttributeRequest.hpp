// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    DescribeApplicationAttributeRequest() = default ;
    DescribeApplicationAttributeRequest(const DescribeApplicationAttributeRequest &) = default ;
    DescribeApplicationAttributeRequest(DescribeApplicationAttributeRequest &&) = default ;
    DescribeApplicationAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeRequest() = default ;
    DescribeApplicationAttributeRequest& operator=(const DescribeApplicationAttributeRequest &) = default ;
    DescribeApplicationAttributeRequest& operator=(DescribeApplicationAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationAttributeRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
