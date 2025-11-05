// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODYCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODYCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/DescribeCdnReportResponseBodyContentDataDeliver.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportResponseBodyContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportResponseBodyContentData& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(deliver, deliver_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportResponseBodyContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(deliver, deliver_);
    };
    DescribeCdnReportResponseBodyContentData() = default ;
    DescribeCdnReportResponseBodyContentData(const DescribeCdnReportResponseBodyContentData &) = default ;
    DescribeCdnReportResponseBodyContentData(DescribeCdnReportResponseBodyContentData &&) = default ;
    DescribeCdnReportResponseBodyContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportResponseBodyContentData() = default ;
    DescribeCdnReportResponseBodyContentData& operator=(const DescribeCdnReportResponseBodyContentData &) = default ;
    DescribeCdnReportResponseBodyContentData& operator=(DescribeCdnReportResponseBodyContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->deliver_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<map<string, string>> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<map<string, string>>) };
    inline vector<map<string, string>> data() { DARABONBA_PTR_GET(data_, vector<map<string, string>>) };
    inline DescribeCdnReportResponseBodyContentData& setData(const vector<map<string, string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdnReportResponseBodyContentData& setData(vector<map<string, string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // deliver Field Functions 
    bool hasDeliver() const { return this->deliver_ != nullptr;};
    void deleteDeliver() { this->deliver_ = nullptr;};
    inline const Models::DescribeCdnReportResponseBodyContentDataDeliver & deliver() const { DARABONBA_PTR_GET_CONST(deliver_, Models::DescribeCdnReportResponseBodyContentDataDeliver) };
    inline Models::DescribeCdnReportResponseBodyContentDataDeliver deliver() { DARABONBA_PTR_GET(deliver_, Models::DescribeCdnReportResponseBodyContentDataDeliver) };
    inline DescribeCdnReportResponseBodyContentData& setDeliver(const Models::DescribeCdnReportResponseBodyContentDataDeliver & deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };
    inline DescribeCdnReportResponseBodyContentData& setDeliver(Models::DescribeCdnReportResponseBodyContentDataDeliver && deliver) { DARABONBA_PTR_SET_RVALUE(deliver_, deliver) };


  protected:
    std::shared_ptr<vector<map<string, string>>> data_ = nullptr;
    std::shared_ptr<Models::DescribeCdnReportResponseBodyContentDataDeliver> deliver_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
