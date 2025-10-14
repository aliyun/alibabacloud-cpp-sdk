// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODYALERTGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODYALERTGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
    };
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup(const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup(DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup &&) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup& operator=(const DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup& operator=(DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertGroup_ == nullptr; };
    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const vector<string> & alertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
    inline vector<string> alertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBodyAlertGroup& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


  protected:
    std::shared_ptr<vector<string>> alertGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
