// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKafkaClientIpResponseBodyDataDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    GetKafkaClientIpResponseBodyDataData() = default ;
    GetKafkaClientIpResponseBodyDataData(const GetKafkaClientIpResponseBodyDataData &) = default ;
    GetKafkaClientIpResponseBodyDataData(GetKafkaClientIpResponseBodyDataData &&) = default ;
    GetKafkaClientIpResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpResponseBodyDataData() = default ;
    GetKafkaClientIpResponseBodyDataData& operator=(const GetKafkaClientIpResponseBodyDataData &) = default ;
    GetKafkaClientIpResponseBodyDataData& operator=(GetKafkaClientIpResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::GetKafkaClientIpResponseBodyDataDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::GetKafkaClientIpResponseBodyDataDataData>) };
    inline vector<Models::GetKafkaClientIpResponseBodyDataDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::GetKafkaClientIpResponseBodyDataDataData>) };
    inline GetKafkaClientIpResponseBodyDataData& setData(const vector<Models::GetKafkaClientIpResponseBodyDataDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKafkaClientIpResponseBodyDataData& setData(vector<Models::GetKafkaClientIpResponseBodyDataDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::GetKafkaClientIpResponseBodyDataDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
