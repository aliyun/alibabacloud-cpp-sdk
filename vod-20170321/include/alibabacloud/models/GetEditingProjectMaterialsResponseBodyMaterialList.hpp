// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLIST_HPP_
#define ALIBABACLOUD_MODELS_GETEDITINGPROJECTMATERIALSRESPONSEBODYMATERIALLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEditingProjectMaterialsResponseBodyMaterialListMaterial.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetEditingProjectMaterialsResponseBodyMaterialList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEditingProjectMaterialsResponseBodyMaterialList& obj) { 
      DARABONBA_PTR_TO_JSON(Material, material_);
    };
    friend void from_json(const Darabonba::Json& j, GetEditingProjectMaterialsResponseBodyMaterialList& obj) { 
      DARABONBA_PTR_FROM_JSON(Material, material_);
    };
    GetEditingProjectMaterialsResponseBodyMaterialList() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialList(const GetEditingProjectMaterialsResponseBodyMaterialList &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialList(GetEditingProjectMaterialsResponseBodyMaterialList &&) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEditingProjectMaterialsResponseBodyMaterialList() = default ;
    GetEditingProjectMaterialsResponseBodyMaterialList& operator=(const GetEditingProjectMaterialsResponseBodyMaterialList &) = default ;
    GetEditingProjectMaterialsResponseBodyMaterialList& operator=(GetEditingProjectMaterialsResponseBodyMaterialList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->material_ != nullptr; };
    // material Field Functions 
    bool hasMaterial() const { return this->material_ != nullptr;};
    void deleteMaterial() { this->material_ = nullptr;};
    inline const vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial> & material() const { DARABONBA_PTR_GET_CONST(material_, vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial>) };
    inline vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial> material() { DARABONBA_PTR_GET(material_, vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial>) };
    inline GetEditingProjectMaterialsResponseBodyMaterialList& setMaterial(const vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial> & material) { DARABONBA_PTR_SET_VALUE(material_, material) };
    inline GetEditingProjectMaterialsResponseBodyMaterialList& setMaterial(vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial> && material) { DARABONBA_PTR_SET_RVALUE(material_, material) };


  protected:
    std::shared_ptr<vector<Models::GetEditingProjectMaterialsResponseBodyMaterialListMaterial>> material_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
