// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGRESPONSEBODYROLEUSAGES_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORDELETINGRESPONSEBODYROLEUSAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200527
{
namespace Models
{
  class CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages() = default ;
    CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages(const CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages &) = default ;
    CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages(CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages &&) = default ;
    CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages() = default ;
    CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& operator=(const CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages &) = default ;
    CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& operator=(CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->region_ == nullptr
        && return this->resources_ == nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<string> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<string>) };
    inline vector<string> resources() { DARABONBA_PTR_GET(resources_, vector<string>) };
    inline CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& setResources(const vector<string> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages& setResources(vector<string> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<vector<string>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200527
#endif
