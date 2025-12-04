// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODYTABLEDETAILS_HPP_
#define ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODYTABLEDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckScaleOutBalancedResponseBodyTableDetailsTableDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckScaleOutBalancedResponseBodyTableDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckScaleOutBalancedResponseBodyTableDetails& obj) { 
      DARABONBA_PTR_TO_JSON(TableDetail, tableDetail_);
    };
    friend void from_json(const Darabonba::Json& j, CheckScaleOutBalancedResponseBodyTableDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(TableDetail, tableDetail_);
    };
    CheckScaleOutBalancedResponseBodyTableDetails() = default ;
    CheckScaleOutBalancedResponseBodyTableDetails(const CheckScaleOutBalancedResponseBodyTableDetails &) = default ;
    CheckScaleOutBalancedResponseBodyTableDetails(CheckScaleOutBalancedResponseBodyTableDetails &&) = default ;
    CheckScaleOutBalancedResponseBodyTableDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckScaleOutBalancedResponseBodyTableDetails() = default ;
    CheckScaleOutBalancedResponseBodyTableDetails& operator=(const CheckScaleOutBalancedResponseBodyTableDetails &) = default ;
    CheckScaleOutBalancedResponseBodyTableDetails& operator=(CheckScaleOutBalancedResponseBodyTableDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tableDetail_ == nullptr; };
    // tableDetail Field Functions 
    bool hasTableDetail() const { return this->tableDetail_ != nullptr;};
    void deleteTableDetail() { this->tableDetail_ = nullptr;};
    inline const vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail> & tableDetail() const { DARABONBA_PTR_GET_CONST(tableDetail_, vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail>) };
    inline vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail> tableDetail() { DARABONBA_PTR_GET(tableDetail_, vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail>) };
    inline CheckScaleOutBalancedResponseBodyTableDetails& setTableDetail(const vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail> & tableDetail) { DARABONBA_PTR_SET_VALUE(tableDetail_, tableDetail) };
    inline CheckScaleOutBalancedResponseBodyTableDetails& setTableDetail(vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail> && tableDetail) { DARABONBA_PTR_SET_RVALUE(tableDetail_, tableDetail) };


  protected:
    std::shared_ptr<vector<Models::CheckScaleOutBalancedResponseBodyTableDetailsTableDetail>> tableDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
