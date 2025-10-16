// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODYINSTANCERISKSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSRESPONSEBODYINSTANCERISKSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails() = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails(const DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails &) = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails(DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails &&) = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails() = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& operator=(const DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails &) = default ;
    DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& operator=(DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->level_ == nullptr && return this->type_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeInstanceRiskLevelsResponseBodyInstanceRisksDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IP addresses of servers.
    std::shared_ptr<string> ip_ = nullptr;
    // The risk levels. Valid values:
    // 
    // *   **medium**
    std::shared_ptr<string> level_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
