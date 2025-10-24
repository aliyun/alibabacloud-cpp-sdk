// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATACLUSTERINFOSORTCOLS_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINFORESPONSEBODYDATACLUSTERINFOSORTCOLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetTableInfoResponseBodyDataClusterInfoSortCols : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInfoResponseBodyDataClusterInfoSortCols& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(order, order_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInfoResponseBodyDataClusterInfoSortCols& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(order, order_);
    };
    GetTableInfoResponseBodyDataClusterInfoSortCols() = default ;
    GetTableInfoResponseBodyDataClusterInfoSortCols(const GetTableInfoResponseBodyDataClusterInfoSortCols &) = default ;
    GetTableInfoResponseBodyDataClusterInfoSortCols(GetTableInfoResponseBodyDataClusterInfoSortCols &&) = default ;
    GetTableInfoResponseBodyDataClusterInfoSortCols(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInfoResponseBodyDataClusterInfoSortCols() = default ;
    GetTableInfoResponseBodyDataClusterInfoSortCols& operator=(const GetTableInfoResponseBodyDataClusterInfoSortCols &) = default ;
    GetTableInfoResponseBodyDataClusterInfoSortCols& operator=(GetTableInfoResponseBodyDataClusterInfoSortCols &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->order_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTableInfoResponseBodyDataClusterInfoSortCols& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline GetTableInfoResponseBodyDataClusterInfoSortCols& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


  protected:
    // The name of the sorting field.
    std::shared_ptr<string> name_ = nullptr;
    // The sorting order.
    std::shared_ptr<string> order_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
