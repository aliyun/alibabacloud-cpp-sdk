// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCNAMERESPONSEBODYCNAMEDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINCNAMERESPONSEBODYCNAMEDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodDomainCnameResponseBodyCnameDatasData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainCnameResponseBodyCnameDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainCnameResponseBodyCnameDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainCnameResponseBodyCnameDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeVodDomainCnameResponseBodyCnameDatas() = default ;
    DescribeVodDomainCnameResponseBodyCnameDatas(const DescribeVodDomainCnameResponseBodyCnameDatas &) = default ;
    DescribeVodDomainCnameResponseBodyCnameDatas(DescribeVodDomainCnameResponseBodyCnameDatas &&) = default ;
    DescribeVodDomainCnameResponseBodyCnameDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainCnameResponseBodyCnameDatas() = default ;
    DescribeVodDomainCnameResponseBodyCnameDatas& operator=(const DescribeVodDomainCnameResponseBodyCnameDatas &) = default ;
    DescribeVodDomainCnameResponseBodyCnameDatas& operator=(DescribeVodDomainCnameResponseBodyCnameDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData>) };
    inline vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData>) };
    inline DescribeVodDomainCnameResponseBodyCnameDatas& setData(const vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeVodDomainCnameResponseBodyCnameDatas& setData(vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodDomainCnameResponseBodyCnameDatasData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
