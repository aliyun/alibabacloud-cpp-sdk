// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCNAMERESPONSEBODYCNAMEDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINCNAMERESPONSEBODYCNAMEDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainCnameResponseBodyCnameDatasData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainCnameResponseBodyCnameDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainCnameResponseBodyCnameDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainCnameResponseBodyCnameDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeDcdnDomainCnameResponseBodyCnameDatas() = default ;
    DescribeDcdnDomainCnameResponseBodyCnameDatas(const DescribeDcdnDomainCnameResponseBodyCnameDatas &) = default ;
    DescribeDcdnDomainCnameResponseBodyCnameDatas(DescribeDcdnDomainCnameResponseBodyCnameDatas &&) = default ;
    DescribeDcdnDomainCnameResponseBodyCnameDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainCnameResponseBodyCnameDatas() = default ;
    DescribeDcdnDomainCnameResponseBodyCnameDatas& operator=(const DescribeDcdnDomainCnameResponseBodyCnameDatas &) = default ;
    DescribeDcdnDomainCnameResponseBodyCnameDatas& operator=(DescribeDcdnDomainCnameResponseBodyCnameDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData>) };
    inline vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData>) };
    inline DescribeDcdnDomainCnameResponseBodyCnameDatas& setData(const vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainCnameResponseBodyCnameDatas& setData(vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainCnameResponseBodyCnameDatasData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
