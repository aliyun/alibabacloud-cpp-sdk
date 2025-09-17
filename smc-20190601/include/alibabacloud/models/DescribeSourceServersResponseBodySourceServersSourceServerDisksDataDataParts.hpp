// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSDATADATAPARTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOURCESERVERSRESPONSEBODYSOURCESERVERSSOURCESERVERDISKSDATADATAPARTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts& obj) { 
      DARABONBA_PTR_TO_JSON(Part, part_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts& obj) { 
      DARABONBA_PTR_FROM_JSON(Part, part_);
    };
    DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts(const DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts(DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts &&) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts() = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts& operator=(const DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts &) = default ;
    DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts& operator=(DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->part_ != nullptr; };
    // part Field Functions 
    bool hasPart() const { return this->part_ != nullptr;};
    void deletePart() { this->part_ = nullptr;};
    inline const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart> & part() const { DARABONBA_PTR_GET_CONST(part_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart>) };
    inline vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart> part() { DARABONBA_PTR_GET(part_, vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart>) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts& setPart(const vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart> & part) { DARABONBA_PTR_SET_VALUE(part_, part) };
    inline DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataParts& setPart(vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart> && part) { DARABONBA_PTR_SET_RVALUE(part_, part) };


  protected:
    std::shared_ptr<vector<Models::DescribeSourceServersResponseBodySourceServersSourceServerDisksDataDataPartsPart>> part_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
