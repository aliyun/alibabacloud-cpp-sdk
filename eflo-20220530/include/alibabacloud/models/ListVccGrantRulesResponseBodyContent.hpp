// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCGRANTRULESRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCGRANTRULESRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVccGrantRulesResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccGrantRulesResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccGrantRulesResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccGrantRulesResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListVccGrantRulesResponseBodyContent() = default ;
    ListVccGrantRulesResponseBodyContent(const ListVccGrantRulesResponseBodyContent &) = default ;
    ListVccGrantRulesResponseBodyContent(ListVccGrantRulesResponseBodyContent &&) = default ;
    ListVccGrantRulesResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccGrantRulesResponseBodyContent() = default ;
    ListVccGrantRulesResponseBodyContent& operator=(const ListVccGrantRulesResponseBodyContent &) = default ;
    ListVccGrantRulesResponseBodyContent& operator=(ListVccGrantRulesResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->total_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListVccGrantRulesResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListVccGrantRulesResponseBodyContentData>) };
    inline vector<Models::ListVccGrantRulesResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListVccGrantRulesResponseBodyContentData>) };
    inline ListVccGrantRulesResponseBodyContent& setData(const vector<Models::ListVccGrantRulesResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListVccGrantRulesResponseBodyContent& setData(vector<Models::ListVccGrantRulesResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListVccGrantRulesResponseBodyContent& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // List of cross-account authorization information of Lingjun connection
    std::shared_ptr<vector<Models::ListVccGrantRulesResponseBodyContentData>> data_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
