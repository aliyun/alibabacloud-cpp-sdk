// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTSPROPERTIESEXTERNALPROJECTPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYDATAPROJECTSPROPERTIESEXTERNALPROJECTPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties& obj) { 
      DARABONBA_PTR_TO_JSON(isExternalCatalogBound, isExternalCatalogBound_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(isExternalCatalogBound, isExternalCatalogBound_);
    };
    ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties() = default ;
    ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties(const ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties &) = default ;
    ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties(ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties &&) = default ;
    ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties() = default ;
    ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties& operator=(const ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties &) = default ;
    ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties& operator=(ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isExternalCatalogBound_ == nullptr; };
    // isExternalCatalogBound Field Functions 
    bool hasIsExternalCatalogBound() const { return this->isExternalCatalogBound_ != nullptr;};
    void deleteIsExternalCatalogBound() { this->isExternalCatalogBound_ = nullptr;};
    inline string isExternalCatalogBound() const { DARABONBA_PTR_GET_DEFAULT(isExternalCatalogBound_, "") };
    inline ListProjectsResponseBodyDataProjectsPropertiesExternalProjectProperties& setIsExternalCatalogBound(string isExternalCatalogBound) { DARABONBA_PTR_SET_VALUE(isExternalCatalogBound_, isExternalCatalogBound) };


  protected:
    // Indicates whether the external project is an external project for [data lakehouse solution 2.0](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/lake-warehouse-integrated-2-0-use-guide).
    std::shared_ptr<string> isExternalCatalogBound_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
