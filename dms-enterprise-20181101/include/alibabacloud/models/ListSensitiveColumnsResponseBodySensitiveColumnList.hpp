// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSRESPONSEBODYSENSITIVECOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNSRESPONSEBODYSENSITIVECOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnsResponseBodySensitiveColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnsResponseBodySensitiveColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveColumn, sensitiveColumn_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnsResponseBodySensitiveColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveColumn, sensitiveColumn_);
    };
    ListSensitiveColumnsResponseBodySensitiveColumnList() = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnList(const ListSensitiveColumnsResponseBodySensitiveColumnList &) = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnList(ListSensitiveColumnsResponseBodySensitiveColumnList &&) = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnsResponseBodySensitiveColumnList() = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnList& operator=(const ListSensitiveColumnsResponseBodySensitiveColumnList &) = default ;
    ListSensitiveColumnsResponseBodySensitiveColumnList& operator=(ListSensitiveColumnsResponseBodySensitiveColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sensitiveColumn_ == nullptr; };
    // sensitiveColumn Field Functions 
    bool hasSensitiveColumn() const { return this->sensitiveColumn_ != nullptr;};
    void deleteSensitiveColumn() { this->sensitiveColumn_ = nullptr;};
    inline const vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn> & sensitiveColumn() const { DARABONBA_PTR_GET_CONST(sensitiveColumn_, vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn>) };
    inline vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn> sensitiveColumn() { DARABONBA_PTR_GET(sensitiveColumn_, vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn>) };
    inline ListSensitiveColumnsResponseBodySensitiveColumnList& setSensitiveColumn(const vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn> & sensitiveColumn) { DARABONBA_PTR_SET_VALUE(sensitiveColumn_, sensitiveColumn) };
    inline ListSensitiveColumnsResponseBodySensitiveColumnList& setSensitiveColumn(vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn> && sensitiveColumn) { DARABONBA_PTR_SET_RVALUE(sensitiveColumn_, sensitiveColumn) };


  protected:
    std::shared_ptr<vector<Models::ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn>> sensitiveColumn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
