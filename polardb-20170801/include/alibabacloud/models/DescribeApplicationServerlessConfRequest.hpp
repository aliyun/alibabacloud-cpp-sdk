// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSERVERLESSCONFREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSERVERLESSCONFREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationServerlessConfRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationServerlessConfRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationServerlessConfRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    DescribeApplicationServerlessConfRequest() = default ;
    DescribeApplicationServerlessConfRequest(const DescribeApplicationServerlessConfRequest &) = default ;
    DescribeApplicationServerlessConfRequest(DescribeApplicationServerlessConfRequest &&) = default ;
    DescribeApplicationServerlessConfRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationServerlessConfRequest() = default ;
    DescribeApplicationServerlessConfRequest& operator=(const DescribeApplicationServerlessConfRequest &) = default ;
    DescribeApplicationServerlessConfRequest& operator=(DescribeApplicationServerlessConfRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationServerlessConfRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
