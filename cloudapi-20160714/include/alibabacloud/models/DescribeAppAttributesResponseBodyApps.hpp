// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODYAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODYAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAppAttributesResponseBodyAppsAppAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppAttributesResponseBodyApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAttributesResponseBodyApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppAttribute, appAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAttributesResponseBodyApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppAttribute, appAttribute_);
    };
    DescribeAppAttributesResponseBodyApps() = default ;
    DescribeAppAttributesResponseBodyApps(const DescribeAppAttributesResponseBodyApps &) = default ;
    DescribeAppAttributesResponseBodyApps(DescribeAppAttributesResponseBodyApps &&) = default ;
    DescribeAppAttributesResponseBodyApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAttributesResponseBodyApps() = default ;
    DescribeAppAttributesResponseBodyApps& operator=(const DescribeAppAttributesResponseBodyApps &) = default ;
    DescribeAppAttributesResponseBodyApps& operator=(DescribeAppAttributesResponseBodyApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appAttribute_ == nullptr; };
    // appAttribute Field Functions 
    bool hasAppAttribute() const { return this->appAttribute_ != nullptr;};
    void deleteAppAttribute() { this->appAttribute_ = nullptr;};
    inline const vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute> & appAttribute() const { DARABONBA_PTR_GET_CONST(appAttribute_, vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute>) };
    inline vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute> appAttribute() { DARABONBA_PTR_GET(appAttribute_, vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute>) };
    inline DescribeAppAttributesResponseBodyApps& setAppAttribute(const vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute> & appAttribute) { DARABONBA_PTR_SET_VALUE(appAttribute_, appAttribute) };
    inline DescribeAppAttributesResponseBodyApps& setAppAttribute(vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute> && appAttribute) { DARABONBA_PTR_SET_RVALUE(appAttribute_, appAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeAppAttributesResponseBodyAppsAppAttribute>> appAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
