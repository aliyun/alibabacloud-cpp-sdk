// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SENDERSTATISTICSDETAILBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SenderStatisticsDetailByParamResponseBodyDataMailDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SenderStatisticsDetailByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SenderStatisticsDetailByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(mailDetail, mailDetail_);
    };
    friend void from_json(const Darabonba::Json& j, SenderStatisticsDetailByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(mailDetail, mailDetail_);
    };
    SenderStatisticsDetailByParamResponseBodyData() = default ;
    SenderStatisticsDetailByParamResponseBodyData(const SenderStatisticsDetailByParamResponseBodyData &) = default ;
    SenderStatisticsDetailByParamResponseBodyData(SenderStatisticsDetailByParamResponseBodyData &&) = default ;
    SenderStatisticsDetailByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SenderStatisticsDetailByParamResponseBodyData() = default ;
    SenderStatisticsDetailByParamResponseBodyData& operator=(const SenderStatisticsDetailByParamResponseBodyData &) = default ;
    SenderStatisticsDetailByParamResponseBodyData& operator=(SenderStatisticsDetailByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mailDetail_ != nullptr; };
    // mailDetail Field Functions 
    bool hasMailDetail() const { return this->mailDetail_ != nullptr;};
    void deleteMailDetail() { this->mailDetail_ = nullptr;};
    inline const vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail> & mailDetail() const { DARABONBA_PTR_GET_CONST(mailDetail_, vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail>) };
    inline vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail> mailDetail() { DARABONBA_PTR_GET(mailDetail_, vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail>) };
    inline SenderStatisticsDetailByParamResponseBodyData& setMailDetail(const vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail> & mailDetail) { DARABONBA_PTR_SET_VALUE(mailDetail_, mailDetail) };
    inline SenderStatisticsDetailByParamResponseBodyData& setMailDetail(vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail> && mailDetail) { DARABONBA_PTR_SET_RVALUE(mailDetail_, mailDetail) };


  protected:
    std::shared_ptr<vector<Models::SenderStatisticsDetailByParamResponseBodyDataMailDetail>> mailDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
