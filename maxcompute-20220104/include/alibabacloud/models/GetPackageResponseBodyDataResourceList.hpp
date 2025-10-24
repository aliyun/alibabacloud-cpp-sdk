// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODYDATARESOURCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETPACKAGERESPONSEBODYDATARESOURCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetPackageResponseBodyDataResourceListFunction.hpp>
#include <alibabacloud/models/GetPackageResponseBodyDataResourceListResource.hpp>
#include <alibabacloud/models/GetPackageResponseBodyDataResourceListTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetPackageResponseBodyDataResourceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPackageResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_TO_JSON(function, function_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetPackageResponseBodyDataResourceList& obj) { 
      DARABONBA_PTR_FROM_JSON(function, function_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(table, table_);
    };
    GetPackageResponseBodyDataResourceList() = default ;
    GetPackageResponseBodyDataResourceList(const GetPackageResponseBodyDataResourceList &) = default ;
    GetPackageResponseBodyDataResourceList(GetPackageResponseBodyDataResourceList &&) = default ;
    GetPackageResponseBodyDataResourceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPackageResponseBodyDataResourceList() = default ;
    GetPackageResponseBodyDataResourceList& operator=(const GetPackageResponseBodyDataResourceList &) = default ;
    GetPackageResponseBodyDataResourceList& operator=(GetPackageResponseBodyDataResourceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->function_ == nullptr
        && return this->resource_ == nullptr && return this->table_ == nullptr; };
    // function Field Functions 
    bool hasFunction() const { return this->function_ != nullptr;};
    void deleteFunction() { this->function_ = nullptr;};
    inline const vector<Models::GetPackageResponseBodyDataResourceListFunction> & function() const { DARABONBA_PTR_GET_CONST(function_, vector<Models::GetPackageResponseBodyDataResourceListFunction>) };
    inline vector<Models::GetPackageResponseBodyDataResourceListFunction> function() { DARABONBA_PTR_GET(function_, vector<Models::GetPackageResponseBodyDataResourceListFunction>) };
    inline GetPackageResponseBodyDataResourceList& setFunction(const vector<Models::GetPackageResponseBodyDataResourceListFunction> & function) { DARABONBA_PTR_SET_VALUE(function_, function) };
    inline GetPackageResponseBodyDataResourceList& setFunction(vector<Models::GetPackageResponseBodyDataResourceListFunction> && function) { DARABONBA_PTR_SET_RVALUE(function_, function) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::GetPackageResponseBodyDataResourceListResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::GetPackageResponseBodyDataResourceListResource>) };
    inline vector<Models::GetPackageResponseBodyDataResourceListResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::GetPackageResponseBodyDataResourceListResource>) };
    inline GetPackageResponseBodyDataResourceList& setResource(const vector<Models::GetPackageResponseBodyDataResourceListResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline GetPackageResponseBodyDataResourceList& setResource(vector<Models::GetPackageResponseBodyDataResourceListResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const vector<Models::GetPackageResponseBodyDataResourceListTable> & table() const { DARABONBA_PTR_GET_CONST(table_, vector<Models::GetPackageResponseBodyDataResourceListTable>) };
    inline vector<Models::GetPackageResponseBodyDataResourceListTable> table() { DARABONBA_PTR_GET(table_, vector<Models::GetPackageResponseBodyDataResourceListTable>) };
    inline GetPackageResponseBodyDataResourceList& setTable(const vector<Models::GetPackageResponseBodyDataResourceListTable> & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline GetPackageResponseBodyDataResourceList& setTable(vector<Models::GetPackageResponseBodyDataResourceListTable> && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    // The functions.
    std::shared_ptr<vector<Models::GetPackageResponseBodyDataResourceListFunction>> function_ = nullptr;
    // The resources.
    std::shared_ptr<vector<Models::GetPackageResponseBodyDataResourceListResource>> resource_ = nullptr;
    // The tables.
    std::shared_ptr<vector<Models::GetPackageResponseBodyDataResourceListTable>> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
