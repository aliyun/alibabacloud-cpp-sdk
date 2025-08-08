// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODYSENSITIVECOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSENSITIVECOLUMNINFORESPONSEBODYSENSITIVECOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSensitiveColumnInfoResponseBodySensitiveColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSensitiveColumnInfoResponseBodySensitiveColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveColumn, sensitiveColumn_);
    };
    friend void from_json(const Darabonba::Json& j, ListSensitiveColumnInfoResponseBodySensitiveColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveColumn, sensitiveColumn_);
    };
    ListSensitiveColumnInfoResponseBodySensitiveColumnList() = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnList(const ListSensitiveColumnInfoResponseBodySensitiveColumnList &) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnList(ListSensitiveColumnInfoResponseBodySensitiveColumnList &&) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSensitiveColumnInfoResponseBodySensitiveColumnList() = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnList& operator=(const ListSensitiveColumnInfoResponseBodySensitiveColumnList &) = default ;
    ListSensitiveColumnInfoResponseBodySensitiveColumnList& operator=(ListSensitiveColumnInfoResponseBodySensitiveColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sensitiveColumn_ != nullptr; };
    // sensitiveColumn Field Functions 
    bool hasSensitiveColumn() const { return this->sensitiveColumn_ != nullptr;};
    void deleteSensitiveColumn() { this->sensitiveColumn_ = nullptr;};
    inline const vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn> & sensitiveColumn() const { DARABONBA_PTR_GET_CONST(sensitiveColumn_, vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn>) };
    inline vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn> sensitiveColumn() { DARABONBA_PTR_GET(sensitiveColumn_, vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn>) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnList& setSensitiveColumn(const vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn> & sensitiveColumn) { DARABONBA_PTR_SET_VALUE(sensitiveColumn_, sensitiveColumn) };
    inline ListSensitiveColumnInfoResponseBodySensitiveColumnList& setSensitiveColumn(vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn> && sensitiveColumn) { DARABONBA_PTR_SET_RVALUE(sensitiveColumn_, sensitiveColumn) };


  protected:
    std::shared_ptr<vector<Models::ListSensitiveColumnInfoResponseBodySensitiveColumnListSensitiveColumn>> sensitiveColumn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
