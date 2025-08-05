// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPackageResponseBodyDataAllowedProjectList.hpp>
#include <alibabacloud/models/GetPackageResponseBodyDataResourceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetPackageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(allowedProjectList, allowedProjectList_);
      DARABONBA_PTR_TO_JSON(resourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedProjectList, allowedProjectList_);
      DARABONBA_PTR_FROM_JSON(resourceList, resourceList_);
    };
    GetPackageResponseBodyData() = default ;
    GetPackageResponseBodyData(const GetPackageResponseBodyData &) = default ;
    GetPackageResponseBodyData(GetPackageResponseBodyData &&) = default ;
    GetPackageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageResponseBodyData() = default ;
    GetPackageResponseBodyData& operator=(const GetPackageResponseBodyData &) = default ;
    GetPackageResponseBodyData& operator=(GetPackageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedProjectList_ != nullptr
        && this->resourceList_ != nullptr; };
    // allowedProjectList Field Functions 
    bool hasAllowedProjectList() const { return this->allowedProjectList_ != nullptr;};
    void deleteAllowedProjectList() { this->allowedProjectList_ = nullptr;};
    inline const vector<Models::GetPackageResponseBodyDataAllowedProjectList> & allowedProjectList() const { DARABONBA_PTR_GET_CONST(allowedProjectList_, vector<Models::GetPackageResponseBodyDataAllowedProjectList>) };
    inline vector<Models::GetPackageResponseBodyDataAllowedProjectList> allowedProjectList() { DARABONBA_PTR_GET(allowedProjectList_, vector<Models::GetPackageResponseBodyDataAllowedProjectList>) };
    inline GetPackageResponseBodyData& setAllowedProjectList(const vector<Models::GetPackageResponseBodyDataAllowedProjectList> & allowedProjectList) { DARABONBA_PTR_SET_VALUE(allowedProjectList_, allowedProjectList) };
    inline GetPackageResponseBodyData& setAllowedProjectList(vector<Models::GetPackageResponseBodyDataAllowedProjectList> && allowedProjectList) { DARABONBA_PTR_SET_RVALUE(allowedProjectList_, allowedProjectList) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const Models::GetPackageResponseBodyDataResourceList & resourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, Models::GetPackageResponseBodyDataResourceList) };
    inline Models::GetPackageResponseBodyDataResourceList resourceList() { DARABONBA_PTR_GET(resourceList_, Models::GetPackageResponseBodyDataResourceList) };
    inline GetPackageResponseBodyData& setResourceList(const Models::GetPackageResponseBodyDataResourceList & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline GetPackageResponseBodyData& setResourceList(Models::GetPackageResponseBodyDataResourceList && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    // The projects in which the package is installed.
    std::shared_ptr<vector<Models::GetPackageResponseBodyDataAllowedProjectList>> allowedProjectList_ = nullptr;
    // The details of the resources that are included in the package.
    std::shared_ptr<Models::GetPackageResponseBodyDataResourceList> resourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
