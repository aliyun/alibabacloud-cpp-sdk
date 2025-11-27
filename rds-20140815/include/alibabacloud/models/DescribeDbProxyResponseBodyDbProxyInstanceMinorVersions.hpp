// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYINSTANCEMINORVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYINSTANCEMINORVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyInstanceMinorVersions, DBProxyInstanceMinorVersions_);
    };
    DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions() = default ;
    DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions(const DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions &) = default ;
    DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions(DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions &&) = default ;
    DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions() = default ;
    DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions& operator=(const DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions &) = default ;
    DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions& operator=(DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyInstanceMinorVersions_ == nullptr; };
    // DBProxyInstanceMinorVersions Field Functions 
    bool hasDBProxyInstanceMinorVersions() const { return this->DBProxyInstanceMinorVersions_ != nullptr;};
    void deleteDBProxyInstanceMinorVersions() { this->DBProxyInstanceMinorVersions_ = nullptr;};
    inline const vector<string> & DBProxyInstanceMinorVersions() const { DARABONBA_PTR_GET_CONST(DBProxyInstanceMinorVersions_, vector<string>) };
    inline vector<string> DBProxyInstanceMinorVersions() { DARABONBA_PTR_GET(DBProxyInstanceMinorVersions_, vector<string>) };
    inline DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions& setDBProxyInstanceMinorVersions(const vector<string> & DBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_VALUE(DBProxyInstanceMinorVersions_, DBProxyInstanceMinorVersions) };
    inline DescribeDBProxyResponseBodyDBProxyInstanceMinorVersions& setDBProxyInstanceMinorVersions(vector<string> && DBProxyInstanceMinorVersions) { DARABONBA_PTR_SET_RVALUE(DBProxyInstanceMinorVersions_, DBProxyInstanceMinorVersions) };


  protected:
    std::shared_ptr<vector<string>> DBProxyInstanceMinorVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
