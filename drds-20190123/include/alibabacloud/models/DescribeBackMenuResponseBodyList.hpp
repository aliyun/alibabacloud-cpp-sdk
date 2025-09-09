// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKMENURESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKMENURESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeBackMenuResponseBodyListList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackMenuResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackMenuResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(list, list_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackMenuResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(list, list_);
    };
    DescribeBackMenuResponseBodyList() = default ;
    DescribeBackMenuResponseBodyList(const DescribeBackMenuResponseBodyList &) = default ;
    DescribeBackMenuResponseBodyList(DescribeBackMenuResponseBodyList &&) = default ;
    DescribeBackMenuResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackMenuResponseBodyList() = default ;
    DescribeBackMenuResponseBodyList& operator=(const DescribeBackMenuResponseBodyList &) = default ;
    DescribeBackMenuResponseBodyList& operator=(DescribeBackMenuResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->list_ != nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::DescribeBackMenuResponseBodyListList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::DescribeBackMenuResponseBodyListList>) };
    inline vector<Models::DescribeBackMenuResponseBodyListList> list() { DARABONBA_PTR_GET(list_, vector<Models::DescribeBackMenuResponseBodyListList>) };
    inline DescribeBackMenuResponseBodyList& setList(const vector<Models::DescribeBackMenuResponseBodyListList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeBackMenuResponseBodyList& setList(vector<Models::DescribeBackMenuResponseBodyListList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


  protected:
    std::shared_ptr<vector<Models::DescribeBackMenuResponseBodyListList>> list_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
