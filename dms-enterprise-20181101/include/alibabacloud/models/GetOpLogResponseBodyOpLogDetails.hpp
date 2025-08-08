// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODYOPLOGDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODYOPLOGDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOpLogResponseBodyOpLogDetailsOpLogDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOpLogResponseBodyOpLogDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpLogResponseBodyOpLogDetails& obj) { 
      DARABONBA_PTR_TO_JSON(OpLogDetail, opLogDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpLogResponseBodyOpLogDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(OpLogDetail, opLogDetail_);
    };
    GetOpLogResponseBodyOpLogDetails() = default ;
    GetOpLogResponseBodyOpLogDetails(const GetOpLogResponseBodyOpLogDetails &) = default ;
    GetOpLogResponseBodyOpLogDetails(GetOpLogResponseBodyOpLogDetails &&) = default ;
    GetOpLogResponseBodyOpLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpLogResponseBodyOpLogDetails() = default ;
    GetOpLogResponseBodyOpLogDetails& operator=(const GetOpLogResponseBodyOpLogDetails &) = default ;
    GetOpLogResponseBodyOpLogDetails& operator=(GetOpLogResponseBodyOpLogDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opLogDetail_ != nullptr; };
    // opLogDetail Field Functions 
    bool hasOpLogDetail() const { return this->opLogDetail_ != nullptr;};
    void deleteOpLogDetail() { this->opLogDetail_ = nullptr;};
    inline const vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail> & opLogDetail() const { DARABONBA_PTR_GET_CONST(opLogDetail_, vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail>) };
    inline vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail> opLogDetail() { DARABONBA_PTR_GET(opLogDetail_, vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail>) };
    inline GetOpLogResponseBodyOpLogDetails& setOpLogDetail(const vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail> & opLogDetail) { DARABONBA_PTR_SET_VALUE(opLogDetail_, opLogDetail) };
    inline GetOpLogResponseBodyOpLogDetails& setOpLogDetail(vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail> && opLogDetail) { DARABONBA_PTR_SET_RVALUE(opLogDetail_, opLogDetail) };


  protected:
    std::shared_ptr<vector<Models::GetOpLogResponseBodyOpLogDetailsOpLogDetail>> opLogDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
