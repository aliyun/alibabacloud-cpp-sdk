// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATAFEATURESTATUSFEATURECONTAINERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENVIRONMENTFEATURERESPONSEBODYDATAFEATURESTATUSFEATURECONTAINERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& obj) { 
      DARABONBA_PTR_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& obj) { 
      DARABONBA_PTR_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers() = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers(const DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers &) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers(DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers &&) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers() = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& operator=(const DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers &) = default ;
    DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& operator=(DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->image_ != nullptr && this->name_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline const vector<string> & args() const { DARABONBA_PTR_GET_CONST(args_, vector<string>) };
    inline vector<string> args() { DARABONBA_PTR_GET(args_, vector<string>) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& setArgs(const vector<string> & args) { DARABONBA_PTR_SET_VALUE(args_, args) };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& setArgs(vector<string> && args) { DARABONBA_PTR_SET_RVALUE(args_, args) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeEnvironmentFeatureResponseBodyDataFeatureStatusFeatureContainers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The container parameters.
    std::shared_ptr<vector<string>> args_ = nullptr;
    // The container image.
    std::shared_ptr<string> image_ = nullptr;
    // The container name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
