// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDEDITINGPROJECTMATERIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddEditingProjectMaterialsResponseBodyMaterialList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddEditingProjectMaterialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialList, materialList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddEditingProjectMaterialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialList, materialList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddEditingProjectMaterialsResponseBody() = default ;
    AddEditingProjectMaterialsResponseBody(const AddEditingProjectMaterialsResponseBody &) = default ;
    AddEditingProjectMaterialsResponseBody(AddEditingProjectMaterialsResponseBody &&) = default ;
    AddEditingProjectMaterialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddEditingProjectMaterialsResponseBody() = default ;
    AddEditingProjectMaterialsResponseBody& operator=(const AddEditingProjectMaterialsResponseBody &) = default ;
    AddEditingProjectMaterialsResponseBody& operator=(AddEditingProjectMaterialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->materialList_ == nullptr
        && return this->requestId_ == nullptr; };
    // materialList Field Functions 
    bool hasMaterialList() const { return this->materialList_ != nullptr;};
    void deleteMaterialList() { this->materialList_ = nullptr;};
    inline const vector<AddEditingProjectMaterialsResponseBodyMaterialList> & materialList() const { DARABONBA_PTR_GET_CONST(materialList_, vector<AddEditingProjectMaterialsResponseBodyMaterialList>) };
    inline vector<AddEditingProjectMaterialsResponseBodyMaterialList> materialList() { DARABONBA_PTR_GET(materialList_, vector<AddEditingProjectMaterialsResponseBodyMaterialList>) };
    inline AddEditingProjectMaterialsResponseBody& setMaterialList(const vector<AddEditingProjectMaterialsResponseBodyMaterialList> & materialList) { DARABONBA_PTR_SET_VALUE(materialList_, materialList) };
    inline AddEditingProjectMaterialsResponseBody& setMaterialList(vector<AddEditingProjectMaterialsResponseBodyMaterialList> && materialList) { DARABONBA_PTR_SET_RVALUE(materialList_, materialList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddEditingProjectMaterialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The materials.
    std::shared_ptr<vector<AddEditingProjectMaterialsResponseBodyMaterialList>> materialList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
