// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNSUBLISTRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnSubListResponseBodyContentData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnSubListResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnSubListResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnSubListResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    DescribeCdnSubListResponseBodyContent() = default ;
    DescribeCdnSubListResponseBodyContent(const DescribeCdnSubListResponseBodyContent &) = default ;
    DescribeCdnSubListResponseBodyContent(DescribeCdnSubListResponseBodyContent &&) = default ;
    DescribeCdnSubListResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnSubListResponseBodyContent() = default ;
    DescribeCdnSubListResponseBodyContent& operator=(const DescribeCdnSubListResponseBodyContent &) = default ;
    DescribeCdnSubListResponseBodyContent& operator=(DescribeCdnSubListResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeCdnSubListResponseBodyContentData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeCdnSubListResponseBodyContentData>) };
    inline vector<Models::DescribeCdnSubListResponseBodyContentData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeCdnSubListResponseBodyContentData>) };
    inline DescribeCdnSubListResponseBodyContent& setData(const vector<Models::DescribeCdnSubListResponseBodyContentData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCdnSubListResponseBodyContent& setData(vector<Models::DescribeCdnSubListResponseBodyContentData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeCdnSubListResponseBodyContentData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
