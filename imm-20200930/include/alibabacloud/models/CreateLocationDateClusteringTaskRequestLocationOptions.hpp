// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKREQUESTLOCATIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKREQUESTLOCATIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateLocationDateClusteringTaskRequestLocationOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocationDateClusteringTaskRequestLocationOptions& obj) { 
      DARABONBA_PTR_TO_JSON(LocationDateClusterLevels, locationDateClusterLevels_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocationDateClusteringTaskRequestLocationOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(LocationDateClusterLevels, locationDateClusterLevels_);
    };
    CreateLocationDateClusteringTaskRequestLocationOptions() = default ;
    CreateLocationDateClusteringTaskRequestLocationOptions(const CreateLocationDateClusteringTaskRequestLocationOptions &) = default ;
    CreateLocationDateClusteringTaskRequestLocationOptions(CreateLocationDateClusteringTaskRequestLocationOptions &&) = default ;
    CreateLocationDateClusteringTaskRequestLocationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocationDateClusteringTaskRequestLocationOptions() = default ;
    CreateLocationDateClusteringTaskRequestLocationOptions& operator=(const CreateLocationDateClusteringTaskRequestLocationOptions &) = default ;
    CreateLocationDateClusteringTaskRequestLocationOptions& operator=(CreateLocationDateClusteringTaskRequestLocationOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->locationDateClusterLevels_ != nullptr; };
    // locationDateClusterLevels Field Functions 
    bool hasLocationDateClusterLevels() const { return this->locationDateClusterLevels_ != nullptr;};
    void deleteLocationDateClusterLevels() { this->locationDateClusterLevels_ = nullptr;};
    inline const vector<string> & locationDateClusterLevels() const { DARABONBA_PTR_GET_CONST(locationDateClusterLevels_, vector<string>) };
    inline vector<string> locationDateClusterLevels() { DARABONBA_PTR_GET(locationDateClusterLevels_, vector<string>) };
    inline CreateLocationDateClusteringTaskRequestLocationOptions& setLocationDateClusterLevels(const vector<string> & locationDateClusterLevels) { DARABONBA_PTR_SET_VALUE(locationDateClusterLevels_, locationDateClusterLevels) };
    inline CreateLocationDateClusteringTaskRequestLocationOptions& setLocationDateClusterLevels(vector<string> && locationDateClusterLevels) { DARABONBA_PTR_SET_RVALUE(locationDateClusterLevels_, locationDateClusterLevels) };


  protected:
    // The administrative division levels. You can specify multiple administrative division levels.
    // 
    // For example, you uploaded photos that were taken from March 3, 2024 to March 5, 2024 in Hangzhou and photos that were taken from March 6, 2024 to March 8, 2024 in Jiaxing. When you call the operation and set the parameter to `["city", "province"]`, the following spatiotemporal clusters are created from these photos:
    // 
    // *   March 3, 2024 to March 5, 2024, Hangzhou
    // *   March 6, 2024 to March 8, 2024, Jiaxing
    // *   March 3, 2024 to March 8, 2024, Zhejiang
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> locationDateClusterLevels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
