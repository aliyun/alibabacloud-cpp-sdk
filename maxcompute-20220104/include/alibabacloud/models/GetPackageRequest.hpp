// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sourceProject, sourceProject_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sourceProject, sourceProject_);
    };
    GetPackageRequest() = default ;
    GetPackageRequest(const GetPackageRequest &) = default ;
    GetPackageRequest(GetPackageRequest &&) = default ;
    GetPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageRequest() = default ;
    GetPackageRequest& operator=(const GetPackageRequest &) = default ;
    GetPackageRequest& operator=(GetPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceProject_ != nullptr; };
    // sourceProject Field Functions 
    bool hasSourceProject() const { return this->sourceProject_ != nullptr;};
    void deleteSourceProject() { this->sourceProject_ = nullptr;};
    inline string sourceProject() const { DARABONBA_PTR_GET_DEFAULT(sourceProject_, "") };
    inline GetPackageRequest& setSourceProject(string sourceProject) { DARABONBA_PTR_SET_VALUE(sourceProject_, sourceProject) };


  protected:
    // The project to which the package belongs. This parameter is required if the package is installed in the MaxCompute project.
    std::shared_ptr<string> sourceProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
