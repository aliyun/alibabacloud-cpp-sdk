// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATADATADATA_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATADATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKafkaClientIpResponseBodyDataDataDataDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpResponseBodyDataDataDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpResponseBodyDataDataDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpResponseBodyDataDataDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    GetKafkaClientIpResponseBodyDataDataDataData() = default ;
    GetKafkaClientIpResponseBodyDataDataDataData(const GetKafkaClientIpResponseBodyDataDataDataData &) = default ;
    GetKafkaClientIpResponseBodyDataDataDataData(GetKafkaClientIpResponseBodyDataDataDataData &&) = default ;
    GetKafkaClientIpResponseBodyDataDataDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpResponseBodyDataDataDataData() = default ;
    GetKafkaClientIpResponseBodyDataDataDataData& operator=(const GetKafkaClientIpResponseBodyDataDataDataData &) = default ;
    GetKafkaClientIpResponseBodyDataDataDataData& operator=(GetKafkaClientIpResponseBodyDataDataDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData>) };
    inline vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData>) };
    inline GetKafkaClientIpResponseBodyDataDataDataData& setData(const vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKafkaClientIpResponseBodyDataDataDataData& setData(vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::GetKafkaClientIpResponseBodyDataDataDataDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
