// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODYRESOURCESSUPPORTEDENGINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCESRESPONSEBODYRESOURCESSUPPORTEDENGINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAvailableResourcesResponseBodyResourcesSupportedEngines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(SupportedEngineVersion, supportedEngineVersion_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceClasses, supportedInstanceClasses_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(SupportedEngineVersion, supportedEngineVersion_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceClasses, supportedInstanceClasses_);
    };
    DescribeAvailableResourcesResponseBodyResourcesSupportedEngines() = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEngines(const DescribeAvailableResourcesResponseBodyResourcesSupportedEngines &) = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEngines(DescribeAvailableResourcesResponseBodyResourcesSupportedEngines &&) = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEngines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEngines() = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& operator=(const DescribeAvailableResourcesResponseBodyResourcesSupportedEngines &) = default ;
    DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& operator=(DescribeAvailableResourcesResponseBodyResourcesSupportedEngines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->supportedEngineVersion_ == nullptr && return this->supportedInstanceClasses_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // supportedEngineVersion Field Functions 
    bool hasSupportedEngineVersion() const { return this->supportedEngineVersion_ != nullptr;};
    void deleteSupportedEngineVersion() { this->supportedEngineVersion_ = nullptr;};
    inline string supportedEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(supportedEngineVersion_, "") };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& setSupportedEngineVersion(string supportedEngineVersion) { DARABONBA_PTR_SET_VALUE(supportedEngineVersion_, supportedEngineVersion) };


    // supportedInstanceClasses Field Functions 
    bool hasSupportedInstanceClasses() const { return this->supportedInstanceClasses_ != nullptr;};
    void deleteSupportedInstanceClasses() { this->supportedInstanceClasses_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses> & supportedInstanceClasses() const { DARABONBA_PTR_GET_CONST(supportedInstanceClasses_, vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>) };
    inline vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses> supportedInstanceClasses() { DARABONBA_PTR_GET(supportedInstanceClasses_, vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>) };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& setSupportedInstanceClasses(const vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses> & supportedInstanceClasses) { DARABONBA_PTR_SET_VALUE(supportedInstanceClasses_, supportedInstanceClasses) };
    inline DescribeAvailableResourcesResponseBodyResourcesSupportedEngines& setSupportedInstanceClasses(vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses> && supportedInstanceClasses) { DARABONBA_PTR_SET_RVALUE(supportedInstanceClasses_, supportedInstanceClasses) };


  protected:
    // The instance resource type. Valid values:
    // 
    // *   **ecs**: elastic storage mode
    // *   **serverless**: Serverless mode
    std::shared_ptr<string> mode_ = nullptr;
    // The available engine version.
    std::shared_ptr<string> supportedEngineVersion_ = nullptr;
    // The available specifications.
    std::shared_ptr<vector<Models::DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>> supportedInstanceClasses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
