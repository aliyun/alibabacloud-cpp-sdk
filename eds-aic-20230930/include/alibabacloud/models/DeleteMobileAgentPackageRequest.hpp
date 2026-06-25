// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMOBILEAGENTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMOBILEAGENTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteMobileAgentPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PackageIds, packageIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageIds, packageIds_);
    };
    DeleteMobileAgentPackageRequest() = default ;
    DeleteMobileAgentPackageRequest(const DeleteMobileAgentPackageRequest &) = default ;
    DeleteMobileAgentPackageRequest(DeleteMobileAgentPackageRequest &&) = default ;
    DeleteMobileAgentPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMobileAgentPackageRequest() = default ;
    DeleteMobileAgentPackageRequest& operator=(const DeleteMobileAgentPackageRequest &) = default ;
    DeleteMobileAgentPackageRequest& operator=(DeleteMobileAgentPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageIds_ == nullptr; };
    // packageIds Field Functions 
    bool hasPackageIds() const { return this->packageIds_ != nullptr;};
    void deletePackageIds() { this->packageIds_ = nullptr;};
    inline const vector<string> & getPackageIds() const { DARABONBA_PTR_GET_CONST(packageIds_, vector<string>) };
    inline vector<string> getPackageIds() { DARABONBA_PTR_GET(packageIds_, vector<string>) };
    inline DeleteMobileAgentPackageRequest& setPackageIds(const vector<string> & packageIds) { DARABONBA_PTR_SET_VALUE(packageIds_, packageIds) };
    inline DeleteMobileAgentPackageRequest& setPackageIds(vector<string> && packageIds) { DARABONBA_PTR_SET_RVALUE(packageIds_, packageIds) };


  protected:
    // The list of packages.
    shared_ptr<vector<string>> packageIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
