// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATADATA_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKafkaClientIpResponseBodyDataDataDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpResponseBodyDataDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpResponseBodyDataDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpResponseBodyDataDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetKafkaClientIpResponseBodyDataDataData() = default ;
    GetKafkaClientIpResponseBodyDataDataData(const GetKafkaClientIpResponseBodyDataDataData &) = default ;
    GetKafkaClientIpResponseBodyDataDataData(GetKafkaClientIpResponseBodyDataDataData &&) = default ;
    GetKafkaClientIpResponseBodyDataDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpResponseBodyDataDataData() = default ;
    GetKafkaClientIpResponseBodyDataDataData& operator=(const GetKafkaClientIpResponseBodyDataDataData &) = default ;
    GetKafkaClientIpResponseBodyDataDataData& operator=(GetKafkaClientIpResponseBodyDataDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->name_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetKafkaClientIpResponseBodyDataDataDataData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetKafkaClientIpResponseBodyDataDataDataData) };
    inline Models::GetKafkaClientIpResponseBodyDataDataDataData data() { DARABONBA_PTR_GET(data_, Models::GetKafkaClientIpResponseBodyDataDataDataData) };
    inline GetKafkaClientIpResponseBodyDataDataData& setData(const Models::GetKafkaClientIpResponseBodyDataDataDataData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKafkaClientIpResponseBodyDataDataData& setData(Models::GetKafkaClientIpResponseBodyDataDataDataData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetKafkaClientIpResponseBodyDataDataData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The response parameters.
    std::shared_ptr<Models::GetKafkaClientIpResponseBodyDataDataDataData> data_ = nullptr;
    // The request name.
    // 
    // >  The value of this parameter indicates the type of request that the client sends to the broker within the specified period of time.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
