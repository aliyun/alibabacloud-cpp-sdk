// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSSYSTEMPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSSYSTEMPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts& obj) { 
      DARABONBA_PTR_TO_JSON(Part, part_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts& obj) { 
      DARABONBA_PTR_FROM_JSON(Part, part_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts(const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts(DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->part_ != nullptr; };
    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart> part() { DARABONBA_PTR_GET(part_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart>) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts& setPart(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemParts& setPart(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksSystemPartsPart>> part_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
