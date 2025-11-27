// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYAVZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYRESPONSEBODYDBPROXYAVZONES_HPP_
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
  class DescribeDBProxyResponseBodyDBProxyAVZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyResponseBodyDBProxyAVZones& obj) { 
      DARABONBA_PTR_TO_JSON(DBProxyAVZones, DBProxyAVZones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyResponseBodyDBProxyAVZones& obj) { 
      DARABONBA_PTR_FROM_JSON(DBProxyAVZones, DBProxyAVZones_);
    };
    DescribeDBProxyResponseBodyDBProxyAVZones() = default ;
    DescribeDBProxyResponseBodyDBProxyAVZones(const DescribeDBProxyResponseBodyDBProxyAVZones &) = default ;
    DescribeDBProxyResponseBodyDBProxyAVZones(DescribeDBProxyResponseBodyDBProxyAVZones &&) = default ;
    DescribeDBProxyResponseBodyDBProxyAVZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyResponseBodyDBProxyAVZones() = default ;
    DescribeDBProxyResponseBodyDBProxyAVZones& operator=(const DescribeDBProxyResponseBodyDBProxyAVZones &) = default ;
    DescribeDBProxyResponseBodyDBProxyAVZones& operator=(DescribeDBProxyResponseBodyDBProxyAVZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBProxyAVZones_ == nullptr; };
    // DBProxyAVZones Field Functions 
    bool hasDBProxyAVZones() const { return this->DBProxyAVZones_ != nullptr;};
    void deleteDBProxyAVZones() { this->DBProxyAVZones_ = nullptr;};
    inline const vector<string> & DBProxyAVZones() const { DARABONBA_PTR_GET_CONST(DBProxyAVZones_, vector<string>) };
    inline vector<string> DBProxyAVZones() { DARABONBA_PTR_GET(DBProxyAVZones_, vector<string>) };
    inline DescribeDBProxyResponseBodyDBProxyAVZones& setDBProxyAVZones(const vector<string> & DBProxyAVZones) { DARABONBA_PTR_SET_VALUE(DBProxyAVZones_, DBProxyAVZones) };
    inline DescribeDBProxyResponseBodyDBProxyAVZones& setDBProxyAVZones(vector<string> && DBProxyAVZones) { DARABONBA_PTR_SET_RVALUE(DBProxyAVZones_, DBProxyAVZones) };


  protected:
    std::shared_ptr<vector<string>> DBProxyAVZones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
