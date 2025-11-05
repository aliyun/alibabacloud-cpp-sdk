// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTLISTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnReportListResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportListResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportListResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportListResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeCdnReportListResponseBodyContent() = default ;
    DescribeCdnReportListResponseBodyContent(const DescribeCdnReportListResponseBodyContent &) = default ;
    DescribeCdnReportListResponseBodyContent(DescribeCdnReportListResponseBodyContent &&) = default ;
    DescribeCdnReportListResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportListResponseBodyContent() = default ;
    DescribeCdnReportListResponseBodyContent& operator=(const DescribeCdnReportListResponseBodyContent &) = default ;
    DescribeCdnReportListResponseBodyContent& operator=(DescribeCdnReportListResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeCdnReportListResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeCdnReportListResponseBodyContentData>) };
    inline vector<Models::DescribeCdnReportListResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeCdnReportListResponseBodyContentData>) };
    inline DescribeCdnReportListResponseBodyContent& setData(const vector<Models::DescribeCdnReportListResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdnReportListResponseBodyContent& setData(vector<Models::DescribeCdnReportListResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnReportListResponseBodyContentData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
