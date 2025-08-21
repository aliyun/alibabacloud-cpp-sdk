// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODYCNAMEDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINCNAMERESPONSEBODYCNAMEDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainCnameResponseBodyCnameDatasData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainCnameResponseBodyCnameDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainCnameResponseBodyCnameDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainCnameResponseBodyCnameDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeDomainCnameResponseBodyCnameDatas() = default ;
    DescribeDomainCnameResponseBodyCnameDatas(const DescribeDomainCnameResponseBodyCnameDatas &) = default ;
    DescribeDomainCnameResponseBodyCnameDatas(DescribeDomainCnameResponseBodyCnameDatas &&) = default ;
    DescribeDomainCnameResponseBodyCnameDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainCnameResponseBodyCnameDatas() = default ;
    DescribeDomainCnameResponseBodyCnameDatas& operator=(const DescribeDomainCnameResponseBodyCnameDatas &) = default ;
    DescribeDomainCnameResponseBodyCnameDatas& operator=(DescribeDomainCnameResponseBodyCnameDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeDomainCnameResponseBodyCnameDatasData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeDomainCnameResponseBodyCnameDatasData>) };
    inline vector<Models::DescribeDomainCnameResponseBodyCnameDatasData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeDomainCnameResponseBodyCnameDatasData>) };
    inline DescribeDomainCnameResponseBodyCnameDatas& setData(const vector<Models::DescribeDomainCnameResponseBodyCnameDatasData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDomainCnameResponseBodyCnameDatas& setData(vector<Models::DescribeDomainCnameResponseBodyCnameDatasData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainCnameResponseBodyCnameDatasData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
