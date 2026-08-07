// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERAPIKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERAPIKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterApiKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterApiKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelSpaceName, modelSpaceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterApiKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelSpaceName, modelSpaceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAIDBClusterApiKeysRequest() = default ;
    DescribeAIDBClusterApiKeysRequest(const DescribeAIDBClusterApiKeysRequest &) = default ;
    DescribeAIDBClusterApiKeysRequest(DescribeAIDBClusterApiKeysRequest &&) = default ;
    DescribeAIDBClusterApiKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterApiKeysRequest() = default ;
    DescribeAIDBClusterApiKeysRequest& operator=(const DescribeAIDBClusterApiKeysRequest &) = default ;
    DescribeAIDBClusterApiKeysRequest& operator=(DescribeAIDBClusterApiKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelSpaceName_ == nullptr
        && this->regionId_ == nullptr; };
    // modelSpaceName Field Functions 
    bool hasModelSpaceName() const { return this->modelSpaceName_ != nullptr;};
    void deleteModelSpaceName() { this->modelSpaceName_ = nullptr;};
    inline string getModelSpaceName() const { DARABONBA_PTR_GET_DEFAULT(modelSpaceName_, "") };
    inline DescribeAIDBClusterApiKeysRequest& setModelSpaceName(string modelSpaceName) { DARABONBA_PTR_SET_VALUE(modelSpaceName_, modelSpaceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAIDBClusterApiKeysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> modelSpaceName_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
