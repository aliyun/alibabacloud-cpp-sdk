// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNREPORTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnReportResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnReportResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnReportResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnReportResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeCdnReportResponseBodyContent() = default ;
    DescribeCdnReportResponseBodyContent(const DescribeCdnReportResponseBodyContent &) = default ;
    DescribeCdnReportResponseBodyContent(DescribeCdnReportResponseBodyContent &&) = default ;
    DescribeCdnReportResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnReportResponseBodyContent() = default ;
    DescribeCdnReportResponseBodyContent& operator=(const DescribeCdnReportResponseBodyContent &) = default ;
    DescribeCdnReportResponseBodyContent& operator=(DescribeCdnReportResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeCdnReportResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeCdnReportResponseBodyContentData>) };
    inline vector<Models::DescribeCdnReportResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeCdnReportResponseBodyContentData>) };
    inline DescribeCdnReportResponseBodyContent& setData(const vector<Models::DescribeCdnReportResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdnReportResponseBodyContent& setData(vector<Models::DescribeCdnReportResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnReportResponseBodyContentData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
