// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ComponentIdList, componentIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ComponentIdList, componentIdList_);
    };
    DescribeApplicationParametersRequest() = default ;
    DescribeApplicationParametersRequest(const DescribeApplicationParametersRequest &) = default ;
    DescribeApplicationParametersRequest(DescribeApplicationParametersRequest &&) = default ;
    DescribeApplicationParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationParametersRequest() = default ;
    DescribeApplicationParametersRequest& operator=(const DescribeApplicationParametersRequest &) = default ;
    DescribeApplicationParametersRequest& operator=(DescribeApplicationParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->componentIdList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationParametersRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // componentIdList Field Functions 
    bool hasComponentIdList() const { return this->componentIdList_ != nullptr;};
    void deleteComponentIdList() { this->componentIdList_ = nullptr;};
    inline const vector<string> & getComponentIdList() const { DARABONBA_PTR_GET_CONST(componentIdList_, vector<string>) };
    inline vector<string> getComponentIdList() { DARABONBA_PTR_GET(componentIdList_, vector<string>) };
    inline DescribeApplicationParametersRequest& setComponentIdList(const vector<string> & componentIdList) { DARABONBA_PTR_SET_VALUE(componentIdList_, componentIdList) };
    inline DescribeApplicationParametersRequest& setComponentIdList(vector<string> && componentIdList) { DARABONBA_PTR_SET_RVALUE(componentIdList_, componentIdList) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<string>> componentIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
