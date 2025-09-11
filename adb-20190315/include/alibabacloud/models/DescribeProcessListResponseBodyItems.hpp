// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROCESSLISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProcessListResponseBodyItemsProcess.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeProcessListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProcessListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Process, process_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProcessListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Process, process_);
    };
    DescribeProcessListResponseBodyItems() = default ;
    DescribeProcessListResponseBodyItems(const DescribeProcessListResponseBodyItems &) = default ;
    DescribeProcessListResponseBodyItems(DescribeProcessListResponseBodyItems &&) = default ;
    DescribeProcessListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProcessListResponseBodyItems() = default ;
    DescribeProcessListResponseBodyItems& operator=(const DescribeProcessListResponseBodyItems &) = default ;
    DescribeProcessListResponseBodyItems& operator=(DescribeProcessListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->process_ != nullptr; };
    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline const vector<Models::DescribeProcessListResponseBodyItemsProcess> & process() const { DARABONBA_PTR_GET_CONST(process_, vector<Models::DescribeProcessListResponseBodyItemsProcess>) };
    inline vector<Models::DescribeProcessListResponseBodyItemsProcess> process() { DARABONBA_PTR_GET(process_, vector<Models::DescribeProcessListResponseBodyItemsProcess>) };
    inline DescribeProcessListResponseBodyItems& setProcess(const vector<Models::DescribeProcessListResponseBodyItemsProcess> & process) { DARABONBA_PTR_SET_VALUE(process_, process) };
    inline DescribeProcessListResponseBodyItems& setProcess(vector<Models::DescribeProcessListResponseBodyItemsProcess> && process) { DARABONBA_PTR_SET_RVALUE(process_, process) };


  protected:
    std::shared_ptr<vector<Models::DescribeProcessListResponseBodyItemsProcess>> process_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
