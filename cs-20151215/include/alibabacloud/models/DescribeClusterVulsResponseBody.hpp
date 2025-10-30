// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERVULSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterVulsResponseBodyVulRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterVulsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterVulsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(vul_records, vulRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterVulsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(vul_records, vulRecords_);
    };
    DescribeClusterVulsResponseBody() = default ;
    DescribeClusterVulsResponseBody(const DescribeClusterVulsResponseBody &) = default ;
    DescribeClusterVulsResponseBody(DescribeClusterVulsResponseBody &&) = default ;
    DescribeClusterVulsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterVulsResponseBody() = default ;
    DescribeClusterVulsResponseBody& operator=(const DescribeClusterVulsResponseBody &) = default ;
    DescribeClusterVulsResponseBody& operator=(DescribeClusterVulsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vulRecords_ == nullptr; };
    // vulRecords Field Functions 
    bool hasVulRecords() const { return this->vulRecords_ != nullptr;};
    void deleteVulRecords() { this->vulRecords_ = nullptr;};
    inline const vector<DescribeClusterVulsResponseBodyVulRecords> & vulRecords() const { DARABONBA_PTR_GET_CONST(vulRecords_, vector<DescribeClusterVulsResponseBodyVulRecords>) };
    inline vector<DescribeClusterVulsResponseBodyVulRecords> vulRecords() { DARABONBA_PTR_GET(vulRecords_, vector<DescribeClusterVulsResponseBodyVulRecords>) };
    inline DescribeClusterVulsResponseBody& setVulRecords(const vector<DescribeClusterVulsResponseBodyVulRecords> & vulRecords) { DARABONBA_PTR_SET_VALUE(vulRecords_, vulRecords) };
    inline DescribeClusterVulsResponseBody& setVulRecords(vector<DescribeClusterVulsResponseBodyVulRecords> && vulRecords) { DARABONBA_PTR_SET_RVALUE(vulRecords_, vulRecords) };


  protected:
    // The list of vulnerabilities.
    std::shared_ptr<vector<DescribeClusterVulsResponseBodyVulRecords>> vulRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
