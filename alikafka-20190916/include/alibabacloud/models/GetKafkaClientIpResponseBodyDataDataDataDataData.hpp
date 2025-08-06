// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATADATADATADATA_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODYDATADATADATADATADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpResponseBodyDataDataDataDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpResponseBodyDataDataDataDataData& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Num, num_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpResponseBodyDataDataDataDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
    };
    GetKafkaClientIpResponseBodyDataDataDataDataData() = default ;
    GetKafkaClientIpResponseBodyDataDataDataDataData(const GetKafkaClientIpResponseBodyDataDataDataDataData &) = default ;
    GetKafkaClientIpResponseBodyDataDataDataDataData(GetKafkaClientIpResponseBodyDataDataDataDataData &&) = default ;
    GetKafkaClientIpResponseBodyDataDataDataDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpResponseBodyDataDataDataDataData() = default ;
    GetKafkaClientIpResponseBodyDataDataDataDataData& operator=(const GetKafkaClientIpResponseBodyDataDataDataDataData &) = default ;
    GetKafkaClientIpResponseBodyDataDataDataDataData& operator=(GetKafkaClientIpResponseBodyDataDataDataDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ip_ != nullptr
        && this->num_ != nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetKafkaClientIpResponseBodyDataDataDataDataData& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline GetKafkaClientIpResponseBodyDataDataDataDataData& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


  protected:
    // The IP address of the client.
    std::shared_ptr<string> ip_ = nullptr;
    // The statistics.
    // 
    // >  The value of this parameter indicates the number of connections on different ports of the IP address within the specified period of time.
    std::shared_ptr<int64_t> num_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
