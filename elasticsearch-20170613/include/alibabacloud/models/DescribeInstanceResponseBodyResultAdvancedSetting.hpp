// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULTADVANCEDSETTING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYRESULTADVANCEDSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeInstanceResponseBodyResultAdvancedSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyResultAdvancedSetting& obj) { 
      DARABONBA_PTR_TO_JSON(gcName, gcName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyResultAdvancedSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(gcName, gcName_);
    };
    DescribeInstanceResponseBodyResultAdvancedSetting() = default ;
    DescribeInstanceResponseBodyResultAdvancedSetting(const DescribeInstanceResponseBodyResultAdvancedSetting &) = default ;
    DescribeInstanceResponseBodyResultAdvancedSetting(DescribeInstanceResponseBodyResultAdvancedSetting &&) = default ;
    DescribeInstanceResponseBodyResultAdvancedSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyResultAdvancedSetting() = default ;
    DescribeInstanceResponseBodyResultAdvancedSetting& operator=(const DescribeInstanceResponseBodyResultAdvancedSetting &) = default ;
    DescribeInstanceResponseBodyResultAdvancedSetting& operator=(DescribeInstanceResponseBodyResultAdvancedSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gcName_ != nullptr; };
    // gcName Field Functions 
    bool hasGcName() const { return this->gcName_ != nullptr;};
    void deleteGcName() { this->gcName_ = nullptr;};
    inline string gcName() const { DARABONBA_PTR_GET_DEFAULT(gcName_, "") };
    inline DescribeInstanceResponseBodyResultAdvancedSetting& setGcName(string gcName) { DARABONBA_PTR_SET_VALUE(gcName_, gcName) };


  protected:
    std::shared_ptr<string> gcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
