// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODYKAFKAACLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLSRESPONSEBODYKAFKAACLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAclsResponseBodyKafkaAclListKafkaAclVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DescribeAclsResponseBodyKafkaAclList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclsResponseBodyKafkaAclList& obj) { 
      DARABONBA_PTR_TO_JSON(KafkaAclVO, kafkaAclVO_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclsResponseBodyKafkaAclList& obj) { 
      DARABONBA_PTR_FROM_JSON(KafkaAclVO, kafkaAclVO_);
    };
    DescribeAclsResponseBodyKafkaAclList() = default ;
    DescribeAclsResponseBodyKafkaAclList(const DescribeAclsResponseBodyKafkaAclList &) = default ;
    DescribeAclsResponseBodyKafkaAclList(DescribeAclsResponseBodyKafkaAclList &&) = default ;
    DescribeAclsResponseBodyKafkaAclList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclsResponseBodyKafkaAclList() = default ;
    DescribeAclsResponseBodyKafkaAclList& operator=(const DescribeAclsResponseBodyKafkaAclList &) = default ;
    DescribeAclsResponseBodyKafkaAclList& operator=(DescribeAclsResponseBodyKafkaAclList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->kafkaAclVO_ != nullptr; };
    // kafkaAclVO Field Functions 
    bool hasKafkaAclVO() const { return this->kafkaAclVO_ != nullptr;};
    void deleteKafkaAclVO() { this->kafkaAclVO_ = nullptr;};
    inline const vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO> & kafkaAclVO() const { DARABONBA_PTR_GET_CONST(kafkaAclVO_, vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO>) };
    inline vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO> kafkaAclVO() { DARABONBA_PTR_GET(kafkaAclVO_, vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO>) };
    inline DescribeAclsResponseBodyKafkaAclList& setKafkaAclVO(const vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO> & kafkaAclVO) { DARABONBA_PTR_SET_VALUE(kafkaAclVO_, kafkaAclVO) };
    inline DescribeAclsResponseBodyKafkaAclList& setKafkaAclVO(vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO> && kafkaAclVO) { DARABONBA_PTR_SET_RVALUE(kafkaAclVO_, kafkaAclVO) };


  protected:
    std::shared_ptr<vector<Models::DescribeAclsResponseBodyKafkaAclListKafkaAclVO>> kafkaAclVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
