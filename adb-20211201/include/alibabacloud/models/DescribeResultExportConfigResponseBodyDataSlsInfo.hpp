// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESULTEXPORTCONFIGRESPONSEBODYDATASLSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESULTEXPORTCONFIGRESPONSEBODYDATASLSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResultExportConfigResponseBodyDataSlsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResultExportConfigResponseBodyDataSlsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LogstoreTtl, logstoreTtl_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResultExportConfigResponseBodyDataSlsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LogstoreTtl, logstoreTtl_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
    };
    DescribeResultExportConfigResponseBodyDataSlsInfo() = default ;
    DescribeResultExportConfigResponseBodyDataSlsInfo(const DescribeResultExportConfigResponseBodyDataSlsInfo &) = default ;
    DescribeResultExportConfigResponseBodyDataSlsInfo(DescribeResultExportConfigResponseBodyDataSlsInfo &&) = default ;
    DescribeResultExportConfigResponseBodyDataSlsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResultExportConfigResponseBodyDataSlsInfo() = default ;
    DescribeResultExportConfigResponseBodyDataSlsInfo& operator=(const DescribeResultExportConfigResponseBodyDataSlsInfo &) = default ;
    DescribeResultExportConfigResponseBodyDataSlsInfo& operator=(DescribeResultExportConfigResponseBodyDataSlsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logstoreTtl_ != nullptr
        && this->resourceGroup_ != nullptr && this->slsProject_ != nullptr; };
    // logstoreTtl Field Functions 
    bool hasLogstoreTtl() const { return this->logstoreTtl_ != nullptr;};
    void deleteLogstoreTtl() { this->logstoreTtl_ = nullptr;};
    inline int32_t logstoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logstoreTtl_, 0) };
    inline DescribeResultExportConfigResponseBodyDataSlsInfo& setLogstoreTtl(int32_t logstoreTtl) { DARABONBA_PTR_SET_VALUE(logstoreTtl_, logstoreTtl) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeResultExportConfigResponseBodyDataSlsInfo& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline DescribeResultExportConfigResponseBodyDataSlsInfo& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


  protected:
    std::shared_ptr<int32_t> logstoreTtl_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> slsProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
