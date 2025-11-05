// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDeliverListResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeliverListResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeliverListResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeliverListResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeCdnDeliverListResponseBodyContent() = default ;
    DescribeCdnDeliverListResponseBodyContent(const DescribeCdnDeliverListResponseBodyContent &) = default ;
    DescribeCdnDeliverListResponseBodyContent(DescribeCdnDeliverListResponseBodyContent &&) = default ;
    DescribeCdnDeliverListResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeliverListResponseBodyContent() = default ;
    DescribeCdnDeliverListResponseBodyContent& operator=(const DescribeCdnDeliverListResponseBodyContent &) = default ;
    DescribeCdnDeliverListResponseBodyContent& operator=(DescribeCdnDeliverListResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeCdnDeliverListResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeCdnDeliverListResponseBodyContentData>) };
    inline vector<Models::DescribeCdnDeliverListResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeCdnDeliverListResponseBodyContentData>) };
    inline DescribeCdnDeliverListResponseBodyContent& setData(const vector<Models::DescribeCdnDeliverListResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdnDeliverListResponseBodyContent& setData(vector<Models::DescribeCdnDeliverListResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnDeliverListResponseBodyContentData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
