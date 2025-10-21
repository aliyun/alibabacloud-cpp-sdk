// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROW_HPP_
#define ALIBABACLOUD_MODELS_ROW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Cell.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Row : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Row& obj) { 
      DARABONBA_PTR_TO_JSON(cells, cells_);
    };
    friend void from_json(const Darabonba::Json& j, Row& obj) { 
      DARABONBA_PTR_FROM_JSON(cells, cells_);
    };
    Row() = default ;
    Row(const Row &) = default ;
    Row(Row &&) = default ;
    Row(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Row() = default ;
    Row& operator=(const Row &) = default ;
    Row& operator=(Row &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cells_ == nullptr; };
    // cells Field Functions 
    bool hasCells() const { return this->cells_ != nullptr;};
    void deleteCells() { this->cells_ = nullptr;};
    inline const vector<Cell> & cells() const { DARABONBA_PTR_GET_CONST(cells_, vector<Cell>) };
    inline vector<Cell> cells() { DARABONBA_PTR_GET(cells_, vector<Cell>) };
    inline Row& setCells(const vector<Cell> & cells) { DARABONBA_PTR_SET_VALUE(cells_, cells) };
    inline Row& setCells(vector<Cell> && cells) { DARABONBA_PTR_SET_RVALUE(cells_, cells) };


  protected:
    std::shared_ptr<vector<Cell>> cells_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
