// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNodePoolVulsResponseBodyVulRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeNodePoolVulsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodePoolVulsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(vul_records, vulRecords_);
      DARABONBA_PTR_TO_JSON(vuls_fix_service_purchased, vulsFixServicePurchased_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodePoolVulsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(vul_records, vulRecords_);
      DARABONBA_PTR_FROM_JSON(vuls_fix_service_purchased, vulsFixServicePurchased_);
    };
    DescribeNodePoolVulsResponseBody() = default ;
    DescribeNodePoolVulsResponseBody(const DescribeNodePoolVulsResponseBody &) = default ;
    DescribeNodePoolVulsResponseBody(DescribeNodePoolVulsResponseBody &&) = default ;
    DescribeNodePoolVulsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodePoolVulsResponseBody() = default ;
    DescribeNodePoolVulsResponseBody& operator=(const DescribeNodePoolVulsResponseBody &) = default ;
    DescribeNodePoolVulsResponseBody& operator=(DescribeNodePoolVulsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vulRecords_ == nullptr
        && return this->vulsFixServicePurchased_ == nullptr; };
    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeNodePoolVulsResponseBodyVulRecords> & vulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeNodePoolVulsResponseBodyVulRecords>) };
    inline vector<DescribeNodePoolVulsResponseBodyVulRecords> vulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeNodePoolVulsResponseBodyVulRecords>) };
    inline DescribeNodePoolVulsResponseBody& setVulRecords(const vector<DescribeNodePoolVulsResponseBodyVulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeNodePoolVulsResponseBody& setVulRecords(vector<DescribeNodePoolVulsResponseBodyVulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


    // vulsFixServicePurchased Field Functions 
    bool hasVulsFixServicePurchased() const { return this->vulsFixServicePurchased_ != nullptr;};
    void deleteVulsFixServicePurchased() { this->vulsFixServicePurchased_ = nullptr;};
    inline bool vulsFixServicePurchased() const { DARABONBA_PTR_GET_DEFAULT(vulsFixServicePurchased_, false) };
    inline DescribeNodePoolVulsResponseBody& setVulsFixServicePurchased(bool vulsFixServicePurchased) { DARABONBA_PTR_SET_VALUE(vulsFixServicePurchased_, vulsFixServicePurchased) };


  protected:
    // The vulnerability list of all node pools.
    std::shared_ptr<vector<DescribeNodePoolVulsResponseBodyVulRecords>> vulRecords_ = nullptr;
    // Indicates whether the CVE vulnerability patching service provided by Security Center is purchased.
    // 
    // *   true: yes
    // *   false: no
    std::shared_ptr<bool> vulsFixServicePurchased_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
