// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODYCHECKRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSRESPONSEBODYCHECKRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAclChecksResponseBodyCheckRecordsRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclChecksResponseBodyCheckRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclChecksResponseBodyCheckRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(Records, records_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclChecksResponseBodyCheckRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
    };
    DescribeAclChecksResponseBodyCheckRecords() = default ;
    DescribeAclChecksResponseBodyCheckRecords(const DescribeAclChecksResponseBodyCheckRecords &) = default ;
    DescribeAclChecksResponseBodyCheckRecords(DescribeAclChecksResponseBodyCheckRecords &&) = default ;
    DescribeAclChecksResponseBodyCheckRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclChecksResponseBodyCheckRecords() = default ;
    DescribeAclChecksResponseBodyCheckRecords& operator=(const DescribeAclChecksResponseBodyCheckRecords &) = default ;
    DescribeAclChecksResponseBodyCheckRecords& operator=(DescribeAclChecksResponseBodyCheckRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && return this->records_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeAclChecksResponseBodyCheckRecords& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords>) };
    inline vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords>) };
    inline DescribeAclChecksResponseBodyCheckRecords& setRecords(const vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline DescribeAclChecksResponseBodyCheckRecords& setRecords(vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    std::shared_ptr<string> aclType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAclChecksResponseBodyCheckRecordsRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
