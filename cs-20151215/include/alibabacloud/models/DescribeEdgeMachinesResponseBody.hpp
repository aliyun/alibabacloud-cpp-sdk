// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEDGEMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEdgeMachinesResponseBodyEdgeMachines.hpp>
#include <alibabacloud/models/DescribeEdgeMachinesResponseBodyPageInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEdgeMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEdgeMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(edge_machines, edgeMachines_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEdgeMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(edge_machines, edgeMachines_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
    };
    DescribeEdgeMachinesResponseBody() = default ;
    DescribeEdgeMachinesResponseBody(const DescribeEdgeMachinesResponseBody &) = default ;
    DescribeEdgeMachinesResponseBody(DescribeEdgeMachinesResponseBody &&) = default ;
    DescribeEdgeMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEdgeMachinesResponseBody() = default ;
    DescribeEdgeMachinesResponseBody& operator=(const DescribeEdgeMachinesResponseBody &) = default ;
    DescribeEdgeMachinesResponseBody& operator=(DescribeEdgeMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->edgeMachines_ != nullptr
        && this->pageInfo_ != nullptr; };
    // edgeMachines Field Functions 
    bool hasEdgeMachines() const { return this->edgeMachines_ != nullptr;};
    void deleteEdgeMachines() { this->edgeMachines_ = nullptr;};
    inline const vector<DescribeEdgeMachinesResponseBodyEdgeMachines> & edgeMachines() const { DARABONBA_PTR_GET_CONST(edgeMachines_, vector<DescribeEdgeMachinesResponseBodyEdgeMachines>) };
    inline vector<DescribeEdgeMachinesResponseBodyEdgeMachines> edgeMachines() { DARABONBA_PTR_GET(edgeMachines_, vector<DescribeEdgeMachinesResponseBodyEdgeMachines>) };
    inline DescribeEdgeMachinesResponseBody& setEdgeMachines(const vector<DescribeEdgeMachinesResponseBodyEdgeMachines> & edgeMachines) { DARABONBA_PTR_SET_VALUE(edgeMachines_, edgeMachines) };
    inline DescribeEdgeMachinesResponseBody& setEdgeMachines(vector<DescribeEdgeMachinesResponseBodyEdgeMachines> && edgeMachines) { DARABONBA_PTR_SET_RVALUE(edgeMachines_, edgeMachines) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeEdgeMachinesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeEdgeMachinesResponseBodyPageInfo) };
    inline DescribeEdgeMachinesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeEdgeMachinesResponseBodyPageInfo) };
    inline DescribeEdgeMachinesResponseBody& setPageInfo(const DescribeEdgeMachinesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeEdgeMachinesResponseBody& setPageInfo(DescribeEdgeMachinesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


  protected:
    // The list of cloud-native boxes.
    std::shared_ptr<vector<DescribeEdgeMachinesResponseBodyEdgeMachines>> edgeMachines_ = nullptr;
    // The paging information.
    std::shared_ptr<DescribeEdgeMachinesResponseBodyPageInfo> pageInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
